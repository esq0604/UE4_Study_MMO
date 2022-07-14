// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CustomUI.h"
#include "Inventory.generated.h"

/**
 * 
 */

class USlot;
class UTexture2D;
UCLASS()
class UESTUDYFORMMO_API UInventory : public UCustomUI
{
	GENERATED_BODY()

public:
	UInventory(const FObjectInitializer& ObjectInitializer);

	void Init() override;

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UTexture2D* DefTex;


private:
	TArray<USlot*> Sloats;
};
