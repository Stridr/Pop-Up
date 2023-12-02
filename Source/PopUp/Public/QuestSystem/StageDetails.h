// Copyright PopUp

#pragma once

#include "CoreMinimal.h"
#include "ObjectiveDetails.h"
#include "StageDetails.generated.h"

class UObjectiveDetails;

USTRUCT(BlueprintType)
struct FStageDetails
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Stage Details")
	FText StageName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Stage Details")
	FText StageDescription;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Stage Details")
	TArray<FObjectiveDetails> Objectives;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Stage Details")
	TMap<FName, int32> Rewards;
};
