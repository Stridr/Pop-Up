// Copyright PopUp

#pragma once

#include "CoreMinimal.h"
#include "QuestDetails.h"
#include "GameFramework/Actor.h"
#include "QuestActorBase.generated.h"

class APopUpPlayerController;

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FQuestObjectiveDelegate, FString, ObjectiveId);

UCLASS()
class POPUP_API AQuestActorBase : public AActor
{
	GENERATED_BODY()

public:
	AQuestActorBase();

protected:
	virtual void BeginPlay() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

public:
	virtual void Tick(float DeltaTime) override;

	void Initialize(FName QuestIdToSet);

	UPROPERTY()
	FName QuestId;

	UPROPERTY()
	bool bIsCompleted;

	UPROPERTY()
	FStageDetails CurrentStageDetails;

	UPROPERTY()
	TMap<FString, int> CurrentObjectiveProgress;

	FQuestObjectiveDelegate OnObjectiveInteraction;

private:
	UPROPERTY()
	UDataTable* QuestDataTable;

	UPROPERTY()
	FQuestDetails QuestDetails;

	UPROPERTY()
	int32 CurrentQuestStage;

	void GetQuestDetails();

	UFUNCTION()
	void ObjectiveIdHeard(FString ObjectiveId);

	FObjectiveDetails* GetObjectiveDataById(FString ObjectiveId);
};
