// Fill out your copyright notice in the Description page of Project Settings.


#include "UExplosion_Projectile.h"

// Sets default values
AUExplosion_Projectile::AUExplosion_Projectile()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	m_projectile_component = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMovementComp"));
	m_projectile_component->InitialSpeed = 1000.f;
	m_projectile_component->MaxSpeed = 2000.f;
	m_projectile_component->ProjectileGravityScale = 0;

	static ConstructorHelpers::FObjectFinder<UParticleSystem> explosionParticle(TEXT("ParticleSystem'/Game/StarterContent/Particles/P_Explosion.P_Explosion'"));
	m_explosion = explosionParticle.Object;
	//m_projectile_component.a
	//m_projectile_component->ProjectileGravityScale=0;
	m_sphereCol = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComponent"));
	m_sphereCol->InitSphereRadius(10.f);
	m_sphereCol->SetCollisionResponseToChannel(ECollisionChannel::ECC_Pawn, ECollisionResponse::ECR_Block);
	m_sphereCol->BodyInstance.SetCollisionProfileName("Projectile");

	RootComponent = m_sphereCol;

	static ConstructorHelpers::FObjectFinder<UStaticMesh>MeshAsset(TEXT("StaticMesh'/Game/FirstPerson/Meshes/ExplosionProjectileMesh.ExplosionProjectileMesh'"));
	UStaticMesh* Asset = MeshAsset.Object;
	m_mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("myMesh"));
	m_mesh->SetCollisionResponseToChannel(ECollisionChannel::ECC_Pawn, ECollisionResponse::ECR_Block);
	m_mesh->SetStaticMesh(Asset);
	m_mesh->SetupAttachment(m_sphereCol);
	m_mesh->SetWorldScale3D(FVector(0.4, 0.4, 0.4));

}

// Called when the game starts or when spawned
void AUExplosion_Projectile::BeginPlay()
{

	SetLifeSpan(m_ExplLifeSpan);
	//	m_projectile_component->InitialSpeed(500.0f);

	Super::BeginPlay();
}

// Called every frame
void AUExplosion_Projectile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FVector playerLoc = GetWorld()->GetFirstPlayerController()->GetPawn()->GetActorLocation();
	FVector projLoc = AUExplosion_Projectile::GetActorLocation();
	FVector distToPlayer = projLoc - playerLoc;
	float maxDist = 1300;
	if (abs(FVector::Dist(projLoc, playerLoc)) > maxDist || AUExplosion_Projectile::GetVelocity() == FVector(0))			//TO CHANGE, CHECK POSITIONS BETWEEN PROJECTILE AND MAIN PLAYER.
	{
		m_projStop = true;
		setNewVel();
		UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), m_explosion, projLoc);
	}

}

void AUExplosion_Projectile::setNewVel()
{
	if (m_projStop == true)
	{
		m_projectile_component->SetVelocityInLocalSpace(FVector(0));
		castExplToActors();
	}
}


void AUExplosion_Projectile::castExplToActors()
{
	TArray<AActor*> FoundActors;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AActor::StaticClass(), FoundActors);

	for (auto& x : FoundActors)
	{
		UPrimitiveComponent* primActor_;
		primActor_ = Cast<UPrimitiveComponent>(x->GetRootComponent());
		if (primActor_ != NULL)
		{
			primActor_->AddImpulse(FVector(1000) * primActor_->GetMass());
		}
	}
}

