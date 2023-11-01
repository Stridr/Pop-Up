// Copyright PopUp


#include "QuestSystem/QuestActorBase.h"

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

	OnObjectiveInteraction.AddDynamic(this, &AQuestActorBase::ObjectiveIdHeard);
}

void AQuestActorBase::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);

	// TODO: check if this is needed if the delegate belongs to the same class instance	
	OnObjectiveInteraction.RemoveDynamic(this, &AQuestActorBase::ObjectiveIdHeard);
}

void AQuestActorBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AQuestActorBase::Initialize(FName QuestIdToSet)
{
	QuestId = QuestIdToSet;
	GetQuestDetails();
}

void AQuestActorBase::GetQuestDetails()
{
	UE_LOG(LogTemp, Warning, TEXT("QuestId: %s"), *QuestId.ToString());

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
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Cyan,
	                                 FString::Printf(TEXT("ObjectiveIdHeard: %s"), *ObjectiveId));

	const int* Find = CurrentObjectiveProgress.Find(ObjectiveId);

	if (Find && Find < &GetObjectiveDataById(ObjectiveId)->Quantity)
	{
		CurrentObjectiveProgress.Add(ObjectiveId, *Find + 1);
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
