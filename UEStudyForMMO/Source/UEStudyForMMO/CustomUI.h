// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "CustomUI.generated.h"

/**
 * 
 */
UCLASS()
class UESTUDYFORMMO_API UCustomUI : public UUserWidget
{
	GENERATED_BODY()

public:
	UCustomUI();

	virtual void Init();

public:
	class AMyCharacter* Player;
};
