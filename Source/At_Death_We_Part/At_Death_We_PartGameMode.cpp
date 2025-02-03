// Copyright Epic Games, Inc. All Rights Reserved.

#include "At_Death_We_PartGameMode.h"
#include "At_Death_We_PartCharacter.h"
#include "UObject/ConstructorHelpers.h"

AAt_Death_We_PartGameMode::AAt_Death_We_PartGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
