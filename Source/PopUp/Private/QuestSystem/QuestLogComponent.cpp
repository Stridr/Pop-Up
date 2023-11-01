// Copyright PopUp


#include "QuestSystem/QuestLogComponent.h"
#include "Player/PopUpPlayerController.h"
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
	AQuestActorBase* NewQuest = GetWorld()->SpawnActor<AQuestActorBase>(QuestActorClass);
	if (NewQuest)
	{
		NewQuest->Initialize(QuestId);
		CurrentQuests.Add(NewQuest);
		CurrentActiveQuests.AddUnique(QuestId);

		if (CurrentTrackedQuest.IsNone())
		{
			TrackQuest(QuestId);
		}
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("Failed to spawn quest actor"));
	}
}

bool UQuestLogComponent::QueryActiveQuest(const FName QuestId) const
{
	return CurrentActiveQuests.Contains(QuestId);
}

void UQuestLogComponent::CompleteQuest(const FName QuestId)
{
	// AQuestActorBase** PQuestActor = CurrentQuests.FindByPredicate([QuestId](AQuestActorBase* QuestActor)
	// {
	// 	if (QuestActor && QuestActor->QuestId == QuestId)
	// 	{
	// 		QuestActor->bIsCompleted = true;
	// 		return true;
	// 	}
	// 	return false;
	// });
	//
	// const bool bHasCompleted = PQuestActor != nullptr;
	//
	// if (CurrentActiveQuests.Find(QuestId) != INDEX_NONE && bHasCompleted)
	// {
	// 	CurrentActiveQuests.Remove(QuestId);
	// 	CompletedQuests.Add(QuestId);
	// 	UE_LOG(LogTemp, Warning, TEXT("Quest %p is complete"), &QuestId);
	// }
}

void UQuestLogComponent::TrackQuest(const FName QuestId)
{
	CurrentTrackedQuest = QuestId;
}
