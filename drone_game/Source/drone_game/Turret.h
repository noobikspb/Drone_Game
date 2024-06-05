// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Turret.generated.h"

UCLASS()
class DRONE_GAME_API ATurret : public AActor
{
    GENERATED_BODY()

public:
    ATurret();

protected:
    virtual void BeginPlay() override;

public:
    virtual void Tick(float DeltaTime) override;

    void Fire();
    void RotateTowardsTarget();

    void TakeDamage(float DamageAmount);

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Health")
    float Health;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Combat")
    float FireRate;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Combat")
    float FireRange;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Combat")
    float Damage;

    void Die();

private:
    UPROPERTY(EditDefaultsOnly, Category = "Projectile")
    TSubclassOf<class AProjectile> ProjectileClass;

    UPROPERTY(VisibleAnywhere, Category = "Components")
    class USceneComponent* Root;

    UPROPERTY(VisibleAnywhere, Category = "Components")
    class UStaticMeshComponent* TurretMesh;

    UPROPERTY(VisibleAnywhere, Category = "Components")
    class UStaticMeshComponent* BarrelMesh;

    UPROPERTY(VisibleAnywhere, Category = "Components")
    class USceneComponent* MuzzleLocation;

    UPROPERTY(VisibleAnywhere, Category = "Components")
    class UBoxComponent* CollisionComponent;

    FTimerHandle FireRateTimerHandle;
    AActor* TargetActor;

    bool bCanFire;
};