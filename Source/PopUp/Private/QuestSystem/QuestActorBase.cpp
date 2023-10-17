// Copyright PopUp


#include "QuestSystem/QuestActorBase.h"

#include "Player/PopUpPlayerController.h"

AQuestActorBase::AQuestActorBase()
{
	PrimaryActorTick.bCanEverTick = true;
}

void AQuestActorBase::BeginPlay()
{
	Super::BeginPlay();
	GetQuestDetails();

	APlayerController* PlayerController = GetWorld()->GetFirstPlayerController();
	check(PlayerController);

	APopUpPlayerController* PopUpPlayerController = Cast<APopUpPlayerController>(PlayerController);
	check(PopUpPlayerController);


	// TODO: check if this is actually the correct way to do this. We need to get the objective Id
	// from the interaction actor and then check if it is in the current stage's objectives.
	PopUpPlayerController->OnInteractionCalled.AddDynamic(this, &AQuestActorBase::ObjectiveIdHeard);
}

void AQuestActorBase::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);

	APlayerController* PlayerController = GetWorld()->GetFirstPlayerController();
	check(PlayerController);

	APopUpPlayerController* PopUpPlayerController = Cast<APopUpPlayerController>(PlayerController);
	check(PopUpPlayerController);

	PopUpPlayerController->OnInteractionCalled.RemoveDynamic(this, &AQuestActorBase::ObjectiveIdHeard);
}

void AQuestActorBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AQuestActorBase::GetQuestDetails()
{
	const FQuestDetails* Details = QuestDataTable->FindRow<FQuestDetails>(QuestId, TEXT("QuestDetails"));
	QuestDetails = *Details;
	CurrentObjectiveProgress.Empty();
	CurrentStageDetails = QuestDetails.Stages[CurrentQuestStage];

	for (const FObjectiveDetails& Objective : CurrentStageDetails.Objectives)
	{
		CurrentObjectiveProgress.Add(Objective.ObjectiveId, 0);
	}
}

void AQuestActorBase::ObjectiveIdHeard(const FString& ObjectiveId)
{
	if (const short* Find = CurrentObjectiveProgress.Find(ObjectiveId))
	{
		CurrentObjectiveProgress.Add(ObjectiveId, *Find + 1);
	}
}
