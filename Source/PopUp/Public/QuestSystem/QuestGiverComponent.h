// Copyright PopUp

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Interaction/InteractionInterface.h"
#include "QuestGiverComponent.generated.h"


UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class POPUP_API UQuestGiverComponent : public UActorComponent, public IInteractionInterface
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UQuestGiverComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;
	virtual void LookAt() override;
	virtual FString InteractWith() override;

public:
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType,
	                           FActorComponentTickFunction* ThisTickFunction) override;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Quest Data")
	FDataTableRowHandle QuestData;

	void DisplayQuest(const FName QuestId) const;
};
