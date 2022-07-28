// Fill out your copyright notice in the Description page of Project Settings.
				

#include "Inventory.h"
#include "MyCharacter.h"
#include "InGameData.h"
#include "Slot.h"
#include "Blueprint/WidgetTree.h"


void UInventory::Init()
{
	for (int i = 0; i < Max_Slot; i++)
	{
		if (Player->Inventory[i].Type == EItemType::ITEM_None)
		{
			//UE_LOG(LogTemp, Warning, TEXT("Player->Inventory[i].Type == EItemType::ITEM_None"));
			Player->Inventory[i].Texture = DefTex;
		}
	}

	Slots.Init(nullptr, Max_Slot);
	TArray<UWidget*> widgets;
	WidgetTree->GetAllWidgets(widgets);

	USlot* slot = nullptr;
	for (auto widget : widgets)
	{
		slot = Cast<USlot>(widget);

		if (!slot) continue;
		slot->Player = this->Player;
		slot->SetType(ESlotType::SLOT_Item);
		slot->Init();
		Slots[slot->Slotnum] = slot;
	}
}

void UInventory::RefreshSlot(int slotnum)
{
	if (Player->Inventory[slotnum].Type == EItemType::ITEM_None)
		Player->Inventory[slotnum].Texture = DefTex;

	Slots[slotnum]->Refresh();
}
