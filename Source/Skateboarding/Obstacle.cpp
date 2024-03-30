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
	
}

void AObstacle::Tick(float DeltaTime)
{
	//GEngine->AddOnScreenDebugMessage(-1, 4.f, FColor::Green, TEXT("dsds"));

}




