// Fill out your copyright notice in the Description page of Project Settings.


#include "QuickSlot.h"
#include "Blueprint/WidgetTree.h"
#include "Slot.h"

void UQuickSlot::Init()
{
	Slots.Init(nullptr, MAX_QUICK_SLOT);
	TArray<UWidget*> widgets;
	WidgetTree->GetAllWidgets(widgets);

	USlot* slot = nullptr;
	for (auto widget : widgets)
	{
		slot = Cast<USlot>(widget);

		if (!slot)
			continue;
		UE_LOG(LogTemp, Warning, TEXT("quickslot _ line _21 _for��"));
		
		slot->Player = this->Player;
		slot->SetType(ESlotType::SLOT_Quick);
		//slot->SetTexture(DefTex);
		slot->Init();
		Slots[slot->Slotnum] = slot;
	}

}

void UQuickSlot::Use(int index)
{
	Slots[index] -> Action();
}