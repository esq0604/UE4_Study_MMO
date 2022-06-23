// Fill out your copyright notice in the Description page of Project Settings.


#include "MyCharacter.h"
#include "MyAnimInstance.h"
#include "FireBall.h"
// Sets default values
AMyCharacter::AMyCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	GetWizardMesh();
	GetWeaponMesh();
	SetSpringArmComponent();
	SetCameraComponent();
	GetAnimInstance();
	GetFireBallBP();
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
	//캐릭터 움직임 바인딩 
	PlayerInputComponent->BindAxis(TEXT("UpDown"), this, &AMyCharacter::UpDown);
	PlayerInputComponent->BindAxis(TEXT("LeftRight"), this, &AMyCharacter::LeftRight);
	PlayerInputComponent->BindAction(TEXT("Attack"),EInputEvent::IE_Pressed, this, &AMyCharacter::Attack);
	PlayerInputComponent->BindAction(TEXT("OpenInventory"), EInputEvent::IE_Pressed, this, &AMyCharacter::OpenInventory);
	
	//카메라 움직임 바인딩 
	PlayerInputComponent->BindAxis(TEXT("Turn"), this, &AMyCharacter::AddControllerYawInput);
}

void AMyCharacter::GetAnimInstance()
{
	GetMesh()->SetAnimationMode(EAnimationMode::AnimationBlueprint);

	static ConstructorHelpers::FClassFinder<UAnimInstance> Wizard_Anim(TEXT("/Game/BattleWizardPolyart/Animations/WizardAnim.WizardAnim_C"));

	if (Wizard_Anim.Succeeded())
	{
		GetMesh()->SetAnimInstanceClass(Wizard_Anim.Class);
	}
}

void AMyCharacter::Attack()
{
	UE_LOG(LogTemp, Warning, TEXT("Attack"));

	PlayMontage();
	FireBallSpwan();
}

void AMyCharacter::UpDown(float NewAxisValue)
{
	AddMovementInput(GetActorForwardVector(), NewAxisValue);
}

void AMyCharacter::LeftRight(float NewAxisValue)
{
	AddMovementInput(GetActorRightVector(), NewAxisValue);
}

void AMyCharacter::GetWizardMesh()
{
	GetMesh()->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, -88.0f), FRotator(0.0f, -90.0f, 0.0f));
	static ConstructorHelpers::FObjectFinder<USkeletalMesh> Wizrd(TEXT("/Game/BattleWizardPolyart/Meshes/WizardSM.WizardSM"));
	if (Wizrd.Succeeded())
	{
		GetMesh()->SetSkeletalMesh(Wizrd.Object);
	}
}

void AMyCharacter::GetWeaponMesh()
{
	FName WeaponSocket(TEXT("WeaponSocket"));
	if (GetMesh()->DoesSocketExist(WeaponSocket))
	{
		UE_LOG(LogTemp,Warning,TEXT("WeaponSocket is exist"))
		Weapon = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("WEAPON"));
		static ConstructorHelpers::FObjectFinder<UStaticMesh> WZ_WEAPON(TEXT("/Game/BattleWizardPolyart/Meshes/MagicStaffs/Staff01SM.Staff01SM"));
		if (WZ_WEAPON.Succeeded())
		{
			Weapon->SetStaticMesh(WZ_WEAPON.Object);
		}
		Weapon->SetupAttachment(GetMesh(), WeaponSocket);
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

void AMyCharacter::GetFireBallBP()
{
	static ConstructorHelpers::FClassFinder<AFireBall> FireBallAsset(TEXT("/Game/Blueprint/MyFireBall.MyFireBall_C"));
	if (FireBallAsset.Succeeded())
		FireBallClass = FireBallAsset.Class;
}

void AMyCharacter::FireBallSpwan()
{
	FVector vPos = GetActorLocation() + GetActorForwardVector() * 100.0f;
	FActorSpawnParameters params;
	params.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;

	AFireBall* FireBall = GetWorld()->SpawnActor<AFireBall>(FireBallClass, vPos, GetActorRotation(), params);
	UE_LOG(LogTemp, Warning, TEXT("Spawn Fire"));
}

void AMyCharacter::PlayMontage()
{
	auto AnimInstance = Cast<UMyAnimInstance>(GetMesh()->GetAnimInstance());
	if (nullptr == AnimInstance)
	{
		return;
	}
	AnimInstance->PlayAttackMontage();

}

