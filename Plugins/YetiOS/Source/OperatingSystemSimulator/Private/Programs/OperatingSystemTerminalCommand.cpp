// Copyright 2023 - YetiTech Studios, Pvt Ltd. All Rights Reserved.

#include "Programs/OperatingSystemTerminalCommand.h"
#include "OperatingSystemMacros.h"
#include "Programs/OperatingSystemTerminal.h"
#include "Core/OperatingSystem.h"

const FName UOperatingSystemTerminalCommand::TerminalCommandAssetTypeName = FName("OperatingSystemTerminalCommand");

UOperatingSystemTerminalCommand::UOperatingSystemTerminalCommand()
	: MainCommand(NAME_None)
	, Description(INVTEXT("A help description is not provided for this command."))
	, AlternateCommands({})
	, SupportedOperatingSystems(FGameplayTagContainer())
	, bRequiresRootPermission(false)
	, bFailIfParametersAreFound(true)
	, bRequireMinOperatingSystemVersion(false)
	, MinOperatingSystemVersion(1)
	, CommandFlags({})
	, ParentTerminal(nullptr)
	, CurrentCommand("")
	, FullCommand("")
	, CommandParameters({})
{
	IMPLEMENTED_IN_BP_LAMBDA();

	CHECK_IN_BP(UOperatingSystemTerminalCommand, ProcessCommand);
	CHECK_IN_BP(UOperatingSystemTerminalCommand, ProcessCommandAsRoot);
	CHECK_IN_BP(UOperatingSystemTerminalCommand, ContinueExecution);
}

FPrimaryAssetId UOperatingSystemTerminalCommand::GetPrimaryAssetId() const
{
	return FPrimaryAssetId(TerminalCommandAssetTypeName, GetFName());
}

void UOperatingSystemTerminalCommand::GetAssetRegistryTags(TArray<FAssetRegistryTag>& OutTags) const
{
	OutTags.Emplace(FAssetRegistryTag(TerminalCommandAssetTypeName, GetClass()->GetName(), FAssetRegistryTag::TT_Alphabetical));
}

UOperatingSystemTerminalCommand* UOperatingSystemTerminalCommand::CreateCommand(const TWeakObjectPtr<UOperatingSystemTerminal> OwningTerminal,
    const TSoftClassPtr<UOperatingSystemTerminalCommand>& CommandClass, 
    FGenericError& OutError)
{
	if (!OwningTerminal.IsValid() || CommandClass.IsNull())
	{
		return nullptr;
	}

	auto ProxyCommand = NEW_SOFT_OBJ(UOperatingSystemTerminalCommand, OwningTerminal.Get(), CommandClass, TerminalCommand);
	ProxyCommand->ParentTerminal = OwningTerminal;

	ProxyCommand->Internal_Validate(OutError);
	if (OutError.IsValid())
	{
		ProxyCommand->MarkAsGarbage();
		ProxyCommand = nullptr;
		return nullptr;
	}

	return ProxyCommand;
}

void UOperatingSystemTerminalCommand::ProcessCommand(const FString& TestCommand, FGenericError& OutError)
{
	ON_SCOPE_EXIT
	{
		if (OutError.IsValid())
		{
			Fail(OutError);
		}
	};
	
	if (!SupportedOperatingSystems.IsEmpty() && !SupportedOperatingSystems.HasTagExact(ParentTerminal->GetOperatingSystem()->GetOperatingSystemTag()))
	{
		OutError = MAKE_ERROR("ERR_CMD", FString::Printf(TEXT("Command '%s' is not supported to execute in %s."), *MainCommand.ToString(), *ParentTerminal->GetOperatingSystem()->GetOperatingSystemName().ToString()));
		return;
	}

	FullCommand = TestCommand;

	const UOperatingSystem& ParentOS = *ParentTerminal->GetOperatingSystem();
	ParentTerminal->ChangeCurrentUser(ParentOS.GetCurrentUser());
	
	if (ParentOS.HasValidRootCommandAndUser())
	{
		const auto RootCommandVal = ParentOS.GetRootCommand().GetValue().ToString().ToLower();
		if (FullCommand.StartsWith(RootCommandVal))
		{
			ParentTerminal->ChangeCurrentUser(ParentOS.GetRootUser().GetValue());
		}
		else
		{
			if (bRequiresRootPermission)
			{
				OutError = MAKE_ERROR("ERR_CMD", FString::Printf(TEXT("%s error: '%s' permission denied."), *ParentTerminal->GetProgramName(), *MainCommand.ToString()));
				return;
			}
		}
	}

	if (ParentTerminal->ValidateFlags())
	{
		FString InvalidFlag;
		if (!Internal_ValidateCommandFlags(InvalidFlag))
		{
			OutError = MAKE_ERROR("ERR_CMD", FString::Printf(TEXT("%s error: %s Unknown flag passed."), *ParentTerminal->GetProgramName(), *InvalidFlag));
			return;
		}
	}

	AvailableFlags.Reset();
	for (const auto& It : CommandFlags)
	{
		AvailableFlags.Emplace(It.Flag.ToString());
	}

	for (const auto& It : CommandFlags)
	{
		if (It.bIsRequired && !HasFlag(It.Flag.ToString()))
		{
			OutError = MAKE_ERROR("ERR_CMD", FString::Printf(TEXT("%s error: %s requires flag %s."), *ParentTerminal->GetProgramName(), *MainCommand.ToString(), *It.Flag.ToString()));
			return;
		}
	}

	if (CommandFlags.IsEmpty() && !Internal_GetFlagsFromCommand().IsEmpty())
	{
		OutError = MAKE_ERROR("ERR_CMD", FString::Printf(TEXT("%s error: %s does not support any flags."), *ParentTerminal->GetProgramName(), *MainCommand.ToString()));
		return;
	}

	CommandParameters.Reset();
	CommandParameters = Internal_GetCommandParameters();
	if (bFailIfParametersAreFound && !CommandParameters.IsEmpty())
	{
		OutError = MAKE_ERROR("ERR_CMD", FString::Printf(TEXT("%s error: %s does not support any parameters."), *ParentTerminal->GetProgramName(), *MainCommand.ToString()));
		return;
	}

	if (bRequiresRootPermission && ParentOS.HasValidRootCommandAndUser())
	{
		ParentTerminal->PromptRootPassword();
	}

	OnProcessCommand(TestCommand, bRequiresRootPermission && ParentOS.HasValidRootCommandAndUser());
}

void UOperatingSystemTerminalCommand::ProcessCommandAsRoot()
{
	OnProcessCommandAsRoot(FullCommand);
	if (bHasBlueprintProcessCommandAsRoot)
	{
		K2_ProcessCommandAsRoot(FullCommand);
	}
}

void UOperatingSystemTerminalCommand::ContinueExecution()
{
	OnContinueExecution();
	if (bHasBlueprintContinueExecution)
	{
		K2_ContinueExecution();
	}
}

void UOperatingSystemTerminalCommand::Success()
{
	Internal_Terminate();
	ParentTerminal->DestroyActiveCommand({});
	ParentTerminal.Reset();
}

void UOperatingSystemTerminalCommand::Fail(const FGenericError& ErrorMessage)
{
	Internal_Terminate();
	ParentTerminal->DestroyActiveCommand(ErrorMessage);
	ParentTerminal.Reset();
}

void UOperatingSystemTerminalCommand::BeginCommandDestroy()
{
	RemoveMessageListener();
	OnBeginDestroyCommand();
}

void UOperatingSystemTerminalCommand::NotifyTerminal(const FText& Message, const EOperatingSystemTerminalMessageType MessageType)
{
	ParentTerminal->MessageReceivedFromCommand(Message, MessageType);
}

void UOperatingSystemTerminalCommand::FinishCommand(const FGenericError ErrorIfAny)
{
	ErrorIfAny.IsValid() ? Fail(ErrorIfAny) : Success();
}

void UOperatingSystemTerminalCommand::BroadcastMessage(const FGameplayTag FilterTag, UObject* Payload)
{
	UGlobalMessageSubsystem::Get(*GetWorld())->BroadcastMessage(FilterTag, Payload);
}

void UOperatingSystemTerminalCommand::ListenToMessage(const FGameplayTag FilterTag,
	const FGlobalMessageReceiveDelegate& Callback)
{
	UGlobalMessageSubsystem::Get(*GetWorld())->ListenToMessage(this, FilterTag, Callback);
}

bool UOperatingSystemTerminalCommand::RemoveMessageListener() const
{
	return UGlobalMessageSubsystem::Get(*GetWorld())->RemoveListener(this);
}

void UOperatingSystemTerminalCommand::Internal_Validate(FGenericError& OutError) const
{
	if (MainCommand.IsNone())
	{
		OutError = MAKE_ERROR("ERR_CMD", "Main command is none.");
		return;
	}

	for (const auto& It : AlternateCommands)
	{
		if (It.IsNone())
		{
			OutError = MAKE_ERROR("ERR_CMD", FString::Printf(TEXT("Command '%s' validation error: Alternate commands has None or empty entry."), *MainCommand.ToString()));
			return;
		}
	}

	for (const auto& It : CommandFlags)
	{
		FString ErrorReason;
		if (!It.IsValid(ErrorReason))
		{
			OutError = MAKE_ERROR("ERR_CMD", FString::Printf(TEXT("Command '%s' validation error: %s."), *MainCommand.ToString(), *ErrorReason));
			return;
		}
	}

	if (bRequireMinOperatingSystemVersion && !MinOperatingSystemVersion.IsValid())
	{
		OutError = MAKE_ERROR("ERR_CMD", FString::Printf(TEXT("Command '%s' validation error: MinOperatingSystemVersion invalid."), *MainCommand.ToString()));
		return;
	}

	OnValidate(OutError);
}

bool UOperatingSystemTerminalCommand::Internal_SetCurrentCommand(const FString& TestCommand)
{
	FString MyCommand = TestCommand.ToLower();	
	
	if (ParentTerminal->GetOperatingSystem()->GetRootCommand().IsSet())
	{
		MyCommand = MyCommand.Replace(*ParentTerminal->GetOperatingSystem()->GetRootCommand().GetValue().ToString(), TEXT(""));
	}

	TArray<FString> OutStrings;
	MyCommand.ParseIntoArray(OutStrings, TEXT(" "));

	if (OutStrings.IsValidIndex(0))
	{
		CurrentCommand = OutStrings[0];
		return true;
	}

	CurrentCommand = "";
	return false;
}

TArray<FString> UOperatingSystemTerminalCommand::Internal_GetFlagsFromCommand() const
{
	const FString MyCommand = FullCommand.ToLower();

	TArray<FString> OutFlagsArray;
	MyCommand.ParseIntoArray(OutFlagsArray, TEXT(" "));

	const auto& FlagPrefixes = ParentTerminal->GetCommandFlagPrefixes();
	TArray<FString> ReturnArray;
	for (const auto& It : OutFlagsArray)
	{
		for (const auto& FlagPrefix : FlagPrefixes)
		{
			if (It.StartsWith(FlagPrefix.ToString()))
			{
				ReturnArray.Emplace(It);
				break;
			}
		}
	}

	return ReturnArray;
}

TArray<FString> UOperatingSystemTerminalCommand::Internal_GetCommandParameters() const
{	
	const FString MyCommand = ParentTerminal->GetOperatingSystem()->GetRootCommand().IsSet() ? FullCommand.ToLower().Replace(*ParentTerminal->GetOperatingSystem()->GetRootCommand().GetValue().ToString(), TEXT("")) : FullCommand;
	TArray<FString> OutStrings;
	MyCommand.ParseIntoArray(OutStrings, TEXT(" "));
	OutStrings.RemoveAt(0); // Remove the first entry which will be the main command. For example: "help cd", help will be the first index and we don't need it.

	const auto& FlagPrefixes = ParentTerminal->GetCommandFlagPrefixes();
	TArray<FString> ReturnResult;

	TOptional<FString> EntryToAdd;
	for (const auto& It : OutStrings)
	{
		for (const auto& FlagPrefix : FlagPrefixes)
		{
			EntryToAdd = It;
			if (It.StartsWith(FlagPrefix.ToString()) || It == CurrentCommand)
			{
				EntryToAdd.Reset();
			}
		}

		if (EntryToAdd.IsSet())
		{
			ReturnResult.Emplace(EntryToAdd.GetValue());
		}
	}

	return ReturnResult;
}

void UOperatingSystemTerminalCommand::Internal_Terminate()
{
	ParentTerminal->ChangeCurrentUser(ParentTerminal->GetOperatingSystem()->GetCurrentUser());
	CommandFlags.Empty();
}

void UOperatingSystemTerminalCommand::OnProcessCommand(const FString& Command, const bool bHasRootPermission)
{
	// Process command should ONLY be called if NO root permission is required. If root permission is required check K2_ProcessCommandAsRoot
	if (!bRequiresRootPermission && ensureAlwaysMsgf(bHasBlueprintProcessCommand, TEXT("OnProcessCommand not implemented in %s."), *GetClass()->GetName()))
	{
		K2_ProcessCommand(Command);
	}
}

bool UOperatingSystemTerminalCommand::Internal_ValidateCommandFlags(FString& OutInvalidFlag) const
{
	const auto& MyCommandFlags = Internal_GetFlagsFromCommand();
	for (const auto& It : MyCommandFlags)
	{
		bool bHasCommandFlag = false;
		for (const auto& CmdFlag : CommandFlags)
		{
			if (CmdFlag.Flag.ToString() == It)
			{
				bHasCommandFlag = true;
				break;
			}
		}

		if (!bHasCommandFlag)
		{
			OutInvalidFlag = It;
			return false;
		}
	}

	return true;
}

bool UOperatingSystemTerminalCommand::IsSameCommand(const FString& TestCommand)
{
	if (Internal_SetCurrentCommand(TestCommand))
	{
		if (MainCommand.ToString().ToLower() == CurrentCommand)
		{
			return true;
		}

		for (const auto& It : AlternateCommands)
		{
			if (It.ToString().ToLower() == CurrentCommand)
			{
				return true;
			}
		}
	}

	return false;
}
