// Copyright 2023 - YetiTech Studios, Pvt Ltd. All Rights Reserved.

#pragma once

#include "GameplayTagContainer.h"
#include "GlobalMessageSubsystem.h"
#include "OperatingSystemTypes.h"
#include "OperatingSystemTerminalCommand.generated.h"

class UOperatingSystemTerminal;

USTRUCT()
struct FOperatingSystemCommandFlag
{
	GENERATED_BODY()

	/** Command flag. Must be prefixed by - or --. Example -a, --info etc. */
	UPROPERTY(EditAnywhere, Category = OperatingSystemCommandFlag)
	FName Flag;

	/** True if this flag is required. Command will not process if this flag is missing. */
	UPROPERTY(EditAnywhere, Category = OperatingSystemCommandFlag)
	bool bIsRequired;
	
	/** Help description. */
	UPROPERTY(EditAnywhere, Category = OperatingSystemCommandFlag)
	FText Description;

	FORCEINLINE bool operator==(const FOperatingSystemCommandFlag& Other) const { return Flag == Other.Flag && bIsRequired == Other.bIsRequired && Description.EqualTo(Other.Description); }
	FORCEINLINE bool IsValid(FString& ErrorReason) const
	{
		ErrorReason.Empty();
		if (Flag.IsNone())
		{
			ErrorReason = "Flag is None or empty";
			return false;
		}

		if (Description.IsEmpty())
		{
			ErrorReason = "Description is empty";
			return false;
		}

		return true;
	}

	FORCEINLINE friend uint32 GetTypeHash(const FOperatingSystemCommandFlag& Other)
	{
		return GetTypeHash(Other.Flag) ^ GetTypeHash(Other.bIsRequired) ^ GetTypeHash(Other.Description.ToString());
	}

	FOperatingSystemCommandFlag() 
		: Flag(NAME_None)
		, bIsRequired(false)
		, Description(FText())
	{
	}
};

UCLASS(Within=OperatingSystemTerminal, Abstract, Blueprintable, BlueprintType)
class UOperatingSystemTerminalCommand : public UObject
{
	GENERATED_BODY()

protected:

	UPROPERTY(EditDefaultsOnly, Category = OperatingSystemTerminalCommand)
	FName MainCommand;

	UPROPERTY(EditDefaultsOnly, Category = OperatingSystemTerminalCommand)
	FText Description;

	UPROPERTY(EditDefaultsOnly, Category = OperatingSystemTerminalCommand)
	TSet<FName> AlternateCommands;

	UPROPERTY(EditDefaultsOnly, Category = OperatingSystemTerminalCommand, meta = (Categories = "OperatingSystem.Type"))
	FGameplayTagContainer SupportedOperatingSystems;

	/** If true, then you need to execute this in root user. Example sudo mycommand.
	* NOTE: This setting is only valid if root command from OS is valid. Otherwise this setting has no effect.
	*/
	UPROPERTY(EditDefaultsOnly, Category = OperatingSystemTerminalCommand)
	uint8 bRequiresRootPermission : 1;

	UPROPERTY(EditDefaultsOnly, Category = OperatingSystemTerminalCommand, AdvancedDisplay)
	uint8 bFailIfParametersAreFound : 1;

	UPROPERTY(EditDefaultsOnly, Category = OperatingSystemTerminalCommand, AdvancedDisplay, meta = (InlineEditConditionToggle))
	uint8 bRequireMinOperatingSystemVersion : 1;

	/** If enabled, this command will not execute on Operating System less than this version. */
	UPROPERTY(EditDefaultsOnly, Category = OperatingSystemTerminalCommand, AdvancedDisplay, meta = (EditCondition = bRequireMinOperatingSystemVersion))
	FVersion MinOperatingSystemVersion;

	UPROPERTY(EditDefaultsOnly, Category = OperatingSystemTerminalCommand, meta = (TitleProperty = "Flag"))
	TSet<FOperatingSystemCommandFlag> CommandFlags;

	UPROPERTY(BlueprintReadOnly, Transient, Category = OperatingSystemTerminalCommand)
	TWeakObjectPtr<UOperatingSystemTerminal> ParentTerminal;

	UPROPERTY(VisibleInstanceOnly, Transient, Category = Debug)
	TArray<FString> AvailableFlags;

private:

	UPROPERTY(VisibleInstanceOnly, Transient, Category = Debug)
	FString CurrentCommand;

	UPROPERTY(VisibleInstanceOnly, Transient, Category = Debug)
	FString FullCommand;

	UPROPERTY(VisibleInstanceOnly, BlueprintReadOnly, Transient, Category = Debug, meta = (AllowPrivateAccess = true))
	TArray<FString> CommandParameters;

	mutable TWeakObjectPtr<UWorld> CachedWorld;

	uint8 bHasBlueprintProcessCommand : 1;
	uint8 bHasBlueprintProcessCommandAsRoot : 1;
	uint8 bHasBlueprintContinueExecution : 1;

public:

	static const FName TerminalCommandAssetTypeName;

	UOperatingSystemTerminalCommand();

	virtual FPrimaryAssetId GetPrimaryAssetId() const override final;
	virtual void GetAssetRegistryTags(TArray<FAssetRegistryTag>& OutTags) const override final;
	virtual class UWorld* GetWorld() const override;

	UE_NODISCARD static UOperatingSystemTerminalCommand* CreateCommand(const TWeakObjectPtr<UOperatingSystemTerminal> OwningTerminal,
	    const TSoftClassPtr<UOperatingSystemTerminalCommand>& CommandClass, 
		FGenericError& OutError);

	void ProcessCommand(const FString& TestCommand, FGenericError& OutError);
	void ProcessCommandAsRoot();

	UFUNCTION(BlueprintCallable, Category = OperatingSystemTerminalCommand)
	void ContinueExecution();

	void Success();
	void Fail(const FGenericError& ErrorMessage);
	void BeginCommandDestroy();

	UFUNCTION(BlueprintCallable, Category = OperatingSystemTerminalCommand)
	OPERATINGSYSTEMSIMULATOR_API void NotifyTerminal(const FText& Message, const EOperatingSystemTerminalMessageType MessageType);

	UFUNCTION(BlueprintCallable, Category = OperatingSystemTerminalCommand)
	OPERATINGSYSTEMSIMULATOR_API void FinishCommand(const FGenericError ErrorIfAny);

	UFUNCTION(BlueprintPure, Category = OperatingSystemTerminalCommand)
	OPERATINGSYSTEMSIMULATOR_API FName GetMainCommand() const { return MainCommand; }

	UFUNCTION(BlueprintPure, Category = OperatingSystemTerminalCommand)
	OPERATINGSYSTEMSIMULATOR_API FText GetCommandDescription() const { return Description; }

protected:

	UFUNCTION(BlueprintCallable, Category = OperatingSystemTerminalCommand, meta = (DeprecatedFunction, DeprecationMessage = "Please use Global Message Subsystem -> Broadcast Message."))
	void BroadcastMessage(const FGameplayTag FilterTag, UObject* Payload);

	UFUNCTION(BlueprintCallable, Category = OperatingSystemTerminalCommand, meta = (DeprecatedFunction, DeprecationMessage = "Please use Global Message Subsystem -> Listen to Message."))
	void ListenToMessage(const FGameplayTag FilterTag, const FGlobalMessageReceiveDelegate& Callback);

	UFUNCTION(BlueprintCallable, BlueprintPure = false, Category = OperatingSystemTerminalCommand, meta = (DeprecatedFunction, DeprecationMessage = "Please use Global Message Subsystem -> Remove Listener."))
	bool RemoveMessageListener() const;

private:

	void Internal_Validate(FGenericError& OutError) const;
	bool Internal_SetCurrentCommand(const FString& TestCommand);
	TArray<FString> Internal_GetFlagsFromCommand() const;
	TArray<FString> Internal_GetCommandParameters() const;
	bool Internal_ValidateCommandFlags(FString& OutInvalidFlag) const;
	void Internal_Terminate();

protected:

	OPERATINGSYSTEMSIMULATOR_API virtual void OnValidate(FGenericError& OutError) const {}
	OPERATINGSYSTEMSIMULATOR_API virtual void OnProcessCommand(const FString& Command, const bool bHasRootPermission);
	OPERATINGSYSTEMSIMULATOR_API virtual void OnProcessCommandAsRoot(const FString& Command) {}
	OPERATINGSYSTEMSIMULATOR_API virtual void OnContinueExecution() const {}
	OPERATINGSYSTEMSIMULATOR_API virtual void OnBeginDestroyCommand() {}

	UFUNCTION(BlueprintImplementableEvent, Category = OperatingSystemTerminalCommand, DisplayName = OnProcessCommand)
	void K2_ProcessCommand(const FString& Command);

	UFUNCTION(BlueprintImplementableEvent, Category = OperatingSystemTerminalCommand, DisplayName = OnProcessCommandAsRoot)
	void K2_ProcessCommandAsRoot(const FString& Command);

	UFUNCTION(BlueprintImplementableEvent, Category = OperatingSystemTerminalCommand, DisplayName = OnContinueExecution)
	void K2_ContinueExecution();

public:

	bool IsSameCommand(const FString& TestCommand);

	UFUNCTION(BlueprintPure, Category = OperatingSystemTerminalCommand)
	FORCEINLINE bool HasFlag(const FString& TestFlag) const { return AvailableFlags.Contains(TestFlag) && Internal_GetFlagsFromCommand().Contains(TestFlag); }
};
