#include "Turret.h"
#include "Projectile.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SceneComponent.h"
#include "Components/BoxComponent.h"
#include "Kismet/GameplayStatics.h"
#include "DroneCharacter.h"
#include "Projectile.h"
#include "TimerManager.h"

ATurret::ATurret()
{
    PrimaryActorTick.bCanEverTick = true;

    Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    RootComponent = Root;

    CollisionComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("CollisionComponent"));
    CollisionComponent->SetupAttachment(RootComponent);
    CollisionComponent->SetBoxExtent(FVector(50.0f));
    CollisionComponent->SetCollisionProfileName(TEXT("BlockAllDynamic"));

    TurretMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("TurretMesh"));
    TurretMesh->SetupAttachment(CollisionComponent);

    BarrelMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BarrelMesh"));
    BarrelMesh->SetupAttachment(TurretMesh);

    MuzzleLocation = CreateDefaultSubobject<USceneComponent>(TEXT("MuzzleLocation"));
    MuzzleLocation->SetupAttachment(BarrelMesh);

    Health = 100.f;
    FireRate = 1.f;
    FireRange = 1000.f;
    Damage = 20.f;
    bCanFire = true;
}

void ATurret::BeginPlay()
{
    Super::BeginPlay();
    GetWorld()->GetTimerManager().SetTimer(FireRateTimerHandle, this, &ATurret::Fire, FireRate, true);
}

void ATurret::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    TargetActor = UGameplayStatics::GetPlayerPawn(this, 0);

    if (TargetActor)
    {
        RotateTowardsTarget();

        FVector Direction = TargetActor->GetActorLocation() - GetActorLocation();
        FRotator LookAtRotation = FRotationMatrix::MakeFromX(Direction).Rotator();
        TurretMesh->SetWorldRotation(FRotator(0.f, LookAtRotation.Yaw, 0.f));

        float Distance = FVector::Dist(TargetActor->GetActorLocation(), GetActorLocation());
        if (Distance <= FireRange)
        {
            bCanFire = true;
        }
        else
        {
            bCanFire = false;
        }
    }
}

void ATurret::RotateTowardsTarget()
{
    if (!TargetActor) return;

    FVector TargetLocation = TargetActor->GetActorLocation();
    FVector TurretLocation = GetActorLocation();
    FRotator LookAtRotation = (TargetLocation - TurretLocation).Rotation();
    LookAtRotation.Pitch = 0;
    LookAtRotation.Roll = 0;
    SetActorRotation(FMath::RInterpTo(GetActorRotation(), LookAtRotation, GetWorld()->GetDeltaSeconds(), 5.0f));
}

void ATurret::Fire()
{
    if (bCanFire && Health > 0 && TargetActor)
    {
        FVector Start = MuzzleLocation->GetComponentLocation();
        FRotator MuzzleRotation = (TargetActor->GetActorLocation() - Start).Rotation();

        FActorSpawnParameters SpawnParams;
        SpawnParams.Owner = this;
        GetWorld()->SpawnActor<AProjectile>(ProjectileClass, Start, MuzzleRotation, SpawnParams);
    }
}

void ATurret::TakeDamage(float DamageAmount)
{
    Health -= DamageAmount;
    if (Health <= 0)
    {
        Die();
    }
}

void ATurret::Die()
{
    bCanFire = false;
}

