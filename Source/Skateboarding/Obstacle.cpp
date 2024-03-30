// Fill out your copyright notice in the Description page of Project Settings.


#include "Obstacle.h"
#include "Components/BoxComponent.h"
#include "CharacterParent.h"
#include "Components/SceneComponent.h"

// Sets default values
AObstacle::AObstacle()
{
	Scene = CreateDefaultSubobject<USceneComponent>("Scene");
	Scene->SetupAttachment(GetRootComponent());
	//initializing collider
	PlayerDetector = CreateDefaultSubobject<UBoxComponent>("PlayerDetector");
	PlayerDetector->SetupAttachment(Scene);

}

// Called when the game starts or when spawned
void AObstacle::BeginPlay()
{
	Super::BeginPlay();
	
	PlayerDetector->OnComponentBeginOverlap.AddDynamic(this, &AObstacle::PlayerDetectorBeginOverlap);
	PlayerDetector->OnComponentEndOverlap.AddDynamic(this, &AObstacle::PlayerDetectorEndOverlapp);

}

void AObstacle::Tick(float DeltaTime)
{
	//GEngine->AddOnScreenDebugMessage(-1, 4.f, FColor::Green, TEXT("dsds"));

}

void AObstacle::PlayerDetectorBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	GEngine->AddOnScreenDebugMessage(-1, 4.f, FColor::Green, FString::Printf(TEXT("%s"), *OtherComp->GetName()));

	if (OtherActor) {
		ACharacterParent* Player = Cast<ACharacterParent>(OtherActor);
		if (Player) {
			Player->AddPoint();
		}
	}
}

void AObstacle::PlayerDetectorEndOverlapp(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{

}



