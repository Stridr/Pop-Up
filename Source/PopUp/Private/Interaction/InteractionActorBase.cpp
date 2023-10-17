// Copyright PopUp


#include "Interaction/InteractionActorBase.h"

// Sets default values
AInteractionActorBase::AInteractionActorBase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AInteractionActorBase::BeginPlay()
{
	Super::BeginPlay();

	ObjectiveName = "Objective Name";
}

// Called every frame
void AInteractionActorBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AInteractionActorBase::LookAt()
{
	UE_LOG(LogTemp, Warning, TEXT("LookAt Actor"));
}

FString AInteractionActorBase::InteractWith()
{
	return ObjectiveName;
}

