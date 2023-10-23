// Copyright 2023 - YetiTech Studios, Pvt Ltd. All Rights Reserved.

#include "GameplayDebuggerCategory_GlobalMessenger.h"
#include "GlobalMessengerModule.h"

FGameplayDebuggerCategory_GlobalMessenger::FGameplayDebuggerCategory_GlobalMessenger()
	: Total(0)
	, ValidEntries(0)
	, InvalidEntries(0)
	, DebugData({})
{
	bShowOnlyWithDebugActor = false;
}

void FGameplayDebuggerCategory_GlobalMessenger::CollectData(APlayerController* OwnerPC, AActor* DebugActor)
{
	DebugData = GMessenger->GetBoundObjectNames(Total, ValidEntries, InvalidEntries);
}

void FGameplayDebuggerCategory_GlobalMessenger::DrawData(APlayerController* OwnerPC, FGameplayDebuggerCanvasContext& CanvasContext)
{
	CanvasContext.Printf(TEXT("Total listening: %i"), Total);
	if (InvalidEntries > 0)
	{
		CanvasContext.Printf(FColor::Green, TEXT("Valid: %i"), ValidEntries);
		CanvasContext.Printf(FColor::Red, TEXT("Invalid: %i"), InvalidEntries);
	}

	CanvasContext.MoveToNewLine();
	CanvasContext.Printf(TEXT("Listeners:"));
	for (const auto& It : DebugData)
	{
		CanvasContext.Printf(TEXT("		%s"), *It);
	}
}

TSharedRef<FGameplayDebuggerCategory> FGameplayDebuggerCategory_GlobalMessenger::MakeInstance()
{
	return MakeShareable(new FGameplayDebuggerCategory_GlobalMessenger());
}
