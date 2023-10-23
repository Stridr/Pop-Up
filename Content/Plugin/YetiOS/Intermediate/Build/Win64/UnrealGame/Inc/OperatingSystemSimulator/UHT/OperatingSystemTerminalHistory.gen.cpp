// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OperatingSystemSimulator/Public/Programs/OperatingSystemTerminalHistory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOperatingSystemTerminalHistory() {}
// Cross Module References
	OPERATINGSYSTEMSIMULATOR_API UClass* Z_Construct_UClass_UOperatingSystemProgramData();
	OPERATINGSYSTEMSIMULATOR_API UClass* Z_Construct_UClass_UOperatingSystemTerminalHistory();
	OPERATINGSYSTEMSIMULATOR_API UClass* Z_Construct_UClass_UOperatingSystemTerminalHistory_NoRegister();
	UPackage* Z_Construct_UPackage__Script_OperatingSystemSimulator();
// End Cross Module References
	void UOperatingSystemTerminalHistory::StaticRegisterNativesUOperatingSystemTerminalHistory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOperatingSystemTerminalHistory);
	UClass* Z_Construct_UClass_UOperatingSystemTerminalHistory_NoRegister()
	{
		return UOperatingSystemTerminalHistory::StaticClass();
	}
	struct Z_Construct_UClass_UOperatingSystemTerminalHistory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxSupportedHistoryCommands_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_MaxSupportedHistoryCommands;
		static const UECodeGen_Private::FStrPropertyParams NewProp_CommandHistory_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CommandHistory_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CommandHistory;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CommandHistoryIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CommandHistoryIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOperatingSystemTerminalHistory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UOperatingSystemProgramData,
		(UObject* (*)())Z_Construct_UPackage__Script_OperatingSystemSimulator,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemTerminalHistory_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystemTerminalHistory_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Programs/OperatingSystemTerminalHistory.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Programs/OperatingSystemTerminalHistory.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystemTerminalHistory_Statics::NewProp_MaxSupportedHistoryCommands_MetaData[] = {
		{ "Category", "OperatingSystemTerminalHistory" },
		{ "Comment", "/** How many commands should be supported  */" },
		{ "ModuleRelativePath", "Public/Programs/OperatingSystemTerminalHistory.h" },
		{ "ToolTip", "How many commands should be supported" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UOperatingSystemTerminalHistory_Statics::NewProp_MaxSupportedHistoryCommands = { "MaxSupportedHistoryCommands", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOperatingSystemTerminalHistory, MaxSupportedHistoryCommands), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemTerminalHistory_Statics::NewProp_MaxSupportedHistoryCommands_MetaData), Z_Construct_UClass_UOperatingSystemTerminalHistory_Statics::NewProp_MaxSupportedHistoryCommands_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOperatingSystemTerminalHistory_Statics::NewProp_CommandHistory_Inner = { "CommandHistory", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystemTerminalHistory_Statics::NewProp_CommandHistory_MetaData[] = {
		{ "Category", "OperatingSystemTerminalHistory" },
		{ "ModuleRelativePath", "Public/Programs/OperatingSystemTerminalHistory.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UOperatingSystemTerminalHistory_Statics::NewProp_CommandHistory = { "CommandHistory", nullptr, (EPropertyFlags)0x0040000000022801, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOperatingSystemTerminalHistory, CommandHistory), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemTerminalHistory_Statics::NewProp_CommandHistory_MetaData), Z_Construct_UClass_UOperatingSystemTerminalHistory_Statics::NewProp_CommandHistory_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystemTerminalHistory_Statics::NewProp_CommandHistoryIndex_MetaData[] = {
		{ "Category", "OperatingSystemTerminalHistory" },
		{ "ModuleRelativePath", "Public/Programs/OperatingSystemTerminalHistory.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UOperatingSystemTerminalHistory_Statics::NewProp_CommandHistoryIndex = { "CommandHistoryIndex", nullptr, (EPropertyFlags)0x0040000000022801, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOperatingSystemTerminalHistory, CommandHistoryIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemTerminalHistory_Statics::NewProp_CommandHistoryIndex_MetaData), Z_Construct_UClass_UOperatingSystemTerminalHistory_Statics::NewProp_CommandHistoryIndex_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOperatingSystemTerminalHistory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystemTerminalHistory_Statics::NewProp_MaxSupportedHistoryCommands,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystemTerminalHistory_Statics::NewProp_CommandHistory_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystemTerminalHistory_Statics::NewProp_CommandHistory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystemTerminalHistory_Statics::NewProp_CommandHistoryIndex,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOperatingSystemTerminalHistory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOperatingSystemTerminalHistory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOperatingSystemTerminalHistory_Statics::ClassParams = {
		&UOperatingSystemTerminalHistory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UOperatingSystemTerminalHistory_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemTerminalHistory_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemTerminalHistory_Statics::Class_MetaDataParams), Z_Construct_UClass_UOperatingSystemTerminalHistory_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemTerminalHistory_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UOperatingSystemTerminalHistory()
	{
		if (!Z_Registration_Info_UClass_UOperatingSystemTerminalHistory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOperatingSystemTerminalHistory.OuterSingleton, Z_Construct_UClass_UOperatingSystemTerminalHistory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOperatingSystemTerminalHistory.OuterSingleton;
	}
	template<> OPERATINGSYSTEMSIMULATOR_API UClass* StaticClass<UOperatingSystemTerminalHistory>()
	{
		return UOperatingSystemTerminalHistory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOperatingSystemTerminalHistory);
	UOperatingSystemTerminalHistory::~UOperatingSystemTerminalHistory() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Programs_OperatingSystemTerminalHistory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Programs_OperatingSystemTerminalHistory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOperatingSystemTerminalHistory, UOperatingSystemTerminalHistory::StaticClass, TEXT("UOperatingSystemTerminalHistory"), &Z_Registration_Info_UClass_UOperatingSystemTerminalHistory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOperatingSystemTerminalHistory), 922974342U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Programs_OperatingSystemTerminalHistory_h_332095454(TEXT("/Script/OperatingSystemSimulator"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Programs_OperatingSystemTerminalHistory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Programs_OperatingSystemTerminalHistory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
