// Fill out your copyright notice in the Description page of Project Settings.


#include "MyPlayerController.h"
#include "MyGameStateBase.h"
#include "GameUI.h"

AMyPlayerController::AMyPlayerController()
{
	
}

void AMyPlayerController::BeginPlay()
{
	Super::BeginPlay();

	UE_LOG(LogTemp, Warning, TEXT("PlayerController - BeginPlay"))

		if (GameUIWidget != nullptr)
		{
			UE_LOG(LogTemp, Warning, TEXT("Character - CreateWidget"))
				APlayerController* con = Cast<APlayerController>(this);
			if (con == nullptr)
				return;
			GameUIWidget = CreateWidget<UGameUI>(con, GameUIClass);
			//GameUIWidget->Player = this->Player;
			GameUIWidget->Init();
			//GameUIWidget->AddToViewport();
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("GameUIWidget == nullptr"))

		}
}
