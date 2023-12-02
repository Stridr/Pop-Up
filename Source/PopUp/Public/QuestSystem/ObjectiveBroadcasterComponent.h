// Copyright PopUp

#pragma once

#include "CoreMinimal.h"
#include "QuestActorBase.h"
#include "Components/ActorComponent.h"
#include "ObjectiveBroadcasterComponent.generated.h"

class USphereComponent;

UCLASS(Blueprintable, ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class POPUP_API UObjectiveBroadcasterComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UObjectiveBroadcasterComponent();

protected:
	virtual void BeginPlay() override;

public:
	virtual void TickComponent(float DeltaTime, ELevelTick TickType,
	                           FActorComponentTickFunction* ThisTickFunction) override;

	UFUNCTION(BlueprintCallable, Category="Objective")
	void BroadcastToSubscriber();

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Objective")
	FString ObjectiveId = "not_set";

private:
	UPROPERTY()
	bool bIsDelegateSet = false;

	// This delegate is set as a pointer here to avoid dangling references. The bIsDelegateSet variable should be used
	// instead to see if an active delegate is set.
	FQuestObjectiveDelegate OnObjectiveInteraction;
};
