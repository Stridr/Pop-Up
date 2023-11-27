// Copyright 2023 - YetiTech Studios, Pvt Ltd. All Rights Reserved.

#pragma once

#include "Programs/OperatingSystemBaseProgram.h"
#include "OperatingSystemTypes.h"
#include "Interfaces/OperatingSystemExplorerInterface.h"
#include "OperatingSystemTerminal.generated.h"

class UOperatingSystemCmdCollection;
class UOperatingSystemTerminalCommand;
class UOperatingSystemDirectory;

/**
 * 
 */
UCLASS(Abstract)
class UOperatingSystemTerminal : public UOperatingSystemBaseProgram
{
	GENERATED_BODY()

	UPROPERTY(Transient)
	TSet<TSoftClassPtr<UOperatingSystemTerminalCommand>> CachedAdditionalCommands;

protected:

	UPROPERTY(EditDefaultsOnly, Category = OperatingSystemTerminal)
	TSoftObjectPtr<UOperatingSystemCmdCollection> CommandCollection;

	UPROPERTY(EditDefaultsOnly, Category = OperatingSystemTerminal)
	uint8 bSupportMultipleCommands : 1;

	/** String to use for separating multiple commands. E.g: pwd && ls.
	* NOTE: Does not support space so if you have space, it is automatically removed.
	*/
	UPROPERTY(EditDefaultsOnly, Category = OperatingSystemTerminal, AdvancedDisplay, meta = (EditCondition = "bSupportMultipleCommands"))
	FName MultiCommandOperator;

	/** List of prefixes that must be included when adding flags. */
	UPROPERTY(EditDefaultsOnly, Category = OperatingSystemTerminal, AdvancedDisplay)
	TSet<FName> CommandFlagPrefixes;

	UPROPERTY(EditDefaultsOnly, Category = OperatingSystemTerminal)
	bool bValidateFlags;

private:

	UPROPERTY(VisibleInstanceOnly, BlueprintReadOnly, Transient, Category = OperatingSystemTerminalDebug, meta = (AllowPrivateAccess = true))
	TObjectPtr<UOperatingSystemTerminalCommand> ActiveCommand;

	UPROPERTY(VisibleInstanceOnly, Transient, Category = OperatingSystemTerminalDebug)
	TScriptInterface<IOperatingSystemExplorerInterface> CurrentExplorerInterface;

	UPROPERTY(VisibleInstanceOnly, Transient, Category = OperatingSystemTerminalDebug)
	TArray<FString> QueuedCommands;

	UPROPERTY(VisibleInstanceOnly, BlueprintReadOnly, Transient, Category = OperatingSystemTerminalDebug, meta = (AllowPrivateAccess = true))
	FOperatingSystemUser CurrentUser;

	UPROPERTY(VisibleInstanceOnly, BlueprintReadOnly, Transient, Category = OperatingSystemTerminalDebug, meta = (AllowPrivateAccess = true))
	uint8 bIsRunningAsRoot : 1;

	uint8 bHasBlueprintCommandFinished : 1;
	uint8 bHasBlueprintUserChanged : 1;
	uint8 bHasBlueprintPromptRootPassword : 1;
	uint8 bHasBlueprintPromptUserContinue : 1;
	uint8 bHasBlueprintMessageReceivedFromCommand : 1;

public:
	
	UOperatingSystemTerminal();

	UFUNCTION(BlueprintCallable, Category = OperatingSystemTerminal)
	OPERATINGSYSTEMSIMULATOR_API void ProcessCommand(const FString& TestCommand, FGenericError& OutError);

	UFUNCTION(BlueprintCallable, Category = OperatingSystemTerminal)
	bool ChangeCurrentPath(const FString& TargetPath);

	void DestroyActiveCommand(const FGenericError& ErrorMessage);
	void ChangeCurrentUser(const FOperatingSystemUser& NewUser);

	UFUNCTION(BlueprintCallable, Category = OperatingSystemTerminal)
	OPERATINGSYSTEMSIMULATOR_API void PromptRootPassword();

	UFUNCTION(BlueprintCallable, Category = OperatingSystemTerminal)
	OPERATINGSYSTEMSIMULATOR_API void PromptUserContinue();

	UFUNCTION(BlueprintPure, Category = OperatingSystemTerminalCommand, meta = (AdvancedDisplay = 1))
	OPERATINGSYSTEMSIMULATOR_API bool CheckRootPassword(const FText& TestPassword, const bool bCaseSensitive = true) const;
	
	void MessageReceivedFromCommand(const FText& CmdMsg, const EOperatingSystemTerminalMessageType& CmdMsgType);

	UFUNCTION(BlueprintCallable, Category = OperatingSystemTerminal)
	OPERATINGSYSTEMSIMULATOR_API void VerifyUserPrompt(const bool bIsYes) const;

	UFUNCTION(BlueprintCallable, Category = OperatingSystemTerminal)
	OPERATINGSYSTEMSIMULATOR_API void ClearHistory();

	UFUNCTION(BlueprintPure, Category = OperatingSystemTerminal)
	OPERATINGSYSTEMSIMULATOR_API bool HasRepository() const;

	UFUNCTION(BlueprintPure, Category = OperatingSystemTerminal)
	OPERATINGSYSTEMSIMULATOR_API bool GetNextCommandFromHistory(FString& OutCommand) const;

	UFUNCTION(BlueprintPure, Category = OperatingSystemTerminal)
	OPERATINGSYSTEMSIMULATOR_API bool GetPreviousCommandFromHistory(FString& OutCommand) const;

protected:
	
	OPERATINGSYSTEMSIMULATOR_API virtual void OnValidate(FGenericError& OutError) const override;
	OPERATINGSYSTEMSIMULATOR_API virtual void OnStart(FGenericError& OutError) override;

	UFUNCTION(BlueprintPure, Category = OperatingSystemTerminal)
	UOperatingSystemTerminalCommand* GetCommand(const FString& TestCommand, FGenericError& OutError) const;

	UFUNCTION(BlueprintPure, Category = OperatingSystemTerminal)
	OPERATINGSYSTEMSIMULATOR_API bool GetCurrentDirectoryPath(FString& OutPath) const;

	UFUNCTION(BlueprintImplementableEvent, Category = OperatingSystemTerminal, DisplayName = OnCommandFinished)
	void K2_CommandFinished(const FGenericError& ErrorMessage);

	UFUNCTION(BlueprintImplementableEvent, Category = OperatingSystemTerminal, DisplayName = OnUserChanged)
	void K2_UserChanged();

	UFUNCTION(BlueprintImplementableEvent, Category = OperatingSystemTerminal, DisplayName = OnPromptUserPassword)
	void K2_PromptRootPassword();

	UFUNCTION(BlueprintImplementableEvent, Category = OperatingSystemTerminal, DisplayName = OnPromptUserContinue)
	void K2_PromptUserContinue();

	UFUNCTION(BlueprintImplementableEvent, Category = OperatingSystemTerminal, DisplayName = OnReceivedMessageFromCommand)
	void K2_MessageReceivedFromCommand(const FText& CmdMsg, const EOperatingSystemTerminalMessageType& CmdMsgType);

private:
	static void Internal_FindAdditionalCommands(TSet<TSoftClassPtr<UOperatingSystemTerminalCommand>>& OutCommands);

public:

	OPERATINGSYSTEMSIMULATOR_API bool IsTerminalBusy() const;

	FORCEINLINE bool ValidateFlags() const { return bValidateFlags; }
	FORCEINLINE const TSet<FName>& GetCommandFlagPrefixes() const { return CommandFlagPrefixes; }
	FORCEINLINE FString GetMultiCommandOperatorString() const
	{
		if (MultiCommandOperator.IsNone())
		{
			return " && ";
		}

		auto MultiString = MultiCommandOperator.ToString();
		MultiString.RemoveSpacesInline();
		return FString::Printf(TEXT(" %s "), *MultiString);
	}
};
