// Copyright PopUp

#pragma once

#include "CoreMinimal.h"
#include "QuestDetails.h"
#include "GameFramework/Actor.h"
#include "QuestActorBase.generated.h"

class APopUpPlayerController;

UCLASS()
class POPUP_API AQuestActorBase : public AActor
{
	GENERATED_BODY()

public:
	AQuestActorBase();

	static AQuestActorBase* CreateWithQuestId(UWorld* World, FName QuestId)
	{
		AQuestActorBase* QuestActor = World->SpawnActor<AQuestActorBase>();
		if (QuestActor)
		{
			QuestActor->QuestId = QuestId;
		}
		return QuestActor;
	}

protected:
	virtual void BeginPlay() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

public:
	virtual void Tick(float DeltaTime) override;

	UPROPERTY()
	FName QuestId;

private:
	UDataTable* QuestDataTable;

	UPROPERTY()
	FQuestDetails QuestDetails;

	UPROPERTY()
	FStageDetails CurrentStageDetails;

	UPROPERTY()
	int32 CurrentQuestStage;

	UPROPERTY()
	TMap<FString, int> CurrentObjectiveProgress;

	UPROPERTY()
	bool bIsCompleted;

	void GetQuestDetails();

	UFUNCTION()
	void ObjectiveIdHeard(FString ObjectiveId);

	APopUpPlayerController* PlayerController;

	FObjectiveDetails* GetObjectiveDataById(FString ObjectiveId);
};
