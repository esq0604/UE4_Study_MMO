// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CustomUI.h"
#include "InGameData.h"

#include "Slot.generated.h"

/**
 * 
 */
enum ESlotType;
class UImage;
class UTextBlock;

UCLASS()
class UESTUDYFORMMO_API USlot : public UCustomUI
{
	GENERATED_BODY()
	
public:
	void Init() override;
	void SetType(enum ESlotType type);
	void SetTexture(UTexture2D* tex);

	void Refresh();
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (UIMax = 31, UIMin = -1))
		int Slotnum;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		int Count;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		TEnumAsByte<ESlotType> Type=ESlotType::SLOT_Item;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, meta=(BindWidget))
		UImage* Img;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, meta = (BindWidget))
		UTextBlock* Text;

};
