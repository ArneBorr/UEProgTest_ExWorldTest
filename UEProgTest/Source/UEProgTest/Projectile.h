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
		void OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& Hit);
	UFUNCTION(BlueprintImplementableEvent)
		void OnApplyEffect(AActor* AffectedActor, const FEffectData& EffectData, const FString& type);

protected:
	virtual void BeginPlay() override;

private:

	UPROPERTY(VisibleAnywhere, Category = "Movement")
		UProjectileMovementComponent* m_pProjectileMovementComponent = nullptr;
	UPROPERTY(EditAnywhere, Category = "Settings")
		class UDataTable* m_pEffectDataTable;
	
		FEffectData* m_pEffectData;
};
