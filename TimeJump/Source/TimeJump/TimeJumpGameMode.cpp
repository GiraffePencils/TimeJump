// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

#include "TimeJump.h"
#include "TimeJumpGameMode.h"
#include "TimeJumpHUD.h"
#include "TimeJumpCharacter.h"

ATimeJumpGameMode::ATimeJumpGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ATimeJumpHUD::StaticClass();
}
