// Copyright Epic Games, Inc. All Rights Reserved.

#include "SteamOSGameMode.h"
#include "SteamOSCharacter.h"
#include "UObject/ConstructorHelpers.h"

ASteamOSGameMode::ASteamOSGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
