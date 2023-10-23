// Copyright PopUp


#include "QuestSystem/QuestLogComponent.h"

#include "QuestSystem/QuestActorBase.h"

UQuestLogComponent::UQuestLogComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
}


void UQuestLogComponent::BeginPlay()
{
	Super::BeginPlay();
}


void UQuestLogComponent::TickComponent(float DeltaTime, ELevelTick TickType,
                                       FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}

void UQuestLogComponent::AddNewQuest(const FName QuestId)
{
	CurrentActiveQuests.AddUnique(QuestId);
	UE_LOG(LogTemp, Warning, TEXT("Added Quest: %s"), *QuestId.ToString());

	AQuestActorBase* QuestActor = AQuestActorBase::CreateWithQuestId(GetWorld(), QuestId);
	UE_LOG(LogTemp, Warning, TEXT("Spawned Quest Actor with QuestId: %s %s"), *QuestActor->GetName(),
	       *QuestActor->QuestId.ToString());

	// if (AQuestActorBase* QuestActor = GetWorld()->SpawnActor<AQuestActorBase>())
	// {
	// 	QuestActor->QuestId = QuestId;
	// 	CurrentQuests.Add(QuestActor);
	// 	UE_LOG(LogTemp, Warning, TEXT("Spawned Quest Actor: %s"), *QuestActor->QuestId.ToString());
	// }
}

bool UQuestLogComponent::QueryActiveQuest(const FName QuestId) const
{
	return CurrentActiveQuests.Contains(QuestId);
}

void UQuestLogComponent::CompleteQuest(const FName QuestId)
{
}

void UQuestLogComponent::TrackQuest(const FName QuestId)
{
}
