// Copyright PopUp

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Interaction/InteractionInterface.h"
#include "NPCBase.generated.h"

class UQuestGiverComponent;

UCLASS()
class POPUP_API ANPCBase : public ACharacter, public IInteractionInterface
{
	GENERATED_BODY()

public:
	ANPCBase();

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Quest Giver")
	UQuestGiverComponent* QuestGiverComponent;

	UFUNCTION(BlueprintCallable, Category="Interaction")
	virtual void LookAt() override;

	UFUNCTION(BlueprintCallable, Category="Interaction")
	virtual FString InteractWith() override;
};
