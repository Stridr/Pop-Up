// Copyright PopUp

#pragma once

#include "CoreMinimal.h"
#include "InteractionInterface.h"
#include "GameFramework/Actor.h"
#include "InteractionActorBase.generated.h"

// DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FObjectiveIDCalled, FString, ObjectiveId);

UCLASS()
class POPUP_API AInteractionActorBase : public AActor, public IInteractionInterface
{
	GENERATED_BODY()

public:
	AInteractionActorBase();

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;

	// UPROPERTY(BlueprintAssignable, Category="Quest Objective")
	// FObjectiveIDCalled OnObjectiveIDCalled;

	UFUNCTION(BlueprintCallable, Category="Interaction")
	virtual void LookAt() override;

	UFUNCTION(BlueprintCallable, Category="Interaction")
	virtual FString InteractWith() override;

private:
	UPROPERTY(EditAnywhere, Category="Quest Objective")
	FString ObjectiveName = "";
};
