// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
//#include "MyCharacter.h"
#include "MyPlayerController.generated.h"

class UGameUI;
//class AMyCharacter;

UCLASS()
class UESTUDYFORMMO_API AMyPlayerController : public APlayerController
{
	GENERATED_BODY()
public:

	AMyPlayerController();

	void BeginPlay() override;

public:

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "UI")
		TSubclassOf<UGameUI> GameUIClass;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "UI")
		UGameUI* GameUIWidget;

	/*UPROPERTY(EditAnywhere, Category = "Charcter")
		AMyCharacter* Player;*/
};
