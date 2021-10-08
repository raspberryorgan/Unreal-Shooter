// Fill out your copyright notice in the Description page of Project Settings.


#include "LevelOut.h"

// Sets default values
ALevelOut::ALevelOut()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;



}

// Called when the game starts or when spawned
void ALevelOut::BeginPlay()
{
	Super::BeginPlay();

	// get player
	APawn * character = GetWorld()->GetFirstPlayerController()->GetPawn();

	 if (character) {

		 playerActor = character->GetOwner();

	 }
	/*



	 volume->SetupAttachment(RootComponent);
	 volume->SetGenerateOverlapEvents(true);
	 volume->SetCollisionResponseToAllChannels(ECR_Overlap);
	 volume->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	 volume->SetCollisionProfileName("Pawn");

	 volume->OnComponentBeginOverlap.AddDynamic(this, &ALevelOut::OnOverlap);
	 volume->OnComponentEndOverlap.AddDynamic(this, &ALevelOut::OnExitOverlap);

	*/
}

// Called every frame
void ALevelOut::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
}

void ALevelOut::OnOverlap(class UPrimitiveComponent* HitComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
	
}
void ALevelOut::OnExitOverlap(class UPrimitiveComponent* HitComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {

}

