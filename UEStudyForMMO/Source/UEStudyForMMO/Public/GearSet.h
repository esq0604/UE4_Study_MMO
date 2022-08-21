// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CustomUI.h"
#include "GearSet.generated.h"

/**
 * 
 */
class USlot;

UCLASS()
class UESTUDYFORMMO_API UGearSet : public UCustomUI
{
	GENERATED_BODY()

public:
	UGearSet(const FObjectInitializer& ObjectInitializer);

	void Init() override;

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UTexture2D*	 DefTex;

private:
	TArray<USlot*> Slots;
	
};
