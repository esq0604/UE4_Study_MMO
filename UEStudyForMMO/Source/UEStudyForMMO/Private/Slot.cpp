// Fill out your copyright notice in the Description page of Project Settings.


#include "Slot.h"
#include "Components/Image.h"
#include "Components/TextBlock.h"
#include "MyCharacter.h"
#include "Input/Reply.h"
#include "Blueprint/WidgetBlueprintLibrary.h"
#include "SlotDrag.h"


void USlot::Init()
{
	Refresh();
}

void USlot::SetType(enum ESlotType type)
{
	Type = type;
}

void USlot::SetTexture(UTexture2D* tex)
{
	if (tex == nullptr)
	{
		return;
	}
	Img->SetBrushFromTexture(tex);
}

void USlot::Refresh()
{
	switch (Type)
	{
	case ESlotType::SLOT_Item:
	{
		FItemData& data = Player->Inventory[Slotnum];
		if (data.Texture != nullptr)
		{
			SetTexture(data.Texture);
		}

		Count = data.Count;

		if (Count <= 1)
			Text->SetVisibility(ESlateVisibility::Hidden);
		else
		{
			Text->SetVisibility(ESlateVisibility::Visible);
			Text->SetText(FText::FromString(FString::FromInt(Count)));
		}
		break;
	}
	case ESlotType::SLOT_Skill:
	{		
		break;
	}
	
}
}

void USlot::NativeOnDragDetected(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent, UDragDropOperation*& OutOperation)
{
	Super::NativeOnDragDetected(InGeometry, InMouseEvent, OutOperation);
	
	if (OutOperation == nullptr)
	{

		USlotDrag* oper = NewObject<USlotDrag>();
		OutOperation = oper;
		oper->FromNum = this->Slotnum;
		oper->Type = this->Type;

		if (DragVisualClass != nullptr)
		{
			USlot* visual = CreateWidget<USlot>(Cast<APlayerController>(Player->Controller), DragVisualClass);
			visual->Type = this->Type;
			visual->Player = this->Player;
			visual->Slotnum = this->Slotnum;
			visual->Refresh();


			
			//항목을 드래그시 표시할 위젯
			oper->DefaultDragVisual = visual;
		}
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 3.f, FColor::Green, TEXT("Drag : Draging Again"));
	}
}

bool USlot::NativeOnDrop(const FGeometry& InGeometry, const FDragDropEvent& InDragDropEvent, UDragDropOperation* InOperation)
{
	Super::NativeOnDrop(InGeometry, InDragDropEvent, InOperation);
	
	USlotDrag* oper = Cast<USlotDrag>(InOperation);

	if (oper != nullptr)
	{
		Player->DraggingSwap(oper->FromNum, oper->Type, this->Slotnum, this->Type);
		return true;
	}
	else
	{
		return false;
	}
}

FReply USlot::NativeOnMouseButtonDown(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent)
{

	FEventReply reply;
	reply.NativeReply = Super::NativeOnMouseButtonDown(InGeometry, InMouseEvent);
	
	if (InMouseEvent.IsMouseButtonDown(EKeys::RightMouseButton) == true)
	{
		UE_LOG(LogTemp, Warning, TEXT(" RightMouseButton, IsMouseButtonDown"));
		if (Player->Inventory[Slotnum].Type == ITEM_None)
			return reply.NativeReply;

		switch (Type)
		{
		case SLOT_None:
		case SLOT_Quick:
			return reply.NativeReply;
			break;
		case SLOT_Item:
		case SLOT_Q_Item:
			Player->Inventory[Slotnum].Use(Player);
			break;
		case SLOT_Skill:
		case SLOT_Q_Skill:
			break;

		}
		Refresh();
	}

	else if (InMouseEvent.IsMouseButtonDown(EKeys::LeftMouseButton) == true)
	{
		GEngine->AddOnScreenDebugMessage(-1, 3.f, FColor::Green, TEXT("Drag : Left Button Down"));
	
		switch (Type)
		{
			case SLOT_None:
			case SLOT_Quick:
				break;

			case SLOT_Item:
			case SLOT_Q_Item:
			{
				if (Player->Inventory[Slotnum].Type != ITEM_None)
				{
					reply = UWidgetBlueprintLibrary::DetectDragIfPressed(InMouseEvent, this, EKeys::LeftMouseButton);
				}
				break;
			}
		}
	}	

	return reply.NativeReply;
}


