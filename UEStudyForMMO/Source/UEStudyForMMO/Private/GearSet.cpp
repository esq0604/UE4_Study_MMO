// Fill out your copyright notice in the Description page of Project Settings.


#include "GearSet.h"
#include "Slot.h"
#include "MyCharacter.h"
#include "Blueprint/WidgetTree.h"


UGearSet::UGearSet(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{

}

void UGearSet::Init()
{
	int count = EItemType::ITEM_Equiment;

	for (int i = 0; i < count; i++)
	{
		if (Player->GearSet[i].Type == EItemType::ITEM_None)
			Player->GearSet[i].Texture = DefTex;
	}

	Slots.Init(nullptr, EItemType::ITEM_Equiment);
	TArray<UWidget*> widgets;

	WidgetTree->GetAllWidgets(widgets);

	USlot* slot = nullptr;

	for (auto widget : widgets)
	{
		slot = Cast<USlot>(widget);

		if (!slot)
			continue;

		Player->GearSet[slot->Slotnum].AddSlot(slot);
		slot->Player = this->Player;
		slot->SetType(ESlotType::SLOT_Gear);
		slot->Init();
		Slots[slot->Slotnum] = slot;
	}
}
