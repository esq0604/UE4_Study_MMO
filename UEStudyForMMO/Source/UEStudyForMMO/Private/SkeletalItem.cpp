// Fill out your copyright notice in the Description page of Project Settings.


#include "SkeletalItem.h"
#include "Components/CapsuleComponent.h"

ASkeletalItem::ASkeletalItem()
{
	Mesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Mesh"));
	Mesh->SetupAttachment(RootComponent);

	Capsule->SetupAttachment(Mesh);
}

void ASkeletalItem::Tick(float DeltaTime)
{

}

void ASkeletalItem::BeginPlay()
{
	Super::BeginPlay();

}





