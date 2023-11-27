// Copyright 2023 - YetiTech Studios, Pvt Ltd. All Rights Reserved.

#include "Programs/OperatingSystemTerminal.h"
#include "OperatingSystemLogs.h"
#include "Core/OperatingSystemDirectory.h"
#include "OperatingSystemMacros.h"
#include "Programs/OperatingSystemTerminalCommand.h"
#include "Misc/OperatingSystemCmdCollection.h"
#include "Core/OperatingSystem.h"
#include "Core/OperatingSystemPartition.h"
#include "Core/OperatingSystemUnix.h"
#include "Engine/AssetManager.h"
#include "Global/OperatingSystemPluginSettings.h"
#include "Logging/StructuredLog.h"
#include "AssetRegistry/AssetData.h"
#include "Programs/OperatingSystemTerminalHistory.h"

#define LOCTEXT_NAMESPACE "OperatingSystemTerminal"

DEFINE_OS_LOG(Terminal);

UOperatingSystemTerminal::UOperatingSystemTerminal()
	: CommandCollection(nullptr)
	, bSupportMultipleCommands(true)
	, MultiCommandOperator(FName("&&"))
	, CommandFlagPrefixes({ "--", "-" })
	, bValidateFlags(true)
	, ActiveCommand(nullptr)
	, CurrentExplorerInterface(nullptr)
	, QueuedCommands({})
	, CurrentUser(FOperatingSystemUser())
	, bIsRunningAsRoot(false)
{
	Name = LOCTEXT("Name", "Terminal");
	Identifier = FName("terminal");
	SpaceRequiredInMB = 1.f;
	SaveMethod = EProgramSaveMethod::SaveOnExit;
	bAddToDesktop = false;
	bCreateNotification = true;
	bSingleInstanceOnly = false;

	DataClass = UOperatingSystemTerminalHistory::StaticClass();

	IMPLEMENTED_IN_BP_LAMBDA();

	CHECK_IN_BP(UOperatingSystemTerminal, CommandFinished);
	CHECK_IN_BP(UOperatingSystemTerminal, UserChanged);
	CHECK_IN_BP(UOperatingSystemTerminal, PromptRootPassword);
	CHECK_IN_BP(UOperatingSystemTerminal, PromptUserContinue);
	CHECK_IN_BP(UOperatingSystemTerminal, MessageReceivedFromCommand);
}

void UOperatingSystemTerminal::ProcessCommand(const FString& TestCommand, FGenericError& OutError)
{
	if (IsTerminalBusy())
	{
		OutError = MAKE_ERROR("ERR_TERMINAL", "Terminal is busy. Cannot run new commands now.");
		return;
	}

	if (TestCommand.IsEmpty())
	{
		DestroyActiveCommand({});
		return;
	}

	if (const auto TerminalDataObj = GetDataObj<UOperatingSystemTerminalHistory>())
	{
		TerminalDataObj->AddToHistory(TestCommand);
	}

	FString CurrentCommandToRun = TestCommand;
	ActiveCommand = GetCommand(TestCommand, OutError);
	if (!IsValid(ActiveCommand))
	{
		OutError = MAKE_ERROR("ERR_TERMINAL", FString::Printf(TEXT("'%s' is not recognized as an internal or external command,\noperable program or batch file."), *TestCommand));
		DestroyActiveCommand(OutError);
		return;
	}

	if (bSupportMultipleCommands && TestCommand.Contains(GetMultiCommandOperatorString()))
	{
		QueuedCommands.Reset();
		TestCommand.ParseIntoArray(QueuedCommands, *GetMultiCommandOperatorString());

		if (QueuedCommands.IsValidIndex(0))
		{
			CurrentCommandToRun = QueuedCommands[0];
			QueuedCommands.RemoveAt(0);
		}
	}

	ActiveCommand->ProcessCommand(CurrentCommandToRun, OutError);
}

bool UOperatingSystemTerminal::ChangeCurrentPath(const FString& TargetPath)
{
	const auto NewInterface = CurrentExplorerInterface->GetInterfaceFromPath(TargetPath);
	if (NewInterface != nullptr)
	{
		CurrentExplorerInterface = NewInterface;
		return true;
	}

	return false;
}

void UOperatingSystemTerminal::DestroyActiveCommand(const FGenericError& ErrorMessage)
{
	if (ensureAlwaysMsgf(bHasBlueprintCommandFinished, TEXT("K2_CommandFinished not implemented in %s."), *GetClass()->GetName()))
	{
		K2_CommandFinished(ErrorMessage);
	}

	if (IsValid(ActiveCommand))
	{
		ActiveCommand->BeginCommandDestroy();
		ActiveCommand->MarkAsGarbage();
	}
	ActiveCommand = nullptr;

	if (!ErrorMessage.IsValid() && QueuedCommands.IsValidIndex(0))
	{
		const auto NextCommand = QueuedCommands[0];
		QueuedCommands.RemoveAt(0);

		FGenericError OutError;
		ProcessCommand(NextCommand, OutError);
	}
}

void UOperatingSystemTerminal::ChangeCurrentUser(const FOperatingSystemUser& NewUser)
{
	if (CurrentUser == NewUser)
	{
		return;
	}

	bIsRunningAsRoot = false;
	if (GetOperatingSystem()->GetRootUser().IsSet())
	{
		bIsRunningAsRoot = NewUser == GetOperatingSystem()->GetRootUser().GetValue();
	}

	CurrentUser = NewUser;
	if (bHasBlueprintUserChanged)
	{
		K2_UserChanged();
	}
}

void UOperatingSystemTerminal::PromptRootPassword()
{
	if (bHasBlueprintPromptRootPassword)
	{
		K2_PromptRootPassword();
	}
}

void UOperatingSystemTerminal::PromptUserContinue()
{
	if (bHasBlueprintPromptUserContinue)
	{
		K2_PromptUserContinue();
	}
}

bool UOperatingSystemTerminal::CheckRootPassword(const FText& TestPassword, const bool bCaseSensitive) const
{
	const auto OS = GetOperatingSystem();
	if (!IsValid(OS))
	{
		return false;
	}

	if (!OS->GetRootUser().IsSet())
	{
		return false;
	}

	if (ensure(CurrentUser == OS->GetRootUser().GetValue()))
	{
		if (bCaseSensitive ? CurrentUser.Password.EqualTo(TestPassword) : CurrentUser.Password.EqualToCaseIgnored(TestPassword))
		{
			ActiveCommand->ProcessCommandAsRoot();
			return true;
		}
	}

	return false;
}

void UOperatingSystemTerminal::MessageReceivedFromCommand(const FText& CmdMsg, const EOperatingSystemTerminalMessageType& CmdMsgType)
{
	if (ensureAlwaysMsgf(bHasBlueprintMessageReceivedFromCommand, TEXT("K2_MessageReceivedFromCommand not implemented in %s."), *GetClass()->GetName()))
	{
		K2_MessageReceivedFromCommand(CmdMsg, CmdMsgType);
	}
}

void UOperatingSystemTerminal::OnValidate(FGenericError& OutError) const
{
	if (CommandCollection.IsNull())
	{
		OutError = MAKE_ERROR("ERR_TERMINAL", FString::Printf(TEXT("%s validation error: Command collection missing."), *Name.ToString()));
		return;
	}

	if (bSupportMultipleCommands && MultiCommandOperator.IsNone())
	{
		OutError = MAKE_ERROR("ERR_TERMINAL", FString::Printf(TEXT("%s validation error: Multiple command support enabled but failed to provide an operator."), *Name.ToString()));
		return;
	}

	if (CommandFlagPrefixes.IsEmpty())
	{
		OutError = MAKE_ERROR("ERR_TERMINAL", FString::Printf(TEXT("%s validation error: Command flag prefixes must not be empty."), *Name.ToString()));
		return;
	}

	for (const auto& It : CommandFlagPrefixes)
	{
		if (It.IsNone())
		{
			OutError = MAKE_ERROR("ERR_TERMINAL", FString::Printf(TEXT("%s validation error: None or empty entry in Command flag prefixes."), *Name.ToString()));
			return;
		}
	}

	CommandCollection.LoadSynchronous()->Validate(OutError);
}

void UOperatingSystemTerminal::OnStart(FGenericError& OutError)
{
	if (CachedAdditionalCommands.IsEmpty())
	{
		Internal_FindAdditionalCommands(CachedAdditionalCommands);
	}
	
	UOperatingSystemDirectory* OutDirectory;
	GetOperatingSystem()->GetOperatingSystemPartition()->FindDirectoryByTag(DirUsers_Tag, true, OutDirectory);
	CurrentExplorerInterface = OutDirectory;
	if (CurrentExplorerInterface == nullptr)
	{
		OutError = MAKE_ERROR("ERR_TERMINAL", "Current directory not valid.");
	}
}

void UOperatingSystemTerminal::VerifyUserPrompt(const bool bIsYes) const
{
	if (bIsYes)
	{
		ActiveCommand->ContinueExecution();
		return;
	}

	ActiveCommand->Success();
}

void UOperatingSystemTerminal::ClearHistory()
{
	if (const auto TerminalDataObj = GetDataObj<UOperatingSystemTerminalHistory>())
	{
		TerminalDataObj->ClearHistory();
	}
}

bool UOperatingSystemTerminal::HasRepository() const
{
	if (GetOperatingSystem() && GetOperatingSystem()->IsUnix())
	{
		const auto UnixOS = GetOperatingSystem()->GetAsConst<UOperatingSystemUnix>();
		const auto& RepoClasses = UnixOS->GetRepositoryClasses();
		for (const auto& It : RepoClasses)
		{
			// If at least one is valid, that's all we need.
			if (!It.IsNull())
			{
				return true;
			}
		}
	}

	return false;
}

bool UOperatingSystemTerminal::GetNextCommandFromHistory(FString& OutCommand) const
{
	if (const auto TerminalDataObj = GetDataObj<UOperatingSystemTerminalHistory>())
	{
		return TerminalDataObj->GetNextCommand(OutCommand);
	}

	return false;
}

bool UOperatingSystemTerminal::GetPreviousCommandFromHistory(FString& OutCommand) const
{
	if (const auto TerminalDataObj = GetDataObj<UOperatingSystemTerminalHistory>())
	{
		return TerminalDataObj->GetPreviousCommand(OutCommand);
	}

	return false;
}

UOperatingSystemTerminalCommand* UOperatingSystemTerminal::GetCommand(const FString& TestCommand, FGenericError& OutError) const
{
	auto CommandClasses = CommandCollection.LoadSynchronous()->GetCommandClasses();
	CommandClasses.Append(CachedAdditionalCommands);
	
	for (const auto& CmdClass : CommandClasses)
	{
		const auto ProxyCommand = UOperatingSystemTerminalCommand::CreateCommand(const_cast<UOperatingSystemTerminal*>(this), CmdClass, OutError);
		if (OutError.IsValid())
		{
			return nullptr;
		}

		if (ProxyCommand && ProxyCommand->IsSameCommand(TestCommand))
		{
			return ProxyCommand;
		}
	}

	OutError = MAKE_ERROR("ERR_TERMINAL", FString::Printf(TEXT("'%s' not valid."), *TestCommand));
	return nullptr;
}

bool UOperatingSystemTerminal::GetCurrentDirectoryPath(FString& OutPath) const
{
	if (CurrentExplorerInterface)
	{
		auto StringOptional = CurrentExplorerInterface->GetFullPath();
		if (StringOptional.IsSet())
		{
			OutPath = StringOptional.GetValue();
			return true;
		}
	}

	return false;
}

void UOperatingSystemTerminal::Internal_FindAdditionalCommands(TSet<TSoftClassPtr<UOperatingSystemTerminalCommand>>& OutCommands)
{
	TArray<FAssetData> AssetDataList;
	UAssetManager& AssetManager = UAssetManager::Get();

	const TArray<FString>& AssetPaths = UOperatingSystemPluginSettings::Get()->GetAdditionalTerminalCommandsPath();

	AssetManager.ScanPathsForPrimaryAssets(UOperatingSystemTerminalCommand::TerminalCommandAssetTypeName, AssetPaths, UOperatingSystemTerminalCommand::StaticClass(), true);
	AssetManager.GetPrimaryAssetDataList(UOperatingSystemTerminalCommand::TerminalCommandAssetTypeName, AssetDataList);

	OutCommands.Reset();
	OutCommands.Reserve(AssetDataList.Num());

	for (const auto& Asset : AssetDataList)
	{
		UClass* GeneratedClass = nullptr;
		
#if WITH_EDITOR
		if (const auto BaseAsset = Cast<UBlueprint>(Asset.GetAsset()))
		{
			GeneratedClass = BaseAsset->GeneratedClass;
		}
		else
#endif
		{
			// In a packaged game BaseAsset will always be null so this is the workaround for that.
			const FString GeneratedClassName = (Asset.AssetName.ToString() + "_C");
			GeneratedClass = FindObject<UClass>(Asset.GetPackage(), *GeneratedClassName);
		}

		if (GeneratedClass != nullptr)
		{
			OutCommands.Emplace(GeneratedClass);
		}
	}

	UE_LOGFMT(LogOperatingSystemTerminal, Log, "Found {Num} additional command(s).", OutCommands.Num());
}

bool UOperatingSystemTerminal::IsTerminalBusy() const
{
	return IsValid(ActiveCommand);
}

#undef LOCTEXT_NAMESPACE
