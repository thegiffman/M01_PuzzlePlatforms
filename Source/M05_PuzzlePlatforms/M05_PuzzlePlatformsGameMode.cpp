// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "M05_PuzzlePlatformsGameMode.h"
#include "M05_PuzzlePlatformsCharacter.h"
#include "UObject/ConstructorHelpers.h"

AM05_PuzzlePlatformsGameMode::AM05_PuzzlePlatformsGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
