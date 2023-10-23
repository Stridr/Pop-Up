// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OperatingSystemSimulator/Public/Devices/OperatingSystemBaseDevice.h"
#include "GameplayTagContainer.h"
#include "OperatingSystemSimulator/Public/Devices/OperatingSystemDeviceActor.h"
#include "OperatingSystemSimulator/Public/OperatingSystemTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOperatingSystemBaseDevice() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	OPERATINGSYSTEMSIMULATOR_API UClass* Z_Construct_UClass_AOperatingSystemDeviceActor_NoRegister();
	OPERATINGSYSTEMSIMULATOR_API UClass* Z_Construct_UClass_UOperatingSystem_NoRegister();
	OPERATINGSYSTEMSIMULATOR_API UClass* Z_Construct_UClass_UOperatingSystemBaseDevice();
	OPERATINGSYSTEMSIMULATOR_API UClass* Z_Construct_UClass_UOperatingSystemBaseDevice_NoRegister();
	OPERATINGSYSTEMSIMULATOR_API UClass* Z_Construct_UClass_UOperatingSystemBaseHardware_NoRegister();
	OPERATINGSYSTEMSIMULATOR_API UClass* Z_Construct_UClass_UOperatingSystemCPU_NoRegister();
	OPERATINGSYSTEMSIMULATOR_API UClass* Z_Construct_UClass_UOperatingSystemDeviceMessenger_NoRegister();
	OPERATINGSYSTEMSIMULATOR_API UClass* Z_Construct_UClass_UOperatingSystemDeviceWidget_NoRegister();
	OPERATINGSYSTEMSIMULATOR_API UClass* Z_Construct_UClass_UOperatingSystemGPU_NoRegister();
	OPERATINGSYSTEMSIMULATOR_API UClass* Z_Construct_UClass_UOperatingSystemHDD_NoRegister();
	OPERATINGSYSTEMSIMULATOR_API UClass* Z_Construct_UClass_UOperatingSystemMBB_NoRegister();
	OPERATINGSYSTEMSIMULATOR_API UClass* Z_Construct_UClass_UOperatingSystemPSU_NoRegister();
	OPERATINGSYSTEMSIMULATOR_API UClass* Z_Construct_UClass_UOperatingSystemRAM_NoRegister();
	OPERATINGSYSTEMSIMULATOR_API UEnum* Z_Construct_UEnum_OperatingSystemSimulator_EOperatingSystemDeviceState();
	OPERATINGSYSTEMSIMULATOR_API UFunction* Z_Construct_UDelegateFunction_OperatingSystemSimulator_OnDeviceStateChanged__DelegateSignature();
	OPERATINGSYSTEMSIMULATOR_API UScriptStruct* Z_Construct_UScriptStruct_FOperatingSystemRangeTime();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	UPackage* Z_Construct_UPackage__Script_OperatingSystemSimulator();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_OperatingSystemSimulator_OnDeviceStateChanged__DelegateSignature_Statics
	{
		struct _Script_OperatingSystemSimulator_eventOnDeviceStateChanged_Parms
		{
			EOperatingSystemDeviceState _PrevState;
			EOperatingSystemDeviceState _NewState;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp__PrevState_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__PrevState_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp__PrevState;
		static const UECodeGen_Private::FBytePropertyParams NewProp__NewState_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__NewState_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp__NewState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_OperatingSystemSimulator_OnDeviceStateChanged__DelegateSignature_Statics::NewProp__PrevState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OperatingSystemSimulator_OnDeviceStateChanged__DelegateSignature_Statics::NewProp__PrevState_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_OperatingSystemSimulator_OnDeviceStateChanged__DelegateSignature_Statics::NewProp__PrevState = { "_PrevState", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OperatingSystemSimulator_eventOnDeviceStateChanged_Parms, _PrevState), Z_Construct_UEnum_OperatingSystemSimulator_EOperatingSystemDeviceState, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OperatingSystemSimulator_OnDeviceStateChanged__DelegateSignature_Statics::NewProp__PrevState_MetaData), Z_Construct_UDelegateFunction_OperatingSystemSimulator_OnDeviceStateChanged__DelegateSignature_Statics::NewProp__PrevState_MetaData) }; // 2402969494
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_OperatingSystemSimulator_OnDeviceStateChanged__DelegateSignature_Statics::NewProp__NewState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OperatingSystemSimulator_OnDeviceStateChanged__DelegateSignature_Statics::NewProp__NewState_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_OperatingSystemSimulator_OnDeviceStateChanged__DelegateSignature_Statics::NewProp__NewState = { "_NewState", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OperatingSystemSimulator_eventOnDeviceStateChanged_Parms, _NewState), Z_Construct_UEnum_OperatingSystemSimulator_EOperatingSystemDeviceState, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OperatingSystemSimulator_OnDeviceStateChanged__DelegateSignature_Statics::NewProp__NewState_MetaData), Z_Construct_UDelegateFunction_OperatingSystemSimulator_OnDeviceStateChanged__DelegateSignature_Statics::NewProp__NewState_MetaData) }; // 2402969494
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OperatingSystemSimulator_OnDeviceStateChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OperatingSystemSimulator_OnDeviceStateChanged__DelegateSignature_Statics::NewProp__PrevState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OperatingSystemSimulator_OnDeviceStateChanged__DelegateSignature_Statics::NewProp__PrevState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OperatingSystemSimulator_OnDeviceStateChanged__DelegateSignature_Statics::NewProp__NewState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OperatingSystemSimulator_OnDeviceStateChanged__DelegateSignature_Statics::NewProp__NewState,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OperatingSystemSimulator_OnDeviceStateChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Devices/OperatingSystemBaseDevice.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OperatingSystemSimulator_OnDeviceStateChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OperatingSystemSimulator, nullptr, "OnDeviceStateChanged__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_OperatingSystemSimulator_OnDeviceStateChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OperatingSystemSimulator_OnDeviceStateChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OperatingSystemSimulator_OnDeviceStateChanged__DelegateSignature_Statics::_Script_OperatingSystemSimulator_eventOnDeviceStateChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OperatingSystemSimulator_OnDeviceStateChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OperatingSystemSimulator_OnDeviceStateChanged__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OperatingSystemSimulator_OnDeviceStateChanged__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_OperatingSystemSimulator_OnDeviceStateChanged__DelegateSignature_Statics::_Script_OperatingSystemSimulator_eventOnDeviceStateChanged_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_OperatingSystemSimulator_OnDeviceStateChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OperatingSystemSimulator_OnDeviceStateChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnDeviceStateChanged_DelegateWrapper(const FMulticastScriptDelegate& OnDeviceStateChanged, EOperatingSystemDeviceState const& _PrevState, EOperatingSystemDeviceState const& _NewState)
{
	struct _Script_OperatingSystemSimulator_eventOnDeviceStateChanged_Parms
	{
		EOperatingSystemDeviceState _PrevState;
		EOperatingSystemDeviceState _NewState;
	};
	_Script_OperatingSystemSimulator_eventOnDeviceStateChanged_Parms Parms;
	Parms._PrevState=_PrevState;
	Parms._NewState=_NewState;
	OnDeviceStateChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UOperatingSystemBaseDevice::execGetParentDeviceActor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AOperatingSystemDeviceActor**)Z_Param__Result=P_THIS->GetParentDeviceActor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOperatingSystemBaseDevice::execGetCurrentState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EOperatingSystemDeviceState*)Z_Param__Result=P_THIS->GetCurrentState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOperatingSystemBaseDevice::execGetHardwareByTag)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_TestTag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UOperatingSystemBaseHardware**)Z_Param__Result=P_THIS->GetHardwareByTag(Z_Param_TestTag);
		P_NATIVE_END;
	}
	void UOperatingSystemBaseDevice::StaticRegisterNativesUOperatingSystemBaseDevice()
	{
		UClass* Class = UOperatingSystemBaseDevice::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCurrentState", &UOperatingSystemBaseDevice::execGetCurrentState },
			{ "GetHardwareByTag", &UOperatingSystemBaseDevice::execGetHardwareByTag },
			{ "GetParentDeviceActor", &UOperatingSystemBaseDevice::execGetParentDeviceActor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOperatingSystemBaseDevice_GetCurrentState_Statics
	{
		struct OperatingSystemBaseDevice_eventGetCurrentState_Parms
		{
			EOperatingSystemDeviceState ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOperatingSystemBaseDevice_GetCurrentState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOperatingSystemBaseDevice_GetCurrentState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemBaseDevice_eventGetCurrentState_Parms, ReturnValue), Z_Construct_UEnum_OperatingSystemSimulator_EOperatingSystemDeviceState, METADATA_PARAMS(0, nullptr) }; // 2402969494
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperatingSystemBaseDevice_GetCurrentState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemBaseDevice_GetCurrentState_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemBaseDevice_GetCurrentState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemBaseDevice_GetCurrentState_Statics::Function_MetaDataParams[] = {
		{ "Category", "OperatingSystemDevice" },
		{ "ModuleRelativePath", "Public/Devices/OperatingSystemBaseDevice.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystemBaseDevice_GetCurrentState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystemBaseDevice, nullptr, "GetCurrentState", nullptr, nullptr, Z_Construct_UFunction_UOperatingSystemBaseDevice_GetCurrentState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemBaseDevice_GetCurrentState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOperatingSystemBaseDevice_GetCurrentState_Statics::OperatingSystemBaseDevice_eventGetCurrentState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemBaseDevice_GetCurrentState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystemBaseDevice_GetCurrentState_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemBaseDevice_GetCurrentState_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOperatingSystemBaseDevice_GetCurrentState_Statics::OperatingSystemBaseDevice_eventGetCurrentState_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOperatingSystemBaseDevice_GetCurrentState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystemBaseDevice_GetCurrentState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOperatingSystemBaseDevice_GetHardwareByTag_Statics
	{
		struct OperatingSystemBaseDevice_eventGetHardwareByTag_Parms
		{
			FGameplayTag TestTag;
			UOperatingSystemBaseHardware* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TestTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TestTag;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemBaseDevice_GetHardwareByTag_Statics::NewProp_TestTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOperatingSystemBaseDevice_GetHardwareByTag_Statics::NewProp_TestTag = { "TestTag", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemBaseDevice_eventGetHardwareByTag_Parms, TestTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemBaseDevice_GetHardwareByTag_Statics::NewProp_TestTag_MetaData), Z_Construct_UFunction_UOperatingSystemBaseDevice_GetHardwareByTag_Statics::NewProp_TestTag_MetaData) }; // 2083603574
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOperatingSystemBaseDevice_GetHardwareByTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemBaseDevice_eventGetHardwareByTag_Parms, ReturnValue), Z_Construct_UClass_UOperatingSystemBaseHardware_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperatingSystemBaseDevice_GetHardwareByTag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemBaseDevice_GetHardwareByTag_Statics::NewProp_TestTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemBaseDevice_GetHardwareByTag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemBaseDevice_GetHardwareByTag_Statics::Function_MetaDataParams[] = {
		{ "Category", "OperatingSystemDevice" },
		{ "ModuleRelativePath", "Public/Devices/OperatingSystemBaseDevice.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystemBaseDevice_GetHardwareByTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystemBaseDevice, nullptr, "GetHardwareByTag", nullptr, nullptr, Z_Construct_UFunction_UOperatingSystemBaseDevice_GetHardwareByTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemBaseDevice_GetHardwareByTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOperatingSystemBaseDevice_GetHardwareByTag_Statics::OperatingSystemBaseDevice_eventGetHardwareByTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemBaseDevice_GetHardwareByTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystemBaseDevice_GetHardwareByTag_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemBaseDevice_GetHardwareByTag_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOperatingSystemBaseDevice_GetHardwareByTag_Statics::OperatingSystemBaseDevice_eventGetHardwareByTag_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOperatingSystemBaseDevice_GetHardwareByTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystemBaseDevice_GetHardwareByTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOperatingSystemBaseDevice_GetParentDeviceActor_Statics
	{
		struct OperatingSystemBaseDevice_eventGetParentDeviceActor_Parms
		{
			AOperatingSystemDeviceActor* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOperatingSystemBaseDevice_GetParentDeviceActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemBaseDevice_eventGetParentDeviceActor_Parms, ReturnValue), Z_Construct_UClass_AOperatingSystemDeviceActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperatingSystemBaseDevice_GetParentDeviceActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemBaseDevice_GetParentDeviceActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemBaseDevice_GetParentDeviceActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "OperatingSystemDevice" },
		{ "ModuleRelativePath", "Public/Devices/OperatingSystemBaseDevice.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystemBaseDevice_GetParentDeviceActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystemBaseDevice, nullptr, "GetParentDeviceActor", nullptr, nullptr, Z_Construct_UFunction_UOperatingSystemBaseDevice_GetParentDeviceActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemBaseDevice_GetParentDeviceActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOperatingSystemBaseDevice_GetParentDeviceActor_Statics::OperatingSystemBaseDevice_eventGetParentDeviceActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemBaseDevice_GetParentDeviceActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystemBaseDevice_GetParentDeviceActor_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemBaseDevice_GetParentDeviceActor_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOperatingSystemBaseDevice_GetParentDeviceActor_Statics::OperatingSystemBaseDevice_eventGetParentDeviceActor_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOperatingSystemBaseDevice_GetParentDeviceActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystemBaseDevice_GetParentDeviceActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOperatingSystemBaseDevice);
	UClass* Z_Construct_UClass_UOperatingSystemBaseDevice_NoRegister()
	{
		return UOperatingSystemBaseDevice::StaticClass();
	}
	struct Z_Construct_UClass_UOperatingSystemBaseDevice_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeviceName_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_DeviceName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeviceWidgetClass_MetaData[];
#endif
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_DeviceWidgetClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OperatingSystemClass_MetaData[];
#endif
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_OperatingSystemClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOperatingSystemIsPreInstalled_MetaData[];
#endif
		static void NewProp_bOperatingSystemIsPreInstalled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOperatingSystemIsPreInstalled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PowerOnTime_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PowerOnTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SessionEndTime_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SessionEndTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MotherboardClass_MetaData[];
#endif
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_MotherboardClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PsuClass_MetaData[];
#endif
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_PsuClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CpuClass_MetaData[];
#endif
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_CpuClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RamClass_MetaData[];
#endif
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_RamClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HddClass_MetaData[];
#endif
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_HddClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GpuClass_MetaData[];
#endif
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_GpuClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRequiresGPU_MetaData[];
#endif
		static void NewProp_bRequiresGPU_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRequiresGPU;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOperatingSystemInstalled_MetaData[];
#endif
		static void NewProp_bOperatingSystemInstalled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOperatingSystemInstalled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeviceTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DeviceTag;
		static const UECodeGen_Private::FBytePropertyParams NewProp_PreviousState_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviousState_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PreviousState;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CurrentState_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentState_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CurrentState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActiveOperatingSystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ActiveOperatingSystem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeviceWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DeviceWidget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnScreenWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_OnScreenWidget;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Hardwares_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Hardwares_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Hardwares;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeviceMessenger_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DeviceMessenger;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnDeviceStateChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDeviceStateChanged;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOperatingSystemBaseDevice_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_OperatingSystemSimulator,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemBaseDevice_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UOperatingSystemBaseDevice_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOperatingSystemBaseDevice_GetCurrentState, "GetCurrentState" }, // 3480692678
		{ &Z_Construct_UFunction_UOperatingSystemBaseDevice_GetHardwareByTag, "GetHardwareByTag" }, // 1716135801
		{ &Z_Construct_UFunction_UOperatingSystemBaseDevice_GetParentDeviceActor, "GetParentDeviceActor" }, // 3781590911
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemBaseDevice_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystemBaseDevice_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Devices/OperatingSystemBaseDevice.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Devices/OperatingSystemBaseDevice.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystemBaseDevice_Statics::NewProp_DeviceName_MetaData[] = {
		{ "Category", "OperatingSystemDevice" },
		{ "ModuleRelativePath", "Public/Devices/OperatingSystemBaseDevice.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UOperatingSystemBaseDevice_Statics::NewProp_DeviceName = { "DeviceName", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOperatingSystemBaseDevice, DeviceName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemBaseDevice_Statics::NewProp_DeviceName_MetaData), Z_Construct_UClass_UOperatingSystemBaseDevice_Statics::NewProp_DeviceName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystemBaseDevice_Statics::NewProp_DeviceWidgetClass_MetaData[] = {
		{ "Category", "OperatingSystemDevice" },
		{ "ModuleRelativePath", "Public/Devices/OperatingSystemBaseDevice.h" },
	};
#endif
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UOperatingSystemBaseDevice_Statics::NewProp_DeviceWidgetClass = { "DeviceWidgetClass", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOperatingSystemBaseDevice, DeviceWidgetClass), Z_Construct_UClass_UOperatingSystemDeviceWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemBaseDevice_Statics::NewProp_DeviceWidgetClass_MetaData), Z_Construct_UClass_UOperatingSystemBaseDevice_Statics::NewProp_DeviceWidgetClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystemBaseDevice_Statics::NewProp_OperatingSystemClass_MetaData[] = {
		{ "Category", "OperatingSystemDevice" },
		{ "ModuleRelativePath", "Public/Devices/OperatingSystemBaseDevice.h" },
	};
#endif
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UOperatingSystemBaseDevice_Statics::NewProp_OperatingSystemClass = { "OperatingSystemClass", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOperatingSystemBaseDevice, OperatingSystemClass), Z_Construct_UClass_UOperatingSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemBaseDevice_Statics::NewProp_OperatingSystemClass_MetaData), Z_Construct_UClass_UOperatingSystemBaseDevice_Statics::NewProp_OperatingSystemClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystemBaseDevice_Statics::NewProp_bOperatingSystemIsPreInstalled_MetaData[] = {
		{ "Category", "OperatingSystemDevice" },
		{ "ModuleRelativePath", "Public/Devices/OperatingSystemBaseDevice.h" },
	};
#endif
	void Z_Construct_UClass_UOperatingSystemBaseDevice_Statics::NewProp_bOperatingSystemIsPreInstalled_SetBit(void* Obj)
	{
		((UOperatingSystemBaseDevice*)Obj)->bOperatingSystemIsPreInstalled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOperatingSystemBaseDevice_Statics::NewProp_bOperatingSystemIsPreInstalled = { "bOperatingSystemIsPreInstalled", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOperatingSystemBaseDevice), &Z_Construct_UClass_UOperatingSystemBaseDevice_Statics::NewProp_bOperatingSystemIsPreInstalled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemBaseDevice_Statics::NewProp_bOperatingSystemIsPreInstalled_MetaData), Z_Construct_UClass_UOperatingSystemBaseDevice_Statics::NewProp_bOperatingSystemIsPreInstalled_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystemBaseDevice_Statics::NewProp_PowerOnTime_MetaData[] = {
		{ "Category", "OperatingSystemDevice" },
		{ "ModuleRelativePath", "Public/Devices/OperatingSystemBaseDevice.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOperatingSystemBaseDevice_Statics::NewProp_PowerOnTime = { "PowerOnTime", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOperatingSystemBaseDevice, PowerOnTime), Z_Construct_UScriptStruct_FOperatingSystemRangeTime, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemBaseDevice_Statics::NewProp_PowerOnTime_MetaData), Z_Construct_UClass_UOperatingSystemBaseDevice_Statics::NewProp_PowerOnTime_MetaData) }; // 1922178498
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystemBaseDevice_Statics::NewProp_SessionEndTime_MetaData[] = {
		{ "Category", "OperatingSystemDevice" },
		{ "Comment", "/** Shutdown and restart time. */" },
		{ "ModuleRelativePath", "Public/Devices/OperatingSystemBaseDevice.h" },
		{ "ToolTip", "Shutdown and restart time." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOperatingSystemBaseDevice_Statics::NewProp_SessionEndTime = { "SessionEndTime", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOperatingSystemBaseDevice, SessionEndTime), Z_Construct_UScriptStruct_FOperatingSystemRangeTime, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemBaseDevice_Statics::NewProp_SessionEndTime_MetaData), Z_Construct_UClass_UOperatingSystemBaseDevice_Statics::NewProp_SessionEndTime_MetaData) }; // 1922178498
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystemBaseDevice_Statics::NewProp_MotherboardClass_MetaData[] = {
		{ "Category", "OperatingSystemDeviceHardware" },
		{ "ModuleRelativePath", "Public/Devices/OperatingSystemBaseDevice.h" },
	};
#endif
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UOperatingSystemBaseDevice_Statics::NewProp_MotherboardClass = { "MotherboardClass", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOperatingSystemBaseDevice, MotherboardClass), Z_Construct_UClass_UOperatingSystemMBB_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemBaseDevice_Statics::NewProp_MotherboardClass_MetaData), Z_Construct_UClass_UOperatingSystemBaseDevice_Statics::NewProp_MotherboardClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystemBaseDevice_Statics::NewProp_PsuClass_MetaData[] = {
		{ "Category", "OperatingSystemDeviceHardware" },
		{ "ModuleRelativePath", "Public/Devices/OperatingSystemBaseDevice.h" },
	};
#endif
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UOperatingSystemBaseDevice_Statics::NewProp_PsuClass = { "PsuClass", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOperatingSystemBaseDevice, PsuClass), Z_Construct_UClass_UOperatingSystemPSU_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemBaseDevice_Statics::NewProp_PsuClass_MetaData), Z_Construct_UClass_UOperatingSystemBaseDevice_Statics::NewProp_PsuClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystemBaseDevice_Statics::NewProp_CpuClass_MetaData[] = {
		{ "Category", "OperatingSystemDeviceHardware" },
		{ "ModuleRelativePath", "Public/Devices/OperatingSystemBaseDevice.h" },
	};
#endif
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UOperatingSystemBaseDevice_Statics::NewProp_CpuClass = { "CpuClass", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOperatingSystemBaseDevice, CpuClass), Z_Construct_UClass_UOperatingSystemCPU_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemBaseDevice_Statics::NewProp_CpuClass_MetaData), Z_Construct_UClass_UOperatingSystemBaseDevice_Statics::NewProp_CpuClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystemBaseDevice_Statics::NewProp_RamClass_MetaData[] = {
		{ "Category", "OperatingSystemDeviceHardware" },
		{ "ModuleRelativePath", "Public/Devices/OperatingSystemBaseDevice.h" },
	};
#endif
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UOperatingSystemBaseDevice_Statics::NewProp_RamClass = { "RamClass", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOperatingSystemBaseDevice, RamClass), Z_Construct_UClass_UOperatingSystemRAM_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemBaseDevice_Statics::NewProp_RamClass_MetaData), Z_Construct_UClass_UOperatingSystemBaseDevice_Statics::NewProp_RamClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystemBaseDevice_Statics::NewProp_HddClass_MetaData[] = {
		{ "Category", "OperatingSystemDeviceHardware" },
		{ "ModuleRelativePath", "Public/Devices/OperatingSystemBaseDevice.h" },
	};
#endif
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UOperatingSystemBaseDevice_Statics::NewProp_HddClass = { "HddClass", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOperatingSystemBaseDevice, HddClass), Z_Construct_UClass_UOperatingSystemHDD_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemBaseDevice_Statics::NewProp_HddClass_MetaData), Z_Construct_UClass_UOperatingSystemBaseDevice_Statics::NewProp_HddClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystemBaseDevice_Statics::NewProp_GpuClass_MetaData[] = {
		{ "Category", "OperatingSystemDeviceHardware" },
		{ "ModuleRelativePath", "Public/Devices/OperatingSystemBaseDevice.h" },
	};
#endif
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UOperatingSystemBaseDevice_Statics::NewProp_GpuClass = { "GpuClass", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOperatingSystemBaseDevice, GpuClass), Z_Construct_UClass_UOperatingSystemGPU_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemBaseDevice_Statics::NewProp_GpuClass_MetaData), Z_Construct_UClass_UOperatingSystemBaseDevice_Statics::NewProp_GpuClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystemBaseDevice_Statics::NewProp_bRequiresGPU_MetaData[] = {
		{ "Category", "OperatingSystemDeviceHardware" },
		{ "Comment", "/** Does this device requires a GPU? If true, you must provide a valid class for Gpu Class. */" },
		{ "ModuleRelativePath", "Public/Devices/OperatingSystemBaseDevice.h" },
		{ "ToolTip", "Does this device requires a GPU? If true, you must provide a valid class for Gpu Class." },
	};
#endif
	void Z_Construct_UClass_UOperatingSystemBaseDevice_Statics::NewProp_bRequiresGPU_SetBit(void* Obj)
	{
		((UOperatingSystemBaseDevice*)Obj)->bRequiresGPU = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOperatingSystemBaseDevice_Statics::NewProp_bRequiresGPU = { "bRequiresGPU", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UOperatingSystemBaseDevice), &Z_Construct_UClass_UOperatingSystemBaseDevice_Statics::NewProp_bRequiresGPU_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemBaseDevice_Statics::NewProp_bRequiresGPU_MetaData), Z_Construct_UClass_UOperatingSystemBaseDevice_Statics::NewProp_bRequiresGPU_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystemBaseDevice_Statics::NewProp_bOperatingSystemInstalled_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/Devices/OperatingSystemBaseDevice.h" },
	};
#endif
	void Z_Construct_UClass_UOperatingSystemBaseDevice_Statics::NewProp_bOperatingSystemInstalled_SetBit(void* Obj)
	{
		((UOperatingSystemBaseDevice*)Obj)->bOperatingSystemInstalled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOperatingSystemBaseDevice_Statics::NewProp_bOperatingSystemInstalled = { "bOperatingSystemInstalled", nullptr, (EPropertyFlags)0x0020080000020801, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UOperatingSystemBaseDevice), &Z_Construct_UClass_UOperatingSystemBaseDevice_Statics::NewProp_bOperatingSystemInstalled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemBaseDevice_Statics::NewProp_bOperatingSystemInstalled_MetaData), Z_Construct_UClass_UOperatingSystemBaseDevice_Statics::NewProp_bOperatingSystemInstalled_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystemBaseDevice_Statics::NewProp_DeviceTag_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/Devices/OperatingSystemBaseDevice.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOperatingSystemBaseDevice_Statics::NewProp_DeviceTag = { "DeviceTag", nullptr, (EPropertyFlags)0x0020080000020801, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOperatingSystemBaseDevice, DeviceTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemBaseDevice_Statics::NewProp_DeviceTag_MetaData), Z_Construct_UClass_UOperatingSystemBaseDevice_Statics::NewProp_DeviceTag_MetaData) }; // 2083603574
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UOperatingSystemBaseDevice_Statics::NewProp_PreviousState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystemBaseDevice_Statics::NewProp_PreviousState_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/Devices/OperatingSystemBaseDevice.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UOperatingSystemBaseDevice_Statics::NewProp_PreviousState = { "PreviousState", nullptr, (EPropertyFlags)0x0020080000020801, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOperatingSystemBaseDevice, PreviousState), Z_Construct_UEnum_OperatingSystemSimulator_EOperatingSystemDeviceState, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemBaseDevice_Statics::NewProp_PreviousState_MetaData), Z_Construct_UClass_UOperatingSystemBaseDevice_Statics::NewProp_PreviousState_MetaData) }; // 2402969494
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UOperatingSystemBaseDevice_Statics::NewProp_CurrentState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystemBaseDevice_Statics::NewProp_CurrentState_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/Devices/OperatingSystemBaseDevice.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UOperatingSystemBaseDevice_Statics::NewProp_CurrentState = { "CurrentState", nullptr, (EPropertyFlags)0x0020080000020801, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOperatingSystemBaseDevice, CurrentState), Z_Construct_UEnum_OperatingSystemSimulator_EOperatingSystemDeviceState, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemBaseDevice_Statics::NewProp_CurrentState_MetaData), Z_Construct_UClass_UOperatingSystemBaseDevice_Statics::NewProp_CurrentState_MetaData) }; // 2402969494
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystemBaseDevice_Statics::NewProp_ActiveOperatingSystem_MetaData[] = {
		{ "Category", "Debug" },
		{ "Comment", "/** Current operating system that is active. */" },
		{ "Keywords", "OS, current" },
		{ "ModuleRelativePath", "Public/Devices/OperatingSystemBaseDevice.h" },
		{ "ToolTip", "Current operating system that is active." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UOperatingSystemBaseDevice_Statics::NewProp_ActiveOperatingSystem = { "ActiveOperatingSystem", nullptr, (EPropertyFlags)0x0024080000020815, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOperatingSystemBaseDevice, ActiveOperatingSystem), Z_Construct_UClass_UOperatingSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemBaseDevice_Statics::NewProp_ActiveOperatingSystem_MetaData), Z_Construct_UClass_UOperatingSystemBaseDevice_Statics::NewProp_ActiveOperatingSystem_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystemBaseDevice_Statics::NewProp_DeviceWidget_MetaData[] = {
		{ "Category", "Debug" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Devices/OperatingSystemBaseDevice.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UOperatingSystemBaseDevice_Statics::NewProp_DeviceWidget = { "DeviceWidget", nullptr, (EPropertyFlags)0x00240800000a0809, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOperatingSystemBaseDevice, DeviceWidget), Z_Construct_UClass_UOperatingSystemDeviceWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemBaseDevice_Statics::NewProp_DeviceWidget_MetaData), Z_Construct_UClass_UOperatingSystemBaseDevice_Statics::NewProp_DeviceWidget_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystemBaseDevice_Statics::NewProp_OnScreenWidget_MetaData[] = {
		{ "Category", "Debug" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Devices/OperatingSystemBaseDevice.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UOperatingSystemBaseDevice_Statics::NewProp_OnScreenWidget = { "OnScreenWidget", nullptr, (EPropertyFlags)0x00240800000a0809, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOperatingSystemBaseDevice, OnScreenWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemBaseDevice_Statics::NewProp_OnScreenWidget_MetaData), Z_Construct_UClass_UOperatingSystemBaseDevice_Statics::NewProp_OnScreenWidget_MetaData) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UOperatingSystemBaseDevice_Statics::NewProp_Hardwares_Inner = { "Hardwares", nullptr, (EPropertyFlags)0x0004000000020000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UOperatingSystemBaseHardware_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystemBaseDevice_Statics::NewProp_Hardwares_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/Devices/OperatingSystemBaseDevice.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UOperatingSystemBaseDevice_Statics::NewProp_Hardwares = { "Hardwares", nullptr, (EPropertyFlags)0x0024080000020801, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOperatingSystemBaseDevice, Hardwares), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemBaseDevice_Statics::NewProp_Hardwares_MetaData), Z_Construct_UClass_UOperatingSystemBaseDevice_Statics::NewProp_Hardwares_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystemBaseDevice_Statics::NewProp_DeviceMessenger_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/Devices/OperatingSystemBaseDevice.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UOperatingSystemBaseDevice_Statics::NewProp_DeviceMessenger = { "DeviceMessenger", nullptr, (EPropertyFlags)0x0024080000020801, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOperatingSystemBaseDevice, DeviceMessenger), Z_Construct_UClass_UOperatingSystemDeviceMessenger_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemBaseDevice_Statics::NewProp_DeviceMessenger_MetaData), Z_Construct_UClass_UOperatingSystemBaseDevice_Statics::NewProp_DeviceMessenger_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystemBaseDevice_Statics::NewProp_OnDeviceStateChanged_MetaData[] = {
		{ "Category", "OperatingSystemDevice" },
		{ "ModuleRelativePath", "Public/Devices/OperatingSystemBaseDevice.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOperatingSystemBaseDevice_Statics::NewProp_OnDeviceStateChanged = { "OnDeviceStateChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOperatingSystemBaseDevice, OnDeviceStateChanged), Z_Construct_UDelegateFunction_OperatingSystemSimulator_OnDeviceStateChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemBaseDevice_Statics::NewProp_OnDeviceStateChanged_MetaData), Z_Construct_UClass_UOperatingSystemBaseDevice_Statics::NewProp_OnDeviceStateChanged_MetaData) }; // 341220149
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOperatingSystemBaseDevice_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystemBaseDevice_Statics::NewProp_DeviceName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystemBaseDevice_Statics::NewProp_DeviceWidgetClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystemBaseDevice_Statics::NewProp_OperatingSystemClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystemBaseDevice_Statics::NewProp_bOperatingSystemIsPreInstalled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystemBaseDevice_Statics::NewProp_PowerOnTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystemBaseDevice_Statics::NewProp_SessionEndTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystemBaseDevice_Statics::NewProp_MotherboardClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystemBaseDevice_Statics::NewProp_PsuClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystemBaseDevice_Statics::NewProp_CpuClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystemBaseDevice_Statics::NewProp_RamClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystemBaseDevice_Statics::NewProp_HddClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystemBaseDevice_Statics::NewProp_GpuClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystemBaseDevice_Statics::NewProp_bRequiresGPU,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystemBaseDevice_Statics::NewProp_bOperatingSystemInstalled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystemBaseDevice_Statics::NewProp_DeviceTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystemBaseDevice_Statics::NewProp_PreviousState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystemBaseDevice_Statics::NewProp_PreviousState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystemBaseDevice_Statics::NewProp_CurrentState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystemBaseDevice_Statics::NewProp_CurrentState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystemBaseDevice_Statics::NewProp_ActiveOperatingSystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystemBaseDevice_Statics::NewProp_DeviceWidget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystemBaseDevice_Statics::NewProp_OnScreenWidget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystemBaseDevice_Statics::NewProp_Hardwares_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystemBaseDevice_Statics::NewProp_Hardwares,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystemBaseDevice_Statics::NewProp_DeviceMessenger,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystemBaseDevice_Statics::NewProp_OnDeviceStateChanged,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOperatingSystemBaseDevice_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOperatingSystemBaseDevice>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOperatingSystemBaseDevice_Statics::ClassParams = {
		&UOperatingSystemBaseDevice::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UOperatingSystemBaseDevice_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemBaseDevice_Statics::PropPointers),
		0,
		0x009000A1u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemBaseDevice_Statics::Class_MetaDataParams), Z_Construct_UClass_UOperatingSystemBaseDevice_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemBaseDevice_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UOperatingSystemBaseDevice()
	{
		if (!Z_Registration_Info_UClass_UOperatingSystemBaseDevice.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOperatingSystemBaseDevice.OuterSingleton, Z_Construct_UClass_UOperatingSystemBaseDevice_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOperatingSystemBaseDevice.OuterSingleton;
	}
	template<> OPERATINGSYSTEMSIMULATOR_API UClass* StaticClass<UOperatingSystemBaseDevice>()
	{
		return UOperatingSystemBaseDevice::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOperatingSystemBaseDevice);
	UOperatingSystemBaseDevice::~UOperatingSystemBaseDevice() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Devices_OperatingSystemBaseDevice_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Devices_OperatingSystemBaseDevice_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOperatingSystemBaseDevice, UOperatingSystemBaseDevice::StaticClass, TEXT("UOperatingSystemBaseDevice"), &Z_Registration_Info_UClass_UOperatingSystemBaseDevice, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOperatingSystemBaseDevice), 2853183742U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Devices_OperatingSystemBaseDevice_h_3313677811(TEXT("/Script/OperatingSystemSimulator"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Devices_OperatingSystemBaseDevice_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Devices_OperatingSystemBaseDevice_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
