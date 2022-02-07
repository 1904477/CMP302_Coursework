// Fill out your copyright notice in the Description page of Project Settings.

#include "UGravity_Projectile.h"

// Sets default values
AUGravity_Projectile::AUGravity_Projectile()
{
	
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	m_projectile_component = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMovementComp"));
	static ConstructorHelpers::FObjectFinder<UParticleSystem> attractionPartTemp(TEXT("ParticleSystem'/Game/FirstPersonBP/Blueprints/My_Explosion_Purple.My_Explosion_Purple'"));
	m_attractionParticle = attractionPartTemp.Object;
	//m_projectile_component.a
	//m_projectile_component->ProjectileGravityScale=0;
	m_sphereCol = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComponent"));
	m_sphereCol->InitSphereRadius(20.0f);
	m_sphereCol->BodyInstance.SetCollisionProfileName("Projectile");


	RootComponent = m_sphereCol;
	m_projectile_component->InitialSpeed = 1000.f;
	m_projectile_component->MaxSpeed = 2000.f;
	m_projectile_component->ProjectileGravityScale = 0;
	static ConstructorHelpers::FObjectFinder<UStaticMesh>MeshAsset(TEXT("StaticMesh'/Game/FirstPerson/Meshes/FirstPersonProjectileMesh.FirstPersonProjectileMesh'"));
	UStaticMesh* Asset = MeshAsset.Object;

	m_mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("myMesh"));
	m_mesh->SetStaticMesh(Asset);
	m_mesh->SetupAttachment(m_sphereCol);
	m_mesh->SetWorldScale3D(FVector(0.4, 0.4, 0.4));
	

}

// Called when the game starts or when spawned
void AUGravity_Projectile::BeginPlay()
{
	Super::BeginPlay();

	spawnable_ = false;
	SetLifeSpan(3);
}

// Called every frame
void AUGravity_Projectile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	FVector playerLoc = GetWorld()->GetFirstPlayerController()->GetPawn()->GetActorLocation();
	FVector projLoc = AUGravity_Projectile::GetActorLocation();
	FVector distToPlayer = projLoc - playerLoc;
	float maxDist = 1300;
	if (abs(FVector::Dist(projLoc, playerLoc)) > maxDist || AUGravity_Projectile::GetVelocity() == FVector(0))			//TO CHANGE, CHECK POSITIONS BETWEEN PROJECTILE AND MAIN PLAYER.
	{
		m_projectileStop = true;
		stopBullet();
		//UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), m_explosion, projLoc);
	}

}

void AUGravity_Projectile::castAttractionToObjects()
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
			FVector projLoc = AUGravity_Projectile::GetActorLocation();
			FVector distToPlayer = projLoc - propLoc;
			float attractionDist = 900;
			if (abs(FVector::Dist(propLoc, projLoc)) < attractionDist)
			{
				primActor_->AddImpulse(distToPlayer * primActor_->GetMass());
				UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), m_attractionParticle, projLoc);
			}
		}
	}
}

void AUGravity_Projectile::stopBullet()
{
	if (m_projectileStop == true)
	{
		m_projectile_component->SetVelocityInLocalSpace(FVector(0));
		castAttractionToObjects();
	}
}