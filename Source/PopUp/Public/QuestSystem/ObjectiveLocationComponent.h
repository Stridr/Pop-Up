// Copyright PopUp

#pragma once

#include "CoreMinimal.h"
#include "Components/BoxComponent.h"
#include "ObjectiveLocationComponent.generated.h"

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class POPUP_API UObjectiveLocationComponent : public UBoxComponent
{
	GENERATED_BODY()

	UObjectiveLocationComponent();

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Objective")
	FText ObjectiveName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Objective")
	FString ObjectiveId;

	UFUNCTION()
	void OnOverlapBegin(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor,
	                    class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep,
	                    const FHitResult& SweepResult);
};
