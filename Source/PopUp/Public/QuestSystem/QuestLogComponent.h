// Copyright PopUp

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "QuestLogComponent.generated.h"

class AQuestActorBase;

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class POPUP_API UQuestLogComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UQuestLogComponent();

protected:
	virtual void BeginPlay() override;

public:
	virtual void TickComponent(float DeltaTime, ELevelTick TickType,
	                           FActorComponentTickFunction* ThisTickFunction) override;

private:
	UPROPERTY()
	TArray<FName> CurrentActiveQuests;

	UPROPERTY()
	TArray<FName> CompletedQuests;

	UPROPERTY()
	FName CurrentTrackedQuest;

	UPROPERTY()
	TArray<AQuestActorBase*> CurrentQuests;

	void AddNewQuest(const FName QuestId);
	bool QueryActiveQuest(const FName QuestId) const;
	void CompleteQuest(const FName QuestId);
	void TrackQuest(const FName QuestId);
};
