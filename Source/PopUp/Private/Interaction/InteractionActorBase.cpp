// Copyright PopUp


#include "Interaction/InteractionActorBase.h"

AInteractionActorBase::AInteractionActorBase()
{
	PrimaryActorTick.bCanEverTick = true;
}

void AInteractionActorBase::BeginPlay()
{
	Super::BeginPlay();

	check(!ObjectiveName.IsEmpty());
}

void AInteractionActorBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AInteractionActorBase::LookAt()
{
	// UE_LOG(LogTemp, Warning, TEXT("LookAt Actor"));
}

FString AInteractionActorBase::InteractWith()
{
	// OnObjectiveIDCalled.Broadcast(ObjectiveName);
	return ObjectiveName;
}
