

#include "Projectile.h"

AProjectile::AProjectile()
{
	PrimaryActorTick.bCanEverTick = true;

	m_pProjectileMovementComponent = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMovementComponent"));
}

void AProjectile::BeginPlay()
{
	Super::BeginPlay();
	
	if (m_pProjectileMovementComponent)
	{
		FVector intVar = GetActorForwardVector();

		UE_LOG(LogTemp, Warning, TEXT("Text, %f %f %f"), intVar.X, intVar.Y, intVar.Z);
		
		m_pProjectileMovementComponent->Velocity = GetActorForwardVector() * 1000;
	}
}

void AProjectile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

