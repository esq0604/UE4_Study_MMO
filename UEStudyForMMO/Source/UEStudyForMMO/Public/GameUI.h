// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CustomUI.h"
#include "GameUI.generated.h"

/**
 * 
 */
class UGauge;
class UInventory;


UCLASS()
class UESTUDYFORMMO_API UGameUI : public UCustomUI
{
	GENERATED_BODY()
public:
	UGameUI(const FObjectInitializer& ObjectInitializer);

	void Init() override;

	void RefreshInventory(int slotnum);
//Inventory
public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "UI", meta = (BindWidget))
		UInventory* Inventory;
//Gauge
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ProgressBarData")
		UTexture2D* HPBarTex;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ProgressBarData")
		FLinearColor HPBarColor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ProgressBarData")
		UTexture2D* ResourceBarTex;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ProgressBarData")
		FLinearColor ResourceBarColor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ProgressBarData")
		UTexture2D* ExpBarTex;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ProgressBarData")
		FLinearColor ExBarColor;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "UI", meta = (BindWidget))
		UGauge* HPBar;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "UI", meta = (BindWidget))
		UGauge* ResourceBar;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "UI", meta = (BindWidget))
		UGauge* ExpBar;
};
