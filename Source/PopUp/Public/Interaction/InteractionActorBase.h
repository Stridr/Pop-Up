// Copyright PopUp

#pragma once

#include "CoreMinimal.h"
#include "InteractionInterface.h"
#include "GameFramework/Actor.h"
#include "InteractionActorBase.generated.h"

UCLASS()
class POPUP_API AInteractionActorBase : public AActor, public IInteractionInterface
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AInteractionActorBase();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable, Category="Interaction")
	virtual void LookAt() override;

	UFUNCTION(BlueprintCallable, Category="Interaction")
	virtual FString InteractWith() override;

private:
	UPROPERTY(EditAnywhere, Category="Quest Objective")
	FString ObjectiveName;
};
