// Copyright Epic Games, Inc. All Rights Reserved.

#include "FlappyBirdCloneGameMode.h"
#include "FlappyBirdCloneCharacter.h"
#include "BirdPawn.h"

AFlappyBirdCloneGameMode::AFlappyBirdCloneGameMode()
{
	// Set default pawn class to our character
	//DefaultPawnClass = AFlappyBirdCloneCharacter::StaticClass();	

	DefaultPawnClass = ABirdPawn::StaticClass();
}
