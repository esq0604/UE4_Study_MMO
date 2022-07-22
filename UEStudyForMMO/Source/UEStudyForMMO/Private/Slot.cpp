// Fill out your copyright notice in the Description page of Project Settings.


#include "Slot.h"
#include "Components/Image.h"
#include "Components/TextBlock.h"
#include "MyCharacter.h"
#include "Input/Reply.h"


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

FReply USlot::NativeOnMouseButtonDown(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent)
{
	FEventReply reply;
	reply.NativeReply = Super::NativeOnMouseButtonDown(InGeometry, InMouseEvent);
	
	if (InMouseEvent.IsMouseButtonDown(EKeys::RightMouseButton) == true)
	{
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
	return reply.NativeReply;
}


