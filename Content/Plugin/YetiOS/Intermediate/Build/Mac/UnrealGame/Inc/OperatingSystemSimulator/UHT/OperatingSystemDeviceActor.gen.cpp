// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OperatingSystemSimulator/Public/Devices/OperatingSystemDeviceActor.h"
#include "GameplayTagContainer.h"
#include "OperatingSystemSimulator/Public/OperatingSystemTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOperatingSystemDeviceActor() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	OPERATINGSYSTEMSIMULATOR_API UClass* Z_Construct_UClass_AOperatingSystemDeviceActor();
	OPERATINGSYSTEMSIMULATOR_API UClass* Z_Construct_UClass_AOperatingSystemDeviceActor_NoRegister();
	OPERATINGSYSTEMSIMULATOR_API UClass* Z_Construct_UClass_UOperatingSystemBaseDevice_NoRegister();
	OPERATINGSYSTEMSIMULATOR_API UClass* Z_Construct_UClass_UOperatingSystemDeviceMessenger_NoRegister();
	OPERATINGSYSTEMSIMULATOR_API UClass* Z_Construct_UClass_UOperatingSystemSaveGame_NoRegister();
	OPERATINGSYSTEMSIMULATOR_API UEnum* Z_Construct_UEnum_OperatingSystemSimulator_EOperatingSystemWidgetSet();
	OPERATINGSYSTEMSIMULATOR_API UFunction* Z_Construct_UDelegateFunction_OperatingSystemSimulator_OnDeviceCreated__DelegateSignature();
	OPERATINGSYSTEMSIMULATOR_API UScriptStruct* Z_Construct_UScriptStruct_FGenericError();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	UPackage* Z_Construct_UPackage__Script_OperatingSystemSimulator();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOperatingSystemWidgetSet;
	static UEnum* EOperatingSystemWidgetSet_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EOperatingSystemWidgetSet.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EOperatingSystemWidgetSet.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OperatingSystemSimulator_EOperatingSystemWidgetSet, (UObject*)Z_Construct_UPackage__Script_OperatingSystemSimulator(), TEXT("EOperatingSystemWidgetSet"));
		}
		return Z_Registration_Info_UEnum_EOperatingSystemWidgetSet.OuterSingleton;
	}
	template<> OPERATINGSYSTEMSIMULATOR_API UEnum* StaticEnum<EOperatingSystemWidgetSet>()
	{
		return EOperatingSystemWidgetSet_StaticEnum();
	}
	struct Z_Construct_UEnum_OperatingSystemSimulator_EOperatingSystemWidgetSet_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_OperatingSystemSimulator_EOperatingSystemWidgetSet_Statics::Enumerators[] = {
		{ "EOperatingSystemWidgetSet::Disable", (int64)EOperatingSystemWidgetSet::Disable },
		{ "EOperatingSystemWidgetSet::SetOnly", (int64)EOperatingSystemWidgetSet::SetOnly },
		{ "EOperatingSystemWidgetSet::SetAndApply", (int64)EOperatingSystemWidgetSet::SetAndApply },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_OperatingSystemSimulator_EOperatingSystemWidgetSet_Statics::Enum_MetaDataParams[] = {
		{ "Disable.Name", "EOperatingSystemWidgetSet::Disable" },
		{ "ModuleRelativePath", "Public/Devices/OperatingSystemDeviceActor.h" },
		{ "SetAndApply.Name", "EOperatingSystemWidgetSet::SetAndApply" },
		{ "SetOnly.Name", "EOperatingSystemWidgetSet::SetOnly" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OperatingSystemSimulator_EOperatingSystemWidgetSet_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_OperatingSystemSimulator,
		nullptr,
		"EOperatingSystemWidgetSet",
		"EOperatingSystemWidgetSet",
		Z_Construct_UEnum_OperatingSystemSimulator_EOperatingSystemWidgetSet_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_OperatingSystemSimulator_EOperatingSystemWidgetSet_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OperatingSystemSimulator_EOperatingSystemWidgetSet_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OperatingSystemSimulator_EOperatingSystemWidgetSet_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_OperatingSystemSimulator_EOperatingSystemWidgetSet()
	{
		if (!Z_Registration_Info_UEnum_EOperatingSystemWidgetSet.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOperatingSystemWidgetSet.InnerSingleton, Z_Construct_UEnum_OperatingSystemSimulator_EOperatingSystemWidgetSet_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EOperatingSystemWidgetSet.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_OperatingSystemSimulator_OnDeviceCreated__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OperatingSystemSimulator_OnDeviceCreated__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Devices/OperatingSystemDeviceActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OperatingSystemSimulator_OnDeviceCreated__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OperatingSystemSimulator, nullptr, "OnDeviceCreated__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OperatingSystemSimulator_OnDeviceCreated__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OperatingSystemSimulator_OnDeviceCreated__DelegateSignature_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UDelegateFunction_OperatingSystemSimulator_OnDeviceCreated__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OperatingSystemSimulator_OnDeviceCreated__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnDeviceCreated_DelegateWrapper(const FMulticastScriptDelegate& OnDeviceCreated)
{
	OnDeviceCreated.ProcessMulticastDelegate<UObject>(NULL);
}
	DEFINE_FUNCTION(AOperatingSystemDeviceActor::execK2_CreateDevice)
	{
		P_GET_STRUCT_REF(FGenericError,Z_Param_Out_OutError);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->K2_CreateDevice(Z_Param_Out_OutError);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AOperatingSystemDeviceActor::execRefreshWidget)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RefreshWidget();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AOperatingSystemDeviceActor::execClearWidgetFromScreen)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearWidgetFromScreen();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AOperatingSystemDeviceActor::execSetAddWidgetsToScreen)
	{
		P_GET_ENUM(EOperatingSystemWidgetSet,Z_Param_Method);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAddWidgetsToScreen(EOperatingSystemWidgetSet(Z_Param_Method));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AOperatingSystemDeviceActor::execCreateDevice)
	{
		P_GET_STRUCT_REF(FGenericError,Z_Param_Out_OutError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CreateDevice(Z_Param_Out_OutError);
		P_NATIVE_END;
	}
	struct OperatingSystemDeviceActor_eventK2_OnBlueScreenShow_Parms
	{
		float OnScreenTime;
	};
	struct OperatingSystemDeviceActor_eventK2_OnWidgetChanged_Parms
	{
		UUserWidget* ChangedWidget;
	};
	static FName NAME_AOperatingSystemDeviceActor_K2_OnBlueScreenShow = FName(TEXT("K2_OnBlueScreenShow"));
	void AOperatingSystemDeviceActor::K2_OnBlueScreenShow(float const& OnScreenTime)
	{
		OperatingSystemDeviceActor_eventK2_OnBlueScreenShow_Parms Parms;
		Parms.OnScreenTime=OnScreenTime;
		ProcessEvent(FindFunctionChecked(NAME_AOperatingSystemDeviceActor_K2_OnBlueScreenShow),&Parms);
	}
	static FName NAME_AOperatingSystemDeviceActor_K2_OnCurrentDeviceDestroyed = FName(TEXT("K2_OnCurrentDeviceDestroyed"));
	void AOperatingSystemDeviceActor::K2_OnCurrentDeviceDestroyed()
	{
		ProcessEvent(FindFunctionChecked(NAME_AOperatingSystemDeviceActor_K2_OnCurrentDeviceDestroyed),NULL);
	}
	static FName NAME_AOperatingSystemDeviceActor_K2_OnWidgetChanged = FName(TEXT("K2_OnWidgetChanged"));
	void AOperatingSystemDeviceActor::K2_OnWidgetChanged(UUserWidget* ChangedWidget)
	{
		OperatingSystemDeviceActor_eventK2_OnWidgetChanged_Parms Parms;
		Parms.ChangedWidget=ChangedWidget;
		ProcessEvent(FindFunctionChecked(NAME_AOperatingSystemDeviceActor_K2_OnWidgetChanged),&Parms);
	}
	void AOperatingSystemDeviceActor::StaticRegisterNativesAOperatingSystemDeviceActor()
	{
		UClass* Class = AOperatingSystemDeviceActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClearWidgetFromScreen", &AOperatingSystemDeviceActor::execClearWidgetFromScreen },
			{ "CreateDevice", &AOperatingSystemDeviceActor::execCreateDevice },
			{ "K2_CreateDevice", &AOperatingSystemDeviceActor::execK2_CreateDevice },
			{ "RefreshWidget", &AOperatingSystemDeviceActor::execRefreshWidget },
			{ "SetAddWidgetsToScreen", &AOperatingSystemDeviceActor::execSetAddWidgetsToScreen },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AOperatingSystemDeviceActor_ClearWidgetFromScreen_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOperatingSystemDeviceActor_ClearWidgetFromScreen_Statics::Function_MetaDataParams[] = {
		{ "Category", "OperatingSystemDeviceActor" },
		{ "ModuleRelativePath", "Public/Devices/OperatingSystemDeviceActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOperatingSystemDeviceActor_ClearWidgetFromScreen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOperatingSystemDeviceActor, nullptr, "ClearWidgetFromScreen", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOperatingSystemDeviceActor_ClearWidgetFromScreen_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOperatingSystemDeviceActor_ClearWidgetFromScreen_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AOperatingSystemDeviceActor_ClearWidgetFromScreen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOperatingSystemDeviceActor_ClearWidgetFromScreen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOperatingSystemDeviceActor_CreateDevice_Statics
	{
		struct OperatingSystemDeviceActor_eventCreateDevice_Parms
		{
			FGenericError OutError;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutError;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AOperatingSystemDeviceActor_CreateDevice_Statics::NewProp_OutError = { "OutError", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemDeviceActor_eventCreateDevice_Parms, OutError), Z_Construct_UScriptStruct_FGenericError, METADATA_PARAMS(0, nullptr) }; // 4286029882
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOperatingSystemDeviceActor_CreateDevice_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOperatingSystemDeviceActor_CreateDevice_Statics::NewProp_OutError,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOperatingSystemDeviceActor_CreateDevice_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Devices/OperatingSystemDeviceActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOperatingSystemDeviceActor_CreateDevice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOperatingSystemDeviceActor, nullptr, "CreateDevice", nullptr, nullptr, Z_Construct_UFunction_AOperatingSystemDeviceActor_CreateDevice_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOperatingSystemDeviceActor_CreateDevice_Statics::PropPointers), sizeof(Z_Construct_UFunction_AOperatingSystemDeviceActor_CreateDevice_Statics::OperatingSystemDeviceActor_eventCreateDevice_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOperatingSystemDeviceActor_CreateDevice_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOperatingSystemDeviceActor_CreateDevice_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOperatingSystemDeviceActor_CreateDevice_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AOperatingSystemDeviceActor_CreateDevice_Statics::OperatingSystemDeviceActor_eventCreateDevice_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AOperatingSystemDeviceActor_CreateDevice()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOperatingSystemDeviceActor_CreateDevice_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOperatingSystemDeviceActor_K2_CreateDevice_Statics
	{
		struct OperatingSystemDeviceActor_eventK2_CreateDevice_Parms
		{
			FGenericError OutError;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutError;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AOperatingSystemDeviceActor_K2_CreateDevice_Statics::NewProp_OutError = { "OutError", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemDeviceActor_eventK2_CreateDevice_Parms, OutError), Z_Construct_UScriptStruct_FGenericError, METADATA_PARAMS(0, nullptr) }; // 4286029882
	void Z_Construct_UFunction_AOperatingSystemDeviceActor_K2_CreateDevice_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OperatingSystemDeviceActor_eventK2_CreateDevice_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AOperatingSystemDeviceActor_K2_CreateDevice_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OperatingSystemDeviceActor_eventK2_CreateDevice_Parms), &Z_Construct_UFunction_AOperatingSystemDeviceActor_K2_CreateDevice_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOperatingSystemDeviceActor_K2_CreateDevice_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOperatingSystemDeviceActor_K2_CreateDevice_Statics::NewProp_OutError,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOperatingSystemDeviceActor_K2_CreateDevice_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOperatingSystemDeviceActor_K2_CreateDevice_Statics::Function_MetaDataParams[] = {
		{ "Category", "OperatingSystemDeviceActor" },
		{ "DisplayName", "Create Device" },
		{ "ModuleRelativePath", "Public/Devices/OperatingSystemDeviceActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOperatingSystemDeviceActor_K2_CreateDevice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOperatingSystemDeviceActor, nullptr, "K2_CreateDevice", nullptr, nullptr, Z_Construct_UFunction_AOperatingSystemDeviceActor_K2_CreateDevice_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOperatingSystemDeviceActor_K2_CreateDevice_Statics::PropPointers), sizeof(Z_Construct_UFunction_AOperatingSystemDeviceActor_K2_CreateDevice_Statics::OperatingSystemDeviceActor_eventK2_CreateDevice_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOperatingSystemDeviceActor_K2_CreateDevice_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOperatingSystemDeviceActor_K2_CreateDevice_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOperatingSystemDeviceActor_K2_CreateDevice_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AOperatingSystemDeviceActor_K2_CreateDevice_Statics::OperatingSystemDeviceActor_eventK2_CreateDevice_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AOperatingSystemDeviceActor_K2_CreateDevice()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOperatingSystemDeviceActor_K2_CreateDevice_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOperatingSystemDeviceActor_K2_OnBlueScreenShow_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnScreenTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OnScreenTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOperatingSystemDeviceActor_K2_OnBlueScreenShow_Statics::NewProp_OnScreenTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AOperatingSystemDeviceActor_K2_OnBlueScreenShow_Statics::NewProp_OnScreenTime = { "OnScreenTime", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemDeviceActor_eventK2_OnBlueScreenShow_Parms, OnScreenTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOperatingSystemDeviceActor_K2_OnBlueScreenShow_Statics::NewProp_OnScreenTime_MetaData), Z_Construct_UFunction_AOperatingSystemDeviceActor_K2_OnBlueScreenShow_Statics::NewProp_OnScreenTime_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOperatingSystemDeviceActor_K2_OnBlueScreenShow_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOperatingSystemDeviceActor_K2_OnBlueScreenShow_Statics::NewProp_OnScreenTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOperatingSystemDeviceActor_K2_OnBlueScreenShow_Statics::Function_MetaDataParams[] = {
		{ "Category", "OperatingSystemDeviceActor" },
		{ "DisplayName", "On Bsod Screen Shown" },
		{ "ModuleRelativePath", "Public/Devices/OperatingSystemDeviceActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOperatingSystemDeviceActor_K2_OnBlueScreenShow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOperatingSystemDeviceActor, nullptr, "K2_OnBlueScreenShow", nullptr, nullptr, Z_Construct_UFunction_AOperatingSystemDeviceActor_K2_OnBlueScreenShow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOperatingSystemDeviceActor_K2_OnBlueScreenShow_Statics::PropPointers), sizeof(OperatingSystemDeviceActor_eventK2_OnBlueScreenShow_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08480800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOperatingSystemDeviceActor_K2_OnBlueScreenShow_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOperatingSystemDeviceActor_K2_OnBlueScreenShow_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOperatingSystemDeviceActor_K2_OnBlueScreenShow_Statics::PropPointers) < 2048);
	static_assert(sizeof(OperatingSystemDeviceActor_eventK2_OnBlueScreenShow_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AOperatingSystemDeviceActor_K2_OnBlueScreenShow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOperatingSystemDeviceActor_K2_OnBlueScreenShow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOperatingSystemDeviceActor_K2_OnCurrentDeviceDestroyed_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOperatingSystemDeviceActor_K2_OnCurrentDeviceDestroyed_Statics::Function_MetaDataParams[] = {
		{ "Category", "OperatingSystemDeviceActor" },
		{ "DisplayName", "On Current Device Destroyed" },
		{ "ModuleRelativePath", "Public/Devices/OperatingSystemDeviceActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOperatingSystemDeviceActor_K2_OnCurrentDeviceDestroyed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOperatingSystemDeviceActor, nullptr, "K2_OnCurrentDeviceDestroyed", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOperatingSystemDeviceActor_K2_OnCurrentDeviceDestroyed_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOperatingSystemDeviceActor_K2_OnCurrentDeviceDestroyed_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AOperatingSystemDeviceActor_K2_OnCurrentDeviceDestroyed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOperatingSystemDeviceActor_K2_OnCurrentDeviceDestroyed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOperatingSystemDeviceActor_K2_OnWidgetChanged_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChangedWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ChangedWidget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOperatingSystemDeviceActor_K2_OnWidgetChanged_Statics::NewProp_ChangedWidget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AOperatingSystemDeviceActor_K2_OnWidgetChanged_Statics::NewProp_ChangedWidget = { "ChangedWidget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemDeviceActor_eventK2_OnWidgetChanged_Parms, ChangedWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOperatingSystemDeviceActor_K2_OnWidgetChanged_Statics::NewProp_ChangedWidget_MetaData), Z_Construct_UFunction_AOperatingSystemDeviceActor_K2_OnWidgetChanged_Statics::NewProp_ChangedWidget_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOperatingSystemDeviceActor_K2_OnWidgetChanged_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOperatingSystemDeviceActor_K2_OnWidgetChanged_Statics::NewProp_ChangedWidget,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOperatingSystemDeviceActor_K2_OnWidgetChanged_Statics::Function_MetaDataParams[] = {
		{ "Category", "OperatingSystemDeviceActor" },
		{ "DisplayName", "On Widget Changed" },
		{ "ModuleRelativePath", "Public/Devices/OperatingSystemDeviceActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOperatingSystemDeviceActor_K2_OnWidgetChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOperatingSystemDeviceActor, nullptr, "K2_OnWidgetChanged", nullptr, nullptr, Z_Construct_UFunction_AOperatingSystemDeviceActor_K2_OnWidgetChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOperatingSystemDeviceActor_K2_OnWidgetChanged_Statics::PropPointers), sizeof(OperatingSystemDeviceActor_eventK2_OnWidgetChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOperatingSystemDeviceActor_K2_OnWidgetChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOperatingSystemDeviceActor_K2_OnWidgetChanged_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOperatingSystemDeviceActor_K2_OnWidgetChanged_Statics::PropPointers) < 2048);
	static_assert(sizeof(OperatingSystemDeviceActor_eventK2_OnWidgetChanged_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AOperatingSystemDeviceActor_K2_OnWidgetChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOperatingSystemDeviceActor_K2_OnWidgetChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOperatingSystemDeviceActor_RefreshWidget_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOperatingSystemDeviceActor_RefreshWidget_Statics::Function_MetaDataParams[] = {
		{ "Category", "OperatingSystemDeviceActor" },
		{ "ModuleRelativePath", "Public/Devices/OperatingSystemDeviceActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOperatingSystemDeviceActor_RefreshWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOperatingSystemDeviceActor, nullptr, "RefreshWidget", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOperatingSystemDeviceActor_RefreshWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOperatingSystemDeviceActor_RefreshWidget_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AOperatingSystemDeviceActor_RefreshWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOperatingSystemDeviceActor_RefreshWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOperatingSystemDeviceActor_SetAddWidgetsToScreen_Statics
	{
		struct OperatingSystemDeviceActor_eventSetAddWidgetsToScreen_Parms
		{
			EOperatingSystemWidgetSet Method;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Method_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Method_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Method;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AOperatingSystemDeviceActor_SetAddWidgetsToScreen_Statics::NewProp_Method_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOperatingSystemDeviceActor_SetAddWidgetsToScreen_Statics::NewProp_Method_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AOperatingSystemDeviceActor_SetAddWidgetsToScreen_Statics::NewProp_Method = { "Method", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemDeviceActor_eventSetAddWidgetsToScreen_Parms, Method), Z_Construct_UEnum_OperatingSystemSimulator_EOperatingSystemWidgetSet, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOperatingSystemDeviceActor_SetAddWidgetsToScreen_Statics::NewProp_Method_MetaData), Z_Construct_UFunction_AOperatingSystemDeviceActor_SetAddWidgetsToScreen_Statics::NewProp_Method_MetaData) }; // 1982911510
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOperatingSystemDeviceActor_SetAddWidgetsToScreen_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOperatingSystemDeviceActor_SetAddWidgetsToScreen_Statics::NewProp_Method_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOperatingSystemDeviceActor_SetAddWidgetsToScreen_Statics::NewProp_Method,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOperatingSystemDeviceActor_SetAddWidgetsToScreen_Statics::Function_MetaDataParams[] = {
		{ "Category", "OperatingSystemDeviceActor" },
		{ "ModuleRelativePath", "Public/Devices/OperatingSystemDeviceActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOperatingSystemDeviceActor_SetAddWidgetsToScreen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOperatingSystemDeviceActor, nullptr, "SetAddWidgetsToScreen", nullptr, nullptr, Z_Construct_UFunction_AOperatingSystemDeviceActor_SetAddWidgetsToScreen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOperatingSystemDeviceActor_SetAddWidgetsToScreen_Statics::PropPointers), sizeof(Z_Construct_UFunction_AOperatingSystemDeviceActor_SetAddWidgetsToScreen_Statics::OperatingSystemDeviceActor_eventSetAddWidgetsToScreen_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOperatingSystemDeviceActor_SetAddWidgetsToScreen_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOperatingSystemDeviceActor_SetAddWidgetsToScreen_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOperatingSystemDeviceActor_SetAddWidgetsToScreen_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AOperatingSystemDeviceActor_SetAddWidgetsToScreen_Statics::OperatingSystemDeviceActor_eventSetAddWidgetsToScreen_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AOperatingSystemDeviceActor_SetAddWidgetsToScreen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOperatingSystemDeviceActor_SetAddWidgetsToScreen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AOperatingSystemDeviceActor);
	UClass* Z_Construct_UClass_AOperatingSystemDeviceActor_NoRegister()
	{
		return AOperatingSystemDeviceActor::StaticClass();
	}
	struct Z_Construct_UClass_AOperatingSystemDeviceActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MainComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MainComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeviceTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DeviceTag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeviceClass_MetaData[];
#endif
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_DeviceClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCreateDeviceOnBeginPlay_MetaData[];
#endif
		static void NewProp_bCreateDeviceOnBeginPlay_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCreateDeviceOnBeginPlay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAddWidgetsToScreen_MetaData[];
#endif
		static void NewProp_bAddWidgetsToScreen_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddWidgetsToScreen;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bExitWhenDeviceIsDestroyed_MetaData[];
#endif
		static void NewProp_bExitWhenDeviceIsDestroyed_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bExitWhenDeviceIsDestroyed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanSaveGame_MetaData[];
#endif
		static void NewProp_bCanSaveGame_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanSaveGame;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SaveGameClass_MetaData[];
#endif
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_SaveGameClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MessengerClass_MetaData[];
#endif
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_MessengerClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentDevice_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CurrentDevice;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UniqueID_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_UniqueID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnDeviceCreated_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDeviceCreated;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AOperatingSystemDeviceActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_OperatingSystemSimulator,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AOperatingSystemDeviceActor_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AOperatingSystemDeviceActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AOperatingSystemDeviceActor_ClearWidgetFromScreen, "ClearWidgetFromScreen" }, // 3556797824
		{ &Z_Construct_UFunction_AOperatingSystemDeviceActor_CreateDevice, "CreateDevice" }, // 3028909696
		{ &Z_Construct_UFunction_AOperatingSystemDeviceActor_K2_CreateDevice, "K2_CreateDevice" }, // 2132012072
		{ &Z_Construct_UFunction_AOperatingSystemDeviceActor_K2_OnBlueScreenShow, "K2_OnBlueScreenShow" }, // 2764411329
		{ &Z_Construct_UFunction_AOperatingSystemDeviceActor_K2_OnCurrentDeviceDestroyed, "K2_OnCurrentDeviceDestroyed" }, // 3608364111
		{ &Z_Construct_UFunction_AOperatingSystemDeviceActor_K2_OnWidgetChanged, "K2_OnWidgetChanged" }, // 1509341630
		{ &Z_Construct_UFunction_AOperatingSystemDeviceActor_RefreshWidget, "RefreshWidget" }, // 963409687
		{ &Z_Construct_UFunction_AOperatingSystemDeviceActor_SetAddWidgetsToScreen, "SetAddWidgetsToScreen" }, // 314617818
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AOperatingSystemDeviceActor_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOperatingSystemDeviceActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Devices/OperatingSystemDeviceActor.h" },
		{ "ModuleRelativePath", "Public/Devices/OperatingSystemDeviceActor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOperatingSystemDeviceActor_Statics::NewProp_MainComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Devices/OperatingSystemDeviceActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AOperatingSystemDeviceActor_Statics::NewProp_MainComponent = { "MainComponent", nullptr, (EPropertyFlags)0x0024080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOperatingSystemDeviceActor, MainComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AOperatingSystemDeviceActor_Statics::NewProp_MainComponent_MetaData), Z_Construct_UClass_AOperatingSystemDeviceActor_Statics::NewProp_MainComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOperatingSystemDeviceActor_Statics::NewProp_DeviceTag_MetaData[] = {
		{ "Categories", "OperatingSystem.Devices" },
		{ "Category", "OperatingSystemDeviceActor" },
		{ "ModuleRelativePath", "Public/Devices/OperatingSystemDeviceActor.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AOperatingSystemDeviceActor_Statics::NewProp_DeviceTag = { "DeviceTag", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOperatingSystemDeviceActor, DeviceTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AOperatingSystemDeviceActor_Statics::NewProp_DeviceTag_MetaData), Z_Construct_UClass_AOperatingSystemDeviceActor_Statics::NewProp_DeviceTag_MetaData) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOperatingSystemDeviceActor_Statics::NewProp_DeviceClass_MetaData[] = {
		{ "Category", "OperatingSystemDeviceActor" },
		{ "ModuleRelativePath", "Public/Devices/OperatingSystemDeviceActor.h" },
	};
#endif
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_AOperatingSystemDeviceActor_Statics::NewProp_DeviceClass = { "DeviceClass", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOperatingSystemDeviceActor, DeviceClass), Z_Construct_UClass_UOperatingSystemBaseDevice_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AOperatingSystemDeviceActor_Statics::NewProp_DeviceClass_MetaData), Z_Construct_UClass_AOperatingSystemDeviceActor_Statics::NewProp_DeviceClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOperatingSystemDeviceActor_Statics::NewProp_bCreateDeviceOnBeginPlay_MetaData[] = {
		{ "Category", "OperatingSystemDeviceActor" },
		{ "ModuleRelativePath", "Public/Devices/OperatingSystemDeviceActor.h" },
	};
#endif
	void Z_Construct_UClass_AOperatingSystemDeviceActor_Statics::NewProp_bCreateDeviceOnBeginPlay_SetBit(void* Obj)
	{
		((AOperatingSystemDeviceActor*)Obj)->bCreateDeviceOnBeginPlay = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AOperatingSystemDeviceActor_Statics::NewProp_bCreateDeviceOnBeginPlay = { "bCreateDeviceOnBeginPlay", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(AOperatingSystemDeviceActor), &Z_Construct_UClass_AOperatingSystemDeviceActor_Statics::NewProp_bCreateDeviceOnBeginPlay_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AOperatingSystemDeviceActor_Statics::NewProp_bCreateDeviceOnBeginPlay_MetaData), Z_Construct_UClass_AOperatingSystemDeviceActor_Statics::NewProp_bCreateDeviceOnBeginPlay_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOperatingSystemDeviceActor_Statics::NewProp_bAddWidgetsToScreen_MetaData[] = {
		{ "Category", "OperatingSystemDeviceActor" },
		{ "ModuleRelativePath", "Public/Devices/OperatingSystemDeviceActor.h" },
	};
#endif
	void Z_Construct_UClass_AOperatingSystemDeviceActor_Statics::NewProp_bAddWidgetsToScreen_SetBit(void* Obj)
	{
		((AOperatingSystemDeviceActor*)Obj)->bAddWidgetsToScreen = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AOperatingSystemDeviceActor_Statics::NewProp_bAddWidgetsToScreen = { "bAddWidgetsToScreen", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(AOperatingSystemDeviceActor), &Z_Construct_UClass_AOperatingSystemDeviceActor_Statics::NewProp_bAddWidgetsToScreen_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AOperatingSystemDeviceActor_Statics::NewProp_bAddWidgetsToScreen_MetaData), Z_Construct_UClass_AOperatingSystemDeviceActor_Statics::NewProp_bAddWidgetsToScreen_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOperatingSystemDeviceActor_Statics::NewProp_bExitWhenDeviceIsDestroyed_MetaData[] = {
		{ "Category", "OperatingSystemDeviceActor" },
		{ "ModuleRelativePath", "Public/Devices/OperatingSystemDeviceActor.h" },
	};
#endif
	void Z_Construct_UClass_AOperatingSystemDeviceActor_Statics::NewProp_bExitWhenDeviceIsDestroyed_SetBit(void* Obj)
	{
		((AOperatingSystemDeviceActor*)Obj)->bExitWhenDeviceIsDestroyed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AOperatingSystemDeviceActor_Statics::NewProp_bExitWhenDeviceIsDestroyed = { "bExitWhenDeviceIsDestroyed", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(AOperatingSystemDeviceActor), &Z_Construct_UClass_AOperatingSystemDeviceActor_Statics::NewProp_bExitWhenDeviceIsDestroyed_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AOperatingSystemDeviceActor_Statics::NewProp_bExitWhenDeviceIsDestroyed_MetaData), Z_Construct_UClass_AOperatingSystemDeviceActor_Statics::NewProp_bExitWhenDeviceIsDestroyed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOperatingSystemDeviceActor_Statics::NewProp_bCanSaveGame_MetaData[] = {
		{ "Category", "OperatingSystemDeviceActor" },
		{ "ModuleRelativePath", "Public/Devices/OperatingSystemDeviceActor.h" },
	};
#endif
	void Z_Construct_UClass_AOperatingSystemDeviceActor_Statics::NewProp_bCanSaveGame_SetBit(void* Obj)
	{
		((AOperatingSystemDeviceActor*)Obj)->bCanSaveGame = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AOperatingSystemDeviceActor_Statics::NewProp_bCanSaveGame = { "bCanSaveGame", nullptr, (EPropertyFlags)0x00200c0000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(AOperatingSystemDeviceActor), &Z_Construct_UClass_AOperatingSystemDeviceActor_Statics::NewProp_bCanSaveGame_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AOperatingSystemDeviceActor_Statics::NewProp_bCanSaveGame_MetaData), Z_Construct_UClass_AOperatingSystemDeviceActor_Statics::NewProp_bCanSaveGame_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOperatingSystemDeviceActor_Statics::NewProp_SaveGameClass_MetaData[] = {
		{ "Category", "OperatingSystemDeviceActor" },
		{ "EditCondition", "bCanSaveGame" },
		{ "ModuleRelativePath", "Public/Devices/OperatingSystemDeviceActor.h" },
	};
#endif
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_AOperatingSystemDeviceActor_Statics::NewProp_SaveGameClass = { "SaveGameClass", nullptr, (EPropertyFlags)0x00240c0000000001, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOperatingSystemDeviceActor, SaveGameClass), Z_Construct_UClass_UOperatingSystemSaveGame_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AOperatingSystemDeviceActor_Statics::NewProp_SaveGameClass_MetaData), Z_Construct_UClass_AOperatingSystemDeviceActor_Statics::NewProp_SaveGameClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOperatingSystemDeviceActor_Statics::NewProp_MessengerClass_MetaData[] = {
		{ "Category", "OperatingSystemDeviceActor" },
		{ "ModuleRelativePath", "Public/Devices/OperatingSystemDeviceActor.h" },
	};
#endif
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_AOperatingSystemDeviceActor_Statics::NewProp_MessengerClass = { "MessengerClass", nullptr, (EPropertyFlags)0x00240c0000000001, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOperatingSystemDeviceActor, MessengerClass), Z_Construct_UClass_UOperatingSystemDeviceMessenger_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AOperatingSystemDeviceActor_Statics::NewProp_MessengerClass_MetaData), Z_Construct_UClass_AOperatingSystemDeviceActor_Statics::NewProp_MessengerClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOperatingSystemDeviceActor_Statics::NewProp_CurrentDevice_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/Devices/OperatingSystemDeviceActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AOperatingSystemDeviceActor_Statics::NewProp_CurrentDevice = { "CurrentDevice", nullptr, (EPropertyFlags)0x0024080000020815, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOperatingSystemDeviceActor, CurrentDevice), Z_Construct_UClass_UOperatingSystemBaseDevice_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AOperatingSystemDeviceActor_Statics::NewProp_CurrentDevice_MetaData), Z_Construct_UClass_AOperatingSystemDeviceActor_Statics::NewProp_CurrentDevice_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOperatingSystemDeviceActor_Statics::NewProp_UniqueID_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/Devices/OperatingSystemDeviceActor.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AOperatingSystemDeviceActor_Statics::NewProp_UniqueID = { "UniqueID", nullptr, (EPropertyFlags)0x0020080000020801, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOperatingSystemDeviceActor, UniqueID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AOperatingSystemDeviceActor_Statics::NewProp_UniqueID_MetaData), Z_Construct_UClass_AOperatingSystemDeviceActor_Statics::NewProp_UniqueID_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOperatingSystemDeviceActor_Statics::NewProp_OnDeviceCreated_MetaData[] = {
		{ "Category", "OperatingSystemDeviceActor" },
		{ "ModuleRelativePath", "Public/Devices/OperatingSystemDeviceActor.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AOperatingSystemDeviceActor_Statics::NewProp_OnDeviceCreated = { "OnDeviceCreated", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOperatingSystemDeviceActor, OnDeviceCreated), Z_Construct_UDelegateFunction_OperatingSystemSimulator_OnDeviceCreated__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AOperatingSystemDeviceActor_Statics::NewProp_OnDeviceCreated_MetaData), Z_Construct_UClass_AOperatingSystemDeviceActor_Statics::NewProp_OnDeviceCreated_MetaData) }; // 709835651
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AOperatingSystemDeviceActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOperatingSystemDeviceActor_Statics::NewProp_MainComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOperatingSystemDeviceActor_Statics::NewProp_DeviceTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOperatingSystemDeviceActor_Statics::NewProp_DeviceClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOperatingSystemDeviceActor_Statics::NewProp_bCreateDeviceOnBeginPlay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOperatingSystemDeviceActor_Statics::NewProp_bAddWidgetsToScreen,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOperatingSystemDeviceActor_Statics::NewProp_bExitWhenDeviceIsDestroyed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOperatingSystemDeviceActor_Statics::NewProp_bCanSaveGame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOperatingSystemDeviceActor_Statics::NewProp_SaveGameClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOperatingSystemDeviceActor_Statics::NewProp_MessengerClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOperatingSystemDeviceActor_Statics::NewProp_CurrentDevice,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOperatingSystemDeviceActor_Statics::NewProp_UniqueID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOperatingSystemDeviceActor_Statics::NewProp_OnDeviceCreated,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AOperatingSystemDeviceActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOperatingSystemDeviceActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AOperatingSystemDeviceActor_Statics::ClassParams = {
		&AOperatingSystemDeviceActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AOperatingSystemDeviceActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AOperatingSystemDeviceActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AOperatingSystemDeviceActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AOperatingSystemDeviceActor_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AOperatingSystemDeviceActor_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AOperatingSystemDeviceActor()
	{
		if (!Z_Registration_Info_UClass_AOperatingSystemDeviceActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AOperatingSystemDeviceActor.OuterSingleton, Z_Construct_UClass_AOperatingSystemDeviceActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AOperatingSystemDeviceActor.OuterSingleton;
	}
	template<> OPERATINGSYSTEMSIMULATOR_API UClass* StaticClass<AOperatingSystemDeviceActor>()
	{
		return AOperatingSystemDeviceActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AOperatingSystemDeviceActor);
	AOperatingSystemDeviceActor::~AOperatingSystemDeviceActor() {}
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Devices_OperatingSystemDeviceActor_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Devices_OperatingSystemDeviceActor_h_Statics::EnumInfo[] = {
		{ EOperatingSystemWidgetSet_StaticEnum, TEXT("EOperatingSystemWidgetSet"), &Z_Registration_Info_UEnum_EOperatingSystemWidgetSet, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1982911510U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Devices_OperatingSystemDeviceActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AOperatingSystemDeviceActor, AOperatingSystemDeviceActor::StaticClass, TEXT("AOperatingSystemDeviceActor"), &Z_Registration_Info_UClass_AOperatingSystemDeviceActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AOperatingSystemDeviceActor), 1349981259U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Devices_OperatingSystemDeviceActor_h_1630422937(TEXT("/Script/OperatingSystemSimulator"),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Devices_OperatingSystemDeviceActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Devices_OperatingSystemDeviceActor_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Devices_OperatingSystemDeviceActor_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Devices_OperatingSystemDeviceActor_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
