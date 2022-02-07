// Fill out your copyright notice in the Description page of Project Settings.


#include "UFloatingBullet.h"

// Sets default values
AUFloatingBullet::AUFloatingBullet()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	m_projectile_component = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMovementComp"));
	m_projectile_component->InitialSpeed = 1000.f;
	m_projectile_component->MaxSpeed = 20000.f;
	m_projectile_component->ProjectileGravityScale = 0;

	m_sphereCol = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComponent"));
	m_sphereCol->InitSphereRadius(10.f);
	m_sphereCol->BodyInstance.SetCollisionProfileName("Projectile");

	RootComponent = m_sphereCol;

	static ConstructorHelpers::FObjectFinder<UStaticMesh>MeshAsset(TEXT("StaticMesh'/Game/FirstPerson/Meshes/ZeroGravMesh.ZeroGravMesh'"));
	UStaticMesh* Asset = MeshAsset.Object;
	m_mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("myMesh"));
	m_mesh->SetStaticMesh(Asset);
	m_mesh->SetupAttachment(m_sphereCol);
	m_mesh->SetWorldScale3D(FVector(0.4, 0.4, 0.4));

}

// Called when the game starts or when spawned
void AUFloatingBullet::BeginPlay()
{
	Super::BeginPlay();
	
	SetLifeSpan(3);
}

// Called every frame
void AUFloatingBullet::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	FVector playerLoc = GetWorld()->GetFirstPlayerController()->GetPawn()->GetActorLocation();
	FVector projLoc = AUFloatingBullet::GetActorLocation();
	FVector distToPlayer = projLoc - playerLoc;
	float maxDist = 1300;
	if (abs(FVector::Dist(projLoc, playerLoc)) >maxDist || AUFloatingBullet::GetVelocity() == FVector(0))			//TO CHANGE, CHECK POSITIONS BETWEEN PROJECTILE AND MAIN PLAYER.
	{
		m_projStop = true;
		setZeroVel();
	}

}

// Called every frame
void AUFloatingBullet::zeroGravity()
{
	TArray<AActor*> FoundActors;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AActor::StaticClass(), FoundActors);

	for (auto& x : FoundActors)
	{
		UPrimitiveComponent* primActor_;
		primActor_ = Cast<UPrimitiveComponent>(x->GetRootComponent());
		if (primActor_ != NULL)
		{
			//primActor_->AddImpulse(FVector(100) * primActor_->GetMass());
			FVector propLoc = primActor_->GetComponentLocation();
			FVector projLoc = AUFloatingBullet::GetActorLocation();


			float attractionDist = 900;
			if (abs(FVector::Dist(propLoc, projLoc)) < attractionDist&&(AUFloatingBullet::GetLifeSpan()<=4&& AUFloatingBullet::GetLifeSpan() >1.5))
			{
				primActor_->SetEnableGravity(false);
				primActor_->AddImpulse(FVector(0,0,2000));

			}
			else if(AUFloatingBullet::GetLifeSpan() < 1)
			{

				primActor_->SetEnableGravity(true);
				GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("Some debug message!"));
			}
		
		}

	}
}



// Called every frame
void AUFloatingBullet::setZeroVel()
{
	if (m_projStop == true)
	{
		m_projectile_component->SetVelocityInLocalSpace(FVector(0));
		zeroGravity();
	}
}