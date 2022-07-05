// Copyright Epic Games, Inc. All Rights Reserved.

#include "AveryZGameGameMode.h"
#include "AveryZGameCharacter.h"
#include "UObject/ConstructorHelpers.h"

AAveryZGameGameMode::AAveryZGameGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
