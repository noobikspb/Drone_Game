// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "DroneCharacter.generated.h"

UCLASS()
class DRONE_GAME_API ADroneCharacter : public ACharacter
{
    GENERATED_BODY()

public:
    ADroneCharacter();

protected:
    virtual void BeginPlay() override;

public:
    virtual void Tick(float DeltaTime) override;
    virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

    void MoveForward(float Value);
    void MoveRight(float Value);
    void MoveUp(float Value);
    void Turn(float Value);
    void LookUp(float Value);
    void Shoot();

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Combat")
    TSubclassOf<class AProjectile> ProjectileClass;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Combat")
    float Health;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Combat")
    int32 Ammo;

    void TakeDamage(float DamageAmount);

private:
    class UCameraComponent* CameraComponent;

    UPROPERTY(VisibleAnywhere, Category = "Components")
    class USceneComponent* MuzzleLocation;

};
