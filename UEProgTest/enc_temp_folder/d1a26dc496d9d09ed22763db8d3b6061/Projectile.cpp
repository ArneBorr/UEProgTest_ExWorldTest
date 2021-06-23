

#include "Projectile.h"
#include "Engine/DataTable.h"


AProjectile::AProjectile()
{
	PrimaryActorTick.bCanEverTick = true;

	m_pProjectileMovementComponent = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMovementComponent"));
}

void AProjectile::BeginPlay()
{
	Super::BeginPlay();
	
	if (!m_pEffectDataTable)
	{
		UE_LOG(LogTemp, Warning, TEXT("AProjectile::BeginPlay() : No data given!"));
		return;
	}

	FString contextString;
	m_pEffectData = m_pEffectDataTable->FindRow<FEffectData>("Standard", contextString);
	
	if (m_pProjectileMovementComponent)
	{		
		m_pProjectileMovementComponent->Velocity = GetActorForwardVector() * m_pEffectData->Speed;
	}
	
	SetLifeSpan(m_pEffectData->LifeTime);
}

void AProjectile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AProjectile::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	UE_LOG(LogTemp, Warning, TEXT("AYAS"));
}

