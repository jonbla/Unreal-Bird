// Copyright Epic Games, Inc. All Rights Reserved.

#include "FlappyBirdCloneCharacter.h"
#include "PaperFlipbookComponent.h"
#include "Components/TextRenderComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/Controller.h"
#include "Camera/CameraComponent.h"

//DEFINE_LOG_CATEGORY_STATIC(SideScrollerCharacter, Log, All);

//////////////////////////////////////////////////////////////////////////
// AFlappyBirdCloneCharacter

AFlappyBirdCloneCharacter::AFlappyBirdCloneCharacter()
{

}

void AFlappyBirdCloneCharacter::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);
	
	UpdateCharacter();	
}

void AFlappyBirdCloneCharacter::UpdateCharacter()
{

}
