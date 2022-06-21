// Fill out your copyright notice in the Description page of Project Settings.


#include "Weapon.h"

// Sets default values
AWeapon::AWeapon()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AWeapon::BeginPlay()
{
	Super::BeginPlay();
	
}

void AWeapon::GetWeaponObject()
{
	Weapon = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("WEAPON"));

	static ConstructorHelpers::FObjectFinder<USkeletalMesh> WEAPON(TEXT("/Game/BattleWizardPolyart/Meshes/MagicStaffs/Staff01SM.Staff01SM"));
	if (WEAPON.Succeeded())
	{
		Weapon->SetSkeletalMesh(WEAPON.Object);
	}
}

// Called every frame
void AWeapon::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

