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
	UQuestGiverComponent();

protected:
	virtual void BeginPlay() override;

public:
	virtual void TickComponent(float DeltaTime, ELevelTick TickType,
	                           FActorComponentTickFunction* ThisTickFunction) override;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Quest Data")
	FDataTableRowHandle QuestData;

	void DisplayQuest(const FName QuestId) const;

	UFUNCTION(BlueprintCallable, Category="Interaction")
	virtual void LookAt() override;

	UFUNCTION(BlueprintCallable, Category="Interaction")
	virtual FString InteractWith() override;
};
