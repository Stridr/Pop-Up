// Copyright PopUp


#include "QuestSystem/ObjectiveBroadcasterComponent.h"

#include "Character/PlayerCharacter.h"
#include "Kismet/GameplayStatics.h"
#include "QuestSystem/QuestActorBase.h"
#include "QuestSystem/QuestLogComponent.h"

UObjectiveBroadcasterComponent::UObjectiveBroadcasterComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
}


void UObjectiveBroadcasterComponent::BeginPlay()
{
	Super::BeginPlay();

	check(!ObjectiveId.Equals("not_set"))
}

void UObjectiveBroadcasterComponent::TickComponent(float DeltaTime, ELevelTick TickType,
                                                   FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}


void UObjectiveBroadcasterComponent::BroadcastToSubscriber()
{
	ACharacter* WorldCharacter = UGameplayStatics::GetPlayerCharacter(GetWorld(), 0);
	check(WorldCharacter);

	const APlayerCharacter* PlayerCharacter = Cast<APlayerCharacter>(WorldCharacter);
	check(PlayerCharacter);

	TArray<AQuestActorBase*> AllQuests = PlayerCharacter->QuestLog->CurrentQuests;
	for (AQuestActorBase* Quest : AllQuests)
	{
		TArray<FObjectiveDetails> AllObjectives = Quest->CurrentStageDetails.Objectives;
		for (FObjectiveDetails Objective : AllObjectives)
		{
			if (Objective.ObjectiveId.TrimStartAndEnd() == ObjectiveId.TrimStartAndEnd())
			{
				GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Cyan, TEXT("Broadcasting to subscriber"));
				Quest->OnObjectiveInteraction.Broadcast(ObjectiveId);
			}
			else
			{
				UE_LOG(LogTemp, Error, TEXT("No delegate set for objective %s"), *ObjectiveId);
			}
		}
	}
}
