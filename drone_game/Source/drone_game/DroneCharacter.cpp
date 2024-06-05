#include "DroneCharacter.h"
#include "Projectile.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/PlayerController.h"
#include "Components/InputComponent.h"
#include "Kismet/GameplayStatics.h"

ADroneCharacter::ADroneCharacter()
{
    PrimaryActorTick.bCanEverTick = true;

    Health = 100.f;
    Ammo = 10;

    CameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("CameraComponent"));
    CameraComponent->SetupAttachment(RootComponent);
    CameraComponent->bUsePawnControlRotation = true;

    MuzzleLocation = CreateDefaultSubobject<USceneComponent>(TEXT("MuzzleLocation"));
    MuzzleLocation->SetupAttachment(CameraComponent);
}

void ADroneCharacter::BeginPlay()
{
    Super::BeginPlay();
}

void ADroneCharacter::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}

void ADroneCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
    Super::SetupPlayerInputComponent(PlayerInputComponent);

    PlayerInputComponent->BindAxis("MoveForward", this, &ADroneCharacter::MoveForward);
    PlayerInputComponent->BindAxis("MoveRight", this, &ADroneCharacter::MoveRight);
    PlayerInputComponent->BindAxis("MoveUp", this, &ADroneCharacter::MoveUp);

    PlayerInputComponent->BindAxis("Turn", this, &ADroneCharacter::Turn);
    PlayerInputComponent->BindAxis("LookUp", this, &ADroneCharacter::LookUp);

    PlayerInputComponent->BindAction("Shoot", IE_Pressed, this, &ADroneCharacter::Shoot);
}

void ADroneCharacter::MoveForward(float Value)
{
    AddMovementInput(GetActorForwardVector() * Value);
}

void ADroneCharacter::MoveRight(float Value)
{
    AddMovementInput(GetActorRightVector() * Value);
}

void ADroneCharacter::MoveUp(float Value)
{
    AddMovementInput(GetActorUpVector() * Value);
}

void ADroneCharacter::Turn(float Value)
{
    AddControllerYawInput(Value);
}

void ADroneCharacter::LookUp(float Value)
{
    AddControllerPitchInput(Value);
}

void ADroneCharacter::Shoot()
{
    if (Ammo > 0 && ProjectileClass)
    {
        UE_LOG(LogTemp, Warning, TEXT("Drone is shooting"));
        FVector Start = MuzzleLocation->GetComponentLocation();
        FRotator MuzzleRotation = MuzzleLocation->GetComponentRotation();
        FActorSpawnParameters SpawnParams;

        SpawnParams.Owner = this;
        AProjectile* SpawnedProjectile = GetWorld()->SpawnActor<AProjectile>(ProjectileClass, Start, MuzzleRotation, SpawnParams);
        Ammo--;
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("No ammo"));
    }
}

void ADroneCharacter::TakeDamage(float DamageAmount)
{
    Health -= DamageAmount;
    if (Health <= 0)
    {
        UGameplayStatics::OpenLevel(this, FName(*GetWorld()->GetName()), false);
    }
}



