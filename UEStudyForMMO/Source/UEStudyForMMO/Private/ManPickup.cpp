// Fill out your copyright notice in the Description page of Project Settings.


#include "ManPickup.h"
#include "MyPlayerController.h"
AManPickup::AManPickup()
{
	PickupMesh = CreateDefaultSubobject<UStaticMeshComponent>("PickupMesh");
	RootComponent = Cast<USceneComponent>(PickupMesh);

	ItemID = FName("No ID");

	Super::Name = "Item";
	Super::Action = "pickup";
}

void AManPickup::Interact_Implementation(APlayerController* Controller)
{
	Super::Interact_Implementation(Controller);
	
	AMyPlayerController* IController = Cast<AMyPlayerController>(Controller);
	if (IController->AddItemToInventoryByID(ItemID))
		Destroy();
}
