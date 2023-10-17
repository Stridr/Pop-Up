// Copyright PopUp


#include "QuestSystem/QuestActorBase.h"

// Sets default values
AQuestActorBase::AQuestActorBase()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AQuestActorBase::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void AQuestActorBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
