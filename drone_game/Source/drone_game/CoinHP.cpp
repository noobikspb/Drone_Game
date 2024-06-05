#include "CoinHP.h"
#include "DroneCharacter.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SphereComponent.h"
#include "DroneCharacter.h"
#include "Kismet/GameplayStatics.h"

ACoinHP::ACoinHP()
{
    PrimaryActorTick.bCanEverTick = true;

    CoinMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CoinMesh"));
    RootComponent = CoinMesh;

    CollisionComponent = CreateDefaultSubobject<USphereComponent>(TEXT("CollisionComponent"));
    CollisionComponent->SetupAttachment(RootComponent);
    CollisionComponent->SetSphereRadius(50.0f);
    CollisionComponent->OnComponentBeginOverlap.AddDynamic(this, &ACoinHP::OnOverlapBegin);

    HealthToGive = 100.0f;
    AmmoToGive = 10;
}

void ACoinHP::BeginPlay()
{
    Super::BeginPlay();

    TargetActor = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);
}

void ACoinHP::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    if (TargetActor)
    {
        RotateTowardsTarget();
    }
}

void ACoinHP::RotateTowardsTarget()
{
    if (!TargetActor) return;

    FVector TargetLocation = TargetActor->GetActorLocation();
    FVector TurretLocation = GetActorLocation();
    FRotator LookAtRotation = (TargetLocation - TurretLocation).Rotation();
    LookAtRotation.Pitch = 0;
    LookAtRotation.Roll = 0;
    SetActorRotation(FMath::RInterpTo(GetActorRotation(), LookAtRotation, GetWorld()->GetDeltaSeconds(), 5.0f));
}

void ACoinHP::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
    if (OtherActor && (OtherActor != this) && OtherComp)
    {
        ADroneCharacter* DroneCharacter = Cast<ADroneCharacter>(OtherActor);
        if (DroneCharacter)
        {
            DroneCharacter->Health = 100.0f;
            DroneCharacter->Ammo += AmmoToGive;

            Destroy();
        }
    }
}
