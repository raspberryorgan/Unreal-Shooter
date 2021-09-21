// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerBullet.h"

// Sets default values
APlayerBullet::APlayerBullet()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APlayerBullet::BeginPlay()
{
	Super::BeginPlay();
	APlayerCameraManager* camManager = GetWorld()->GetFirstPlayerController()->PlayerCameraManager;
	FVector camLocation = camManager->GetCameraLocation();
	FRotator camForward = camManager->GetCameraRotation();
	SetActorRotation(camForward);

}

// Called every frame
void APlayerBullet::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	FVector Location = GetActorLocation() + GetActorForwardVector();
	SetActorLocation(Location, false);

	

}

