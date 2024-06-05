// Copyright Epic Games, Inc. All Rights Reserved.

#include "drone_gameGameMode.h"
#include "DroneCharacter.h"
#include "UObject/ConstructorHelpers.h"

Adrone_gameGameMode::Adrone_gameGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_DroneCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
