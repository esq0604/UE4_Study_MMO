// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameModeBase.h"
#include "MyCharacter.h"
#include "MyPlayerController.h"

AMyGameModeBase::AMyGameModeBase()
{
	DefaultPawnClass = AMyCharacter::StaticClass();

	static ConstructorHelpers::FObjectFinder<UBlueprint> PlayerControlerObject(TEXT("Blueprint'/Game/Blueprint/BP_MyPlayerController.BP_MyPlayerController'"));
	PlayerControllerClass = (UClass*)PlayerControlerObject.Object->GeneratedClass;
}