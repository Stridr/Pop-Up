// Copyright PopUp


#include "QuestSystem/QuestActorBase.h"

AQuestActorBase::AQuestActorBase()
{
	PrimaryActorTick.bCanEverTick = true;
}

void AQuestActorBase::BeginPlay()
{
	Super::BeginPlay();
}

void AQuestActorBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
