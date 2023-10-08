// Copyright 2023 - YetiTech Studios, Pvt Ltd. All Rights Reserved.

#include "Programs/OperatingSystemTerminalHistory.h"
#include "Programs/OperatingSystemTerminal.h"

UOperatingSystemTerminalHistory::UOperatingSystemTerminalHistory()
	: MaxSupportedHistoryCommands(150)
	, CommandHistory({})
	, CommandHistoryIndex(INDEX_NONE)
{
}

bool UOperatingSystemTerminalHistory::ShouldCreate() const
{
	return MaxSupportedHistoryCommands > 0;
}

void UOperatingSystemTerminalHistory::OnCreate()
{
	Super::OnCreate();
	ParentTerminal = Cast<UOperatingSystemTerminal>(ParentProgram);
	CommandHistory.Reserve(MaxSupportedHistoryCommands);
}

void UOperatingSystemTerminalHistory::AddToHistory(const FString& NewCommand)
{
	CommandHistoryIndex = INDEX_NONE;
	CommandHistory.Emplace(NewCommand);
}

void UOperatingSystemTerminalHistory::ClearHistory()
{
	CommandHistoryIndex = INDEX_NONE;
	CommandHistory.Reset();
}

bool UOperatingSystemTerminalHistory::GetNextCommand(FString& OutCommand)
{
	if (CommandHistory.IsEmpty())
	{
		return false;
	}
	
	CommandHistoryIndex++;
	if (!CommandHistory.IsValidIndex(CommandHistoryIndex))
	{
		CommandHistoryIndex = 0;
	}

	OutCommand = CommandHistory[CommandHistoryIndex];
	return true;
}

bool UOperatingSystemTerminalHistory::GetPreviousCommand(FString& OutCommand)
{
	if (CommandHistory.IsEmpty())
	{
		return false;
	}
	
	CommandHistoryIndex--;
	if (!CommandHistory.IsValidIndex(CommandHistoryIndex))
	{
		CommandHistoryIndex = 0;
	}

	OutCommand = CommandHistory[CommandHistoryIndex];
	return true;
}
