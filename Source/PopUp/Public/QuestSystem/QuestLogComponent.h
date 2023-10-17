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

	bool QueryActiveQuest(const FName QuestId) const;
	void AddNewQuest(const FName QuestId);
	void CompleteQuest(const FName QuestId);
	void TrackQuest(const FName QuestId);

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category="Quest Log")
	TArray<FName> CurrentActiveQuests;

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category="Quest Log")
	TArray<FName> CompletedQuests;

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category="Quest Log")
	FName CurrentTrackedQuest;

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category="Quest Log")
	TArray<AQuestActorBase*> CurrentQuests;
};
