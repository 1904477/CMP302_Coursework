// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
#include "CoreMinimal.h"
#include "Components/PrimitiveComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "Runtime/Engine/Classes/Kismet/KismetSystemLibrary.h"
#include "Components/SphereComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "Particles/ParticleSystem.h"
#include "UFloatingBullet.generated.h"

UCLASS(Blueprintable)
class GRAVITY_BALL_API AUFloatingBullet : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AUFloatingBullet();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable)
		void zeroGravity();

	UFUNCTION(BlueprintCallable)
		void setZeroVel();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool m_projStop = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool m_gravityBack = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int m_GravBackCounter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UProjectileMovementComponent* m_projectile_component;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		USphereComponent* m_sphereCol;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UStaticMeshComponent* m_mesh;

};
