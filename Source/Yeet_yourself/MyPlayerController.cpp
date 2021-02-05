// Fill out your copyright notice in the Description page of Project Settings.


#include "MyPlayerController.h"


void AMyPlayerController::SetPlayerEnabledState(bool SetPlayerEnabled) {
	if (SetPlayerEnabled)
	{
		GetPawn()->EnableInput(this);
	}
	else
	{
		GetPawn()->DisableInput(this);
	}
	bShowMouseCursor = SetPlayerEnabled;
}
/*
void AMyPlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();

	this->InputComponent->BindAction("Walk", EInputEvent::IE_Pressed, this, &AMyPlayerController::OnWalkStart);
	this->InputComponent->BindAction("Walk", EInputEvent::IE_Released, this, &AMyPlayerController::OnWalkEnd);
}


void AMyPlayerController::OnWalkStart()
{
	AMyCharacter* character = Cast<AMyCharacter>(this->GetCharacter());
	if (character)
	{
		character->SetWalking(true);
	}
}

void AMyPlayerController::OnWalkEnd()
{
	AMyCharacter* character = Cast<AMyCharacter>(this->GetCharacter());
	if (character)
	{
		character->SetWalking(false);
	}
}*/