#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CoinHP.generated.h"

UCLASS()
class DRONE_GAME_API ACoinHP : public AActor
{
	GENERATED_BODY()
	
public:	
	ACoinHP();

protected:
    virtual void BeginPlay() override;

public:
    virtual void Tick(float DeltaTime) override;

    void RotateTowardsTarget();

    UFUNCTION()
    void OnOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
    class UStaticMeshComponent* CoinMesh;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
    class USphereComponent* CollisionComponent;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Health")
    float HealthToGive;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Ammo")
    int32 AmmoToGive;

private:

    AActor* TargetActor;
};
