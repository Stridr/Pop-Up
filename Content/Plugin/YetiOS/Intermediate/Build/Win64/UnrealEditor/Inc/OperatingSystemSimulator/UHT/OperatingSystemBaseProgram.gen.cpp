// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OperatingSystemSimulator/Public/Programs/OperatingSystemBaseProgram.h"
#include "GameplayTagContainer.h"
#include "OperatingSystemSimulator/Public/Core/OperatingSystem.h"
#include "OperatingSystemSimulator/Public/OperatingSystemTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOperatingSystemBaseProgram() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	DRAGGABLEWINDOWUMG_API UClass* Z_Construct_UClass_UDraggableWindow_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	OPERATINGSYSTEMSIMULATOR_API UClass* Z_Construct_UClass_UOperatingSystem_NoRegister();
	OPERATINGSYSTEMSIMULATOR_API UClass* Z_Construct_UClass_UOperatingSystemBaseProgram();
	OPERATINGSYSTEMSIMULATOR_API UClass* Z_Construct_UClass_UOperatingSystemBaseProgram_NoRegister();
	OPERATINGSYSTEMSIMULATOR_API UClass* Z_Construct_UClass_UOperatingSystemFile_NoRegister();
	OPERATINGSYSTEMSIMULATOR_API UClass* Z_Construct_UClass_UOperatingSystemPartition_NoRegister();
	OPERATINGSYSTEMSIMULATOR_API UClass* Z_Construct_UClass_UOperatingSystemProgramData_NoRegister();
	OPERATINGSYSTEMSIMULATOR_API UClass* Z_Construct_UClass_UOperatingSystemProgramIconWidget_NoRegister();
	OPERATINGSYSTEMSIMULATOR_API UClass* Z_Construct_UClass_UOperatingSystemProgramSettings_NoRegister();
	OPERATINGSYSTEMSIMULATOR_API UClass* Z_Construct_UClass_UOperatingSystemProgramWidget_NoRegister();
	OPERATINGSYSTEMSIMULATOR_API UClass* Z_Construct_UClass_UOperatingSystemTaskbarButton_NoRegister();
	OPERATINGSYSTEMSIMULATOR_API UEnum* Z_Construct_UEnum_OperatingSystemSimulator_EOperatingSystemProgramViewState();
	OPERATINGSYSTEMSIMULATOR_API UEnum* Z_Construct_UEnum_OperatingSystemSimulator_EProgramSaveMethod();
	OPERATINGSYSTEMSIMULATOR_API UFunction* Z_Construct_UDelegateFunction_OperatingSystemSimulator_OnOperatingSystemProgramViewStateChanged__DelegateSignature();
	OPERATINGSYSTEMSIMULATOR_API UScriptStruct* Z_Construct_UScriptStruct_FGenericError();
	OPERATINGSYSTEMSIMULATOR_API UScriptStruct* Z_Construct_UScriptStruct_FOperatingSystemStoreProgramData();
	OPERATINGSYSTEMSIMULATOR_API UScriptStruct* Z_Construct_UScriptStruct_FVersion();
	UPackage* Z_Construct_UPackage__Script_OperatingSystemSimulator();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EProgramSaveMethod;
	static UEnum* EProgramSaveMethod_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EProgramSaveMethod.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EProgramSaveMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OperatingSystemSimulator_EProgramSaveMethod, (UObject*)Z_Construct_UPackage__Script_OperatingSystemSimulator(), TEXT("EProgramSaveMethod"));
		}
		return Z_Registration_Info_UEnum_EProgramSaveMethod.OuterSingleton;
	}
	template<> OPERATINGSYSTEMSIMULATOR_API UEnum* StaticEnum<EProgramSaveMethod>()
	{
		return EProgramSaveMethod_StaticEnum();
	}
	struct Z_Construct_UEnum_OperatingSystemSimulator_EProgramSaveMethod_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_OperatingSystemSimulator_EProgramSaveMethod_Statics::Enumerators[] = {
		{ "EProgramSaveMethod::SaveOnOperatingSystemShutdown", (int64)EProgramSaveMethod::SaveOnOperatingSystemShutdown },
		{ "EProgramSaveMethod::SaveOnExit", (int64)EProgramSaveMethod::SaveOnExit },
		{ "EProgramSaveMethod::SaveManually", (int64)EProgramSaveMethod::SaveManually },
		{ "EProgramSaveMethod::DoNotSave", (int64)EProgramSaveMethod::DoNotSave },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_OperatingSystemSimulator_EProgramSaveMethod_Statics::Enum_MetaDataParams[] = {
		{ "DoNotSave.Comment", "/** Do not save at all. */" },
		{ "DoNotSave.Name", "EProgramSaveMethod::DoNotSave" },
		{ "DoNotSave.ToolTip", "Do not save at all." },
		{ "ModuleRelativePath", "Public/Programs/OperatingSystemBaseProgram.h" },
		{ "SaveManually.Comment", "/** No automatic saving. Player has to manually save settings using SaveSettinsg() method. */" },
		{ "SaveManually.Name", "EProgramSaveMethod::SaveManually" },
		{ "SaveManually.ToolTip", "No automatic saving. Player has to manually save settings using SaveSettinsg() method." },
		{ "SaveOnExit.Comment", "/** Save automatically whenever this program is closed. Also saves on operating system shutdown since the program exits at shutdown. */" },
		{ "SaveOnExit.Name", "EProgramSaveMethod::SaveOnExit" },
		{ "SaveOnExit.ToolTip", "Save automatically whenever this program is closed. Also saves on operating system shutdown since the program exits at shutdown." },
		{ "SaveOnOperatingSystemShutdown.Comment", "/** Save automatically when Operating System is shutting down. */" },
		{ "SaveOnOperatingSystemShutdown.Name", "EProgramSaveMethod::SaveOnOperatingSystemShutdown" },
		{ "SaveOnOperatingSystemShutdown.ToolTip", "Save automatically when Operating System is shutting down." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OperatingSystemSimulator_EProgramSaveMethod_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_OperatingSystemSimulator,
		nullptr,
		"EProgramSaveMethod",
		"EProgramSaveMethod",
		Z_Construct_UEnum_OperatingSystemSimulator_EProgramSaveMethod_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_OperatingSystemSimulator_EProgramSaveMethod_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OperatingSystemSimulator_EProgramSaveMethod_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OperatingSystemSimulator_EProgramSaveMethod_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_OperatingSystemSimulator_EProgramSaveMethod()
	{
		if (!Z_Registration_Info_UEnum_EProgramSaveMethod.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EProgramSaveMethod.InnerSingleton, Z_Construct_UEnum_OperatingSystemSimulator_EProgramSaveMethod_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EProgramSaveMethod.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_OperatingSystemSimulator_OnOperatingSystemProgramViewStateChanged__DelegateSignature_Statics
	{
		struct _Script_OperatingSystemSimulator_eventOnOperatingSystemProgramViewStateChanged_Parms
		{
			EOperatingSystemProgramViewState CurrentViewState;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_CurrentViewState_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentViewState_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CurrentViewState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_OperatingSystemSimulator_OnOperatingSystemProgramViewStateChanged__DelegateSignature_Statics::NewProp_CurrentViewState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OperatingSystemSimulator_OnOperatingSystemProgramViewStateChanged__DelegateSignature_Statics::NewProp_CurrentViewState_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_OperatingSystemSimulator_OnOperatingSystemProgramViewStateChanged__DelegateSignature_Statics::NewProp_CurrentViewState = { "CurrentViewState", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OperatingSystemSimulator_eventOnOperatingSystemProgramViewStateChanged_Parms, CurrentViewState), Z_Construct_UEnum_OperatingSystemSimulator_EOperatingSystemProgramViewState, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OperatingSystemSimulator_OnOperatingSystemProgramViewStateChanged__DelegateSignature_Statics::NewProp_CurrentViewState_MetaData), Z_Construct_UDelegateFunction_OperatingSystemSimulator_OnOperatingSystemProgramViewStateChanged__DelegateSignature_Statics::NewProp_CurrentViewState_MetaData) }; // 3957317527
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OperatingSystemSimulator_OnOperatingSystemProgramViewStateChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OperatingSystemSimulator_OnOperatingSystemProgramViewStateChanged__DelegateSignature_Statics::NewProp_CurrentViewState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OperatingSystemSimulator_OnOperatingSystemProgramViewStateChanged__DelegateSignature_Statics::NewProp_CurrentViewState,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OperatingSystemSimulator_OnOperatingSystemProgramViewStateChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Programs/OperatingSystemBaseProgram.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OperatingSystemSimulator_OnOperatingSystemProgramViewStateChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OperatingSystemSimulator, nullptr, "OnOperatingSystemProgramViewStateChanged__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_OperatingSystemSimulator_OnOperatingSystemProgramViewStateChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OperatingSystemSimulator_OnOperatingSystemProgramViewStateChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OperatingSystemSimulator_OnOperatingSystemProgramViewStateChanged__DelegateSignature_Statics::_Script_OperatingSystemSimulator_eventOnOperatingSystemProgramViewStateChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OperatingSystemSimulator_OnOperatingSystemProgramViewStateChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OperatingSystemSimulator_OnOperatingSystemProgramViewStateChanged__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OperatingSystemSimulator_OnOperatingSystemProgramViewStateChanged__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_OperatingSystemSimulator_OnOperatingSystemProgramViewStateChanged__DelegateSignature_Statics::_Script_OperatingSystemSimulator_eventOnOperatingSystemProgramViewStateChanged_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_OperatingSystemSimulator_OnOperatingSystemProgramViewStateChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OperatingSystemSimulator_OnOperatingSystemProgramViewStateChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnOperatingSystemProgramViewStateChanged_DelegateWrapper(const FMulticastScriptDelegate& OnOperatingSystemProgramViewStateChanged, EOperatingSystemProgramViewState const& CurrentViewState)
{
	struct _Script_OperatingSystemSimulator_eventOnOperatingSystemProgramViewStateChanged_Parms
	{
		EOperatingSystemProgramViewState CurrentViewState;
	};
	_Script_OperatingSystemSimulator_eventOnOperatingSystemProgramViewStateChanged_Parms Parms;
	Parms.CurrentViewState=CurrentViewState;
	OnOperatingSystemProgramViewStateChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UOperatingSystemBaseProgram::execGetIconWidget)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UOperatingSystemProgramIconWidget**)Z_Param__Result=P_THIS->GetIconWidget();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOperatingSystemBaseProgram::execCreateIconWidget)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UOperatingSystemProgramIconWidget**)Z_Param__Result=P_THIS->CreateIconWidget();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOperatingSystemBaseProgram::execGetOperatingSystem)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UOperatingSystem**)Z_Param__Result=P_THIS->GetOperatingSystem();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOperatingSystemBaseProgram::execCanAddToDesktop)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanAddToDesktop();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOperatingSystemBaseProgram::execIsRunning)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsRunning();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOperatingSystemBaseProgram::execStartProgram)
	{
		P_GET_STRUCT_REF(FGenericError,Z_Param_Out_OutError);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UOperatingSystemBaseProgram**)Z_Param__Result=P_THIS->StartProgram(Z_Param_Out_OutError);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOperatingSystemBaseProgram::execIsStoreItemFree)
	{
		P_GET_STRUCT_REF(FOperatingSystemStoreProgramData,Z_Param_Out_ProgramData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UOperatingSystemBaseProgram::IsStoreItemFree(Z_Param_Out_ProgramData);
		P_NATIVE_END;
	}
	struct OperatingSystemBaseProgram_eventK2_OnSettingsLoad_Parms
	{
		UOperatingSystemProgramSettings* LoadedSettings;
	};
	struct OperatingSystemBaseProgram_eventK2_OnStart_Parms
	{
		FGenericError ReturnValue;
	};
	static FName NAME_UOperatingSystemBaseProgram_K2_OnClose = FName(TEXT("K2_OnClose"));
	void UOperatingSystemBaseProgram::K2_OnClose()
	{
		ProcessEvent(FindFunctionChecked(NAME_UOperatingSystemBaseProgram_K2_OnClose),NULL);
	}
	static FName NAME_UOperatingSystemBaseProgram_K2_OnCreate = FName(TEXT("K2_OnCreate"));
	void UOperatingSystemBaseProgram::K2_OnCreate()
	{
		ProcessEvent(FindFunctionChecked(NAME_UOperatingSystemBaseProgram_K2_OnCreate),NULL);
	}
	static FName NAME_UOperatingSystemBaseProgram_K2_OnInstall = FName(TEXT("K2_OnInstall"));
	void UOperatingSystemBaseProgram::K2_OnInstall()
	{
		ProcessEvent(FindFunctionChecked(NAME_UOperatingSystemBaseProgram_K2_OnInstall),NULL);
	}
	static FName NAME_UOperatingSystemBaseProgram_K2_OnOpenFile = FName(TEXT("K2_OnOpenFile"));
	void UOperatingSystemBaseProgram::K2_OnOpenFile()
	{
		ProcessEvent(FindFunctionChecked(NAME_UOperatingSystemBaseProgram_K2_OnOpenFile),NULL);
	}
	static FName NAME_UOperatingSystemBaseProgram_K2_OnSettingsLoad = FName(TEXT("K2_OnSettingsLoad"));
	void UOperatingSystemBaseProgram::K2_OnSettingsLoad(UOperatingSystemProgramSettings* LoadedSettings)
	{
		OperatingSystemBaseProgram_eventK2_OnSettingsLoad_Parms Parms;
		Parms.LoadedSettings=LoadedSettings;
		ProcessEvent(FindFunctionChecked(NAME_UOperatingSystemBaseProgram_K2_OnSettingsLoad),&Parms);
	}
	static FName NAME_UOperatingSystemBaseProgram_K2_OnStart = FName(TEXT("K2_OnStart"));
	FGenericError UOperatingSystemBaseProgram::K2_OnStart()
	{
		OperatingSystemBaseProgram_eventK2_OnStart_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UOperatingSystemBaseProgram_K2_OnStart),&Parms);
		return Parms.ReturnValue;
	}
	void UOperatingSystemBaseProgram::StaticRegisterNativesUOperatingSystemBaseProgram()
	{
		UClass* Class = UOperatingSystemBaseProgram::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CanAddToDesktop", &UOperatingSystemBaseProgram::execCanAddToDesktop },
			{ "CreateIconWidget", &UOperatingSystemBaseProgram::execCreateIconWidget },
			{ "GetIconWidget", &UOperatingSystemBaseProgram::execGetIconWidget },
			{ "GetOperatingSystem", &UOperatingSystemBaseProgram::execGetOperatingSystem },
			{ "IsRunning", &UOperatingSystemBaseProgram::execIsRunning },
			{ "IsStoreItemFree", &UOperatingSystemBaseProgram::execIsStoreItemFree },
			{ "StartProgram", &UOperatingSystemBaseProgram::execStartProgram },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOperatingSystemBaseProgram_CanAddToDesktop_Statics
	{
		struct OperatingSystemBaseProgram_eventCanAddToDesktop_Parms
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
	void Z_Construct_UFunction_UOperatingSystemBaseProgram_CanAddToDesktop_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OperatingSystemBaseProgram_eventCanAddToDesktop_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOperatingSystemBaseProgram_CanAddToDesktop_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OperatingSystemBaseProgram_eventCanAddToDesktop_Parms), &Z_Construct_UFunction_UOperatingSystemBaseProgram_CanAddToDesktop_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperatingSystemBaseProgram_CanAddToDesktop_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemBaseProgram_CanAddToDesktop_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemBaseProgram_CanAddToDesktop_Statics::Function_MetaDataParams[] = {
		{ "Category", "OperatingSystemProgram" },
		{ "ModuleRelativePath", "Public/Programs/OperatingSystemBaseProgram.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystemBaseProgram_CanAddToDesktop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystemBaseProgram, nullptr, "CanAddToDesktop", nullptr, nullptr, Z_Construct_UFunction_UOperatingSystemBaseProgram_CanAddToDesktop_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemBaseProgram_CanAddToDesktop_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOperatingSystemBaseProgram_CanAddToDesktop_Statics::OperatingSystemBaseProgram_eventCanAddToDesktop_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemBaseProgram_CanAddToDesktop_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystemBaseProgram_CanAddToDesktop_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemBaseProgram_CanAddToDesktop_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOperatingSystemBaseProgram_CanAddToDesktop_Statics::OperatingSystemBaseProgram_eventCanAddToDesktop_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOperatingSystemBaseProgram_CanAddToDesktop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystemBaseProgram_CanAddToDesktop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOperatingSystemBaseProgram_CreateIconWidget_Statics
	{
		struct OperatingSystemBaseProgram_eventCreateIconWidget_Parms
		{
			UOperatingSystemProgramIconWidget* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemBaseProgram_CreateIconWidget_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOperatingSystemBaseProgram_CreateIconWidget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemBaseProgram_eventCreateIconWidget_Parms, ReturnValue), Z_Construct_UClass_UOperatingSystemProgramIconWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemBaseProgram_CreateIconWidget_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UOperatingSystemBaseProgram_CreateIconWidget_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperatingSystemBaseProgram_CreateIconWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemBaseProgram_CreateIconWidget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemBaseProgram_CreateIconWidget_Statics::Function_MetaDataParams[] = {
		{ "Category", "OperatingSystemProgram" },
		{ "ModuleRelativePath", "Public/Programs/OperatingSystemBaseProgram.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystemBaseProgram_CreateIconWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystemBaseProgram, nullptr, "CreateIconWidget", nullptr, nullptr, Z_Construct_UFunction_UOperatingSystemBaseProgram_CreateIconWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemBaseProgram_CreateIconWidget_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOperatingSystemBaseProgram_CreateIconWidget_Statics::OperatingSystemBaseProgram_eventCreateIconWidget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemBaseProgram_CreateIconWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystemBaseProgram_CreateIconWidget_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemBaseProgram_CreateIconWidget_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOperatingSystemBaseProgram_CreateIconWidget_Statics::OperatingSystemBaseProgram_eventCreateIconWidget_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOperatingSystemBaseProgram_CreateIconWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystemBaseProgram_CreateIconWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOperatingSystemBaseProgram_GetIconWidget_Statics
	{
		struct OperatingSystemBaseProgram_eventGetIconWidget_Parms
		{
			UOperatingSystemProgramIconWidget* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemBaseProgram_GetIconWidget_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOperatingSystemBaseProgram_GetIconWidget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemBaseProgram_eventGetIconWidget_Parms, ReturnValue), Z_Construct_UClass_UOperatingSystemProgramIconWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemBaseProgram_GetIconWidget_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UOperatingSystemBaseProgram_GetIconWidget_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperatingSystemBaseProgram_GetIconWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemBaseProgram_GetIconWidget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemBaseProgram_GetIconWidget_Statics::Function_MetaDataParams[] = {
		{ "Category", "OperatingSystemProgram" },
		{ "ModuleRelativePath", "Public/Programs/OperatingSystemBaseProgram.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystemBaseProgram_GetIconWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystemBaseProgram, nullptr, "GetIconWidget", nullptr, nullptr, Z_Construct_UFunction_UOperatingSystemBaseProgram_GetIconWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemBaseProgram_GetIconWidget_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOperatingSystemBaseProgram_GetIconWidget_Statics::OperatingSystemBaseProgram_eventGetIconWidget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemBaseProgram_GetIconWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystemBaseProgram_GetIconWidget_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemBaseProgram_GetIconWidget_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOperatingSystemBaseProgram_GetIconWidget_Statics::OperatingSystemBaseProgram_eventGetIconWidget_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOperatingSystemBaseProgram_GetIconWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystemBaseProgram_GetIconWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOperatingSystemBaseProgram_GetOperatingSystem_Statics
	{
		struct OperatingSystemBaseProgram_eventGetOperatingSystem_Parms
		{
			UOperatingSystem* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOperatingSystemBaseProgram_GetOperatingSystem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemBaseProgram_eventGetOperatingSystem_Parms, ReturnValue), Z_Construct_UClass_UOperatingSystem_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperatingSystemBaseProgram_GetOperatingSystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemBaseProgram_GetOperatingSystem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemBaseProgram_GetOperatingSystem_Statics::Function_MetaDataParams[] = {
		{ "Category", "OperatingSystemProgram" },
		{ "Keywords", "parent, owner, os" },
		{ "ModuleRelativePath", "Public/Programs/OperatingSystemBaseProgram.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystemBaseProgram_GetOperatingSystem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystemBaseProgram, nullptr, "GetOperatingSystem", nullptr, nullptr, Z_Construct_UFunction_UOperatingSystemBaseProgram_GetOperatingSystem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemBaseProgram_GetOperatingSystem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOperatingSystemBaseProgram_GetOperatingSystem_Statics::OperatingSystemBaseProgram_eventGetOperatingSystem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemBaseProgram_GetOperatingSystem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystemBaseProgram_GetOperatingSystem_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemBaseProgram_GetOperatingSystem_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOperatingSystemBaseProgram_GetOperatingSystem_Statics::OperatingSystemBaseProgram_eventGetOperatingSystem_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOperatingSystemBaseProgram_GetOperatingSystem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystemBaseProgram_GetOperatingSystem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOperatingSystemBaseProgram_IsRunning_Statics
	{
		struct OperatingSystemBaseProgram_eventIsRunning_Parms
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
	void Z_Construct_UFunction_UOperatingSystemBaseProgram_IsRunning_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OperatingSystemBaseProgram_eventIsRunning_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOperatingSystemBaseProgram_IsRunning_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OperatingSystemBaseProgram_eventIsRunning_Parms), &Z_Construct_UFunction_UOperatingSystemBaseProgram_IsRunning_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperatingSystemBaseProgram_IsRunning_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemBaseProgram_IsRunning_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemBaseProgram_IsRunning_Statics::Function_MetaDataParams[] = {
		{ "Category", "OperatingSystemProgram" },
		{ "ModuleRelativePath", "Public/Programs/OperatingSystemBaseProgram.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystemBaseProgram_IsRunning_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystemBaseProgram, nullptr, "IsRunning", nullptr, nullptr, Z_Construct_UFunction_UOperatingSystemBaseProgram_IsRunning_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemBaseProgram_IsRunning_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOperatingSystemBaseProgram_IsRunning_Statics::OperatingSystemBaseProgram_eventIsRunning_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemBaseProgram_IsRunning_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystemBaseProgram_IsRunning_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemBaseProgram_IsRunning_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOperatingSystemBaseProgram_IsRunning_Statics::OperatingSystemBaseProgram_eventIsRunning_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOperatingSystemBaseProgram_IsRunning()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystemBaseProgram_IsRunning_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOperatingSystemBaseProgram_IsStoreItemFree_Statics
	{
		struct OperatingSystemBaseProgram_eventIsStoreItemFree_Parms
		{
			FOperatingSystemStoreProgramData ProgramData;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProgramData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ProgramData;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemBaseProgram_IsStoreItemFree_Statics::NewProp_ProgramData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOperatingSystemBaseProgram_IsStoreItemFree_Statics::NewProp_ProgramData = { "ProgramData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemBaseProgram_eventIsStoreItemFree_Parms, ProgramData), Z_Construct_UScriptStruct_FOperatingSystemStoreProgramData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemBaseProgram_IsStoreItemFree_Statics::NewProp_ProgramData_MetaData), Z_Construct_UFunction_UOperatingSystemBaseProgram_IsStoreItemFree_Statics::NewProp_ProgramData_MetaData) }; // 3112091046
	void Z_Construct_UFunction_UOperatingSystemBaseProgram_IsStoreItemFree_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OperatingSystemBaseProgram_eventIsStoreItemFree_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOperatingSystemBaseProgram_IsStoreItemFree_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OperatingSystemBaseProgram_eventIsStoreItemFree_Parms), &Z_Construct_UFunction_UOperatingSystemBaseProgram_IsStoreItemFree_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperatingSystemBaseProgram_IsStoreItemFree_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemBaseProgram_IsStoreItemFree_Statics::NewProp_ProgramData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemBaseProgram_IsStoreItemFree_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemBaseProgram_IsStoreItemFree_Statics::Function_MetaDataParams[] = {
		{ "Category", "OperatingSystemProgram" },
		{ "ModuleRelativePath", "Public/Programs/OperatingSystemBaseProgram.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystemBaseProgram_IsStoreItemFree_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystemBaseProgram, nullptr, "IsStoreItemFree", nullptr, nullptr, Z_Construct_UFunction_UOperatingSystemBaseProgram_IsStoreItemFree_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemBaseProgram_IsStoreItemFree_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOperatingSystemBaseProgram_IsStoreItemFree_Statics::OperatingSystemBaseProgram_eventIsStoreItemFree_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemBaseProgram_IsStoreItemFree_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystemBaseProgram_IsStoreItemFree_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemBaseProgram_IsStoreItemFree_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOperatingSystemBaseProgram_IsStoreItemFree_Statics::OperatingSystemBaseProgram_eventIsStoreItemFree_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOperatingSystemBaseProgram_IsStoreItemFree()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystemBaseProgram_IsStoreItemFree_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOperatingSystemBaseProgram_K2_OnClose_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemBaseProgram_K2_OnClose_Statics::Function_MetaDataParams[] = {
		{ "Category", "OperatingSystemProgram" },
		{ "DisplayName", "OnClose" },
		{ "ModuleRelativePath", "Public/Programs/OperatingSystemBaseProgram.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystemBaseProgram_K2_OnClose_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystemBaseProgram, nullptr, "K2_OnClose", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemBaseProgram_K2_OnClose_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystemBaseProgram_K2_OnClose_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UOperatingSystemBaseProgram_K2_OnClose()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystemBaseProgram_K2_OnClose_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOperatingSystemBaseProgram_K2_OnCreate_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemBaseProgram_K2_OnCreate_Statics::Function_MetaDataParams[] = {
		{ "Category", "OperatingSystemProgram" },
		{ "DisplayName", "OnCreate" },
		{ "ModuleRelativePath", "Public/Programs/OperatingSystemBaseProgram.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystemBaseProgram_K2_OnCreate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystemBaseProgram, nullptr, "K2_OnCreate", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemBaseProgram_K2_OnCreate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystemBaseProgram_K2_OnCreate_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UOperatingSystemBaseProgram_K2_OnCreate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystemBaseProgram_K2_OnCreate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOperatingSystemBaseProgram_K2_OnInstall_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemBaseProgram_K2_OnInstall_Statics::Function_MetaDataParams[] = {
		{ "Category", "OperatingSystemProgram" },
		{ "DisplayName", "OnInstall" },
		{ "ModuleRelativePath", "Public/Programs/OperatingSystemBaseProgram.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystemBaseProgram_K2_OnInstall_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystemBaseProgram, nullptr, "K2_OnInstall", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemBaseProgram_K2_OnInstall_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystemBaseProgram_K2_OnInstall_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UOperatingSystemBaseProgram_K2_OnInstall()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystemBaseProgram_K2_OnInstall_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOperatingSystemBaseProgram_K2_OnOpenFile_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemBaseProgram_K2_OnOpenFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "OperatingSystemProgram" },
		{ "DisplayName", "OnOpenFile" },
		{ "ModuleRelativePath", "Public/Programs/OperatingSystemBaseProgram.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystemBaseProgram_K2_OnOpenFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystemBaseProgram, nullptr, "K2_OnOpenFile", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemBaseProgram_K2_OnOpenFile_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystemBaseProgram_K2_OnOpenFile_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UOperatingSystemBaseProgram_K2_OnOpenFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystemBaseProgram_K2_OnOpenFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOperatingSystemBaseProgram_K2_OnSettingsLoad_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LoadedSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOperatingSystemBaseProgram_K2_OnSettingsLoad_Statics::NewProp_LoadedSettings = { "LoadedSettings", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemBaseProgram_eventK2_OnSettingsLoad_Parms, LoadedSettings), Z_Construct_UClass_UOperatingSystemProgramSettings_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperatingSystemBaseProgram_K2_OnSettingsLoad_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemBaseProgram_K2_OnSettingsLoad_Statics::NewProp_LoadedSettings,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemBaseProgram_K2_OnSettingsLoad_Statics::Function_MetaDataParams[] = {
		{ "Category", "OperatingSystemProgram" },
		{ "DisplayName", "OnSettingsLoad" },
		{ "ModuleRelativePath", "Public/Programs/OperatingSystemBaseProgram.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystemBaseProgram_K2_OnSettingsLoad_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystemBaseProgram, nullptr, "K2_OnSettingsLoad", nullptr, nullptr, Z_Construct_UFunction_UOperatingSystemBaseProgram_K2_OnSettingsLoad_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemBaseProgram_K2_OnSettingsLoad_Statics::PropPointers), sizeof(OperatingSystemBaseProgram_eventK2_OnSettingsLoad_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemBaseProgram_K2_OnSettingsLoad_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystemBaseProgram_K2_OnSettingsLoad_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemBaseProgram_K2_OnSettingsLoad_Statics::PropPointers) < 2048);
	static_assert(sizeof(OperatingSystemBaseProgram_eventK2_OnSettingsLoad_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOperatingSystemBaseProgram_K2_OnSettingsLoad()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystemBaseProgram_K2_OnSettingsLoad_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOperatingSystemBaseProgram_K2_OnStart_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOperatingSystemBaseProgram_K2_OnStart_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemBaseProgram_eventK2_OnStart_Parms, ReturnValue), Z_Construct_UScriptStruct_FGenericError, METADATA_PARAMS(0, nullptr) }; // 4286029882
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperatingSystemBaseProgram_K2_OnStart_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemBaseProgram_K2_OnStart_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemBaseProgram_K2_OnStart_Statics::Function_MetaDataParams[] = {
		{ "Category", "OperatingSystemProgram" },
		{ "DisplayName", "OnStart" },
		{ "ModuleRelativePath", "Public/Programs/OperatingSystemBaseProgram.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystemBaseProgram_K2_OnStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystemBaseProgram, nullptr, "K2_OnStart", nullptr, nullptr, Z_Construct_UFunction_UOperatingSystemBaseProgram_K2_OnStart_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemBaseProgram_K2_OnStart_Statics::PropPointers), sizeof(OperatingSystemBaseProgram_eventK2_OnStart_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemBaseProgram_K2_OnStart_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystemBaseProgram_K2_OnStart_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemBaseProgram_K2_OnStart_Statics::PropPointers) < 2048);
	static_assert(sizeof(OperatingSystemBaseProgram_eventK2_OnStart_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOperatingSystemBaseProgram_K2_OnStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystemBaseProgram_K2_OnStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOperatingSystemBaseProgram_StartProgram_Statics
	{
		struct OperatingSystemBaseProgram_eventStartProgram_Parms
		{
			FGenericError OutError;
			UOperatingSystemBaseProgram* ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutError;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOperatingSystemBaseProgram_StartProgram_Statics::NewProp_OutError = { "OutError", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemBaseProgram_eventStartProgram_Parms, OutError), Z_Construct_UScriptStruct_FGenericError, METADATA_PARAMS(0, nullptr) }; // 4286029882
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOperatingSystemBaseProgram_StartProgram_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemBaseProgram_eventStartProgram_Parms, ReturnValue), Z_Construct_UClass_UOperatingSystemBaseProgram_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperatingSystemBaseProgram_StartProgram_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemBaseProgram_StartProgram_Statics::NewProp_OutError,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemBaseProgram_StartProgram_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemBaseProgram_StartProgram_Statics::Function_MetaDataParams[] = {
		{ "Category", "OperatingSystemProgram" },
		{ "ModuleRelativePath", "Public/Programs/OperatingSystemBaseProgram.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystemBaseProgram_StartProgram_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystemBaseProgram, nullptr, "StartProgram", nullptr, nullptr, Z_Construct_UFunction_UOperatingSystemBaseProgram_StartProgram_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemBaseProgram_StartProgram_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOperatingSystemBaseProgram_StartProgram_Statics::OperatingSystemBaseProgram_eventStartProgram_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemBaseProgram_StartProgram_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystemBaseProgram_StartProgram_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemBaseProgram_StartProgram_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOperatingSystemBaseProgram_StartProgram_Statics::OperatingSystemBaseProgram_eventStartProgram_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOperatingSystemBaseProgram_StartProgram()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystemBaseProgram_StartProgram_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOperatingSystemBaseProgram);
	UClass* Z_Construct_UClass_UOperatingSystemBaseProgram_NoRegister()
	{
		return UOperatingSystemBaseProgram::StaticClass();
	}
	struct Z_Construct_UClass_UOperatingSystemBaseProgram_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Author_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Author;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Description;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Identifier_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Identifier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Version_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Version;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StoreDisplayName_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_StoreDisplayName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StoreType_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_StoreType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StorePrice_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StorePrice;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SupportedOperatingSystems_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SupportedOperatingSystems;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRequireMinOperatingSystemVersion_MetaData[];
#endif
		static void NewProp_bRequireMinOperatingSystemVersion_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRequireMinOperatingSystemVersion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinOperatingSystemVersion_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MinOperatingSystemVersion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IconObject_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_IconObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpaceRequiredInMB_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SpaceRequiredInMB;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IconWidgetClass_MetaData[];
#endif
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_IconWidgetClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WidgetClass_MetaData[];
#endif
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_WidgetClass;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SaveMethod_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SaveMethod_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SaveMethod;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SettingsClass_MetaData[];
#endif
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_SettingsClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataClass_MetaData[];
#endif
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_DataClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRequiresData_MetaData[];
#endif
		static void NewProp_bRequiresData_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRequiresData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAddToDesktop_MetaData[];
#endif
		static void NewProp_bAddToDesktop_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddToDesktop;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCreateNotification_MetaData[];
#endif
		static void NewProp_bCreateNotification_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCreateNotification;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSingleInstanceOnly_MetaData[];
#endif
		static void NewProp_bSingleInstanceOnly_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSingleInstanceOnly;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCreateSettingsBeforeStarting_MetaData[];
#endif
		static void NewProp_bCreateSettingsBeforeStarting_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCreateSettingsBeforeStarting;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideWindowSize_MetaData[];
#endif
		static void NewProp_bOverrideWindowSize_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideWindowSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverrideWindowSize_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OverrideWindowSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverrideWindowClass_MetaData[];
#endif
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_OverrideWindowClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TaskbarButtonClass_MetaData[];
#endif
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_TaskbarButtonClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsSystemInstalledProgram_MetaData[];
#endif
		static void NewProp_bIsSystemInstalledProgram_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsSystemInstalledProgram;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProgramWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ProgramWidget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Settings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataObj_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DataObj;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChildFile_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ChildFile;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParentOS_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_ParentOS;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParentWindow_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ParentWindow;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TaskbarButton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TaskbarButton;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProcessID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ProcessID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedIconWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CachedIconWidget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParentPartition_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_ParentPartition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnOperatingSystemProgramViewStateChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnOperatingSystemProgramViewStateChanged;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_OperatingSystemSimulator,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOperatingSystemBaseProgram_CanAddToDesktop, "CanAddToDesktop" }, // 2273842543
		{ &Z_Construct_UFunction_UOperatingSystemBaseProgram_CreateIconWidget, "CreateIconWidget" }, // 947875941
		{ &Z_Construct_UFunction_UOperatingSystemBaseProgram_GetIconWidget, "GetIconWidget" }, // 535905804
		{ &Z_Construct_UFunction_UOperatingSystemBaseProgram_GetOperatingSystem, "GetOperatingSystem" }, // 1426849723
		{ &Z_Construct_UFunction_UOperatingSystemBaseProgram_IsRunning, "IsRunning" }, // 1678089726
		{ &Z_Construct_UFunction_UOperatingSystemBaseProgram_IsStoreItemFree, "IsStoreItemFree" }, // 3930273416
		{ &Z_Construct_UFunction_UOperatingSystemBaseProgram_K2_OnClose, "K2_OnClose" }, // 589352257
		{ &Z_Construct_UFunction_UOperatingSystemBaseProgram_K2_OnCreate, "K2_OnCreate" }, // 405584080
		{ &Z_Construct_UFunction_UOperatingSystemBaseProgram_K2_OnInstall, "K2_OnInstall" }, // 3433092844
		{ &Z_Construct_UFunction_UOperatingSystemBaseProgram_K2_OnOpenFile, "K2_OnOpenFile" }, // 304197998
		{ &Z_Construct_UFunction_UOperatingSystemBaseProgram_K2_OnSettingsLoad, "K2_OnSettingsLoad" }, // 1266451418
		{ &Z_Construct_UFunction_UOperatingSystemBaseProgram_K2_OnStart, "K2_OnStart" }, // 845821578
		{ &Z_Construct_UFunction_UOperatingSystemBaseProgram_StartProgram, "StartProgram" }, // 1812035807
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Programs/OperatingSystemBaseProgram.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Programs/OperatingSystemBaseProgram.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "OperatingSystemProgram" },
		{ "Comment", "/** Name of this program. */" },
		{ "ModuleRelativePath", "Public/Programs/OperatingSystemBaseProgram.h" },
		{ "ToolTip", "Name of this program." },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOperatingSystemBaseProgram, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::NewProp_Name_MetaData), Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::NewProp_Name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::NewProp_Author_MetaData[] = {
		{ "Category", "OperatingSystemProgram" },
		{ "Comment", "/** The company or individual who created this program. */" },
		{ "ModuleRelativePath", "Public/Programs/OperatingSystemBaseProgram.h" },
		{ "ToolTip", "The company or individual who created this program." },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::NewProp_Author = { "Author", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOperatingSystemBaseProgram, Author), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::NewProp_Author_MetaData), Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::NewProp_Author_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "OperatingSystemProgram" },
		{ "Comment", "/** A simple description for this program. Typically used on store apps. */" },
		{ "ModuleRelativePath", "Public/Programs/OperatingSystemBaseProgram.h" },
		{ "MultiLine", "" },
		{ "ToolTip", "A simple description for this program. Typically used on store apps." },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOperatingSystemBaseProgram, Description), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::NewProp_Description_MetaData), Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::NewProp_Description_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::NewProp_Identifier_MetaData[] = {
		{ "Category", "OperatingSystemProgram" },
		{ "Comment", "/** A unique identifier (UID) for this program. Useful for terminal commands. */" },
		{ "ModuleRelativePath", "Public/Programs/OperatingSystemBaseProgram.h" },
		{ "ToolTip", "A unique identifier (UID) for this program. Useful for terminal commands." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::NewProp_Identifier = { "Identifier", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOperatingSystemBaseProgram, Identifier), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::NewProp_Identifier_MetaData), Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::NewProp_Identifier_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::NewProp_Version_MetaData[] = {
		{ "Category", "OperatingSystemProgram" },
		{ "Comment", "/** Program version */" },
		{ "ModuleRelativePath", "Public/Programs/OperatingSystemBaseProgram.h" },
		{ "ToolTip", "Program version" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::NewProp_Version = { "Version", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOperatingSystemBaseProgram, Version), Z_Construct_UScriptStruct_FVersion, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::NewProp_Version_MetaData), Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::NewProp_Version_MetaData) }; // 2963316928
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::NewProp_StoreDisplayName_MetaData[] = {
		{ "Category", "OperatingSystemProgramStore" },
		{ "Comment", "/** Only for store app. Overrides the name to show on store. If this is unset, Name property is used. */" },
		{ "ModuleRelativePath", "Public/Programs/OperatingSystemBaseProgram.h" },
		{ "ToolTip", "Only for store app. Overrides the name to show on store. If this is unset, Name property is used." },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::NewProp_StoreDisplayName = { "StoreDisplayName", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOperatingSystemBaseProgram, StoreDisplayName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::NewProp_StoreDisplayName_MetaData), Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::NewProp_StoreDisplayName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::NewProp_StoreType_MetaData[] = {
		{ "Category", "OperatingSystemProgramStore" },
		{ "Comment", "/** Only for store app. What category or type is this program? Example: Entertainment, Productivity, Financial, Game, Utilities, Tool etc. */" },
		{ "ModuleRelativePath", "Public/Programs/OperatingSystemBaseProgram.h" },
		{ "ToolTip", "Only for store app. What category or type is this program? Example: Entertainment, Productivity, Financial, Game, Utilities, Tool etc." },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::NewProp_StoreType = { "StoreType", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOperatingSystemBaseProgram, StoreType), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::NewProp_StoreType_MetaData), Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::NewProp_StoreType_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::NewProp_StorePrice_MetaData[] = {
		{ "Category", "OperatingSystemProgramStore" },
		{ "Comment", "/** Only for store app. What price should be displayed on store. Set to 0 to make this free. */" },
		{ "ModuleRelativePath", "Public/Programs/OperatingSystemBaseProgram.h" },
		{ "ToolTip", "Only for store app. What price should be displayed on store. Set to 0 to make this free." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::NewProp_StorePrice = { "StorePrice", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOperatingSystemBaseProgram, StorePrice), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::NewProp_StorePrice_MetaData), Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::NewProp_StorePrice_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::NewProp_SupportedOperatingSystems_MetaData[] = {
		{ "Categories", "OperatingSystem.Type" },
		{ "Category", "OperatingSystemProgram" },
		{ "Comment", "/** If this container is empty, it is assumed all Operating Systems are supported. */" },
		{ "ModuleRelativePath", "Public/Programs/OperatingSystemBaseProgram.h" },
		{ "ToolTip", "If this container is empty, it is assumed all Operating Systems are supported." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::NewProp_SupportedOperatingSystems = { "SupportedOperatingSystems", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOperatingSystemBaseProgram, SupportedOperatingSystems), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::NewProp_SupportedOperatingSystems_MetaData), Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::NewProp_SupportedOperatingSystems_MetaData) }; // 405371792
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::NewProp_bRequireMinOperatingSystemVersion_MetaData[] = {
		{ "Category", "OperatingSystemProgram" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Programs/OperatingSystemBaseProgram.h" },
	};
#endif
	void Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::NewProp_bRequireMinOperatingSystemVersion_SetBit(void* Obj)
	{
		((UOperatingSystemBaseProgram*)Obj)->bRequireMinOperatingSystemVersion = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::NewProp_bRequireMinOperatingSystemVersion = { "bRequireMinOperatingSystemVersion", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UOperatingSystemBaseProgram), &Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::NewProp_bRequireMinOperatingSystemVersion_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::NewProp_bRequireMinOperatingSystemVersion_MetaData), Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::NewProp_bRequireMinOperatingSystemVersion_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::NewProp_MinOperatingSystemVersion_MetaData[] = {
		{ "Category", "OperatingSystemProgram" },
		{ "Comment", "/** If enabled, this program will not install/run on an Operating System less than this version. */" },
		{ "EditCondition", "bRequireMinOperatingSystemVersion" },
		{ "ModuleRelativePath", "Public/Programs/OperatingSystemBaseProgram.h" },
		{ "ToolTip", "If enabled, this program will not install/run on an Operating System less than this version." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::NewProp_MinOperatingSystemVersion = { "MinOperatingSystemVersion", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOperatingSystemBaseProgram, MinOperatingSystemVersion), Z_Construct_UScriptStruct_FVersion, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::NewProp_MinOperatingSystemVersion_MetaData), Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::NewProp_MinOperatingSystemVersion_MetaData) }; // 2963316928
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::NewProp_IconObject_MetaData[] = {
		{ "AllowedClasses", "Texture,MaterialInterface" },
		{ "Category", "OperatingSystemProgram" },
		{ "Comment", "/** Obvious right? C'mon its just an Icon. What you need a tooltip for \xc2\xaf\\_(\xe3\x83\x84)_/\xc2\xaf */" },
		{ "DisplayThumbnail", "true" },
		{ "ModuleRelativePath", "Public/Programs/OperatingSystemBaseProgram.h" },
		{ "ToolTip", "Obvious right? C'mon its just an Icon. What you need a tooltip for \xc2\xaf\\_(\xe3\x83\x84)_/\xc2\xaf" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::NewProp_IconObject = { "IconObject", nullptr, (EPropertyFlags)0x0024080000010015, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOperatingSystemBaseProgram, IconObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::NewProp_IconObject_MetaData), Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::NewProp_IconObject_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::NewProp_SpaceRequiredInMB_MetaData[] = {
		{ "Category", "OperatingSystemProgram" },
		{ "Comment", "/** How much space does this program consume once installed. */" },
		{ "ForceUnits", "MB" },
		{ "ModuleRelativePath", "Public/Programs/OperatingSystemBaseProgram.h" },
		{ "ToolTip", "How much space does this program consume once installed." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::NewProp_SpaceRequiredInMB = { "SpaceRequiredInMB", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOperatingSystemBaseProgram, SpaceRequiredInMB), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::NewProp_SpaceRequiredInMB_MetaData), Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::NewProp_SpaceRequiredInMB_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::NewProp_IconWidgetClass_MetaData[] = {
		{ "Category", "OperatingSystemProgramWidgets" },
		{ "Comment", "/** Icon widget that represents this program. */" },
		{ "ModuleRelativePath", "Public/Programs/OperatingSystemBaseProgram.h" },
		{ "ToolTip", "Icon widget that represents this program." },
	};
#endif
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::NewProp_IconWidgetClass = { "IconWidgetClass", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOperatingSystemBaseProgram, IconWidgetClass), Z_Construct_UClass_UOperatingSystemProgramIconWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::NewProp_IconWidgetClass_MetaData), Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::NewProp_IconWidgetClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::NewProp_WidgetClass_MetaData[] = {
		{ "Category", "OperatingSystemProgramWidgets" },
		{ "Comment", "/** Widget associated with this program. */" },
		{ "ModuleRelativePath", "Public/Programs/OperatingSystemBaseProgram.h" },
		{ "ToolTip", "Widget associated with this program." },
	};
#endif
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::NewProp_WidgetClass = { "WidgetClass", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOperatingSystemBaseProgram, WidgetClass), Z_Construct_UClass_UOperatingSystemProgramWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::NewProp_WidgetClass_MetaData), Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::NewProp_WidgetClass_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::NewProp_SaveMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::NewProp_SaveMethod_MetaData[] = {
		{ "Category", "OperatingSystemProgram" },
		{ "Comment", "/** Determines when this program saves. */" },
		{ "ModuleRelativePath", "Public/Programs/OperatingSystemBaseProgram.h" },
		{ "ToolTip", "Determines when this program saves." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::NewProp_SaveMethod = { "SaveMethod", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOperatingSystemBaseProgram, SaveMethod), Z_Construct_UEnum_OperatingSystemSimulator_EProgramSaveMethod, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::NewProp_SaveMethod_MetaData), Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::NewProp_SaveMethod_MetaData) }; // 1672233611
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::NewProp_SettingsClass_MetaData[] = {
		{ "Category", "OperatingSystemProgram" },
		{ "Comment", "/** An optional class where you can save custom settings for this program. Example: Customizable options for a browser. */" },
		{ "EditCondition", "SaveMethod != EProgramSaveMethod::DoNotSave" },
		{ "ModuleRelativePath", "Public/Programs/OperatingSystemBaseProgram.h" },
		{ "ToolTip", "An optional class where you can save custom settings for this program. Example: Customizable options for a browser." },
	};
#endif
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::NewProp_SettingsClass = { "SettingsClass", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOperatingSystemBaseProgram, SettingsClass), Z_Construct_UClass_UOperatingSystemProgramSettings_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::NewProp_SettingsClass_MetaData), Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::NewProp_SettingsClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::NewProp_DataClass_MetaData[] = {
		{ "Category", "OperatingSystemProgram" },
		{ "ModuleRelativePath", "Public/Programs/OperatingSystemBaseProgram.h" },
	};
#endif
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::NewProp_DataClass = { "DataClass", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOperatingSystemBaseProgram, DataClass), Z_Construct_UClass_UOperatingSystemProgramData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::NewProp_DataClass_MetaData), Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::NewProp_DataClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::NewProp_bRequiresData_MetaData[] = {
		{ "Category", "OperatingSystemProgram" },
		{ "Comment", "/** If true, then this program must have a valid data class set and the data object must return ShouldCreate true (by default it is). If not, program will not create. */" },
		{ "ModuleRelativePath", "Public/Programs/OperatingSystemBaseProgram.h" },
		{ "ToolTip", "If true, then this program must have a valid data class set and the data object must return ShouldCreate true (by default it is). If not, program will not create." },
	};
#endif
	void Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::NewProp_bRequiresData_SetBit(void* Obj)
	{
		((UOperatingSystemBaseProgram*)Obj)->bRequiresData = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::NewProp_bRequiresData = { "bRequiresData", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UOperatingSystemBaseProgram), &Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::NewProp_bRequiresData_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::NewProp_bRequiresData_MetaData), Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::NewProp_bRequiresData_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::NewProp_bAddToDesktop_MetaData[] = {
		{ "Category", "OperatingSystemProgram" },
		{ "Comment", "/** If true, add this program to the desktop after install. */" },
		{ "ModuleRelativePath", "Public/Programs/OperatingSystemBaseProgram.h" },
		{ "ToolTip", "If true, add this program to the desktop after install." },
	};
#endif
	void Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::NewProp_bAddToDesktop_SetBit(void* Obj)
	{
		((UOperatingSystemBaseProgram*)Obj)->bAddToDesktop = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::NewProp_bAddToDesktop = { "bAddToDesktop", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UOperatingSystemBaseProgram), &Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::NewProp_bAddToDesktop_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::NewProp_bAddToDesktop_MetaData), Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::NewProp_bAddToDesktop_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::NewProp_bCreateNotification_MetaData[] = {
		{ "Category", "OperatingSystemProgram" },
		{ "Comment", "/** If true, add a notification to the Operating System that this program installed. */" },
		{ "ModuleRelativePath", "Public/Programs/OperatingSystemBaseProgram.h" },
		{ "ToolTip", "If true, add a notification to the Operating System that this program installed." },
	};
#endif
	void Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::NewProp_bCreateNotification_SetBit(void* Obj)
	{
		((UOperatingSystemBaseProgram*)Obj)->bCreateNotification = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::NewProp_bCreateNotification = { "bCreateNotification", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UOperatingSystemBaseProgram), &Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::NewProp_bCreateNotification_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::NewProp_bCreateNotification_MetaData), Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::NewProp_bCreateNotification_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::NewProp_bSingleInstanceOnly_MetaData[] = {
		{ "Category", "OperatingSystemProgram" },
		{ "Comment", "/** If true, only one instance of this program is allowed to run. */" },
		{ "ModuleRelativePath", "Public/Programs/OperatingSystemBaseProgram.h" },
		{ "ToolTip", "If true, only one instance of this program is allowed to run." },
	};
#endif
	void Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::NewProp_bSingleInstanceOnly_SetBit(void* Obj)
	{
		((UOperatingSystemBaseProgram*)Obj)->bSingleInstanceOnly = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::NewProp_bSingleInstanceOnly = { "bSingleInstanceOnly", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UOperatingSystemBaseProgram), &Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::NewProp_bSingleInstanceOnly_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::NewProp_bSingleInstanceOnly_MetaData), Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::NewProp_bSingleInstanceOnly_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::NewProp_bCreateSettingsBeforeStarting_MetaData[] = {
		{ "Category", "OperatingSystemProgram" },
		{ "Comment", "/** Some programs might need access to its settings class before they are started.\n\x09* For example, to determine if the program itself should start automatically when os is started. In this case, you need to enable this.\n\x09* @See: K2_OnSettingsLoad\n\x09*/" },
		{ "ModuleRelativePath", "Public/Programs/OperatingSystemBaseProgram.h" },
		{ "ToolTip", "Some programs might need access to its settings class before they are started.\nFor example, to determine if the program itself should start automatically when os is started. In this case, you need to enable this.\n@See: K2_OnSettingsLoad" },
	};
#endif
	void Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::NewProp_bCreateSettingsBeforeStarting_SetBit(void* Obj)
	{
		((UOperatingSystemBaseProgram*)Obj)->bCreateSettingsBeforeStarting = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::NewProp_bCreateSettingsBeforeStarting = { "bCreateSettingsBeforeStarting", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UOperatingSystemBaseProgram), &Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::NewProp_bCreateSettingsBeforeStarting_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::NewProp_bCreateSettingsBeforeStarting_MetaData), Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::NewProp_bCreateSettingsBeforeStarting_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::NewProp_bOverrideWindowSize_MetaData[] = {
		{ "Category", "OperatingSystemProgram" },
		{ "Comment", "/** Disables auto determining and set the window size as set by Override Window Size variable. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Programs/OperatingSystemBaseProgram.h" },
		{ "ToolTip", "Disables auto determining and set the window size as set by Override Window Size variable." },
	};
#endif
	void Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::NewProp_bOverrideWindowSize_SetBit(void* Obj)
	{
		((UOperatingSystemBaseProgram*)Obj)->bOverrideWindowSize = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::NewProp_bOverrideWindowSize = { "bOverrideWindowSize", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UOperatingSystemBaseProgram), &Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::NewProp_bOverrideWindowSize_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::NewProp_bOverrideWindowSize_MetaData), Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::NewProp_bOverrideWindowSize_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::NewProp_OverrideWindowSize_MetaData[] = {
		{ "Category", "OperatingSystemProgram" },
		{ "Comment", "/** Forcefully set a window size instead of auto-determining */" },
		{ "EditCondition", "bOverrideWindowSize" },
		{ "ModuleRelativePath", "Public/Programs/OperatingSystemBaseProgram.h" },
		{ "ToolTip", "Forcefully set a window size instead of auto-determining" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::NewProp_OverrideWindowSize = { "OverrideWindowSize", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOperatingSystemBaseProgram, OverrideWindowSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::NewProp_OverrideWindowSize_MetaData), Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::NewProp_OverrideWindowSize_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::NewProp_OverrideWindowClass_MetaData[] = {
		{ "Category", "OperatingSystemProgramWidgets" },
		{ "Comment", "/** If not null, then use this class as draggable window when starting this program. If null, new window class should be set inside UOperatingSystemWidget::K2_CreateNewWindow */" },
		{ "ModuleRelativePath", "Public/Programs/OperatingSystemBaseProgram.h" },
		{ "ToolTip", "If not null, then use this class as draggable window when starting this program. If null, new window class should be set inside UOperatingSystemWidget::K2_CreateNewWindow" },
	};
#endif
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::NewProp_OverrideWindowClass = { "OverrideWindowClass", nullptr, (EPropertyFlags)0x0024080000010015, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOperatingSystemBaseProgram, OverrideWindowClass), Z_Construct_UClass_UDraggableWindow_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::NewProp_OverrideWindowClass_MetaData), Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::NewProp_OverrideWindowClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::NewProp_TaskbarButtonClass_MetaData[] = {
		{ "Category", "OperatingSystemProgramWidgets" },
		{ "ModuleRelativePath", "Public/Programs/OperatingSystemBaseProgram.h" },
	};
#endif
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::NewProp_TaskbarButtonClass = { "TaskbarButtonClass", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOperatingSystemBaseProgram, TaskbarButtonClass), Z_Construct_UClass_UOperatingSystemTaskbarButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::NewProp_TaskbarButtonClass_MetaData), Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::NewProp_TaskbarButtonClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::NewProp_bIsSystemInstalledProgram_MetaData[] = {
		{ "Category", "OperatingSystemProgramDebug" },
		{ "Comment", "/** True if this program was installed by default when installing Operating System. */" },
		{ "ModuleRelativePath", "Public/Programs/OperatingSystemBaseProgram.h" },
		{ "ToolTip", "True if this program was installed by default when installing Operating System." },
	};
#endif
	void Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::NewProp_bIsSystemInstalledProgram_SetBit(void* Obj)
	{
		((UOperatingSystemBaseProgram*)Obj)->bIsSystemInstalledProgram = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::NewProp_bIsSystemInstalledProgram = { "bIsSystemInstalledProgram", nullptr, (EPropertyFlags)0x0040000000020801, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UOperatingSystemBaseProgram), &Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::NewProp_bIsSystemInstalledProgram_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::NewProp_bIsSystemInstalledProgram_MetaData), Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::NewProp_bIsSystemInstalledProgram_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::NewProp_ProgramWidget_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OperatingSystemProgramDebug" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Programs/OperatingSystemBaseProgram.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::NewProp_ProgramWidget = { "ProgramWidget", nullptr, (EPropertyFlags)0x00440000000a281d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOperatingSystemBaseProgram, ProgramWidget), Z_Construct_UClass_UOperatingSystemProgramWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::NewProp_ProgramWidget_MetaData), Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::NewProp_ProgramWidget_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::NewProp_Settings_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OperatingSystemProgramDebug" },
		{ "ModuleRelativePath", "Public/Programs/OperatingSystemBaseProgram.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0044000000022815, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOperatingSystemBaseProgram, Settings), Z_Construct_UClass_UOperatingSystemProgramSettings_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::NewProp_Settings_MetaData), Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::NewProp_Settings_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::NewProp_DataObj_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OperatingSystemProgramDebug" },
		{ "ModuleRelativePath", "Public/Programs/OperatingSystemBaseProgram.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::NewProp_DataObj = { "DataObj", nullptr, (EPropertyFlags)0x0044000000022815, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOperatingSystemBaseProgram, DataObj), Z_Construct_UClass_UOperatingSystemProgramData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::NewProp_DataObj_MetaData), Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::NewProp_DataObj_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::NewProp_ChildFile_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OperatingSystemProgramDebug" },
		{ "ModuleRelativePath", "Public/Programs/OperatingSystemBaseProgram.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::NewProp_ChildFile = { "ChildFile", nullptr, (EPropertyFlags)0x0044000000022815, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOperatingSystemBaseProgram, ChildFile), Z_Construct_UClass_UOperatingSystemFile_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::NewProp_ChildFile_MetaData), Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::NewProp_ChildFile_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::NewProp_ParentOS_MetaData[] = {
		{ "Category", "OperatingSystemProgramDebug" },
		{ "ModuleRelativePath", "Public/Programs/OperatingSystemBaseProgram.h" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::NewProp_ParentOS = { "ParentOS", nullptr, (EPropertyFlags)0x0044000000022801, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOperatingSystemBaseProgram, ParentOS), Z_Construct_UClass_UOperatingSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::NewProp_ParentOS_MetaData), Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::NewProp_ParentOS_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::NewProp_ParentWindow_MetaData[] = {
		{ "Category", "OperatingSystemProgramDebug" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Programs/OperatingSystemBaseProgram.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::NewProp_ParentWindow = { "ParentWindow", nullptr, (EPropertyFlags)0x00440000000a2809, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOperatingSystemBaseProgram, ParentWindow), Z_Construct_UClass_UDraggableWindow_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::NewProp_ParentWindow_MetaData), Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::NewProp_ParentWindow_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::NewProp_TaskbarButton_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OperatingSystemProgramDebug" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Programs/OperatingSystemBaseProgram.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::NewProp_TaskbarButton = { "TaskbarButton", nullptr, (EPropertyFlags)0x00440000000a281d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOperatingSystemBaseProgram, TaskbarButton), Z_Construct_UClass_UOperatingSystemTaskbarButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::NewProp_TaskbarButton_MetaData), Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::NewProp_TaskbarButton_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::NewProp_ProcessID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OperatingSystemProgramDebug" },
		{ "ModuleRelativePath", "Public/Programs/OperatingSystemBaseProgram.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::NewProp_ProcessID = { "ProcessID", nullptr, (EPropertyFlags)0x0040000000022815, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOperatingSystemBaseProgram, ProcessID), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::NewProp_ProcessID_MetaData), Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::NewProp_ProcessID_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::NewProp_CachedIconWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Programs/OperatingSystemBaseProgram.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::NewProp_CachedIconWidget = { "CachedIconWidget", nullptr, (EPropertyFlags)0x0044000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOperatingSystemBaseProgram, CachedIconWidget), Z_Construct_UClass_UOperatingSystemProgramIconWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::NewProp_CachedIconWidget_MetaData), Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::NewProp_CachedIconWidget_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::NewProp_ParentPartition_MetaData[] = {
		{ "Category", "OperatingSystemProgramDebug" },
		{ "ModuleRelativePath", "Public/Programs/OperatingSystemBaseProgram.h" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::NewProp_ParentPartition = { "ParentPartition", nullptr, (EPropertyFlags)0x0024080000002014, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOperatingSystemBaseProgram, ParentPartition), Z_Construct_UClass_UOperatingSystemPartition_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::NewProp_ParentPartition_MetaData), Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::NewProp_ParentPartition_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::NewProp_OnOperatingSystemProgramViewStateChanged_MetaData[] = {
		{ "Category", "OperatingSystemProgramDelegates" },
		{ "ModuleRelativePath", "Public/Programs/OperatingSystemBaseProgram.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::NewProp_OnOperatingSystemProgramViewStateChanged = { "OnOperatingSystemProgramViewStateChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOperatingSystemBaseProgram, OnOperatingSystemProgramViewStateChanged), Z_Construct_UDelegateFunction_OperatingSystemSimulator_OnOperatingSystemProgramViewStateChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::NewProp_OnOperatingSystemProgramViewStateChanged_MetaData), Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::NewProp_OnOperatingSystemProgramViewStateChanged_MetaData) }; // 4043828059
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::NewProp_Author,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::NewProp_Description,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::NewProp_Identifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::NewProp_Version,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::NewProp_StoreDisplayName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::NewProp_StoreType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::NewProp_StorePrice,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::NewProp_SupportedOperatingSystems,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::NewProp_bRequireMinOperatingSystemVersion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::NewProp_MinOperatingSystemVersion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::NewProp_IconObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::NewProp_SpaceRequiredInMB,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::NewProp_IconWidgetClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::NewProp_WidgetClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::NewProp_SaveMethod_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::NewProp_SaveMethod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::NewProp_SettingsClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::NewProp_DataClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::NewProp_bRequiresData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::NewProp_bAddToDesktop,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::NewProp_bCreateNotification,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::NewProp_bSingleInstanceOnly,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::NewProp_bCreateSettingsBeforeStarting,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::NewProp_bOverrideWindowSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::NewProp_OverrideWindowSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::NewProp_OverrideWindowClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::NewProp_TaskbarButtonClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::NewProp_bIsSystemInstalledProgram,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::NewProp_ProgramWidget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::NewProp_Settings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::NewProp_DataObj,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::NewProp_ChildFile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::NewProp_ParentOS,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::NewProp_ParentWindow,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::NewProp_TaskbarButton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::NewProp_ProcessID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::NewProp_CachedIconWidget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::NewProp_ParentPartition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::NewProp_OnOperatingSystemProgramViewStateChanged,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOperatingSystemBaseProgram>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::ClassParams = {
		&UOperatingSystemBaseProgram::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::PropPointers),
		0,
		0x008000A1u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::Class_MetaDataParams), Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UOperatingSystemBaseProgram()
	{
		if (!Z_Registration_Info_UClass_UOperatingSystemBaseProgram.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOperatingSystemBaseProgram.OuterSingleton, Z_Construct_UClass_UOperatingSystemBaseProgram_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOperatingSystemBaseProgram.OuterSingleton;
	}
	template<> OPERATINGSYSTEMSIMULATOR_API UClass* StaticClass<UOperatingSystemBaseProgram>()
	{
		return UOperatingSystemBaseProgram::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOperatingSystemBaseProgram);
	UOperatingSystemBaseProgram::~UOperatingSystemBaseProgram() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Programs_OperatingSystemBaseProgram_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Programs_OperatingSystemBaseProgram_h_Statics::EnumInfo[] = {
		{ EProgramSaveMethod_StaticEnum, TEXT("EProgramSaveMethod"), &Z_Registration_Info_UEnum_EProgramSaveMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1672233611U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Programs_OperatingSystemBaseProgram_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOperatingSystemBaseProgram, UOperatingSystemBaseProgram::StaticClass, TEXT("UOperatingSystemBaseProgram"), &Z_Registration_Info_UClass_UOperatingSystemBaseProgram, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOperatingSystemBaseProgram), 3560749901U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Programs_OperatingSystemBaseProgram_h_2572181933(TEXT("/Script/OperatingSystemSimulator"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Programs_OperatingSystemBaseProgram_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Programs_OperatingSystemBaseProgram_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Programs_OperatingSystemBaseProgram_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Programs_OperatingSystemBaseProgram_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
