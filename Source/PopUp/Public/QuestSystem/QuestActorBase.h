// Copyright PopUp

#pragma once

#include "CoreMinimal.h"
#include "QuestDetails.h"
#include "GameFramework/Actor.h"
#include "QuestActorBase.generated.h"

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

	UPROPERTY()
	FName QuestId;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Quest Data")
	UDataTable* QuestDataTable;
	
private:
	UPROPERTY()
	FQuestDetails QuestDetails;

	UPROPERTY()
	FStageDetails CurrentStageDetails;

	UPROPERTY()
	int32 CurrentQuestStage;

	UPROPERTY()
	TMap<FString, int16> CurrentObjectiveProgress;

	UPROPERTY()
	bool bIsCompleted;

	void GetQuestDetails();

	UFUNCTION()
	void ObjectiveIdHeard(const FString& ObjectiveId);
};
