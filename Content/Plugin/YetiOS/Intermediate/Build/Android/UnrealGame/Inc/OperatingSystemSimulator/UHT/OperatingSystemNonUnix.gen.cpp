// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OperatingSystemSimulator/Public/Core/OperatingSystemNonUnix.h"
#include "OperatingSystemSimulator/Public/Devices/OperatingSystemBaseDevice.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOperatingSystemNonUnix() {}
// Cross Module References
	OPERATINGSYSTEMSIMULATOR_API UClass* Z_Construct_UClass_UOperatingSystem();
	OPERATINGSYSTEMSIMULATOR_API UClass* Z_Construct_UClass_UOperatingSystemNonUnix();
	OPERATINGSYSTEMSIMULATOR_API UClass* Z_Construct_UClass_UOperatingSystemNonUnix_NoRegister();
	UPackage* Z_Construct_UPackage__Script_OperatingSystemSimulator();
// End Cross Module References
	DEFINE_FUNCTION(UOperatingSystemNonUnix::execFindDiskLetterAtIndex)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_AtIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->FindDiskLetterAtIndex(Z_Param_Out_AtIndex);
		P_NATIVE_END;
	}
	void UOperatingSystemNonUnix::StaticRegisterNativesUOperatingSystemNonUnix()
	{
		UClass* Class = UOperatingSystemNonUnix::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FindDiskLetterAtIndex", &UOperatingSystemNonUnix::execFindDiskLetterAtIndex },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOperatingSystemNonUnix_FindDiskLetterAtIndex_Statics
	{
		struct OperatingSystemNonUnix_eventFindDiskLetterAtIndex_Parms
		{
			int32 AtIndex;
			FName ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AtIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_AtIndex;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemNonUnix_FindDiskLetterAtIndex_Statics::NewProp_AtIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOperatingSystemNonUnix_FindDiskLetterAtIndex_Statics::NewProp_AtIndex = { "AtIndex", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemNonUnix_eventFindDiskLetterAtIndex_Parms, AtIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemNonUnix_FindDiskLetterAtIndex_Statics::NewProp_AtIndex_MetaData), Z_Construct_UFunction_UOperatingSystemNonUnix_FindDiskLetterAtIndex_Statics::NewProp_AtIndex_MetaData) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UOperatingSystemNonUnix_FindDiskLetterAtIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemNonUnix_eventFindDiskLetterAtIndex_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperatingSystemNonUnix_FindDiskLetterAtIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemNonUnix_FindDiskLetterAtIndex_Statics::NewProp_AtIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemNonUnix_FindDiskLetterAtIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemNonUnix_FindDiskLetterAtIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "OperatingSystemNonUnix" },
		{ "Keywords", "get, disk, letter" },
		{ "ModuleRelativePath", "Public/Core/OperatingSystemNonUnix.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystemNonUnix_FindDiskLetterAtIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystemNonUnix, nullptr, "FindDiskLetterAtIndex", nullptr, nullptr, Z_Construct_UFunction_UOperatingSystemNonUnix_FindDiskLetterAtIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemNonUnix_FindDiskLetterAtIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOperatingSystemNonUnix_FindDiskLetterAtIndex_Statics::OperatingSystemNonUnix_eventFindDiskLetterAtIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemNonUnix_FindDiskLetterAtIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystemNonUnix_FindDiskLetterAtIndex_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemNonUnix_FindDiskLetterAtIndex_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOperatingSystemNonUnix_FindDiskLetterAtIndex_Statics::OperatingSystemNonUnix_eventFindDiskLetterAtIndex_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOperatingSystemNonUnix_FindDiskLetterAtIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystemNonUnix_FindDiskLetterAtIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOperatingSystemNonUnix);
	UClass* Z_Construct_UClass_UOperatingSystemNonUnix_NoRegister()
	{
		return UOperatingSystemNonUnix::StaticClass();
	}
	struct Z_Construct_UClass_UOperatingSystemNonUnix_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_DiskLetters_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DiskLetters_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DiskLetters;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOperatingSystemNonUnix_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UOperatingSystem,
		(UObject* (*)())Z_Construct_UPackage__Script_OperatingSystemSimulator,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemNonUnix_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UOperatingSystemNonUnix_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOperatingSystemNonUnix_FindDiskLetterAtIndex, "FindDiskLetterAtIndex" }, // 2665598631
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemNonUnix_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystemNonUnix_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Core/OperatingSystemNonUnix.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Core/OperatingSystemNonUnix.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UOperatingSystemNonUnix_Statics::NewProp_DiskLetters_Inner = { "DiskLetters", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystemNonUnix_Statics::NewProp_DiskLetters_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/OperatingSystemNonUnix.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UOperatingSystemNonUnix_Statics::NewProp_DiskLetters = { "DiskLetters", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOperatingSystemNonUnix, DiskLetters), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemNonUnix_Statics::NewProp_DiskLetters_MetaData), Z_Construct_UClass_UOperatingSystemNonUnix_Statics::NewProp_DiskLetters_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOperatingSystemNonUnix_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystemNonUnix_Statics::NewProp_DiskLetters_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystemNonUnix_Statics::NewProp_DiskLetters,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOperatingSystemNonUnix_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOperatingSystemNonUnix>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOperatingSystemNonUnix_Statics::ClassParams = {
		&UOperatingSystemNonUnix::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UOperatingSystemNonUnix_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemNonUnix_Statics::PropPointers),
		0,
		0x009000A1u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemNonUnix_Statics::Class_MetaDataParams), Z_Construct_UClass_UOperatingSystemNonUnix_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemNonUnix_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UOperatingSystemNonUnix()
	{
		if (!Z_Registration_Info_UClass_UOperatingSystemNonUnix.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOperatingSystemNonUnix.OuterSingleton, Z_Construct_UClass_UOperatingSystemNonUnix_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOperatingSystemNonUnix.OuterSingleton;
	}
	template<> OPERATINGSYSTEMSIMULATOR_API UClass* StaticClass<UOperatingSystemNonUnix>()
	{
		return UOperatingSystemNonUnix::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOperatingSystemNonUnix);
	UOperatingSystemNonUnix::~UOperatingSystemNonUnix() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Core_OperatingSystemNonUnix_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Core_OperatingSystemNonUnix_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOperatingSystemNonUnix, UOperatingSystemNonUnix::StaticClass, TEXT("UOperatingSystemNonUnix"), &Z_Registration_Info_UClass_UOperatingSystemNonUnix, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOperatingSystemNonUnix), 2383516788U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Core_OperatingSystemNonUnix_h_349349390(TEXT("/Script/OperatingSystemSimulator"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Core_OperatingSystemNonUnix_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Core_OperatingSystemNonUnix_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
