// Fill out your copyright notice in the Description page of Project Settings.


#include "Slot.h"
#include "Components/Image.h"
#include "Components/TextBlock.h"
#include "MyCharacter.h"

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
	if (tex == nullptr) return;
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


