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

public:
	virtual void Tick(float DeltaTime) override;

private:
	UPROPERTY()
	FName QuestId;

	UPROPERTY()
	TArray<FQuestDetails> QuestDetails;

	UPROPERTY()
	int16 CurrentQuestStage;

	UPROPERTY()
	TMap<FString, int16> CurrentObjectiveProgress;

	UPROPERTY()
	bool bIsCompleted;
};
