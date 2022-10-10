// Fill out your copyright notice in the Description page of Project Settings.


#include "Slot.h"
#include "Components/Image.h"
#include "Components/TextBlock.h"
#include "MyCharacter.h"
#include "GameUI.h"
#include "QuickSlot.h"
#include "Input/Reply.h"
#include "Blueprint/WidgetBlueprintLibrary.h"
#include "SlotDrag.h"


USlot::USlot(const FObjectInitializer& ObjectInitializer)
	:Super(ObjectInitializer)
{
}

void USlot::Init()
{
	switch (Type)
	{
	case SLOT_Item:
	case SLOT_Skill:
	case SLOT_Quick:
		Index = Slotnum;
		break;
	default :
		break;
	}
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
	case ESlotType::SLOT_Q_Item:
	{
		FItemData& data = Player->Inventory[Index];
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
	
	case ESlotType::SLOT_Quick:
	{
		SetTexture(Player->GameUIWidget->QuickSlot->DefTex);
		Text->SetVisibility(ESlateVisibility::Hidden);
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
		
		oper->From = this;
		

		
		if (DragVisualClass != nullptr)
		{
			GEngine->AddOnScreenDebugMessage(-1, 3.f, FColor::Green, TEXT("Drag : DragVisualClass!= nullptr "));

			USlot* visual = CreateWidget<USlot>(Cast<APlayerController>(Player->Controller), DragVisualClass);
			visual->Type = this->Type;
			visual->Player = this->Player;
			visual->Index = this->Index;
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
		GEngine->AddOnScreenDebugMessage(-1, 3.f, FColor::Green, TEXT("NatvieOnDrop : oper != nullptr"));
		oper->Player = this->Player;
		oper->Drop(this);
		return true;
	}
	else
		return false;
	
}

FReply USlot::NativeOnMouseButtonDown(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent)
{

	FEventReply reply;
	reply.NativeReply = Super::NativeOnMouseButtonDown(InGeometry, InMouseEvent);
	
	if (InMouseEvent.IsMouseButtonDown(EKeys::RightMouseButton) == true)
	{
		if (Index<0 || Player->Inventory[Index].Type == ITEM_None) 
			return reply.NativeReply;

		this->Action();
		//return reply.NativeReply;
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
				if (Player->Inventory[Index].Type != ITEM_None)
				{
					//DetectDragIfPressed-> OnDragDetected 호출 
					reply = UWidgetBlueprintLibrary::DetectDragIfPressed(InMouseEvent, this, EKeys::LeftMouseButton);
					break;
				}
			}
		}
	}	

	return reply.NativeReply;
}

void USlot::Action()
{
	switch (Type)
	{

	case SLOT_None: 
	case SLOT_Quick:
		break;

	case SLOT_Item:	
	case SLOT_Q_Item:
		Player->Inventory[Index].Use(Player);

		break;
	case SLOT_Skill: 
	case SLOT_Q_Skill: break;
	}
}
