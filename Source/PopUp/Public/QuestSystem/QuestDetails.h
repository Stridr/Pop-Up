// Copyright PopUp

#pragma once

#include "CoreMinimal.h"
#include "StageDetails.h"
#include "QuestDetails.generated.h"

UENUM(BlueprintType)
enum class EQuestType : uint8
{
	MainQuest UMETA(DisplayName="Main Quest"),
	SideQuest UMETA(DisplayName="Side Quest"),
};

USTRUCT(BlueprintType)
struct FQuestDetails : public FTableRowBase
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Quest Details")
	FText QuestName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Quest Details")
	FText QuestDescription;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Quest Details")
	FText TrackingDescription;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Quest Details")
	EQuestType QuestType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Quest Details")
	bool bIsQuestCompleted;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Quest Details")
	TArray<FStageDetails> Stages;
};
