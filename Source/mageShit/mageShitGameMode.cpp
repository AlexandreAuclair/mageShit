// Copyright Epic Games, Inc. All Rights Reserved.

#include "mageShitGameMode.h"
#include "mageShitCharacter.h"
#include "UObject/ConstructorHelpers.h"

AmageShitGameMode::AmageShitGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
