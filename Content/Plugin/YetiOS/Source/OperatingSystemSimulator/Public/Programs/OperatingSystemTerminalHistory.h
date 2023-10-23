// Copyright 2023 - YetiTech Studios, Pvt Ltd. All Rights Reserved.

#pragma once

#include "OperatingSystemProgramData.h"
#include "OperatingSystemTerminalHistory.generated.h"

class UOperatingSystemTerminal;

UCLASS(Blueprintable, BlueprintType)
class UOperatingSystemTerminalHistory : public UOperatingSystemProgramData
{
	GENERATED_BODY()

	/** How many commands should be supported  */
	UPROPERTY(EditAnywhere, Category = OperatingSystemTerminalHistory)
	uint8 MaxSupportedHistoryCommands;

	UPROPERTY(VisibleInstanceOnly, Transient, Category = OperatingSystemTerminalHistory)
	TArray<FString> CommandHistory;

	UPROPERTY(VisibleInstanceOnly, Transient, Category = OperatingSystemTerminalHistory)
	int32 CommandHistoryIndex;

	TWeakObjectPtr<UOperatingSystemTerminal> ParentTerminal;

public:

	UOperatingSystemTerminalHistory();

protected:

	virtual bool ShouldCreate() const override;
	virtual void OnCreate() override;

public:

	void AddToHistory(const FString& NewCommand);
	void ClearHistory();
	bool GetNextCommand(FString& OutCommand);
	bool GetPreviousCommand(FString& OutCommand);
};
