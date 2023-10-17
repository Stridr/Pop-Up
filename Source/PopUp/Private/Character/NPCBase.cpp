// Copyright PopUp

#include "Character/NPCBase.h"
#include "QuestSystem/QuestGiverComponent.h"

ANPCBase::ANPCBase()
{
	PrimaryActorTick.bCanEverTick = true;
}

void ANPCBase::BeginPlay()
{
	Super::BeginPlay();

	QuestGiverComponent = FindComponentByClass<UQuestGiverComponent>();
	QuestGiverComponent->Activate();
}

void ANPCBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ANPCBase::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}

void ANPCBase::LookAt()
{
	QuestGiverComponent->LookAt();
}

FString ANPCBase::InteractWith()
{
	return QuestGiverComponent->InteractWith();
}
