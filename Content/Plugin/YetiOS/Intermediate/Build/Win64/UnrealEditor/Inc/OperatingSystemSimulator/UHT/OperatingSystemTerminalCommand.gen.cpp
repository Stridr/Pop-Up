// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OperatingSystemSimulator/Public/Programs/OperatingSystemTerminalCommand.h"
#include "GameplayTagContainer.h"
#include "OperatingSystemSimulator/Public/OperatingSystemTypes.h"
#include "OperatingSystemSimulator/Public/Programs/OperatingSystemTerminal.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOperatingSystemTerminalCommand() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	GLOBALMESSENGER_API UFunction* Z_Construct_UDelegateFunction_GlobalMessenger_GlobalMessageReceiveDelegate__DelegateSignature();
	OPERATINGSYSTEMSIMULATOR_API UClass* Z_Construct_UClass_UOperatingSystemTerminal_NoRegister();
	OPERATINGSYSTEMSIMULATOR_API UClass* Z_Construct_UClass_UOperatingSystemTerminalCommand();
	OPERATINGSYSTEMSIMULATOR_API UClass* Z_Construct_UClass_UOperatingSystemTerminalCommand_NoRegister();
	OPERATINGSYSTEMSIMULATOR_API UEnum* Z_Construct_UEnum_OperatingSystemSimulator_EOperatingSystemTerminalMessageType();
	OPERATINGSYSTEMSIMULATOR_API UScriptStruct* Z_Construct_UScriptStruct_FGenericError();
	OPERATINGSYSTEMSIMULATOR_API UScriptStruct* Z_Construct_UScriptStruct_FOperatingSystemCommandFlag();
	OPERATINGSYSTEMSIMULATOR_API UScriptStruct* Z_Construct_UScriptStruct_FVersion();
	UPackage* Z_Construct_UPackage__Script_OperatingSystemSimulator();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OperatingSystemCommandFlag;
class UScriptStruct* FOperatingSystemCommandFlag::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OperatingSystemCommandFlag.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OperatingSystemCommandFlag.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOperatingSystemCommandFlag, (UObject*)Z_Construct_UPackage__Script_OperatingSystemSimulator(), TEXT("OperatingSystemCommandFlag"));
	}
	return Z_Registration_Info_UScriptStruct_OperatingSystemCommandFlag.OuterSingleton;
}
template<> OPERATINGSYSTEMSIMULATOR_API UScriptStruct* StaticStruct<FOperatingSystemCommandFlag>()
{
	return FOperatingSystemCommandFlag::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FOperatingSystemCommandFlag_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Flag_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Flag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsRequired_MetaData[];
#endif
		static void NewProp_bIsRequired_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsRequired;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Description;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOperatingSystemCommandFlag_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Programs/OperatingSystemTerminalCommand.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOperatingSystemCommandFlag_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOperatingSystemCommandFlag>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOperatingSystemCommandFlag_Statics::NewProp_Flag_MetaData[] = {
		{ "Category", "OperatingSystemCommandFlag" },
		{ "Comment", "/** Command flag. Must be prefixed by - or --. Example -a, --info etc. */" },
		{ "ModuleRelativePath", "Public/Programs/OperatingSystemTerminalCommand.h" },
		{ "ToolTip", "Command flag. Must be prefixed by - or --. Example -a, --info etc." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FOperatingSystemCommandFlag_Statics::NewProp_Flag = { "Flag", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOperatingSystemCommandFlag, Flag), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOperatingSystemCommandFlag_Statics::NewProp_Flag_MetaData), Z_Construct_UScriptStruct_FOperatingSystemCommandFlag_Statics::NewProp_Flag_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOperatingSystemCommandFlag_Statics::NewProp_bIsRequired_MetaData[] = {
		{ "Category", "OperatingSystemCommandFlag" },
		{ "Comment", "/** True if this flag is required. Command will not process if this flag is missing. */" },
		{ "ModuleRelativePath", "Public/Programs/OperatingSystemTerminalCommand.h" },
		{ "ToolTip", "True if this flag is required. Command will not process if this flag is missing." },
	};
#endif
	void Z_Construct_UScriptStruct_FOperatingSystemCommandFlag_Statics::NewProp_bIsRequired_SetBit(void* Obj)
	{
		((FOperatingSystemCommandFlag*)Obj)->bIsRequired = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOperatingSystemCommandFlag_Statics::NewProp_bIsRequired = { "bIsRequired", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FOperatingSystemCommandFlag), &Z_Construct_UScriptStruct_FOperatingSystemCommandFlag_Statics::NewProp_bIsRequired_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOperatingSystemCommandFlag_Statics::NewProp_bIsRequired_MetaData), Z_Construct_UScriptStruct_FOperatingSystemCommandFlag_Statics::NewProp_bIsRequired_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOperatingSystemCommandFlag_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "OperatingSystemCommandFlag" },
		{ "Comment", "/** Help description. */" },
		{ "ModuleRelativePath", "Public/Programs/OperatingSystemTerminalCommand.h" },
		{ "ToolTip", "Help description." },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FOperatingSystemCommandFlag_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOperatingSystemCommandFlag, Description), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOperatingSystemCommandFlag_Statics::NewProp_Description_MetaData), Z_Construct_UScriptStruct_FOperatingSystemCommandFlag_Statics::NewProp_Description_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOperatingSystemCommandFlag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOperatingSystemCommandFlag_Statics::NewProp_Flag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOperatingSystemCommandFlag_Statics::NewProp_bIsRequired,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOperatingSystemCommandFlag_Statics::NewProp_Description,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOperatingSystemCommandFlag_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OperatingSystemSimulator,
		nullptr,
		&NewStructOps,
		"OperatingSystemCommandFlag",
		Z_Construct_UScriptStruct_FOperatingSystemCommandFlag_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOperatingSystemCommandFlag_Statics::PropPointers),
		sizeof(FOperatingSystemCommandFlag),
		alignof(FOperatingSystemCommandFlag),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOperatingSystemCommandFlag_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOperatingSystemCommandFlag_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOperatingSystemCommandFlag_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FOperatingSystemCommandFlag()
	{
		if (!Z_Registration_Info_UScriptStruct_OperatingSystemCommandFlag.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OperatingSystemCommandFlag.InnerSingleton, Z_Construct_UScriptStruct_FOperatingSystemCommandFlag_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_OperatingSystemCommandFlag.InnerSingleton;
	}
	DEFINE_FUNCTION(UOperatingSystemTerminalCommand::execHasFlag)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_TestFlag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasFlag(Z_Param_TestFlag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOperatingSystemTerminalCommand::execRemoveMessageListener)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemoveMessageListener();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOperatingSystemTerminalCommand::execListenToMessage)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_FilterTag);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ListenToMessage(Z_Param_FilterTag,FGlobalMessageReceiveDelegate(Z_Param_Out_Callback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOperatingSystemTerminalCommand::execBroadcastMessage)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_FilterTag);
		P_GET_OBJECT(UObject,Z_Param_Payload);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BroadcastMessage(Z_Param_FilterTag,Z_Param_Payload);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOperatingSystemTerminalCommand::execGetCommandDescription)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->GetCommandDescription();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOperatingSystemTerminalCommand::execGetMainCommand)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->GetMainCommand();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOperatingSystemTerminalCommand::execFinishCommand)
	{
		P_GET_STRUCT(FGenericError,Z_Param_ErrorIfAny);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FinishCommand(Z_Param_ErrorIfAny);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOperatingSystemTerminalCommand::execNotifyTerminal)
	{
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_Message);
		P_GET_ENUM(EOperatingSystemTerminalMessageType,Z_Param_MessageType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NotifyTerminal(Z_Param_Out_Message,EOperatingSystemTerminalMessageType(Z_Param_MessageType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOperatingSystemTerminalCommand::execContinueExecution)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ContinueExecution();
		P_NATIVE_END;
	}
	struct OperatingSystemTerminalCommand_eventK2_ProcessCommand_Parms
	{
		FString Command;
	};
	struct OperatingSystemTerminalCommand_eventK2_ProcessCommandAsRoot_Parms
	{
		FString Command;
	};
	static FName NAME_UOperatingSystemTerminalCommand_K2_ContinueExecution = FName(TEXT("K2_ContinueExecution"));
	void UOperatingSystemTerminalCommand::K2_ContinueExecution()
	{
		ProcessEvent(FindFunctionChecked(NAME_UOperatingSystemTerminalCommand_K2_ContinueExecution),NULL);
	}
	static FName NAME_UOperatingSystemTerminalCommand_K2_ProcessCommand = FName(TEXT("K2_ProcessCommand"));
	void UOperatingSystemTerminalCommand::K2_ProcessCommand(const FString& Command)
	{
		OperatingSystemTerminalCommand_eventK2_ProcessCommand_Parms Parms;
		Parms.Command=Command;
		ProcessEvent(FindFunctionChecked(NAME_UOperatingSystemTerminalCommand_K2_ProcessCommand),&Parms);
	}
	static FName NAME_UOperatingSystemTerminalCommand_K2_ProcessCommandAsRoot = FName(TEXT("K2_ProcessCommandAsRoot"));
	void UOperatingSystemTerminalCommand::K2_ProcessCommandAsRoot(const FString& Command)
	{
		OperatingSystemTerminalCommand_eventK2_ProcessCommandAsRoot_Parms Parms;
		Parms.Command=Command;
		ProcessEvent(FindFunctionChecked(NAME_UOperatingSystemTerminalCommand_K2_ProcessCommandAsRoot),&Parms);
	}
	void UOperatingSystemTerminalCommand::StaticRegisterNativesUOperatingSystemTerminalCommand()
	{
		UClass* Class = UOperatingSystemTerminalCommand::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BroadcastMessage", &UOperatingSystemTerminalCommand::execBroadcastMessage },
			{ "ContinueExecution", &UOperatingSystemTerminalCommand::execContinueExecution },
			{ "FinishCommand", &UOperatingSystemTerminalCommand::execFinishCommand },
			{ "GetCommandDescription", &UOperatingSystemTerminalCommand::execGetCommandDescription },
			{ "GetMainCommand", &UOperatingSystemTerminalCommand::execGetMainCommand },
			{ "HasFlag", &UOperatingSystemTerminalCommand::execHasFlag },
			{ "ListenToMessage", &UOperatingSystemTerminalCommand::execListenToMessage },
			{ "NotifyTerminal", &UOperatingSystemTerminalCommand::execNotifyTerminal },
			{ "RemoveMessageListener", &UOperatingSystemTerminalCommand::execRemoveMessageListener },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOperatingSystemTerminalCommand_BroadcastMessage_Statics
	{
		struct OperatingSystemTerminalCommand_eventBroadcastMessage_Parms
		{
			FGameplayTag FilterTag;
			UObject* Payload;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FilterTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FilterTag;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Payload;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemTerminalCommand_BroadcastMessage_Statics::NewProp_FilterTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOperatingSystemTerminalCommand_BroadcastMessage_Statics::NewProp_FilterTag = { "FilterTag", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemTerminalCommand_eventBroadcastMessage_Parms, FilterTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemTerminalCommand_BroadcastMessage_Statics::NewProp_FilterTag_MetaData), Z_Construct_UFunction_UOperatingSystemTerminalCommand_BroadcastMessage_Statics::NewProp_FilterTag_MetaData) }; // 2083603574
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOperatingSystemTerminalCommand_BroadcastMessage_Statics::NewProp_Payload = { "Payload", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemTerminalCommand_eventBroadcastMessage_Parms, Payload), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperatingSystemTerminalCommand_BroadcastMessage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemTerminalCommand_BroadcastMessage_Statics::NewProp_FilterTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemTerminalCommand_BroadcastMessage_Statics::NewProp_Payload,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemTerminalCommand_BroadcastMessage_Statics::Function_MetaDataParams[] = {
		{ "Category", "OperatingSystemTerminalCommand" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Please use Global Message Subsystem -> Broadcast Message." },
		{ "ModuleRelativePath", "Public/Programs/OperatingSystemTerminalCommand.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystemTerminalCommand_BroadcastMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystemTerminalCommand, nullptr, "BroadcastMessage", nullptr, nullptr, Z_Construct_UFunction_UOperatingSystemTerminalCommand_BroadcastMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemTerminalCommand_BroadcastMessage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOperatingSystemTerminalCommand_BroadcastMessage_Statics::OperatingSystemTerminalCommand_eventBroadcastMessage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemTerminalCommand_BroadcastMessage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystemTerminalCommand_BroadcastMessage_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemTerminalCommand_BroadcastMessage_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOperatingSystemTerminalCommand_BroadcastMessage_Statics::OperatingSystemTerminalCommand_eventBroadcastMessage_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOperatingSystemTerminalCommand_BroadcastMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystemTerminalCommand_BroadcastMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOperatingSystemTerminalCommand_ContinueExecution_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemTerminalCommand_ContinueExecution_Statics::Function_MetaDataParams[] = {
		{ "Category", "OperatingSystemTerminalCommand" },
		{ "ModuleRelativePath", "Public/Programs/OperatingSystemTerminalCommand.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystemTerminalCommand_ContinueExecution_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystemTerminalCommand, nullptr, "ContinueExecution", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemTerminalCommand_ContinueExecution_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystemTerminalCommand_ContinueExecution_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UOperatingSystemTerminalCommand_ContinueExecution()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystemTerminalCommand_ContinueExecution_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOperatingSystemTerminalCommand_FinishCommand_Statics
	{
		struct OperatingSystemTerminalCommand_eventFinishCommand_Parms
		{
			FGenericError ErrorIfAny;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ErrorIfAny_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ErrorIfAny;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemTerminalCommand_FinishCommand_Statics::NewProp_ErrorIfAny_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOperatingSystemTerminalCommand_FinishCommand_Statics::NewProp_ErrorIfAny = { "ErrorIfAny", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemTerminalCommand_eventFinishCommand_Parms, ErrorIfAny), Z_Construct_UScriptStruct_FGenericError, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemTerminalCommand_FinishCommand_Statics::NewProp_ErrorIfAny_MetaData), Z_Construct_UFunction_UOperatingSystemTerminalCommand_FinishCommand_Statics::NewProp_ErrorIfAny_MetaData) }; // 4286029882
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperatingSystemTerminalCommand_FinishCommand_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemTerminalCommand_FinishCommand_Statics::NewProp_ErrorIfAny,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemTerminalCommand_FinishCommand_Statics::Function_MetaDataParams[] = {
		{ "Category", "OperatingSystemTerminalCommand" },
		{ "ModuleRelativePath", "Public/Programs/OperatingSystemTerminalCommand.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystemTerminalCommand_FinishCommand_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystemTerminalCommand, nullptr, "FinishCommand", nullptr, nullptr, Z_Construct_UFunction_UOperatingSystemTerminalCommand_FinishCommand_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemTerminalCommand_FinishCommand_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOperatingSystemTerminalCommand_FinishCommand_Statics::OperatingSystemTerminalCommand_eventFinishCommand_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemTerminalCommand_FinishCommand_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystemTerminalCommand_FinishCommand_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemTerminalCommand_FinishCommand_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOperatingSystemTerminalCommand_FinishCommand_Statics::OperatingSystemTerminalCommand_eventFinishCommand_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOperatingSystemTerminalCommand_FinishCommand()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystemTerminalCommand_FinishCommand_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOperatingSystemTerminalCommand_GetCommandDescription_Statics
	{
		struct OperatingSystemTerminalCommand_eventGetCommandDescription_Parms
		{
			FText ReturnValue;
		};
		static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UOperatingSystemTerminalCommand_GetCommandDescription_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemTerminalCommand_eventGetCommandDescription_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperatingSystemTerminalCommand_GetCommandDescription_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemTerminalCommand_GetCommandDescription_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemTerminalCommand_GetCommandDescription_Statics::Function_MetaDataParams[] = {
		{ "Category", "OperatingSystemTerminalCommand" },
		{ "ModuleRelativePath", "Public/Programs/OperatingSystemTerminalCommand.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystemTerminalCommand_GetCommandDescription_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystemTerminalCommand, nullptr, "GetCommandDescription", nullptr, nullptr, Z_Construct_UFunction_UOperatingSystemTerminalCommand_GetCommandDescription_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemTerminalCommand_GetCommandDescription_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOperatingSystemTerminalCommand_GetCommandDescription_Statics::OperatingSystemTerminalCommand_eventGetCommandDescription_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemTerminalCommand_GetCommandDescription_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystemTerminalCommand_GetCommandDescription_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemTerminalCommand_GetCommandDescription_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOperatingSystemTerminalCommand_GetCommandDescription_Statics::OperatingSystemTerminalCommand_eventGetCommandDescription_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOperatingSystemTerminalCommand_GetCommandDescription()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystemTerminalCommand_GetCommandDescription_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOperatingSystemTerminalCommand_GetMainCommand_Statics
	{
		struct OperatingSystemTerminalCommand_eventGetMainCommand_Parms
		{
			FName ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UOperatingSystemTerminalCommand_GetMainCommand_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemTerminalCommand_eventGetMainCommand_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperatingSystemTerminalCommand_GetMainCommand_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemTerminalCommand_GetMainCommand_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemTerminalCommand_GetMainCommand_Statics::Function_MetaDataParams[] = {
		{ "Category", "OperatingSystemTerminalCommand" },
		{ "ModuleRelativePath", "Public/Programs/OperatingSystemTerminalCommand.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystemTerminalCommand_GetMainCommand_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystemTerminalCommand, nullptr, "GetMainCommand", nullptr, nullptr, Z_Construct_UFunction_UOperatingSystemTerminalCommand_GetMainCommand_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemTerminalCommand_GetMainCommand_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOperatingSystemTerminalCommand_GetMainCommand_Statics::OperatingSystemTerminalCommand_eventGetMainCommand_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemTerminalCommand_GetMainCommand_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystemTerminalCommand_GetMainCommand_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemTerminalCommand_GetMainCommand_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOperatingSystemTerminalCommand_GetMainCommand_Statics::OperatingSystemTerminalCommand_eventGetMainCommand_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOperatingSystemTerminalCommand_GetMainCommand()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystemTerminalCommand_GetMainCommand_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOperatingSystemTerminalCommand_HasFlag_Statics
	{
		struct OperatingSystemTerminalCommand_eventHasFlag_Parms
		{
			FString TestFlag;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TestFlag_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_TestFlag;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemTerminalCommand_HasFlag_Statics::NewProp_TestFlag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOperatingSystemTerminalCommand_HasFlag_Statics::NewProp_TestFlag = { "TestFlag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemTerminalCommand_eventHasFlag_Parms, TestFlag), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemTerminalCommand_HasFlag_Statics::NewProp_TestFlag_MetaData), Z_Construct_UFunction_UOperatingSystemTerminalCommand_HasFlag_Statics::NewProp_TestFlag_MetaData) };
	void Z_Construct_UFunction_UOperatingSystemTerminalCommand_HasFlag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OperatingSystemTerminalCommand_eventHasFlag_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOperatingSystemTerminalCommand_HasFlag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OperatingSystemTerminalCommand_eventHasFlag_Parms), &Z_Construct_UFunction_UOperatingSystemTerminalCommand_HasFlag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperatingSystemTerminalCommand_HasFlag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemTerminalCommand_HasFlag_Statics::NewProp_TestFlag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemTerminalCommand_HasFlag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemTerminalCommand_HasFlag_Statics::Function_MetaDataParams[] = {
		{ "Category", "OperatingSystemTerminalCommand" },
		{ "ModuleRelativePath", "Public/Programs/OperatingSystemTerminalCommand.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystemTerminalCommand_HasFlag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystemTerminalCommand, nullptr, "HasFlag", nullptr, nullptr, Z_Construct_UFunction_UOperatingSystemTerminalCommand_HasFlag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemTerminalCommand_HasFlag_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOperatingSystemTerminalCommand_HasFlag_Statics::OperatingSystemTerminalCommand_eventHasFlag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemTerminalCommand_HasFlag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystemTerminalCommand_HasFlag_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemTerminalCommand_HasFlag_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOperatingSystemTerminalCommand_HasFlag_Statics::OperatingSystemTerminalCommand_eventHasFlag_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOperatingSystemTerminalCommand_HasFlag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystemTerminalCommand_HasFlag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOperatingSystemTerminalCommand_K2_ContinueExecution_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemTerminalCommand_K2_ContinueExecution_Statics::Function_MetaDataParams[] = {
		{ "Category", "OperatingSystemTerminalCommand" },
		{ "DisplayName", "OnContinueExecution" },
		{ "ModuleRelativePath", "Public/Programs/OperatingSystemTerminalCommand.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystemTerminalCommand_K2_ContinueExecution_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystemTerminalCommand, nullptr, "K2_ContinueExecution", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemTerminalCommand_K2_ContinueExecution_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystemTerminalCommand_K2_ContinueExecution_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UOperatingSystemTerminalCommand_K2_ContinueExecution()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystemTerminalCommand_K2_ContinueExecution_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOperatingSystemTerminalCommand_K2_ProcessCommand_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Command_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Command;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemTerminalCommand_K2_ProcessCommand_Statics::NewProp_Command_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOperatingSystemTerminalCommand_K2_ProcessCommand_Statics::NewProp_Command = { "Command", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemTerminalCommand_eventK2_ProcessCommand_Parms, Command), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemTerminalCommand_K2_ProcessCommand_Statics::NewProp_Command_MetaData), Z_Construct_UFunction_UOperatingSystemTerminalCommand_K2_ProcessCommand_Statics::NewProp_Command_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperatingSystemTerminalCommand_K2_ProcessCommand_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemTerminalCommand_K2_ProcessCommand_Statics::NewProp_Command,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemTerminalCommand_K2_ProcessCommand_Statics::Function_MetaDataParams[] = {
		{ "Category", "OperatingSystemTerminalCommand" },
		{ "DisplayName", "OnProcessCommand" },
		{ "ModuleRelativePath", "Public/Programs/OperatingSystemTerminalCommand.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystemTerminalCommand_K2_ProcessCommand_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystemTerminalCommand, nullptr, "K2_ProcessCommand", nullptr, nullptr, Z_Construct_UFunction_UOperatingSystemTerminalCommand_K2_ProcessCommand_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemTerminalCommand_K2_ProcessCommand_Statics::PropPointers), sizeof(OperatingSystemTerminalCommand_eventK2_ProcessCommand_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemTerminalCommand_K2_ProcessCommand_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystemTerminalCommand_K2_ProcessCommand_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemTerminalCommand_K2_ProcessCommand_Statics::PropPointers) < 2048);
	static_assert(sizeof(OperatingSystemTerminalCommand_eventK2_ProcessCommand_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOperatingSystemTerminalCommand_K2_ProcessCommand()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystemTerminalCommand_K2_ProcessCommand_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOperatingSystemTerminalCommand_K2_ProcessCommandAsRoot_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Command_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Command;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemTerminalCommand_K2_ProcessCommandAsRoot_Statics::NewProp_Command_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOperatingSystemTerminalCommand_K2_ProcessCommandAsRoot_Statics::NewProp_Command = { "Command", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemTerminalCommand_eventK2_ProcessCommandAsRoot_Parms, Command), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemTerminalCommand_K2_ProcessCommandAsRoot_Statics::NewProp_Command_MetaData), Z_Construct_UFunction_UOperatingSystemTerminalCommand_K2_ProcessCommandAsRoot_Statics::NewProp_Command_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperatingSystemTerminalCommand_K2_ProcessCommandAsRoot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemTerminalCommand_K2_ProcessCommandAsRoot_Statics::NewProp_Command,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemTerminalCommand_K2_ProcessCommandAsRoot_Statics::Function_MetaDataParams[] = {
		{ "Category", "OperatingSystemTerminalCommand" },
		{ "DisplayName", "OnProcessCommandAsRoot" },
		{ "ModuleRelativePath", "Public/Programs/OperatingSystemTerminalCommand.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystemTerminalCommand_K2_ProcessCommandAsRoot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystemTerminalCommand, nullptr, "K2_ProcessCommandAsRoot", nullptr, nullptr, Z_Construct_UFunction_UOperatingSystemTerminalCommand_K2_ProcessCommandAsRoot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemTerminalCommand_K2_ProcessCommandAsRoot_Statics::PropPointers), sizeof(OperatingSystemTerminalCommand_eventK2_ProcessCommandAsRoot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemTerminalCommand_K2_ProcessCommandAsRoot_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystemTerminalCommand_K2_ProcessCommandAsRoot_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemTerminalCommand_K2_ProcessCommandAsRoot_Statics::PropPointers) < 2048);
	static_assert(sizeof(OperatingSystemTerminalCommand_eventK2_ProcessCommandAsRoot_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOperatingSystemTerminalCommand_K2_ProcessCommandAsRoot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystemTerminalCommand_K2_ProcessCommandAsRoot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOperatingSystemTerminalCommand_ListenToMessage_Statics
	{
		struct OperatingSystemTerminalCommand_eventListenToMessage_Parms
		{
			FGameplayTag FilterTag;
			FScriptDelegate Callback;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FilterTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FilterTag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemTerminalCommand_ListenToMessage_Statics::NewProp_FilterTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOperatingSystemTerminalCommand_ListenToMessage_Statics::NewProp_FilterTag = { "FilterTag", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemTerminalCommand_eventListenToMessage_Parms, FilterTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemTerminalCommand_ListenToMessage_Statics::NewProp_FilterTag_MetaData), Z_Construct_UFunction_UOperatingSystemTerminalCommand_ListenToMessage_Statics::NewProp_FilterTag_MetaData) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemTerminalCommand_ListenToMessage_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UOperatingSystemTerminalCommand_ListenToMessage_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemTerminalCommand_eventListenToMessage_Parms, Callback), Z_Construct_UDelegateFunction_GlobalMessenger_GlobalMessageReceiveDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemTerminalCommand_ListenToMessage_Statics::NewProp_Callback_MetaData), Z_Construct_UFunction_UOperatingSystemTerminalCommand_ListenToMessage_Statics::NewProp_Callback_MetaData) }; // 3519243088
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperatingSystemTerminalCommand_ListenToMessage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemTerminalCommand_ListenToMessage_Statics::NewProp_FilterTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemTerminalCommand_ListenToMessage_Statics::NewProp_Callback,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemTerminalCommand_ListenToMessage_Statics::Function_MetaDataParams[] = {
		{ "Category", "OperatingSystemTerminalCommand" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Please use Global Message Subsystem -> Listen to Message." },
		{ "ModuleRelativePath", "Public/Programs/OperatingSystemTerminalCommand.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystemTerminalCommand_ListenToMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystemTerminalCommand, nullptr, "ListenToMessage", nullptr, nullptr, Z_Construct_UFunction_UOperatingSystemTerminalCommand_ListenToMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemTerminalCommand_ListenToMessage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOperatingSystemTerminalCommand_ListenToMessage_Statics::OperatingSystemTerminalCommand_eventListenToMessage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemTerminalCommand_ListenToMessage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystemTerminalCommand_ListenToMessage_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemTerminalCommand_ListenToMessage_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOperatingSystemTerminalCommand_ListenToMessage_Statics::OperatingSystemTerminalCommand_eventListenToMessage_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOperatingSystemTerminalCommand_ListenToMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystemTerminalCommand_ListenToMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOperatingSystemTerminalCommand_NotifyTerminal_Statics
	{
		struct OperatingSystemTerminalCommand_eventNotifyTerminal_Parms
		{
			FText Message;
			EOperatingSystemTerminalMessageType MessageType;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Message;
		static const UECodeGen_Private::FBytePropertyParams NewProp_MessageType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MessageType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_MessageType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemTerminalCommand_NotifyTerminal_Statics::NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UOperatingSystemTerminalCommand_NotifyTerminal_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemTerminalCommand_eventNotifyTerminal_Parms, Message), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemTerminalCommand_NotifyTerminal_Statics::NewProp_Message_MetaData), Z_Construct_UFunction_UOperatingSystemTerminalCommand_NotifyTerminal_Statics::NewProp_Message_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOperatingSystemTerminalCommand_NotifyTerminal_Statics::NewProp_MessageType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemTerminalCommand_NotifyTerminal_Statics::NewProp_MessageType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOperatingSystemTerminalCommand_NotifyTerminal_Statics::NewProp_MessageType = { "MessageType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemTerminalCommand_eventNotifyTerminal_Parms, MessageType), Z_Construct_UEnum_OperatingSystemSimulator_EOperatingSystemTerminalMessageType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemTerminalCommand_NotifyTerminal_Statics::NewProp_MessageType_MetaData), Z_Construct_UFunction_UOperatingSystemTerminalCommand_NotifyTerminal_Statics::NewProp_MessageType_MetaData) }; // 88661471
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperatingSystemTerminalCommand_NotifyTerminal_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemTerminalCommand_NotifyTerminal_Statics::NewProp_Message,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemTerminalCommand_NotifyTerminal_Statics::NewProp_MessageType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemTerminalCommand_NotifyTerminal_Statics::NewProp_MessageType,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemTerminalCommand_NotifyTerminal_Statics::Function_MetaDataParams[] = {
		{ "Category", "OperatingSystemTerminalCommand" },
		{ "ModuleRelativePath", "Public/Programs/OperatingSystemTerminalCommand.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystemTerminalCommand_NotifyTerminal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystemTerminalCommand, nullptr, "NotifyTerminal", nullptr, nullptr, Z_Construct_UFunction_UOperatingSystemTerminalCommand_NotifyTerminal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemTerminalCommand_NotifyTerminal_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOperatingSystemTerminalCommand_NotifyTerminal_Statics::OperatingSystemTerminalCommand_eventNotifyTerminal_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemTerminalCommand_NotifyTerminal_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystemTerminalCommand_NotifyTerminal_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemTerminalCommand_NotifyTerminal_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOperatingSystemTerminalCommand_NotifyTerminal_Statics::OperatingSystemTerminalCommand_eventNotifyTerminal_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOperatingSystemTerminalCommand_NotifyTerminal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystemTerminalCommand_NotifyTerminal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOperatingSystemTerminalCommand_RemoveMessageListener_Statics
	{
		struct OperatingSystemTerminalCommand_eventRemoveMessageListener_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UOperatingSystemTerminalCommand_RemoveMessageListener_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OperatingSystemTerminalCommand_eventRemoveMessageListener_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOperatingSystemTerminalCommand_RemoveMessageListener_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OperatingSystemTerminalCommand_eventRemoveMessageListener_Parms), &Z_Construct_UFunction_UOperatingSystemTerminalCommand_RemoveMessageListener_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperatingSystemTerminalCommand_RemoveMessageListener_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemTerminalCommand_RemoveMessageListener_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemTerminalCommand_RemoveMessageListener_Statics::Function_MetaDataParams[] = {
		{ "Category", "OperatingSystemTerminalCommand" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Please use Global Message Subsystem -> Remove Listener." },
		{ "ModuleRelativePath", "Public/Programs/OperatingSystemTerminalCommand.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystemTerminalCommand_RemoveMessageListener_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystemTerminalCommand, nullptr, "RemoveMessageListener", nullptr, nullptr, Z_Construct_UFunction_UOperatingSystemTerminalCommand_RemoveMessageListener_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemTerminalCommand_RemoveMessageListener_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOperatingSystemTerminalCommand_RemoveMessageListener_Statics::OperatingSystemTerminalCommand_eventRemoveMessageListener_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemTerminalCommand_RemoveMessageListener_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystemTerminalCommand_RemoveMessageListener_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemTerminalCommand_RemoveMessageListener_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOperatingSystemTerminalCommand_RemoveMessageListener_Statics::OperatingSystemTerminalCommand_eventRemoveMessageListener_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOperatingSystemTerminalCommand_RemoveMessageListener()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystemTerminalCommand_RemoveMessageListener_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOperatingSystemTerminalCommand);
	UClass* Z_Construct_UClass_UOperatingSystemTerminalCommand_NoRegister()
	{
		return UOperatingSystemTerminalCommand::StaticClass();
	}
	struct Z_Construct_UClass_UOperatingSystemTerminalCommand_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MainCommand_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_MainCommand;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Description;
		static const UECodeGen_Private::FNamePropertyParams NewProp_AlternateCommands_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AlternateCommands_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_AlternateCommands;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SupportedOperatingSystems_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SupportedOperatingSystems;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRequiresRootPermission_MetaData[];
#endif
		static void NewProp_bRequiresRootPermission_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRequiresRootPermission;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFailIfParametersAreFound_MetaData[];
#endif
		static void NewProp_bFailIfParametersAreFound_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFailIfParametersAreFound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRequireMinOperatingSystemVersion_MetaData[];
#endif
		static void NewProp_bRequireMinOperatingSystemVersion_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRequireMinOperatingSystemVersion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinOperatingSystemVersion_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MinOperatingSystemVersion;
		static const UECodeGen_Private::FStructPropertyParams NewProp_CommandFlags_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CommandFlags_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_CommandFlags;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParentTerminal_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_ParentTerminal;
		static const UECodeGen_Private::FStrPropertyParams NewProp_AvailableFlags_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AvailableFlags_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AvailableFlags;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentCommand_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_CurrentCommand;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FullCommand_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FullCommand;
		static const UECodeGen_Private::FStrPropertyParams NewProp_CommandParameters_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CommandParameters_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CommandParameters;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOperatingSystemTerminalCommand_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_OperatingSystemSimulator,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemTerminalCommand_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UOperatingSystemTerminalCommand_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOperatingSystemTerminalCommand_BroadcastMessage, "BroadcastMessage" }, // 2800128433
		{ &Z_Construct_UFunction_UOperatingSystemTerminalCommand_ContinueExecution, "ContinueExecution" }, // 1093247889
		{ &Z_Construct_UFunction_UOperatingSystemTerminalCommand_FinishCommand, "FinishCommand" }, // 3478095744
		{ &Z_Construct_UFunction_UOperatingSystemTerminalCommand_GetCommandDescription, "GetCommandDescription" }, // 3020623122
		{ &Z_Construct_UFunction_UOperatingSystemTerminalCommand_GetMainCommand, "GetMainCommand" }, // 740897487
		{ &Z_Construct_UFunction_UOperatingSystemTerminalCommand_HasFlag, "HasFlag" }, // 2465520992
		{ &Z_Construct_UFunction_UOperatingSystemTerminalCommand_K2_ContinueExecution, "K2_ContinueExecution" }, // 2956998116
		{ &Z_Construct_UFunction_UOperatingSystemTerminalCommand_K2_ProcessCommand, "K2_ProcessCommand" }, // 1876477156
		{ &Z_Construct_UFunction_UOperatingSystemTerminalCommand_K2_ProcessCommandAsRoot, "K2_ProcessCommandAsRoot" }, // 717811827
		{ &Z_Construct_UFunction_UOperatingSystemTerminalCommand_ListenToMessage, "ListenToMessage" }, // 1271754732
		{ &Z_Construct_UFunction_UOperatingSystemTerminalCommand_NotifyTerminal, "NotifyTerminal" }, // 1270516402
		{ &Z_Construct_UFunction_UOperatingSystemTerminalCommand_RemoveMessageListener, "RemoveMessageListener" }, // 78210888
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemTerminalCommand_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystemTerminalCommand_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Programs/OperatingSystemTerminalCommand.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Programs/OperatingSystemTerminalCommand.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystemTerminalCommand_Statics::NewProp_MainCommand_MetaData[] = {
		{ "Category", "OperatingSystemTerminalCommand" },
		{ "ModuleRelativePath", "Public/Programs/OperatingSystemTerminalCommand.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UOperatingSystemTerminalCommand_Statics::NewProp_MainCommand = { "MainCommand", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOperatingSystemTerminalCommand, MainCommand), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemTerminalCommand_Statics::NewProp_MainCommand_MetaData), Z_Construct_UClass_UOperatingSystemTerminalCommand_Statics::NewProp_MainCommand_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystemTerminalCommand_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "OperatingSystemTerminalCommand" },
		{ "ModuleRelativePath", "Public/Programs/OperatingSystemTerminalCommand.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UOperatingSystemTerminalCommand_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOperatingSystemTerminalCommand, Description), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemTerminalCommand_Statics::NewProp_Description_MetaData), Z_Construct_UClass_UOperatingSystemTerminalCommand_Statics::NewProp_Description_MetaData) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UOperatingSystemTerminalCommand_Statics::NewProp_AlternateCommands_ElementProp = { "AlternateCommands", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystemTerminalCommand_Statics::NewProp_AlternateCommands_MetaData[] = {
		{ "Category", "OperatingSystemTerminalCommand" },
		{ "ModuleRelativePath", "Public/Programs/OperatingSystemTerminalCommand.h" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UOperatingSystemTerminalCommand_Statics::NewProp_AlternateCommands = { "AlternateCommands", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOperatingSystemTerminalCommand, AlternateCommands), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemTerminalCommand_Statics::NewProp_AlternateCommands_MetaData), Z_Construct_UClass_UOperatingSystemTerminalCommand_Statics::NewProp_AlternateCommands_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystemTerminalCommand_Statics::NewProp_SupportedOperatingSystems_MetaData[] = {
		{ "Categories", "OperatingSystem.Type" },
		{ "Category", "OperatingSystemTerminalCommand" },
		{ "ModuleRelativePath", "Public/Programs/OperatingSystemTerminalCommand.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOperatingSystemTerminalCommand_Statics::NewProp_SupportedOperatingSystems = { "SupportedOperatingSystems", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOperatingSystemTerminalCommand, SupportedOperatingSystems), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemTerminalCommand_Statics::NewProp_SupportedOperatingSystems_MetaData), Z_Construct_UClass_UOperatingSystemTerminalCommand_Statics::NewProp_SupportedOperatingSystems_MetaData) }; // 405371792
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystemTerminalCommand_Statics::NewProp_bRequiresRootPermission_MetaData[] = {
		{ "Category", "OperatingSystemTerminalCommand" },
		{ "Comment", "/** If true, then you need to execute this in root user. Example sudo mycommand.\n\x09* NOTE: This setting is only valid if root command from OS is valid. Otherwise this setting has no effect.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Programs/OperatingSystemTerminalCommand.h" },
		{ "ToolTip", "If true, then you need to execute this in root user. Example sudo mycommand.\nNOTE: This setting is only valid if root command from OS is valid. Otherwise this setting has no effect." },
	};
#endif
	void Z_Construct_UClass_UOperatingSystemTerminalCommand_Statics::NewProp_bRequiresRootPermission_SetBit(void* Obj)
	{
		((UOperatingSystemTerminalCommand*)Obj)->bRequiresRootPermission = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOperatingSystemTerminalCommand_Statics::NewProp_bRequiresRootPermission = { "bRequiresRootPermission", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UOperatingSystemTerminalCommand), &Z_Construct_UClass_UOperatingSystemTerminalCommand_Statics::NewProp_bRequiresRootPermission_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemTerminalCommand_Statics::NewProp_bRequiresRootPermission_MetaData), Z_Construct_UClass_UOperatingSystemTerminalCommand_Statics::NewProp_bRequiresRootPermission_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystemTerminalCommand_Statics::NewProp_bFailIfParametersAreFound_MetaData[] = {
		{ "Category", "OperatingSystemTerminalCommand" },
		{ "ModuleRelativePath", "Public/Programs/OperatingSystemTerminalCommand.h" },
	};
#endif
	void Z_Construct_UClass_UOperatingSystemTerminalCommand_Statics::NewProp_bFailIfParametersAreFound_SetBit(void* Obj)
	{
		((UOperatingSystemTerminalCommand*)Obj)->bFailIfParametersAreFound = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOperatingSystemTerminalCommand_Statics::NewProp_bFailIfParametersAreFound = { "bFailIfParametersAreFound", nullptr, (EPropertyFlags)0x00200c0000010001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UOperatingSystemTerminalCommand), &Z_Construct_UClass_UOperatingSystemTerminalCommand_Statics::NewProp_bFailIfParametersAreFound_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemTerminalCommand_Statics::NewProp_bFailIfParametersAreFound_MetaData), Z_Construct_UClass_UOperatingSystemTerminalCommand_Statics::NewProp_bFailIfParametersAreFound_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystemTerminalCommand_Statics::NewProp_bRequireMinOperatingSystemVersion_MetaData[] = {
		{ "Category", "OperatingSystemTerminalCommand" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Programs/OperatingSystemTerminalCommand.h" },
	};
#endif
	void Z_Construct_UClass_UOperatingSystemTerminalCommand_Statics::NewProp_bRequireMinOperatingSystemVersion_SetBit(void* Obj)
	{
		((UOperatingSystemTerminalCommand*)Obj)->bRequireMinOperatingSystemVersion = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOperatingSystemTerminalCommand_Statics::NewProp_bRequireMinOperatingSystemVersion = { "bRequireMinOperatingSystemVersion", nullptr, (EPropertyFlags)0x00200c0000010001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UOperatingSystemTerminalCommand), &Z_Construct_UClass_UOperatingSystemTerminalCommand_Statics::NewProp_bRequireMinOperatingSystemVersion_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemTerminalCommand_Statics::NewProp_bRequireMinOperatingSystemVersion_MetaData), Z_Construct_UClass_UOperatingSystemTerminalCommand_Statics::NewProp_bRequireMinOperatingSystemVersion_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystemTerminalCommand_Statics::NewProp_MinOperatingSystemVersion_MetaData[] = {
		{ "Category", "OperatingSystemTerminalCommand" },
		{ "Comment", "/** If enabled, this command will not execute on Operating System less than this version. */" },
		{ "EditCondition", "bRequireMinOperatingSystemVersion" },
		{ "ModuleRelativePath", "Public/Programs/OperatingSystemTerminalCommand.h" },
		{ "ToolTip", "If enabled, this command will not execute on Operating System less than this version." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOperatingSystemTerminalCommand_Statics::NewProp_MinOperatingSystemVersion = { "MinOperatingSystemVersion", nullptr, (EPropertyFlags)0x00200c0000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOperatingSystemTerminalCommand, MinOperatingSystemVersion), Z_Construct_UScriptStruct_FVersion, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemTerminalCommand_Statics::NewProp_MinOperatingSystemVersion_MetaData), Z_Construct_UClass_UOperatingSystemTerminalCommand_Statics::NewProp_MinOperatingSystemVersion_MetaData) }; // 2963316928
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOperatingSystemTerminalCommand_Statics::NewProp_CommandFlags_ElementProp = { "CommandFlags", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FOperatingSystemCommandFlag, METADATA_PARAMS(0, nullptr) }; // 1476407678
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystemTerminalCommand_Statics::NewProp_CommandFlags_MetaData[] = {
		{ "Category", "OperatingSystemTerminalCommand" },
		{ "ModuleRelativePath", "Public/Programs/OperatingSystemTerminalCommand.h" },
		{ "TitleProperty", "Flag" },
	};
#endif
	static_assert(TModels_V<CGetTypeHashable, FOperatingSystemCommandFlag>, "The structure 'FOperatingSystemCommandFlag' is used in a TSet but does not have a GetValueTypeHash defined");
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UOperatingSystemTerminalCommand_Statics::NewProp_CommandFlags = { "CommandFlags", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOperatingSystemTerminalCommand, CommandFlags), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemTerminalCommand_Statics::NewProp_CommandFlags_MetaData), Z_Construct_UClass_UOperatingSystemTerminalCommand_Statics::NewProp_CommandFlags_MetaData) }; // 1476407678
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystemTerminalCommand_Statics::NewProp_ParentTerminal_MetaData[] = {
		{ "Category", "OperatingSystemTerminalCommand" },
		{ "ModuleRelativePath", "Public/Programs/OperatingSystemTerminalCommand.h" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UOperatingSystemTerminalCommand_Statics::NewProp_ParentTerminal = { "ParentTerminal", nullptr, (EPropertyFlags)0x0024080000002014, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOperatingSystemTerminalCommand, ParentTerminal), Z_Construct_UClass_UOperatingSystemTerminal_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemTerminalCommand_Statics::NewProp_ParentTerminal_MetaData), Z_Construct_UClass_UOperatingSystemTerminalCommand_Statics::NewProp_ParentTerminal_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOperatingSystemTerminalCommand_Statics::NewProp_AvailableFlags_Inner = { "AvailableFlags", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystemTerminalCommand_Statics::NewProp_AvailableFlags_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/Programs/OperatingSystemTerminalCommand.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UOperatingSystemTerminalCommand_Statics::NewProp_AvailableFlags = { "AvailableFlags", nullptr, (EPropertyFlags)0x0020080000022801, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOperatingSystemTerminalCommand, AvailableFlags), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemTerminalCommand_Statics::NewProp_AvailableFlags_MetaData), Z_Construct_UClass_UOperatingSystemTerminalCommand_Statics::NewProp_AvailableFlags_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystemTerminalCommand_Statics::NewProp_CurrentCommand_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/Programs/OperatingSystemTerminalCommand.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOperatingSystemTerminalCommand_Statics::NewProp_CurrentCommand = { "CurrentCommand", nullptr, (EPropertyFlags)0x0040000000022801, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOperatingSystemTerminalCommand, CurrentCommand), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemTerminalCommand_Statics::NewProp_CurrentCommand_MetaData), Z_Construct_UClass_UOperatingSystemTerminalCommand_Statics::NewProp_CurrentCommand_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystemTerminalCommand_Statics::NewProp_FullCommand_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/Programs/OperatingSystemTerminalCommand.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOperatingSystemTerminalCommand_Statics::NewProp_FullCommand = { "FullCommand", nullptr, (EPropertyFlags)0x0040000000022801, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOperatingSystemTerminalCommand, FullCommand), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemTerminalCommand_Statics::NewProp_FullCommand_MetaData), Z_Construct_UClass_UOperatingSystemTerminalCommand_Statics::NewProp_FullCommand_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOperatingSystemTerminalCommand_Statics::NewProp_CommandParameters_Inner = { "CommandParameters", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystemTerminalCommand_Statics::NewProp_CommandParameters_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/Programs/OperatingSystemTerminalCommand.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UOperatingSystemTerminalCommand_Statics::NewProp_CommandParameters = { "CommandParameters", nullptr, (EPropertyFlags)0x0040000000022815, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOperatingSystemTerminalCommand, CommandParameters), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemTerminalCommand_Statics::NewProp_CommandParameters_MetaData), Z_Construct_UClass_UOperatingSystemTerminalCommand_Statics::NewProp_CommandParameters_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOperatingSystemTerminalCommand_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystemTerminalCommand_Statics::NewProp_MainCommand,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystemTerminalCommand_Statics::NewProp_Description,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystemTerminalCommand_Statics::NewProp_AlternateCommands_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystemTerminalCommand_Statics::NewProp_AlternateCommands,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystemTerminalCommand_Statics::NewProp_SupportedOperatingSystems,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystemTerminalCommand_Statics::NewProp_bRequiresRootPermission,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystemTerminalCommand_Statics::NewProp_bFailIfParametersAreFound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystemTerminalCommand_Statics::NewProp_bRequireMinOperatingSystemVersion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystemTerminalCommand_Statics::NewProp_MinOperatingSystemVersion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystemTerminalCommand_Statics::NewProp_CommandFlags_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystemTerminalCommand_Statics::NewProp_CommandFlags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystemTerminalCommand_Statics::NewProp_ParentTerminal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystemTerminalCommand_Statics::NewProp_AvailableFlags_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystemTerminalCommand_Statics::NewProp_AvailableFlags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystemTerminalCommand_Statics::NewProp_CurrentCommand,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystemTerminalCommand_Statics::NewProp_FullCommand,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystemTerminalCommand_Statics::NewProp_CommandParameters_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystemTerminalCommand_Statics::NewProp_CommandParameters,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOperatingSystemTerminalCommand_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOperatingSystemTerminalCommand>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOperatingSystemTerminalCommand_Statics::ClassParams = {
		&UOperatingSystemTerminalCommand::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UOperatingSystemTerminalCommand_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemTerminalCommand_Statics::PropPointers),
		0,
		0x000000A1u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemTerminalCommand_Statics::Class_MetaDataParams), Z_Construct_UClass_UOperatingSystemTerminalCommand_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemTerminalCommand_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UOperatingSystemTerminalCommand()
	{
		if (!Z_Registration_Info_UClass_UOperatingSystemTerminalCommand.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOperatingSystemTerminalCommand.OuterSingleton, Z_Construct_UClass_UOperatingSystemTerminalCommand_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOperatingSystemTerminalCommand.OuterSingleton;
	}
	template<> OPERATINGSYSTEMSIMULATOR_API UClass* StaticClass<UOperatingSystemTerminalCommand>()
	{
		return UOperatingSystemTerminalCommand::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOperatingSystemTerminalCommand);
	UOperatingSystemTerminalCommand::~UOperatingSystemTerminalCommand() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Programs_OperatingSystemTerminalCommand_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Programs_OperatingSystemTerminalCommand_h_Statics::ScriptStructInfo[] = {
		{ FOperatingSystemCommandFlag::StaticStruct, Z_Construct_UScriptStruct_FOperatingSystemCommandFlag_Statics::NewStructOps, TEXT("OperatingSystemCommandFlag"), &Z_Registration_Info_UScriptStruct_OperatingSystemCommandFlag, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOperatingSystemCommandFlag), 1476407678U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Programs_OperatingSystemTerminalCommand_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOperatingSystemTerminalCommand, UOperatingSystemTerminalCommand::StaticClass, TEXT("UOperatingSystemTerminalCommand"), &Z_Registration_Info_UClass_UOperatingSystemTerminalCommand, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOperatingSystemTerminalCommand), 3874506695U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Programs_OperatingSystemTerminalCommand_h_3899968946(TEXT("/Script/OperatingSystemSimulator"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Programs_OperatingSystemTerminalCommand_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Programs_OperatingSystemTerminalCommand_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Programs_OperatingSystemTerminalCommand_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Programs_OperatingSystemTerminalCommand_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
