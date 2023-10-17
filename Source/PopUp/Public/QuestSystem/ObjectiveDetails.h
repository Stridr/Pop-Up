// Copyright PopUp

#pragma once

#include "CoreMinimal.h"
#include "ObjectiveDetails.generated.h"

UENUM(BlueprintType)
enum class EObjectiveType : uint8
{
	Location UMETA(DisplayName="Location"),
	Interaction UMETA(DisplayName="Interaction"),
	Item UMETA(DisplayName="Item"),
};


USTRUCT(BlueprintType)
struct FObjectiveDetails
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Objective Details")
	FText ObjectiveName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Objective Details")
	FText ObjectiveDescription;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Objective Details")
	EObjectiveType ObjectiveType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Objective Details")
	FString ObjectiveId;

	// This field is used, e.g. if you need to talk to a number of people, collect a number of items, etc.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Objective Details")
	int Quantity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Objective Details")
	bool bIsOptional;
};
