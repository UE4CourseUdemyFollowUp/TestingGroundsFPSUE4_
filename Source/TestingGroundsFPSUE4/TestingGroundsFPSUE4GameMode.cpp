// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "TestingGroundsFPSUE4GameMode.h"
#include "TestingGroundsFPSUE4HUD.h"
#include "TestingGroundsFPSUE4Character.h"
#include "UObject/ConstructorHelpers.h"

ATestingGroundsFPSUE4GameMode::ATestingGroundsFPSUE4GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ATestingGroundsFPSUE4HUD::StaticClass();
}