// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Engine.h"
#include "GameFramework/Character.h"
#include "MyCharacter.generated.h"

UCLASS()
class UESTUDYFORMMO_API AMyCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AMyCharacter();

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
private:
	void UpDown(float NewAxisValue);
	void LeftRight(float NewAxisValue);
	void GetWizardMesh();
	void GetWeaponMesh();
	void SetSpringArmComponent();
	void SetCameraComponent();
	void GetFireBallBP();
	void FireBallSpwan();
	void PlayMontage();
	void OpenInventory();
public:
	UPROPERTY(VisibleAnywhere, Category = Camera)
		USpringArmComponent* SpringArm;
	
	UPROPERTY(VisibleAnywhere, Category = Camera)
		UCameraComponent* Camera;
	
	UPROPERTY(VisibleAnywhere, Category = Weapon)
		UStaticMeshComponent* Weapon;

	UPROPERTY(VisibleAnywhere, Category = UI)
		class UWidgetComponent* UI_Inventory;

	UPROPERTY(Category = FireAttack, VisibleAnywhere, BlueprintReadOnly, Meta = (AllowPrivateAccess = "true"))
		TSubclassOf<class AFireBall> FireBallClass; 
	

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowpriavteAccess = "ture"))
		class USphereComponent* CollectionSphere;

protected:
	/** ���� ���� ��� AutoPickup�� �����ϴ� ���  */
	void CollectAutoPickups();

	/** �þ߿� ���� ������ ���� ����� Interactable�� Ȯ���ϴ� ���  */
	void CheckForInteractables();

};
