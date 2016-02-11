// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

#include "TimeJump.h"
#include "SSpectatorPawn.h"




ASSpectatorPawn::ASSpectatorPawn(const class FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	bAddDefaultMovementBindings = true;
}
