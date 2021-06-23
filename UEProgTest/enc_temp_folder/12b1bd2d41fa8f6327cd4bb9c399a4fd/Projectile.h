#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "EffectData.h"
#include "Projectile.generated.h"

UCLASS()
class UEPROGTEST_API AProjectile : public AActor
{
	GENERATED_BODY()

public:
	AProjectile();
	virtual void Tick(float DeltaTime) override;
	UFUNCTION()
		void OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);


protected:
	virtual void BeginPlay() override;

private:

	UPROPERTY(VisibleAnywhere, Category = "Movement")
		UProjectileMovementComponent* m_pProjectileMovementComponent = nullptr;
	UPROPERTY(EditAnywhere, Category = "Settings")
		class UDataTable* m_pEffectDataTable;
	
		FEffectData* m_pEffectData;
};
