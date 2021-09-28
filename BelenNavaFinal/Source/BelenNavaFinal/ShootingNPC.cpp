// Fill out your copyright notice in the Description page of Project Settings.


#include "ShootingNPC.h"

// Sets default values
AShootingNPC::AShootingNPC()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AShootingNPC::BeginPlay()
{
	Super::BeginPlay();
	life = 100;
	
}

// Called every frame
void AShootingNPC::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);



}

// Called to bind functionality to input
void AShootingNPC::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

