// Fill out your copyright notice in the Description page of Project Settings.


#include "BirdFlapComponent.h"
#include <stdlib.h>


int inputCheckCount = 10;

// Sets default values for this component's properties
UBirdFlapComponent::UBirdFlapComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UBirdFlapComponent::BeginPlay()
{
	Super::BeginPlay();	

	float temp = GetOwner()->GetActorLocation().Z;

	UE_LOG(LogTemp, Warning, TEXT("%s"), *GetOwner()->GetName());
	UE_LOG(LogTemp, Warning, TEXT("%f"), temp);
	
}


// Called every frame
void UBirdFlapComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	if (inputCheckCount > 0) {
		InputComponent = GetOwner()->FindComponentByClass<UInputComponent>();

		if (InputComponent) {
			UE_LOG(LogTemp, Warning, TEXT("Input Found"));
			InputComponent->BindAction("Jump", IE_Pressed, this, &UBirdFlapComponent::Flap);

			inputCheckCount = 0;
		}
		else {
			UE_LOG(LogTemp, Warning, TEXT("Input Not Found"));
		}

		inputCheckCount--;
	}

	// ...
}

void UBirdFlapComponent::Flap() {
	UE_LOG(LogTemp, Warning, TEXT("FLAP FLAP BITCH"));
}

