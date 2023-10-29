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
	FText ObjectiveName = FText::FromString("Objective Name");

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Objective Details")
	FText ObjectiveDescription = FText::FromString("Objective Description");

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Objective Details")
	EObjectiveType ObjectiveType = EObjectiveType::Location;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Objective Details")
	FString ObjectiveId = FString("Objective ID");

	// This field is used, e.g. if you need to talk to a number of people, collect a number of items, etc.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Objective Details")
	int Quantity = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Objective Details")
	bool bIsOptional = false;
};
