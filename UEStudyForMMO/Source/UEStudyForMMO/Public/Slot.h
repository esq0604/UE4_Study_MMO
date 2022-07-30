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
//class FReply

UCLASS()
class UESTUDYFORMMO_API USlot : public UCustomUI
{
	GENERATED_BODY()
	
public:
	void Init() override;
	void SetType(enum ESlotType type);
	void SetTexture(UTexture2D* tex);
	void Refresh();
	void Action();
protected:
	void NativeOnDragDetected(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent, UDragDropOperation*& OutOperation) override;
	bool NativeOnDrop(const FGeometry& InGeometry,const FDragDropEvent& InDragDropEvent, UDragDropOperation* InOperation) override;
	FReply NativeOnMouseButtonDown(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent) override;
public:
	//드래그시 보일 SlotClass 
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TSubclassOf<USlot> DragVisualClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (UIMax = 31, UIMin = -1))
		int Slotnum;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		int Index;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		int Count;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		TEnumAsByte<ESlotType> Type;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, meta=(BindWidget))
		UImage* Img;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, meta = (BindWidget))
		UTextBlock* Text;

};
