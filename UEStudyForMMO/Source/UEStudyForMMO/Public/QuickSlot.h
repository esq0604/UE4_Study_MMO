// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CustomUI.h"
#include "QuickSlot.generated.h"

/**
 * 
 */
class USlot;

UCLASS()
class UESTUDYFORMMO_API UQuickSlot : public UCustomUI
{
	GENERATED_BODY()

public:
	void Init() override;
	void Use(int index);

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UTexture2D* DefTex;

private:
	const int MAX_QUICK_SLOT = 9;

private:
	TArray<USlot*> Slots;
	
	
};
