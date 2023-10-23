// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OperatingSystemSimulator/Public/Hardware/OperatingSystemMBB.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOperatingSystemMBB() {}
// Cross Module References
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	OPERATINGSYSTEMSIMULATOR_API UClass* Z_Construct_UClass_UOperatingSystemBaseDevice_NoRegister();
	OPERATINGSYSTEMSIMULATOR_API UClass* Z_Construct_UClass_UOperatingSystemBaseHardware();
	OPERATINGSYSTEMSIMULATOR_API UClass* Z_Construct_UClass_UOperatingSystemBIOS_NoRegister();
	OPERATINGSYSTEMSIMULATOR_API UClass* Z_Construct_UClass_UOperatingSystemMBB();
	OPERATINGSYSTEMSIMULATOR_API UClass* Z_Construct_UClass_UOperatingSystemMBB_NoRegister();
	OPERATINGSYSTEMSIMULATOR_API UEnum* Z_Construct_UEnum_OperatingSystemSimulator_EOperatingSystemCommonSizes();
	OPERATINGSYSTEMSIMULATOR_API UEnum* Z_Construct_UEnum_OperatingSystemSimulator_EOperatingSystemDeviceState();
	UPackage* Z_Construct_UPackage__Script_OperatingSystemSimulator();
// End Cross Module References
	DEFINE_FUNCTION(UOperatingSystemMBB::execTryOpenBIOS)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->TryOpenBIOS();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOperatingSystemMBB::execInternal_OnDeviceStateChanged)
	{
		P_GET_ENUM_REF(EOperatingSystemDeviceState,Z_Param_Out_PreviousState);
		P_GET_ENUM_REF(EOperatingSystemDeviceState,Z_Param_Out_CurrentState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Internal_OnDeviceStateChanged((EOperatingSystemDeviceState&)(Z_Param_Out_PreviousState),(EOperatingSystemDeviceState&)(Z_Param_Out_CurrentState));
		P_NATIVE_END;
	}
	void UOperatingSystemMBB::StaticRegisterNativesUOperatingSystemMBB()
	{
		UClass* Class = UOperatingSystemMBB::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Internal_OnDeviceStateChanged", &UOperatingSystemMBB::execInternal_OnDeviceStateChanged },
			{ "TryOpenBIOS", &UOperatingSystemMBB::execTryOpenBIOS },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOperatingSystemMBB_Internal_OnDeviceStateChanged_Statics
	{
		struct OperatingSystemMBB_eventInternal_OnDeviceStateChanged_Parms
		{
			EOperatingSystemDeviceState PreviousState;
			EOperatingSystemDeviceState CurrentState;
		};
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
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOperatingSystemMBB_Internal_OnDeviceStateChanged_Statics::NewProp_PreviousState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemMBB_Internal_OnDeviceStateChanged_Statics::NewProp_PreviousState_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOperatingSystemMBB_Internal_OnDeviceStateChanged_Statics::NewProp_PreviousState = { "PreviousState", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemMBB_eventInternal_OnDeviceStateChanged_Parms, PreviousState), Z_Construct_UEnum_OperatingSystemSimulator_EOperatingSystemDeviceState, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemMBB_Internal_OnDeviceStateChanged_Statics::NewProp_PreviousState_MetaData), Z_Construct_UFunction_UOperatingSystemMBB_Internal_OnDeviceStateChanged_Statics::NewProp_PreviousState_MetaData) }; // 2402969494
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOperatingSystemMBB_Internal_OnDeviceStateChanged_Statics::NewProp_CurrentState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemMBB_Internal_OnDeviceStateChanged_Statics::NewProp_CurrentState_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOperatingSystemMBB_Internal_OnDeviceStateChanged_Statics::NewProp_CurrentState = { "CurrentState", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemMBB_eventInternal_OnDeviceStateChanged_Parms, CurrentState), Z_Construct_UEnum_OperatingSystemSimulator_EOperatingSystemDeviceState, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemMBB_Internal_OnDeviceStateChanged_Statics::NewProp_CurrentState_MetaData), Z_Construct_UFunction_UOperatingSystemMBB_Internal_OnDeviceStateChanged_Statics::NewProp_CurrentState_MetaData) }; // 2402969494
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperatingSystemMBB_Internal_OnDeviceStateChanged_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemMBB_Internal_OnDeviceStateChanged_Statics::NewProp_PreviousState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemMBB_Internal_OnDeviceStateChanged_Statics::NewProp_PreviousState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemMBB_Internal_OnDeviceStateChanged_Statics::NewProp_CurrentState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemMBB_Internal_OnDeviceStateChanged_Statics::NewProp_CurrentState,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemMBB_Internal_OnDeviceStateChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Hardware/OperatingSystemMBB.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystemMBB_Internal_OnDeviceStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystemMBB, nullptr, "Internal_OnDeviceStateChanged", nullptr, nullptr, Z_Construct_UFunction_UOperatingSystemMBB_Internal_OnDeviceStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemMBB_Internal_OnDeviceStateChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOperatingSystemMBB_Internal_OnDeviceStateChanged_Statics::OperatingSystemMBB_eventInternal_OnDeviceStateChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemMBB_Internal_OnDeviceStateChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystemMBB_Internal_OnDeviceStateChanged_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemMBB_Internal_OnDeviceStateChanged_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOperatingSystemMBB_Internal_OnDeviceStateChanged_Statics::OperatingSystemMBB_eventInternal_OnDeviceStateChanged_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOperatingSystemMBB_Internal_OnDeviceStateChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystemMBB_Internal_OnDeviceStateChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOperatingSystemMBB_TryOpenBIOS_Statics
	{
		struct OperatingSystemMBB_eventTryOpenBIOS_Parms
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
	void Z_Construct_UFunction_UOperatingSystemMBB_TryOpenBIOS_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OperatingSystemMBB_eventTryOpenBIOS_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOperatingSystemMBB_TryOpenBIOS_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OperatingSystemMBB_eventTryOpenBIOS_Parms), &Z_Construct_UFunction_UOperatingSystemMBB_TryOpenBIOS_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperatingSystemMBB_TryOpenBIOS_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemMBB_TryOpenBIOS_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemMBB_TryOpenBIOS_Statics::Function_MetaDataParams[] = {
		{ "Category", "OperatingSystemMotherboard" },
		{ "Comment", "/**\n\x09* public\n\x09* UOperatingSystemMBB::TryOpenBIOS\n\x09* Opens BIOS if the following conditions are met.\n\x09* -\x09""BIOS widget is valid.\n\x09* -\x09""Device is in either starting or BIOS state.\n\x09* @return [bool] True if the bios widget was added to viewport.\n\x09**/" },
		{ "ModuleRelativePath", "Public/Hardware/OperatingSystemMBB.h" },
		{ "ToolTip", "public\nUOperatingSystemMBB::TryOpenBIOS\nOpens BIOS if the following conditions are met.\n-     BIOS widget is valid.\n-     Device is in either starting or BIOS state.\n@return [bool] True if the bios widget was added to viewport." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystemMBB_TryOpenBIOS_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystemMBB, nullptr, "TryOpenBIOS", nullptr, nullptr, Z_Construct_UFunction_UOperatingSystemMBB_TryOpenBIOS_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemMBB_TryOpenBIOS_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOperatingSystemMBB_TryOpenBIOS_Statics::OperatingSystemMBB_eventTryOpenBIOS_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemMBB_TryOpenBIOS_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystemMBB_TryOpenBIOS_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemMBB_TryOpenBIOS_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOperatingSystemMBB_TryOpenBIOS_Statics::OperatingSystemMBB_eventTryOpenBIOS_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOperatingSystemMBB_TryOpenBIOS()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystemMBB_TryOpenBIOS_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOperatingSystemMBB);
	UClass* Z_Construct_UClass_UOperatingSystemMBB_NoRegister()
	{
		return UOperatingSystemMBB::StaticClass();
	}
	struct Z_Construct_UClass_UOperatingSystemMBB_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BiosClass_MetaData[];
#endif
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_BiosClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxCpuSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxCpuSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SupportedCpuSockets_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SupportedCpuSockets;
		static const UECodeGen_Private::FBytePropertyParams NewProp_MaxSupportedRamSize_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxSupportedRamSize_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_MaxSupportedRamSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SupportedDevices_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SupportedDevices;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BIOS_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BIOS;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParentDevice_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_ParentDevice;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOperatingSystemMBB_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UOperatingSystemBaseHardware,
		(UObject* (*)())Z_Construct_UPackage__Script_OperatingSystemSimulator,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemMBB_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UOperatingSystemMBB_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOperatingSystemMBB_Internal_OnDeviceStateChanged, "Internal_OnDeviceStateChanged" }, // 3869763494
		{ &Z_Construct_UFunction_UOperatingSystemMBB_TryOpenBIOS, "TryOpenBIOS" }, // 3851085733
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemMBB_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystemMBB_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "Operating System Motherboard" },
		{ "IncludePath", "Hardware/OperatingSystemMBB.h" },
		{ "IsBlueprintBase", "true" },
		{ "Keywords", "mother, main, board" },
		{ "ModuleRelativePath", "Public/Hardware/OperatingSystemMBB.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystemMBB_Statics::NewProp_BiosClass_MetaData[] = {
		{ "Category", "OperatingSystemMotherboard" },
		{ "Comment", "/** Bios that belongs to this Motherboard. */" },
		{ "ModuleRelativePath", "Public/Hardware/OperatingSystemMBB.h" },
		{ "ToolTip", "Bios that belongs to this Motherboard." },
	};
#endif
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UOperatingSystemMBB_Statics::NewProp_BiosClass = { "BiosClass", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOperatingSystemMBB, BiosClass), Z_Construct_UClass_UOperatingSystemBIOS_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemMBB_Statics::NewProp_BiosClass_MetaData), Z_Construct_UClass_UOperatingSystemMBB_Statics::NewProp_BiosClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystemMBB_Statics::NewProp_MaxCpuSpeed_MetaData[] = {
		{ "Category", "OperatingSystemMotherboard" },
		{ "ClampMax", "8.800000" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Maximum speed the CPU can have on this motherboard. If the CPU speed is higher than this one, device won't start. */" },
		{ "ForceUnits", "Megahertz" },
		{ "ModuleRelativePath", "Public/Hardware/OperatingSystemMBB.h" },
		{ "ToolTip", "Maximum speed the CPU can have on this motherboard. If the CPU speed is higher than this one, device won't start." },
		{ "UIMax", "5" },
		{ "UIMin", "2" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOperatingSystemMBB_Statics::NewProp_MaxCpuSpeed = { "MaxCpuSpeed", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOperatingSystemMBB, MaxCpuSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemMBB_Statics::NewProp_MaxCpuSpeed_MetaData), Z_Construct_UClass_UOperatingSystemMBB_Statics::NewProp_MaxCpuSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystemMBB_Statics::NewProp_SupportedCpuSockets_MetaData[] = {
		{ "Categories", "OperatingSystem.Hardware.CPU.Socket" },
		{ "Category", "OperatingSystemMotherboard" },
		{ "Comment", "/** Supported cpu sockets. If empty, it is assumed all CPU sockets are supported. */" },
		{ "ModuleRelativePath", "Public/Hardware/OperatingSystemMBB.h" },
		{ "ToolTip", "Supported cpu sockets. If empty, it is assumed all CPU sockets are supported." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOperatingSystemMBB_Statics::NewProp_SupportedCpuSockets = { "SupportedCpuSockets", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOperatingSystemMBB, SupportedCpuSockets), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemMBB_Statics::NewProp_SupportedCpuSockets_MetaData), Z_Construct_UClass_UOperatingSystemMBB_Statics::NewProp_SupportedCpuSockets_MetaData) }; // 405371792
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UOperatingSystemMBB_Statics::NewProp_MaxSupportedRamSize_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystemMBB_Statics::NewProp_MaxSupportedRamSize_MetaData[] = {
		{ "Category", "OperatingSystemMotherboard" },
		{ "ModuleRelativePath", "Public/Hardware/OperatingSystemMBB.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UOperatingSystemMBB_Statics::NewProp_MaxSupportedRamSize = { "MaxSupportedRamSize", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOperatingSystemMBB, MaxSupportedRamSize), Z_Construct_UEnum_OperatingSystemSimulator_EOperatingSystemCommonSizes, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemMBB_Statics::NewProp_MaxSupportedRamSize_MetaData), Z_Construct_UClass_UOperatingSystemMBB_Statics::NewProp_MaxSupportedRamSize_MetaData) }; // 167520951
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystemMBB_Statics::NewProp_SupportedDevices_MetaData[] = {
		{ "Categories", "OperatingSystem.Devices" },
		{ "Category", "OperatingSystemMotherboard" },
		{ "Comment", "/** List of devices this Motherboard supports. If empty, it is assumed all devices are supported. */" },
		{ "ModuleRelativePath", "Public/Hardware/OperatingSystemMBB.h" },
		{ "ToolTip", "List of devices this Motherboard supports. If empty, it is assumed all devices are supported." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOperatingSystemMBB_Statics::NewProp_SupportedDevices = { "SupportedDevices", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOperatingSystemMBB, SupportedDevices), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemMBB_Statics::NewProp_SupportedDevices_MetaData), Z_Construct_UClass_UOperatingSystemMBB_Statics::NewProp_SupportedDevices_MetaData) }; // 405371792
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystemMBB_Statics::NewProp_BIOS_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/Hardware/OperatingSystemMBB.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UOperatingSystemMBB_Statics::NewProp_BIOS = { "BIOS", nullptr, (EPropertyFlags)0x0024080000022801, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOperatingSystemMBB, BIOS), Z_Construct_UClass_UOperatingSystemBIOS_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemMBB_Statics::NewProp_BIOS_MetaData), Z_Construct_UClass_UOperatingSystemMBB_Statics::NewProp_BIOS_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystemMBB_Statics::NewProp_ParentDevice_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/Hardware/OperatingSystemMBB.h" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UOperatingSystemMBB_Statics::NewProp_ParentDevice = { "ParentDevice", nullptr, (EPropertyFlags)0x0024080000022815, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOperatingSystemMBB, ParentDevice), Z_Construct_UClass_UOperatingSystemBaseDevice_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemMBB_Statics::NewProp_ParentDevice_MetaData), Z_Construct_UClass_UOperatingSystemMBB_Statics::NewProp_ParentDevice_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOperatingSystemMBB_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystemMBB_Statics::NewProp_BiosClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystemMBB_Statics::NewProp_MaxCpuSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystemMBB_Statics::NewProp_SupportedCpuSockets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystemMBB_Statics::NewProp_MaxSupportedRamSize_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystemMBB_Statics::NewProp_MaxSupportedRamSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystemMBB_Statics::NewProp_SupportedDevices,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystemMBB_Statics::NewProp_BIOS,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystemMBB_Statics::NewProp_ParentDevice,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOperatingSystemMBB_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOperatingSystemMBB>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOperatingSystemMBB_Statics::ClassParams = {
		&UOperatingSystemMBB::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UOperatingSystemMBB_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemMBB_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemMBB_Statics::Class_MetaDataParams), Z_Construct_UClass_UOperatingSystemMBB_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemMBB_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UOperatingSystemMBB()
	{
		if (!Z_Registration_Info_UClass_UOperatingSystemMBB.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOperatingSystemMBB.OuterSingleton, Z_Construct_UClass_UOperatingSystemMBB_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOperatingSystemMBB.OuterSingleton;
	}
	template<> OPERATINGSYSTEMSIMULATOR_API UClass* StaticClass<UOperatingSystemMBB>()
	{
		return UOperatingSystemMBB::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOperatingSystemMBB);
	UOperatingSystemMBB::~UOperatingSystemMBB() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Hardware_OperatingSystemMBB_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Hardware_OperatingSystemMBB_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOperatingSystemMBB, UOperatingSystemMBB::StaticClass, TEXT("UOperatingSystemMBB"), &Z_Registration_Info_UClass_UOperatingSystemMBB, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOperatingSystemMBB), 1358748214U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Hardware_OperatingSystemMBB_h_768014848(TEXT("/Script/OperatingSystemSimulator"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Hardware_OperatingSystemMBB_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Hardware_OperatingSystemMBB_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
