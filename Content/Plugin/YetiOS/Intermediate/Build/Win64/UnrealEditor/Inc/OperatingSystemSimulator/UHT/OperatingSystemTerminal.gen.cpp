// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OperatingSystemSimulator/Public/Programs/OperatingSystemTerminal.h"
#include "OperatingSystemSimulator/Public/Core/OperatingSystem.h"
#include "OperatingSystemSimulator/Public/OperatingSystemTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOperatingSystemTerminal() {}
// Cross Module References
	OPERATINGSYSTEMSIMULATOR_API UClass* Z_Construct_UClass_UOperatingSystemBaseProgram();
	OPERATINGSYSTEMSIMULATOR_API UClass* Z_Construct_UClass_UOperatingSystemCmdCollection_NoRegister();
	OPERATINGSYSTEMSIMULATOR_API UClass* Z_Construct_UClass_UOperatingSystemExplorerInterface_NoRegister();
	OPERATINGSYSTEMSIMULATOR_API UClass* Z_Construct_UClass_UOperatingSystemTerminal();
	OPERATINGSYSTEMSIMULATOR_API UClass* Z_Construct_UClass_UOperatingSystemTerminal_NoRegister();
	OPERATINGSYSTEMSIMULATOR_API UClass* Z_Construct_UClass_UOperatingSystemTerminalCommand_NoRegister();
	OPERATINGSYSTEMSIMULATOR_API UEnum* Z_Construct_UEnum_OperatingSystemSimulator_EOperatingSystemTerminalMessageType();
	OPERATINGSYSTEMSIMULATOR_API UScriptStruct* Z_Construct_UScriptStruct_FGenericError();
	OPERATINGSYSTEMSIMULATOR_API UScriptStruct* Z_Construct_UScriptStruct_FOperatingSystemUser();
	UPackage* Z_Construct_UPackage__Script_OperatingSystemSimulator();
// End Cross Module References
	DEFINE_FUNCTION(UOperatingSystemTerminal::execGetCurrentDirectoryPath)
	{
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutPath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCurrentDirectoryPath(Z_Param_Out_OutPath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOperatingSystemTerminal::execGetCommand)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_TestCommand);
		P_GET_STRUCT_REF(FGenericError,Z_Param_Out_OutError);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UOperatingSystemTerminalCommand**)Z_Param__Result=P_THIS->GetCommand(Z_Param_TestCommand,Z_Param_Out_OutError);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOperatingSystemTerminal::execGetPreviousCommandFromHistory)
	{
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutCommand);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetPreviousCommandFromHistory(Z_Param_Out_OutCommand);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOperatingSystemTerminal::execGetNextCommandFromHistory)
	{
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutCommand);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetNextCommandFromHistory(Z_Param_Out_OutCommand);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOperatingSystemTerminal::execHasRepository)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasRepository();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOperatingSystemTerminal::execClearHistory)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearHistory();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOperatingSystemTerminal::execVerifyUserPrompt)
	{
		P_GET_UBOOL(Z_Param_bIsYes);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->VerifyUserPrompt(Z_Param_bIsYes);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOperatingSystemTerminal::execCheckRootPassword)
	{
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_TestPassword);
		P_GET_UBOOL(Z_Param_bCaseSensitive);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CheckRootPassword(Z_Param_Out_TestPassword,Z_Param_bCaseSensitive);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOperatingSystemTerminal::execPromptUserContinue)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PromptUserContinue();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOperatingSystemTerminal::execPromptRootPassword)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PromptRootPassword();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOperatingSystemTerminal::execChangeCurrentPath)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_TargetPath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ChangeCurrentPath(Z_Param_TargetPath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOperatingSystemTerminal::execProcessCommand)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_TestCommand);
		P_GET_STRUCT_REF(FGenericError,Z_Param_Out_OutError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ProcessCommand(Z_Param_TestCommand,Z_Param_Out_OutError);
		P_NATIVE_END;
	}
	struct OperatingSystemTerminal_eventK2_CommandFinished_Parms
	{
		FGenericError ErrorMessage;
	};
	struct OperatingSystemTerminal_eventK2_MessageReceivedFromCommand_Parms
	{
		FText CmdMsg;
		EOperatingSystemTerminalMessageType CmdMsgType;
	};
	static FName NAME_UOperatingSystemTerminal_K2_CommandFinished = FName(TEXT("K2_CommandFinished"));
	void UOperatingSystemTerminal::K2_CommandFinished(FGenericError const& ErrorMessage)
	{
		OperatingSystemTerminal_eventK2_CommandFinished_Parms Parms;
		Parms.ErrorMessage=ErrorMessage;
		ProcessEvent(FindFunctionChecked(NAME_UOperatingSystemTerminal_K2_CommandFinished),&Parms);
	}
	static FName NAME_UOperatingSystemTerminal_K2_MessageReceivedFromCommand = FName(TEXT("K2_MessageReceivedFromCommand"));
	void UOperatingSystemTerminal::K2_MessageReceivedFromCommand(FText const& CmdMsg, EOperatingSystemTerminalMessageType const& CmdMsgType)
	{
		OperatingSystemTerminal_eventK2_MessageReceivedFromCommand_Parms Parms;
		Parms.CmdMsg=CmdMsg;
		Parms.CmdMsgType=CmdMsgType;
		ProcessEvent(FindFunctionChecked(NAME_UOperatingSystemTerminal_K2_MessageReceivedFromCommand),&Parms);
	}
	static FName NAME_UOperatingSystemTerminal_K2_PromptRootPassword = FName(TEXT("K2_PromptRootPassword"));
	void UOperatingSystemTerminal::K2_PromptRootPassword()
	{
		ProcessEvent(FindFunctionChecked(NAME_UOperatingSystemTerminal_K2_PromptRootPassword),NULL);
	}
	static FName NAME_UOperatingSystemTerminal_K2_PromptUserContinue = FName(TEXT("K2_PromptUserContinue"));
	void UOperatingSystemTerminal::K2_PromptUserContinue()
	{
		ProcessEvent(FindFunctionChecked(NAME_UOperatingSystemTerminal_K2_PromptUserContinue),NULL);
	}
	static FName NAME_UOperatingSystemTerminal_K2_UserChanged = FName(TEXT("K2_UserChanged"));
	void UOperatingSystemTerminal::K2_UserChanged()
	{
		ProcessEvent(FindFunctionChecked(NAME_UOperatingSystemTerminal_K2_UserChanged),NULL);
	}
	void UOperatingSystemTerminal::StaticRegisterNativesUOperatingSystemTerminal()
	{
		UClass* Class = UOperatingSystemTerminal::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ChangeCurrentPath", &UOperatingSystemTerminal::execChangeCurrentPath },
			{ "CheckRootPassword", &UOperatingSystemTerminal::execCheckRootPassword },
			{ "ClearHistory", &UOperatingSystemTerminal::execClearHistory },
			{ "GetCommand", &UOperatingSystemTerminal::execGetCommand },
			{ "GetCurrentDirectoryPath", &UOperatingSystemTerminal::execGetCurrentDirectoryPath },
			{ "GetNextCommandFromHistory", &UOperatingSystemTerminal::execGetNextCommandFromHistory },
			{ "GetPreviousCommandFromHistory", &UOperatingSystemTerminal::execGetPreviousCommandFromHistory },
			{ "HasRepository", &UOperatingSystemTerminal::execHasRepository },
			{ "ProcessCommand", &UOperatingSystemTerminal::execProcessCommand },
			{ "PromptRootPassword", &UOperatingSystemTerminal::execPromptRootPassword },
			{ "PromptUserContinue", &UOperatingSystemTerminal::execPromptUserContinue },
			{ "VerifyUserPrompt", &UOperatingSystemTerminal::execVerifyUserPrompt },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOperatingSystemTerminal_ChangeCurrentPath_Statics
	{
		struct OperatingSystemTerminal_eventChangeCurrentPath_Parms
		{
			FString TargetPath;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_TargetPath;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemTerminal_ChangeCurrentPath_Statics::NewProp_TargetPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOperatingSystemTerminal_ChangeCurrentPath_Statics::NewProp_TargetPath = { "TargetPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemTerminal_eventChangeCurrentPath_Parms, TargetPath), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemTerminal_ChangeCurrentPath_Statics::NewProp_TargetPath_MetaData), Z_Construct_UFunction_UOperatingSystemTerminal_ChangeCurrentPath_Statics::NewProp_TargetPath_MetaData) };
	void Z_Construct_UFunction_UOperatingSystemTerminal_ChangeCurrentPath_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OperatingSystemTerminal_eventChangeCurrentPath_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOperatingSystemTerminal_ChangeCurrentPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OperatingSystemTerminal_eventChangeCurrentPath_Parms), &Z_Construct_UFunction_UOperatingSystemTerminal_ChangeCurrentPath_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperatingSystemTerminal_ChangeCurrentPath_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemTerminal_ChangeCurrentPath_Statics::NewProp_TargetPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemTerminal_ChangeCurrentPath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemTerminal_ChangeCurrentPath_Statics::Function_MetaDataParams[] = {
		{ "Category", "OperatingSystemTerminal" },
		{ "ModuleRelativePath", "Public/Programs/OperatingSystemTerminal.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystemTerminal_ChangeCurrentPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystemTerminal, nullptr, "ChangeCurrentPath", nullptr, nullptr, Z_Construct_UFunction_UOperatingSystemTerminal_ChangeCurrentPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemTerminal_ChangeCurrentPath_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOperatingSystemTerminal_ChangeCurrentPath_Statics::OperatingSystemTerminal_eventChangeCurrentPath_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemTerminal_ChangeCurrentPath_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystemTerminal_ChangeCurrentPath_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemTerminal_ChangeCurrentPath_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOperatingSystemTerminal_ChangeCurrentPath_Statics::OperatingSystemTerminal_eventChangeCurrentPath_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOperatingSystemTerminal_ChangeCurrentPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystemTerminal_ChangeCurrentPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOperatingSystemTerminal_CheckRootPassword_Statics
	{
		struct OperatingSystemTerminal_eventCheckRootPassword_Parms
		{
			FText TestPassword;
			bool bCaseSensitive;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TestPassword_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_TestPassword;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCaseSensitive_MetaData[];
#endif
		static void NewProp_bCaseSensitive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCaseSensitive;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemTerminal_CheckRootPassword_Statics::NewProp_TestPassword_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UOperatingSystemTerminal_CheckRootPassword_Statics::NewProp_TestPassword = { "TestPassword", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemTerminal_eventCheckRootPassword_Parms, TestPassword), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemTerminal_CheckRootPassword_Statics::NewProp_TestPassword_MetaData), Z_Construct_UFunction_UOperatingSystemTerminal_CheckRootPassword_Statics::NewProp_TestPassword_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemTerminal_CheckRootPassword_Statics::NewProp_bCaseSensitive_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UOperatingSystemTerminal_CheckRootPassword_Statics::NewProp_bCaseSensitive_SetBit(void* Obj)
	{
		((OperatingSystemTerminal_eventCheckRootPassword_Parms*)Obj)->bCaseSensitive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOperatingSystemTerminal_CheckRootPassword_Statics::NewProp_bCaseSensitive = { "bCaseSensitive", nullptr, (EPropertyFlags)0x0010040000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OperatingSystemTerminal_eventCheckRootPassword_Parms), &Z_Construct_UFunction_UOperatingSystemTerminal_CheckRootPassword_Statics::NewProp_bCaseSensitive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemTerminal_CheckRootPassword_Statics::NewProp_bCaseSensitive_MetaData), Z_Construct_UFunction_UOperatingSystemTerminal_CheckRootPassword_Statics::NewProp_bCaseSensitive_MetaData) };
	void Z_Construct_UFunction_UOperatingSystemTerminal_CheckRootPassword_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OperatingSystemTerminal_eventCheckRootPassword_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOperatingSystemTerminal_CheckRootPassword_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OperatingSystemTerminal_eventCheckRootPassword_Parms), &Z_Construct_UFunction_UOperatingSystemTerminal_CheckRootPassword_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperatingSystemTerminal_CheckRootPassword_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemTerminal_CheckRootPassword_Statics::NewProp_TestPassword,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemTerminal_CheckRootPassword_Statics::NewProp_bCaseSensitive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemTerminal_CheckRootPassword_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemTerminal_CheckRootPassword_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "1" },
		{ "Category", "OperatingSystemTerminalCommand" },
		{ "CPP_Default_bCaseSensitive", "true" },
		{ "ModuleRelativePath", "Public/Programs/OperatingSystemTerminal.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystemTerminal_CheckRootPassword_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystemTerminal, nullptr, "CheckRootPassword", nullptr, nullptr, Z_Construct_UFunction_UOperatingSystemTerminal_CheckRootPassword_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemTerminal_CheckRootPassword_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOperatingSystemTerminal_CheckRootPassword_Statics::OperatingSystemTerminal_eventCheckRootPassword_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemTerminal_CheckRootPassword_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystemTerminal_CheckRootPassword_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemTerminal_CheckRootPassword_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOperatingSystemTerminal_CheckRootPassword_Statics::OperatingSystemTerminal_eventCheckRootPassword_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOperatingSystemTerminal_CheckRootPassword()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystemTerminal_CheckRootPassword_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOperatingSystemTerminal_ClearHistory_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemTerminal_ClearHistory_Statics::Function_MetaDataParams[] = {
		{ "Category", "OperatingSystemTerminal" },
		{ "ModuleRelativePath", "Public/Programs/OperatingSystemTerminal.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystemTerminal_ClearHistory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystemTerminal, nullptr, "ClearHistory", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemTerminal_ClearHistory_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystemTerminal_ClearHistory_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UOperatingSystemTerminal_ClearHistory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystemTerminal_ClearHistory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOperatingSystemTerminal_GetCommand_Statics
	{
		struct OperatingSystemTerminal_eventGetCommand_Parms
		{
			FString TestCommand;
			FGenericError OutError;
			UOperatingSystemTerminalCommand* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TestCommand_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_TestCommand;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutError;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemTerminal_GetCommand_Statics::NewProp_TestCommand_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOperatingSystemTerminal_GetCommand_Statics::NewProp_TestCommand = { "TestCommand", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemTerminal_eventGetCommand_Parms, TestCommand), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemTerminal_GetCommand_Statics::NewProp_TestCommand_MetaData), Z_Construct_UFunction_UOperatingSystemTerminal_GetCommand_Statics::NewProp_TestCommand_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOperatingSystemTerminal_GetCommand_Statics::NewProp_OutError = { "OutError", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemTerminal_eventGetCommand_Parms, OutError), Z_Construct_UScriptStruct_FGenericError, METADATA_PARAMS(0, nullptr) }; // 4286029882
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOperatingSystemTerminal_GetCommand_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemTerminal_eventGetCommand_Parms, ReturnValue), Z_Construct_UClass_UOperatingSystemTerminalCommand_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperatingSystemTerminal_GetCommand_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemTerminal_GetCommand_Statics::NewProp_TestCommand,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemTerminal_GetCommand_Statics::NewProp_OutError,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemTerminal_GetCommand_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemTerminal_GetCommand_Statics::Function_MetaDataParams[] = {
		{ "Category", "OperatingSystemTerminal" },
		{ "ModuleRelativePath", "Public/Programs/OperatingSystemTerminal.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystemTerminal_GetCommand_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystemTerminal, nullptr, "GetCommand", nullptr, nullptr, Z_Construct_UFunction_UOperatingSystemTerminal_GetCommand_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemTerminal_GetCommand_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOperatingSystemTerminal_GetCommand_Statics::OperatingSystemTerminal_eventGetCommand_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemTerminal_GetCommand_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystemTerminal_GetCommand_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemTerminal_GetCommand_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOperatingSystemTerminal_GetCommand_Statics::OperatingSystemTerminal_eventGetCommand_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOperatingSystemTerminal_GetCommand()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystemTerminal_GetCommand_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOperatingSystemTerminal_GetCurrentDirectoryPath_Statics
	{
		struct OperatingSystemTerminal_eventGetCurrentDirectoryPath_Parms
		{
			FString OutPath;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutPath;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOperatingSystemTerminal_GetCurrentDirectoryPath_Statics::NewProp_OutPath = { "OutPath", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemTerminal_eventGetCurrentDirectoryPath_Parms, OutPath), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UOperatingSystemTerminal_GetCurrentDirectoryPath_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OperatingSystemTerminal_eventGetCurrentDirectoryPath_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOperatingSystemTerminal_GetCurrentDirectoryPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OperatingSystemTerminal_eventGetCurrentDirectoryPath_Parms), &Z_Construct_UFunction_UOperatingSystemTerminal_GetCurrentDirectoryPath_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperatingSystemTerminal_GetCurrentDirectoryPath_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemTerminal_GetCurrentDirectoryPath_Statics::NewProp_OutPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemTerminal_GetCurrentDirectoryPath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemTerminal_GetCurrentDirectoryPath_Statics::Function_MetaDataParams[] = {
		{ "Category", "OperatingSystemTerminal" },
		{ "ModuleRelativePath", "Public/Programs/OperatingSystemTerminal.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystemTerminal_GetCurrentDirectoryPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystemTerminal, nullptr, "GetCurrentDirectoryPath", nullptr, nullptr, Z_Construct_UFunction_UOperatingSystemTerminal_GetCurrentDirectoryPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemTerminal_GetCurrentDirectoryPath_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOperatingSystemTerminal_GetCurrentDirectoryPath_Statics::OperatingSystemTerminal_eventGetCurrentDirectoryPath_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54480403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemTerminal_GetCurrentDirectoryPath_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystemTerminal_GetCurrentDirectoryPath_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemTerminal_GetCurrentDirectoryPath_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOperatingSystemTerminal_GetCurrentDirectoryPath_Statics::OperatingSystemTerminal_eventGetCurrentDirectoryPath_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOperatingSystemTerminal_GetCurrentDirectoryPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystemTerminal_GetCurrentDirectoryPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOperatingSystemTerminal_GetNextCommandFromHistory_Statics
	{
		struct OperatingSystemTerminal_eventGetNextCommandFromHistory_Parms
		{
			FString OutCommand;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutCommand;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOperatingSystemTerminal_GetNextCommandFromHistory_Statics::NewProp_OutCommand = { "OutCommand", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemTerminal_eventGetNextCommandFromHistory_Parms, OutCommand), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UOperatingSystemTerminal_GetNextCommandFromHistory_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OperatingSystemTerminal_eventGetNextCommandFromHistory_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOperatingSystemTerminal_GetNextCommandFromHistory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OperatingSystemTerminal_eventGetNextCommandFromHistory_Parms), &Z_Construct_UFunction_UOperatingSystemTerminal_GetNextCommandFromHistory_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperatingSystemTerminal_GetNextCommandFromHistory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemTerminal_GetNextCommandFromHistory_Statics::NewProp_OutCommand,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemTerminal_GetNextCommandFromHistory_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemTerminal_GetNextCommandFromHistory_Statics::Function_MetaDataParams[] = {
		{ "Category", "OperatingSystemTerminal" },
		{ "ModuleRelativePath", "Public/Programs/OperatingSystemTerminal.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystemTerminal_GetNextCommandFromHistory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystemTerminal, nullptr, "GetNextCommandFromHistory", nullptr, nullptr, Z_Construct_UFunction_UOperatingSystemTerminal_GetNextCommandFromHistory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemTerminal_GetNextCommandFromHistory_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOperatingSystemTerminal_GetNextCommandFromHistory_Statics::OperatingSystemTerminal_eventGetNextCommandFromHistory_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemTerminal_GetNextCommandFromHistory_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystemTerminal_GetNextCommandFromHistory_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemTerminal_GetNextCommandFromHistory_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOperatingSystemTerminal_GetNextCommandFromHistory_Statics::OperatingSystemTerminal_eventGetNextCommandFromHistory_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOperatingSystemTerminal_GetNextCommandFromHistory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystemTerminal_GetNextCommandFromHistory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOperatingSystemTerminal_GetPreviousCommandFromHistory_Statics
	{
		struct OperatingSystemTerminal_eventGetPreviousCommandFromHistory_Parms
		{
			FString OutCommand;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutCommand;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOperatingSystemTerminal_GetPreviousCommandFromHistory_Statics::NewProp_OutCommand = { "OutCommand", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemTerminal_eventGetPreviousCommandFromHistory_Parms, OutCommand), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UOperatingSystemTerminal_GetPreviousCommandFromHistory_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OperatingSystemTerminal_eventGetPreviousCommandFromHistory_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOperatingSystemTerminal_GetPreviousCommandFromHistory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OperatingSystemTerminal_eventGetPreviousCommandFromHistory_Parms), &Z_Construct_UFunction_UOperatingSystemTerminal_GetPreviousCommandFromHistory_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperatingSystemTerminal_GetPreviousCommandFromHistory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemTerminal_GetPreviousCommandFromHistory_Statics::NewProp_OutCommand,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemTerminal_GetPreviousCommandFromHistory_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemTerminal_GetPreviousCommandFromHistory_Statics::Function_MetaDataParams[] = {
		{ "Category", "OperatingSystemTerminal" },
		{ "ModuleRelativePath", "Public/Programs/OperatingSystemTerminal.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystemTerminal_GetPreviousCommandFromHistory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystemTerminal, nullptr, "GetPreviousCommandFromHistory", nullptr, nullptr, Z_Construct_UFunction_UOperatingSystemTerminal_GetPreviousCommandFromHistory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemTerminal_GetPreviousCommandFromHistory_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOperatingSystemTerminal_GetPreviousCommandFromHistory_Statics::OperatingSystemTerminal_eventGetPreviousCommandFromHistory_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemTerminal_GetPreviousCommandFromHistory_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystemTerminal_GetPreviousCommandFromHistory_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemTerminal_GetPreviousCommandFromHistory_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOperatingSystemTerminal_GetPreviousCommandFromHistory_Statics::OperatingSystemTerminal_eventGetPreviousCommandFromHistory_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOperatingSystemTerminal_GetPreviousCommandFromHistory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystemTerminal_GetPreviousCommandFromHistory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOperatingSystemTerminal_HasRepository_Statics
	{
		struct OperatingSystemTerminal_eventHasRepository_Parms
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
	void Z_Construct_UFunction_UOperatingSystemTerminal_HasRepository_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OperatingSystemTerminal_eventHasRepository_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOperatingSystemTerminal_HasRepository_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OperatingSystemTerminal_eventHasRepository_Parms), &Z_Construct_UFunction_UOperatingSystemTerminal_HasRepository_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperatingSystemTerminal_HasRepository_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemTerminal_HasRepository_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemTerminal_HasRepository_Statics::Function_MetaDataParams[] = {
		{ "Category", "OperatingSystemTerminal" },
		{ "ModuleRelativePath", "Public/Programs/OperatingSystemTerminal.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystemTerminal_HasRepository_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystemTerminal, nullptr, "HasRepository", nullptr, nullptr, Z_Construct_UFunction_UOperatingSystemTerminal_HasRepository_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemTerminal_HasRepository_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOperatingSystemTerminal_HasRepository_Statics::OperatingSystemTerminal_eventHasRepository_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemTerminal_HasRepository_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystemTerminal_HasRepository_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemTerminal_HasRepository_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOperatingSystemTerminal_HasRepository_Statics::OperatingSystemTerminal_eventHasRepository_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOperatingSystemTerminal_HasRepository()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystemTerminal_HasRepository_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOperatingSystemTerminal_K2_CommandFinished_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ErrorMessage_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ErrorMessage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemTerminal_K2_CommandFinished_Statics::NewProp_ErrorMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOperatingSystemTerminal_K2_CommandFinished_Statics::NewProp_ErrorMessage = { "ErrorMessage", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemTerminal_eventK2_CommandFinished_Parms, ErrorMessage), Z_Construct_UScriptStruct_FGenericError, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemTerminal_K2_CommandFinished_Statics::NewProp_ErrorMessage_MetaData), Z_Construct_UFunction_UOperatingSystemTerminal_K2_CommandFinished_Statics::NewProp_ErrorMessage_MetaData) }; // 4286029882
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperatingSystemTerminal_K2_CommandFinished_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemTerminal_K2_CommandFinished_Statics::NewProp_ErrorMessage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemTerminal_K2_CommandFinished_Statics::Function_MetaDataParams[] = {
		{ "Category", "OperatingSystemTerminal" },
		{ "DisplayName", "OnCommandFinished" },
		{ "ModuleRelativePath", "Public/Programs/OperatingSystemTerminal.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystemTerminal_K2_CommandFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystemTerminal, nullptr, "K2_CommandFinished", nullptr, nullptr, Z_Construct_UFunction_UOperatingSystemTerminal_K2_CommandFinished_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemTerminal_K2_CommandFinished_Statics::PropPointers), sizeof(OperatingSystemTerminal_eventK2_CommandFinished_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08480800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemTerminal_K2_CommandFinished_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystemTerminal_K2_CommandFinished_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemTerminal_K2_CommandFinished_Statics::PropPointers) < 2048);
	static_assert(sizeof(OperatingSystemTerminal_eventK2_CommandFinished_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOperatingSystemTerminal_K2_CommandFinished()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystemTerminal_K2_CommandFinished_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOperatingSystemTerminal_K2_MessageReceivedFromCommand_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CmdMsg_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_CmdMsg;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CmdMsgType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CmdMsgType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CmdMsgType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemTerminal_K2_MessageReceivedFromCommand_Statics::NewProp_CmdMsg_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UOperatingSystemTerminal_K2_MessageReceivedFromCommand_Statics::NewProp_CmdMsg = { "CmdMsg", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemTerminal_eventK2_MessageReceivedFromCommand_Parms, CmdMsg), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemTerminal_K2_MessageReceivedFromCommand_Statics::NewProp_CmdMsg_MetaData), Z_Construct_UFunction_UOperatingSystemTerminal_K2_MessageReceivedFromCommand_Statics::NewProp_CmdMsg_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOperatingSystemTerminal_K2_MessageReceivedFromCommand_Statics::NewProp_CmdMsgType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemTerminal_K2_MessageReceivedFromCommand_Statics::NewProp_CmdMsgType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOperatingSystemTerminal_K2_MessageReceivedFromCommand_Statics::NewProp_CmdMsgType = { "CmdMsgType", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemTerminal_eventK2_MessageReceivedFromCommand_Parms, CmdMsgType), Z_Construct_UEnum_OperatingSystemSimulator_EOperatingSystemTerminalMessageType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemTerminal_K2_MessageReceivedFromCommand_Statics::NewProp_CmdMsgType_MetaData), Z_Construct_UFunction_UOperatingSystemTerminal_K2_MessageReceivedFromCommand_Statics::NewProp_CmdMsgType_MetaData) }; // 88661471
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperatingSystemTerminal_K2_MessageReceivedFromCommand_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemTerminal_K2_MessageReceivedFromCommand_Statics::NewProp_CmdMsg,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemTerminal_K2_MessageReceivedFromCommand_Statics::NewProp_CmdMsgType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemTerminal_K2_MessageReceivedFromCommand_Statics::NewProp_CmdMsgType,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemTerminal_K2_MessageReceivedFromCommand_Statics::Function_MetaDataParams[] = {
		{ "Category", "OperatingSystemTerminal" },
		{ "DisplayName", "OnReceivedMessageFromCommand" },
		{ "ModuleRelativePath", "Public/Programs/OperatingSystemTerminal.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystemTerminal_K2_MessageReceivedFromCommand_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystemTerminal, nullptr, "K2_MessageReceivedFromCommand", nullptr, nullptr, Z_Construct_UFunction_UOperatingSystemTerminal_K2_MessageReceivedFromCommand_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemTerminal_K2_MessageReceivedFromCommand_Statics::PropPointers), sizeof(OperatingSystemTerminal_eventK2_MessageReceivedFromCommand_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08480800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemTerminal_K2_MessageReceivedFromCommand_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystemTerminal_K2_MessageReceivedFromCommand_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemTerminal_K2_MessageReceivedFromCommand_Statics::PropPointers) < 2048);
	static_assert(sizeof(OperatingSystemTerminal_eventK2_MessageReceivedFromCommand_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOperatingSystemTerminal_K2_MessageReceivedFromCommand()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystemTerminal_K2_MessageReceivedFromCommand_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOperatingSystemTerminal_K2_PromptRootPassword_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemTerminal_K2_PromptRootPassword_Statics::Function_MetaDataParams[] = {
		{ "Category", "OperatingSystemTerminal" },
		{ "DisplayName", "OnPromptUserPassword" },
		{ "ModuleRelativePath", "Public/Programs/OperatingSystemTerminal.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystemTerminal_K2_PromptRootPassword_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystemTerminal, nullptr, "K2_PromptRootPassword", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemTerminal_K2_PromptRootPassword_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystemTerminal_K2_PromptRootPassword_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UOperatingSystemTerminal_K2_PromptRootPassword()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystemTerminal_K2_PromptRootPassword_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOperatingSystemTerminal_K2_PromptUserContinue_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemTerminal_K2_PromptUserContinue_Statics::Function_MetaDataParams[] = {
		{ "Category", "OperatingSystemTerminal" },
		{ "DisplayName", "OnPromptUserContinue" },
		{ "ModuleRelativePath", "Public/Programs/OperatingSystemTerminal.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystemTerminal_K2_PromptUserContinue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystemTerminal, nullptr, "K2_PromptUserContinue", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemTerminal_K2_PromptUserContinue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystemTerminal_K2_PromptUserContinue_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UOperatingSystemTerminal_K2_PromptUserContinue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystemTerminal_K2_PromptUserContinue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOperatingSystemTerminal_K2_UserChanged_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemTerminal_K2_UserChanged_Statics::Function_MetaDataParams[] = {
		{ "Category", "OperatingSystemTerminal" },
		{ "DisplayName", "OnUserChanged" },
		{ "ModuleRelativePath", "Public/Programs/OperatingSystemTerminal.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystemTerminal_K2_UserChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystemTerminal, nullptr, "K2_UserChanged", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemTerminal_K2_UserChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystemTerminal_K2_UserChanged_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UOperatingSystemTerminal_K2_UserChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystemTerminal_K2_UserChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOperatingSystemTerminal_ProcessCommand_Statics
	{
		struct OperatingSystemTerminal_eventProcessCommand_Parms
		{
			FString TestCommand;
			FGenericError OutError;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TestCommand_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_TestCommand;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutError;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemTerminal_ProcessCommand_Statics::NewProp_TestCommand_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOperatingSystemTerminal_ProcessCommand_Statics::NewProp_TestCommand = { "TestCommand", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemTerminal_eventProcessCommand_Parms, TestCommand), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemTerminal_ProcessCommand_Statics::NewProp_TestCommand_MetaData), Z_Construct_UFunction_UOperatingSystemTerminal_ProcessCommand_Statics::NewProp_TestCommand_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOperatingSystemTerminal_ProcessCommand_Statics::NewProp_OutError = { "OutError", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemTerminal_eventProcessCommand_Parms, OutError), Z_Construct_UScriptStruct_FGenericError, METADATA_PARAMS(0, nullptr) }; // 4286029882
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperatingSystemTerminal_ProcessCommand_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemTerminal_ProcessCommand_Statics::NewProp_TestCommand,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemTerminal_ProcessCommand_Statics::NewProp_OutError,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemTerminal_ProcessCommand_Statics::Function_MetaDataParams[] = {
		{ "Category", "OperatingSystemTerminal" },
		{ "ModuleRelativePath", "Public/Programs/OperatingSystemTerminal.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystemTerminal_ProcessCommand_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystemTerminal, nullptr, "ProcessCommand", nullptr, nullptr, Z_Construct_UFunction_UOperatingSystemTerminal_ProcessCommand_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemTerminal_ProcessCommand_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOperatingSystemTerminal_ProcessCommand_Statics::OperatingSystemTerminal_eventProcessCommand_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemTerminal_ProcessCommand_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystemTerminal_ProcessCommand_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemTerminal_ProcessCommand_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOperatingSystemTerminal_ProcessCommand_Statics::OperatingSystemTerminal_eventProcessCommand_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOperatingSystemTerminal_ProcessCommand()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystemTerminal_ProcessCommand_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOperatingSystemTerminal_PromptRootPassword_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemTerminal_PromptRootPassword_Statics::Function_MetaDataParams[] = {
		{ "Category", "OperatingSystemTerminal" },
		{ "ModuleRelativePath", "Public/Programs/OperatingSystemTerminal.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystemTerminal_PromptRootPassword_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystemTerminal, nullptr, "PromptRootPassword", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemTerminal_PromptRootPassword_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystemTerminal_PromptRootPassword_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UOperatingSystemTerminal_PromptRootPassword()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystemTerminal_PromptRootPassword_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOperatingSystemTerminal_PromptUserContinue_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemTerminal_PromptUserContinue_Statics::Function_MetaDataParams[] = {
		{ "Category", "OperatingSystemTerminal" },
		{ "ModuleRelativePath", "Public/Programs/OperatingSystemTerminal.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystemTerminal_PromptUserContinue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystemTerminal, nullptr, "PromptUserContinue", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemTerminal_PromptUserContinue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystemTerminal_PromptUserContinue_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UOperatingSystemTerminal_PromptUserContinue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystemTerminal_PromptUserContinue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOperatingSystemTerminal_VerifyUserPrompt_Statics
	{
		struct OperatingSystemTerminal_eventVerifyUserPrompt_Parms
		{
			bool bIsYes;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsYes_MetaData[];
#endif
		static void NewProp_bIsYes_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsYes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemTerminal_VerifyUserPrompt_Statics::NewProp_bIsYes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UOperatingSystemTerminal_VerifyUserPrompt_Statics::NewProp_bIsYes_SetBit(void* Obj)
	{
		((OperatingSystemTerminal_eventVerifyUserPrompt_Parms*)Obj)->bIsYes = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOperatingSystemTerminal_VerifyUserPrompt_Statics::NewProp_bIsYes = { "bIsYes", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OperatingSystemTerminal_eventVerifyUserPrompt_Parms), &Z_Construct_UFunction_UOperatingSystemTerminal_VerifyUserPrompt_Statics::NewProp_bIsYes_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemTerminal_VerifyUserPrompt_Statics::NewProp_bIsYes_MetaData), Z_Construct_UFunction_UOperatingSystemTerminal_VerifyUserPrompt_Statics::NewProp_bIsYes_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperatingSystemTerminal_VerifyUserPrompt_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemTerminal_VerifyUserPrompt_Statics::NewProp_bIsYes,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemTerminal_VerifyUserPrompt_Statics::Function_MetaDataParams[] = {
		{ "Category", "OperatingSystemTerminal" },
		{ "ModuleRelativePath", "Public/Programs/OperatingSystemTerminal.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystemTerminal_VerifyUserPrompt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystemTerminal, nullptr, "VerifyUserPrompt", nullptr, nullptr, Z_Construct_UFunction_UOperatingSystemTerminal_VerifyUserPrompt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemTerminal_VerifyUserPrompt_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOperatingSystemTerminal_VerifyUserPrompt_Statics::OperatingSystemTerminal_eventVerifyUserPrompt_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemTerminal_VerifyUserPrompt_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystemTerminal_VerifyUserPrompt_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemTerminal_VerifyUserPrompt_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOperatingSystemTerminal_VerifyUserPrompt_Statics::OperatingSystemTerminal_eventVerifyUserPrompt_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOperatingSystemTerminal_VerifyUserPrompt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystemTerminal_VerifyUserPrompt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOperatingSystemTerminal);
	UClass* Z_Construct_UClass_UOperatingSystemTerminal_NoRegister()
	{
		return UOperatingSystemTerminal::StaticClass();
	}
	struct Z_Construct_UClass_UOperatingSystemTerminal_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_CachedAdditionalCommands_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedAdditionalCommands_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_CachedAdditionalCommands;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CommandCollection_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_CommandCollection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSupportMultipleCommands_MetaData[];
#endif
		static void NewProp_bSupportMultipleCommands_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSupportMultipleCommands;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MultiCommandOperator_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_MultiCommandOperator;
		static const UECodeGen_Private::FNamePropertyParams NewProp_CommandFlagPrefixes_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CommandFlagPrefixes_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_CommandFlagPrefixes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bValidateFlags_MetaData[];
#endif
		static void NewProp_bValidateFlags_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bValidateFlags;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActiveCommand_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ActiveCommand;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentExplorerInterface_MetaData[];
#endif
		static const UECodeGen_Private::FInterfacePropertyParams NewProp_CurrentExplorerInterface;
		static const UECodeGen_Private::FStrPropertyParams NewProp_QueuedCommands_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QueuedCommands_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_QueuedCommands;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentUser_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentUser;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsRunningAsRoot_MetaData[];
#endif
		static void NewProp_bIsRunningAsRoot_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsRunningAsRoot;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOperatingSystemTerminal_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UOperatingSystemBaseProgram,
		(UObject* (*)())Z_Construct_UPackage__Script_OperatingSystemSimulator,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemTerminal_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UOperatingSystemTerminal_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOperatingSystemTerminal_ChangeCurrentPath, "ChangeCurrentPath" }, // 213871348
		{ &Z_Construct_UFunction_UOperatingSystemTerminal_CheckRootPassword, "CheckRootPassword" }, // 1600385575
		{ &Z_Construct_UFunction_UOperatingSystemTerminal_ClearHistory, "ClearHistory" }, // 3316771489
		{ &Z_Construct_UFunction_UOperatingSystemTerminal_GetCommand, "GetCommand" }, // 3637457266
		{ &Z_Construct_UFunction_UOperatingSystemTerminal_GetCurrentDirectoryPath, "GetCurrentDirectoryPath" }, // 3385043220
		{ &Z_Construct_UFunction_UOperatingSystemTerminal_GetNextCommandFromHistory, "GetNextCommandFromHistory" }, // 1396311064
		{ &Z_Construct_UFunction_UOperatingSystemTerminal_GetPreviousCommandFromHistory, "GetPreviousCommandFromHistory" }, // 4049516714
		{ &Z_Construct_UFunction_UOperatingSystemTerminal_HasRepository, "HasRepository" }, // 1015648152
		{ &Z_Construct_UFunction_UOperatingSystemTerminal_K2_CommandFinished, "K2_CommandFinished" }, // 1581144539
		{ &Z_Construct_UFunction_UOperatingSystemTerminal_K2_MessageReceivedFromCommand, "K2_MessageReceivedFromCommand" }, // 3000068962
		{ &Z_Construct_UFunction_UOperatingSystemTerminal_K2_PromptRootPassword, "K2_PromptRootPassword" }, // 4005807341
		{ &Z_Construct_UFunction_UOperatingSystemTerminal_K2_PromptUserContinue, "K2_PromptUserContinue" }, // 292699435
		{ &Z_Construct_UFunction_UOperatingSystemTerminal_K2_UserChanged, "K2_UserChanged" }, // 3870875279
		{ &Z_Construct_UFunction_UOperatingSystemTerminal_ProcessCommand, "ProcessCommand" }, // 4118788455
		{ &Z_Construct_UFunction_UOperatingSystemTerminal_PromptRootPassword, "PromptRootPassword" }, // 1350297565
		{ &Z_Construct_UFunction_UOperatingSystemTerminal_PromptUserContinue, "PromptUserContinue" }, // 1493755103
		{ &Z_Construct_UFunction_UOperatingSystemTerminal_VerifyUserPrompt, "VerifyUserPrompt" }, // 1198917129
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemTerminal_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystemTerminal_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Programs/OperatingSystemTerminal.h" },
		{ "ModuleRelativePath", "Public/Programs/OperatingSystemTerminal.h" },
	};
#endif
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UOperatingSystemTerminal_Statics::NewProp_CachedAdditionalCommands_ElementProp = { "CachedAdditionalCommands", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UOperatingSystemTerminalCommand_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystemTerminal_Statics::NewProp_CachedAdditionalCommands_MetaData[] = {
		{ "ModuleRelativePath", "Public/Programs/OperatingSystemTerminal.h" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UOperatingSystemTerminal_Statics::NewProp_CachedAdditionalCommands = { "CachedAdditionalCommands", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOperatingSystemTerminal, CachedAdditionalCommands), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemTerminal_Statics::NewProp_CachedAdditionalCommands_MetaData), Z_Construct_UClass_UOperatingSystemTerminal_Statics::NewProp_CachedAdditionalCommands_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystemTerminal_Statics::NewProp_CommandCollection_MetaData[] = {
		{ "Category", "OperatingSystemTerminal" },
		{ "ModuleRelativePath", "Public/Programs/OperatingSystemTerminal.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UOperatingSystemTerminal_Statics::NewProp_CommandCollection = { "CommandCollection", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOperatingSystemTerminal, CommandCollection), Z_Construct_UClass_UOperatingSystemCmdCollection_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemTerminal_Statics::NewProp_CommandCollection_MetaData), Z_Construct_UClass_UOperatingSystemTerminal_Statics::NewProp_CommandCollection_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystemTerminal_Statics::NewProp_bSupportMultipleCommands_MetaData[] = {
		{ "Category", "OperatingSystemTerminal" },
		{ "ModuleRelativePath", "Public/Programs/OperatingSystemTerminal.h" },
	};
#endif
	void Z_Construct_UClass_UOperatingSystemTerminal_Statics::NewProp_bSupportMultipleCommands_SetBit(void* Obj)
	{
		((UOperatingSystemTerminal*)Obj)->bSupportMultipleCommands = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOperatingSystemTerminal_Statics::NewProp_bSupportMultipleCommands = { "bSupportMultipleCommands", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UOperatingSystemTerminal), &Z_Construct_UClass_UOperatingSystemTerminal_Statics::NewProp_bSupportMultipleCommands_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemTerminal_Statics::NewProp_bSupportMultipleCommands_MetaData), Z_Construct_UClass_UOperatingSystemTerminal_Statics::NewProp_bSupportMultipleCommands_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystemTerminal_Statics::NewProp_MultiCommandOperator_MetaData[] = {
		{ "Category", "OperatingSystemTerminal" },
		{ "Comment", "/** String to use for separating multiple commands. E.g: pwd && ls.\n\x09* NOTE: Does not support space so if you have space, it is automatically removed.\n\x09*/" },
		{ "EditCondition", "bSupportMultipleCommands" },
		{ "ModuleRelativePath", "Public/Programs/OperatingSystemTerminal.h" },
		{ "ToolTip", "String to use for separating multiple commands. E.g: pwd && ls.\nNOTE: Does not support space so if you have space, it is automatically removed." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UOperatingSystemTerminal_Statics::NewProp_MultiCommandOperator = { "MultiCommandOperator", nullptr, (EPropertyFlags)0x00200c0000010001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOperatingSystemTerminal, MultiCommandOperator), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemTerminal_Statics::NewProp_MultiCommandOperator_MetaData), Z_Construct_UClass_UOperatingSystemTerminal_Statics::NewProp_MultiCommandOperator_MetaData) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UOperatingSystemTerminal_Statics::NewProp_CommandFlagPrefixes_ElementProp = { "CommandFlagPrefixes", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystemTerminal_Statics::NewProp_CommandFlagPrefixes_MetaData[] = {
		{ "Category", "OperatingSystemTerminal" },
		{ "Comment", "/** List of prefixes that must be included when adding flags. */" },
		{ "ModuleRelativePath", "Public/Programs/OperatingSystemTerminal.h" },
		{ "ToolTip", "List of prefixes that must be included when adding flags." },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UOperatingSystemTerminal_Statics::NewProp_CommandFlagPrefixes = { "CommandFlagPrefixes", nullptr, (EPropertyFlags)0x00200c0000010001, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOperatingSystemTerminal, CommandFlagPrefixes), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemTerminal_Statics::NewProp_CommandFlagPrefixes_MetaData), Z_Construct_UClass_UOperatingSystemTerminal_Statics::NewProp_CommandFlagPrefixes_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystemTerminal_Statics::NewProp_bValidateFlags_MetaData[] = {
		{ "Category", "OperatingSystemTerminal" },
		{ "ModuleRelativePath", "Public/Programs/OperatingSystemTerminal.h" },
	};
#endif
	void Z_Construct_UClass_UOperatingSystemTerminal_Statics::NewProp_bValidateFlags_SetBit(void* Obj)
	{
		((UOperatingSystemTerminal*)Obj)->bValidateFlags = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOperatingSystemTerminal_Statics::NewProp_bValidateFlags = { "bValidateFlags", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOperatingSystemTerminal), &Z_Construct_UClass_UOperatingSystemTerminal_Statics::NewProp_bValidateFlags_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemTerminal_Statics::NewProp_bValidateFlags_MetaData), Z_Construct_UClass_UOperatingSystemTerminal_Statics::NewProp_bValidateFlags_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystemTerminal_Statics::NewProp_ActiveCommand_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OperatingSystemTerminalDebug" },
		{ "ModuleRelativePath", "Public/Programs/OperatingSystemTerminal.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UOperatingSystemTerminal_Statics::NewProp_ActiveCommand = { "ActiveCommand", nullptr, (EPropertyFlags)0x0044000000022815, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOperatingSystemTerminal, ActiveCommand), Z_Construct_UClass_UOperatingSystemTerminalCommand_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemTerminal_Statics::NewProp_ActiveCommand_MetaData), Z_Construct_UClass_UOperatingSystemTerminal_Statics::NewProp_ActiveCommand_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystemTerminal_Statics::NewProp_CurrentExplorerInterface_MetaData[] = {
		{ "Category", "OperatingSystemTerminalDebug" },
		{ "ModuleRelativePath", "Public/Programs/OperatingSystemTerminal.h" },
	};
#endif
	const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_UOperatingSystemTerminal_Statics::NewProp_CurrentExplorerInterface = { "CurrentExplorerInterface", nullptr, (EPropertyFlags)0x0044000000022801, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOperatingSystemTerminal, CurrentExplorerInterface), Z_Construct_UClass_UOperatingSystemExplorerInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemTerminal_Statics::NewProp_CurrentExplorerInterface_MetaData), Z_Construct_UClass_UOperatingSystemTerminal_Statics::NewProp_CurrentExplorerInterface_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOperatingSystemTerminal_Statics::NewProp_QueuedCommands_Inner = { "QueuedCommands", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystemTerminal_Statics::NewProp_QueuedCommands_MetaData[] = {
		{ "Category", "OperatingSystemTerminalDebug" },
		{ "ModuleRelativePath", "Public/Programs/OperatingSystemTerminal.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UOperatingSystemTerminal_Statics::NewProp_QueuedCommands = { "QueuedCommands", nullptr, (EPropertyFlags)0x0040000000022801, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOperatingSystemTerminal, QueuedCommands), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemTerminal_Statics::NewProp_QueuedCommands_MetaData), Z_Construct_UClass_UOperatingSystemTerminal_Statics::NewProp_QueuedCommands_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystemTerminal_Statics::NewProp_CurrentUser_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OperatingSystemTerminalDebug" },
		{ "ModuleRelativePath", "Public/Programs/OperatingSystemTerminal.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOperatingSystemTerminal_Statics::NewProp_CurrentUser = { "CurrentUser", nullptr, (EPropertyFlags)0x0040000000022815, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOperatingSystemTerminal, CurrentUser), Z_Construct_UScriptStruct_FOperatingSystemUser, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemTerminal_Statics::NewProp_CurrentUser_MetaData), Z_Construct_UClass_UOperatingSystemTerminal_Statics::NewProp_CurrentUser_MetaData) }; // 1295920940
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystemTerminal_Statics::NewProp_bIsRunningAsRoot_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OperatingSystemTerminalDebug" },
		{ "ModuleRelativePath", "Public/Programs/OperatingSystemTerminal.h" },
	};
#endif
	void Z_Construct_UClass_UOperatingSystemTerminal_Statics::NewProp_bIsRunningAsRoot_SetBit(void* Obj)
	{
		((UOperatingSystemTerminal*)Obj)->bIsRunningAsRoot = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOperatingSystemTerminal_Statics::NewProp_bIsRunningAsRoot = { "bIsRunningAsRoot", nullptr, (EPropertyFlags)0x0040000000022815, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UOperatingSystemTerminal), &Z_Construct_UClass_UOperatingSystemTerminal_Statics::NewProp_bIsRunningAsRoot_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemTerminal_Statics::NewProp_bIsRunningAsRoot_MetaData), Z_Construct_UClass_UOperatingSystemTerminal_Statics::NewProp_bIsRunningAsRoot_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOperatingSystemTerminal_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystemTerminal_Statics::NewProp_CachedAdditionalCommands_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystemTerminal_Statics::NewProp_CachedAdditionalCommands,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystemTerminal_Statics::NewProp_CommandCollection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystemTerminal_Statics::NewProp_bSupportMultipleCommands,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystemTerminal_Statics::NewProp_MultiCommandOperator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystemTerminal_Statics::NewProp_CommandFlagPrefixes_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystemTerminal_Statics::NewProp_CommandFlagPrefixes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystemTerminal_Statics::NewProp_bValidateFlags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystemTerminal_Statics::NewProp_ActiveCommand,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystemTerminal_Statics::NewProp_CurrentExplorerInterface,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystemTerminal_Statics::NewProp_QueuedCommands_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystemTerminal_Statics::NewProp_QueuedCommands,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystemTerminal_Statics::NewProp_CurrentUser,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystemTerminal_Statics::NewProp_bIsRunningAsRoot,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOperatingSystemTerminal_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOperatingSystemTerminal>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOperatingSystemTerminal_Statics::ClassParams = {
		&UOperatingSystemTerminal::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UOperatingSystemTerminal_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemTerminal_Statics::PropPointers),
		0,
		0x008000A1u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemTerminal_Statics::Class_MetaDataParams), Z_Construct_UClass_UOperatingSystemTerminal_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemTerminal_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UOperatingSystemTerminal()
	{
		if (!Z_Registration_Info_UClass_UOperatingSystemTerminal.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOperatingSystemTerminal.OuterSingleton, Z_Construct_UClass_UOperatingSystemTerminal_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOperatingSystemTerminal.OuterSingleton;
	}
	template<> OPERATINGSYSTEMSIMULATOR_API UClass* StaticClass<UOperatingSystemTerminal>()
	{
		return UOperatingSystemTerminal::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOperatingSystemTerminal);
	UOperatingSystemTerminal::~UOperatingSystemTerminal() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Programs_OperatingSystemTerminal_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Programs_OperatingSystemTerminal_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOperatingSystemTerminal, UOperatingSystemTerminal::StaticClass, TEXT("UOperatingSystemTerminal"), &Z_Registration_Info_UClass_UOperatingSystemTerminal, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOperatingSystemTerminal), 3301477749U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Programs_OperatingSystemTerminal_h_2869151920(TEXT("/Script/OperatingSystemSimulator"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Programs_OperatingSystemTerminal_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Programs_OperatingSystemTerminal_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
