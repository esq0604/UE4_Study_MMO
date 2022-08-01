// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Engine.h"
#include "GameFramework/Character.h"
#include "InGameData.h"
#include "MyCharacter.generated.h"

class UGameUI;
class USlotDrag;

UCLASS()
class UESTUDYFORMMO_API AMyCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AMyCharacter();

protected:
	DECLARE_DELEGATE_OneParam(QuickDelegate, int);
	void UseQuickSlot(int num);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	void GetAnimInstance();
	
	UFUNCTION()
	void Attack();

	void AbilityInit();

private:
	void UpDown(float NewAxisValue);
	void LeftRight(float NewAxisValue);
	
	void GetWizardMesh();
	void GetWeaponMesh();
	void GetFireBallBP();
	void GetGameUIBP();

	void SetSpringArmComponent();
	void SetCameraComponent();
	
	void FireBallSpwan();
	void PlayMontage();
	
public:
	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UI")
	//	TArray<FItemData> Data;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UI")
		TArray<FItemData> Inventory;


	UPROPERTY(VisibleAnywhere, Category = Camera)
		USpringArmComponent* SpringArm;
	
	UPROPERTY(VisibleAnywhere, Category = Camera)
		UCameraComponent* Camera;
	
	UPROPERTY(VisibleAnywhere, Category = Weapon)
		UStaticMeshComponent* Weapon;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="Controller")
		TSubclassOf<class AMyPlayerController> AMyController;

	UPROPERTY(Category = FireAttack, VisibleAnywhere, BlueprintReadOnly, Meta = (AllowPrivateAccess = "true"))
		TSubclassOf<class AFireBall> FireBallClass; 
	

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowpriavteAccess = "ture"))
		class USphereComponent* CollectionSphere;

	UPROPERTY(EditAnywhere)
		FCharacterAbility Ability;


	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "UI")
		TSubclassOf<UGameUI> GameUIClass;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "UI")
		UGameUI* GameUIWidget;

	
};



