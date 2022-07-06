// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "FInvenItem.h"
#include "Interactable.h"
#include "MyPlayerController.generated.h"

class UGameUI;

UCLASS()
class UESTUDYFORMMO_API AMyPlayerController : public APlayerController
{
	GENERATED_BODY()
public:

	AMyPlayerController();

	UFUNCTION(BlueprintImplementableEvent)
		void ReloadInventory();

	UFUNCTION(BlueprintCallable, Category = "Utils")
		int32 GetInventoryWeight();

	UFUNCTION(BlueprintCallable, Category = "Utils")
		bool AddItemToInventoryByID(FName ID);

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		class AInteractable* CurrentInteractable;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		TArray<FInvenItem> Inventory;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		int32 Money;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int32 InventorySlotLimit;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int32 InventoryWeightLimit;


protected:
	void Interact();

	virtual void SetupInputComponent() override;
};
