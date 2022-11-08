// Copyright Epic Games, Inc. All Rights Reserved.

#include "HW2GameMode.h"
#include "HW2Character.h"
#include "UObject/ConstructorHelpers.h"

AHW2GameMode::AHW2GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
