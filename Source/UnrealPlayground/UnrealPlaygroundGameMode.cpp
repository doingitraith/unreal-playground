// Copyright Epic Games, Inc. All Rights Reserved.

#include "UnrealPlaygroundGameMode.h"
#include "UnrealPlaygroundCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUnrealPlaygroundGameMode::AUnrealPlaygroundGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
