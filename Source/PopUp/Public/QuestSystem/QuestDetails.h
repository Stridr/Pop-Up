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
	FText QuestName = FText::FromString("Quest Name");

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Quest Details")
	FText QuestDescription = FText::FromString("Quest Description");

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Quest Details")
	FText TrackingDescription = FText::FromString("Tracking Description");

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Quest Details")
	EQuestType QuestType = EQuestType::MainQuest;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Quest Details")
	bool bIsQuestCompleted = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Quest Details")
	TArray<FStageDetails> Stages;
};
