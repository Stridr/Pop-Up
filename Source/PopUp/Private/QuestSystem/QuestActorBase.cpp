// Copyright PopUp


#include "QuestSystem/QuestActorBase.h"

#include "Player/PopUpPlayerController.h"

AQuestActorBase::AQuestActorBase()
{
	PrimaryActorTick.bCanEverTick = true;

	static ConstructorHelpers::FObjectFinder<UDataTable> DataTableAsset(
		TEXT("DataTable'/Game/QuestSystem/DT_QuestData.DT_QuestData'"));

	if (DataTableAsset.Succeeded())
	{
		QuestDataTable = DataTableAsset.Object;
	}
}

void AQuestActorBase::BeginPlay()
{
	Super::BeginPlay();

	check(QuestId.IsValid());
	GetQuestDetails();

	APlayerController* WorldController = GetWorld()->GetFirstPlayerController();
	check(WorldController);

	PlayerController = Cast<APopUpPlayerController>(WorldController);
	check(PlayerController);

	// TODO: check if this is actually the correct way to do this. We need to get the objective Id
	// from the interaction actor and then check if it is in the current stage's objectives.
	PlayerController->OnInteractionCalled.AddDynamic(this, &AQuestActorBase::ObjectiveIdHeard);
}

void AQuestActorBase::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);

	PlayerController->OnInteractionCalled.RemoveDynamic(this, &AQuestActorBase::ObjectiveIdHeard);
}

void AQuestActorBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AQuestActorBase::GetQuestDetails()
{
	const FQuestDetails* Details = QuestDataTable->FindRow<FQuestDetails>(QuestId, TEXT("QuestDetails"));
	if (Details)
	{
		QuestDetails = *Details;
		CurrentQuestStage = 0;
	}
	else
	{
		return;
	}
	CurrentObjectiveProgress.Empty();
	CurrentStageDetails = QuestDetails.Stages[CurrentQuestStage];

	for (const FObjectiveDetails& Objective : CurrentStageDetails.Objectives)
	{
		CurrentObjectiveProgress.Add(Objective.ObjectiveId, 0);
	}
}

void AQuestActorBase::ObjectiveIdHeard(FString ObjectiveId)
{
	if (const int* Find = CurrentObjectiveProgress.Find(ObjectiveId))
	{
		if (Find < &GetObjectiveDataById(ObjectiveId)->Quantity)
		{
			CurrentObjectiveProgress.Add(ObjectiveId, *Find + 1);
		}
	}
}

FObjectiveDetails* AQuestActorBase::GetObjectiveDataById(FString ObjectiveId)
{
	for (const FObjectiveDetails& Objective : CurrentStageDetails.Objectives)
	{
		if (Objective.ObjectiveId == ObjectiveId)
		{
			return const_cast<FObjectiveDetails*>(&Objective);
		}
	}

	return nullptr;
}
