// Fill out your copyright notice in the Description page of Project Settings.


#include "Slot.h"
#include "Blueprint/WidgetTree.h"
#include "Components/Image.h"
#include "Components/TextBlock.h"

bool USlot::Initialize()
{
	//WidgetTree
	UPanelWidget* panel = Cast<UPanelWidget>(WidgetTree->RootWidget);
	panel->ClearChildren();

	Img = WidgetTree->ConstructWidget<UImage>();
	Text = WidgetTree->ConstructWidget<UTextBlock>();

	panel->AddChild(Cast<UWidget>(Img));
	panel->AddChild(Cast<UWidget>(Text));

	return Super::Initialize();
}
