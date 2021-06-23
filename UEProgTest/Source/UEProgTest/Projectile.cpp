

#include "Projectile.h"
#include "Engine/DataTable.h"
#include "Components/MeshComponent.h"


AProjectile::AProjectile()
{
	PrimaryActorTick.bCanEverTick = true;

	m_pProjectileMovementComponent = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMovementComponent"));
}

void AProjectile::BeginPlay()
{
	Super::BeginPlay();

	//Check if data has been set
	if (!m_pEffectDataTable)
	{
		UE_LOG(LogTemp, Warning, TEXT("AProjectile::BeginPlay() : No data given!"));
		return;
	}

	//Collect Data
	FString contextString;
	m_pEffectData = m_pEffectDataTable->FindRow<FEffectData>("Standard", contextString);

	//Launch
	if (m_pProjectileMovementComponent)
	{
		m_pProjectileMovementComponent->Velocity = GetActorForwardVector() * m_pEffectData->Speed;
	}

	//Life Span
	SetLifeSpan(m_pEffectData->LifeTime);

	//Set up overlap
	UActorComponent* pTemp = GetComponentByClass(UMeshComponent::StaticClass());
	if (pTemp)
	{
		UMeshComponent* pMesh = Cast<UMeshComponent>(pTemp);
		pMesh->OnComponentBeginOverlap.AddDynamic(this, &AProjectile::OnOverlapBegin);
		pMesh->OnComponentHit.AddDynamic(this, &AProjectile::OnHit);
	}
}

void AProjectile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AProjectile::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	auto tags = OtherActor->Tags;
	//UE_LOG(LogTemp,Warning, TEXT("%s"), *OtherActor->GetName());
	for (auto tag : tags)
	{
		for (TFieldIterator<UProperty> i = m_pEffectData->ShouldSelfDestruct.StaticStruct(); i; ++i)
		{
			UBoolProperty* property = Cast<UBoolProperty>(*i);
			if (tag.ToString() == property->GetName())
			{
				bool shouldDestroy = property->GetPropertyValue(property->ContainerPtrToValuePtr<bool>(m_pEffectData));
				if (shouldDestroy)
					Destroy();

				return;
			}
		}
	}
}

void AProjectile::OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& Hit)
{
	auto tags = OtherActor->Tags;
	UE_LOG(LogTemp, Warning, TEXT("%s"), *OtherActor->GetName());
	for (auto tag : tags)
	{
		for (TFieldIterator<UProperty> i = m_pEffectData->ShouldSelfDestruct.StaticStruct(); i; ++i)
		{
			UBoolProperty* property = Cast<UBoolProperty>(*i);
			if (tag.ToString() == property->GetName())
			{
				bool shouldDestroy = property->GetPropertyValue(property->ContainerPtrToValuePtr<bool>(m_pEffectData));
				if (shouldDestroy)
					Destroy();

				return;
			}
		}
	}
}

