#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EffectData.generated.h"

USTRUCT(BlueprintType)
struct FEffectSelfDestructStruct
{
	GENERATED_BODY()

public:
	FEffectSelfDestructStruct() {}
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool Pawn = true;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool Destructible = true;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool WorldStatic = true;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool BlockAll = true;
};

USTRUCT(BlueprintType)
struct FEffectData : public FTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float Speed = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float Damage = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float LifeTime = 5;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FEffectSelfDestructStruct ShouldSelfDestruct;
};
