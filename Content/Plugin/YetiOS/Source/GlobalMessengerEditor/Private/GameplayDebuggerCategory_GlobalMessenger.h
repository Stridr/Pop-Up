// Copyright 2023 - YetiTech Studios, Pvt Ltd. All Rights Reserved.

#pragma once

#include "GameplayDebuggerCategory.h"

class FGameplayDebuggerCategory_GlobalMessenger : public FGameplayDebuggerCategory
{
protected:

	int32 Total, ValidEntries, InvalidEntries;
	TArray<FString> DebugData;
	
public:
	FGameplayDebuggerCategory_GlobalMessenger();

	virtual void CollectData(APlayerController* OwnerPC, AActor* DebugActor) override;
	virtual void DrawData(APlayerController* OwnerPC, FGameplayDebuggerCanvasContext& CanvasContext) override;

	static TSharedRef<FGameplayDebuggerCategory> MakeInstance();
};
