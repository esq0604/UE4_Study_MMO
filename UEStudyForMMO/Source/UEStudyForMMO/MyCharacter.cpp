// Fill out your copyright notice in the Description page of Project Settings.


#include "MyCharacter.h"

// Sets default values
AMyCharacter::AMyCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	GetMeshFromDir();
	SetSpringArmComponent();
	SetCameraComponent();
	GetAnimInstance();
}

// Called when the game starts or when spawned
void AMyCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AMyCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	PlayerInputComponent->BindAxis(TEXT("UpDown"), this, &AMyCharacter::UpDown);
	PlayerInputComponent->BindAxis(TEXT("LeftRight"), this, &AMyCharacter::LeftRight);

}

void AMyCharacter::GetAnimInstance()
{
	GetMesh()->SetAnimationMode(EAnimationMode::AnimationBlueprint);

	static ConstructorHelpers::FClassFinder<UAnimInstance> Wizard_Anim(TEXT("/Game/BattleWizardPolyart/Animations/NewAnimBlueprint.NewAnimBlueprint_C"));

	if (Wizard_Anim.Succeeded())
	{
		GetMesh()->SetAnimInstanceClass(Wizard_Anim.Class);
	}
}

void AMyCharacter::UpDown(float NewAxisValue)
{
	AddMovementInput(GetActorForwardVector(), NewAxisValue);
}

void AMyCharacter::LeftRight(float NewAxisValue)
{
	AddMovementInput(GetActorRightVector(), NewAxisValue);
}

void AMyCharacter::GetMeshFromDir()
{
	GetMesh()->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, -88.0f), FRotator(0.0f, -90.0f, 0.0f));
	static ConstructorHelpers::FObjectFinder<USkeletalMesh> Wizrd(TEXT("/Game/BattleWizardPolyart/Meshes/WizardSM.WizardSM"));
	if (Wizrd.Succeeded())
	{
		GetMesh()->SetSkeletalMesh(Wizrd.Object);
	}
}

void AMyCharacter::SetSpringArmComponent()
{
	SpringArm=CreateDefaultSubobject<USpringArmComponent>(TEXT("SPRINGARM"));
	SpringArm->SetupAttachment(GetCapsuleComponent());
	SpringArm->TargetArmLength = 800.0f;
	SpringArm->SetRelativeRotation(FRotator(-15.0f, 0.0f, 0.0f));
}

void AMyCharacter::SetCameraComponent()
{
	Camera=CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	Camera->SetupAttachment(SpringArm);
}

