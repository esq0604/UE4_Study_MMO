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

	void RefreshSlot(int slotnum);

public:
	const int Max_Slot = 32;
	

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UTexture2D* DefTex;


private:
	TArray<USlot*> Slots;
};
