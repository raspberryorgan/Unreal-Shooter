// Fill out your copyright notice in the Description page of Project Settings.


#include "SpeedBuff.h"

// Sets default values
ASpeedBuff::ASpeedBuff()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ASpeedBuff::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASpeedBuff::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ASpeedBuff::OnAction(AActor* OtherActor) {
	APlayerCharacter* character = Cast<APlayerCharacter>(OtherActor);
	if (character) {
		character->GetCharacterMovement()->MaxWalkSpeed = 1200;
		character->bIsSpeedy = true;

	}
}

