// Copyright Epic Games, Inc. All Rights Reserved.

#include "UEProgTestGameMode.h"
#include "UEProgTestCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUEProgTestGameMode::AUEProgTestGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
