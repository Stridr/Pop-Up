// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OperatingSystemSimulator/Public/Hardware/OperatingSystemHDD.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOperatingSystemHDD() {}
// Cross Module References
	OPERATINGSYSTEMSIMULATOR_API UClass* Z_Construct_UClass_UOperatingSystemBaseHardware();
	OPERATINGSYSTEMSIMULATOR_API UClass* Z_Construct_UClass_UOperatingSystemHDD();
	OPERATINGSYSTEMSIMULATOR_API UClass* Z_Construct_UClass_UOperatingSystemHDD_NoRegister();
	OPERATINGSYSTEMSIMULATOR_API UClass* Z_Construct_UClass_UOperatingSystemPartition_NoRegister();
	UPackage* Z_Construct_UPackage__Script_OperatingSystemSimulator();
// End Cross Module References
	void UOperatingSystemHDD::StaticRegisterNativesUOperatingSystemHDD()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOperatingSystemHDD);
	UClass* Z_Construct_UClass_UOperatingSystemHDD_NoRegister()
	{
		return UOperatingSystemHDD::StaticClass();
	}
	struct Z_Construct_UClass_UOperatingSystemHDD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SizeInGB_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SizeInGB;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DiskPartitions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DiskPartitions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DiskPartitions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PostDiskAllocatedSpaceInBytes_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_PostDiskAllocatedSpaceInBytes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOperatingSystemHDD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UOperatingSystemBaseHardware,
		(UObject* (*)())Z_Construct_UPackage__Script_OperatingSystemSimulator,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemHDD_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystemHDD_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "Operating System HardDisk" },
		{ "IncludePath", "Hardware/OperatingSystemHDD.h" },
		{ "IsBlueprintBase", "true" },
		{ "Keywords", "hard, disk, ssd, nvme" },
		{ "ModuleRelativePath", "Public/Hardware/OperatingSystemHDD.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystemHDD_Statics::NewProp_SizeInGB_MetaData[] = {
		{ "Category", "OperatingSystemHardDisk" },
		{ "ClampMax", "8000" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Size of this hard disk. */" },
		{ "ForceUnits", "Gigabytes" },
		{ "ModuleRelativePath", "Public/Hardware/OperatingSystemHDD.h" },
		{ "ToolTip", "Size of this hard disk." },
		{ "UIMax", "4000" },
		{ "UIMin", "100" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOperatingSystemHDD_Statics::NewProp_SizeInGB = { "SizeInGB", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOperatingSystemHDD, SizeInGB), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemHDD_Statics::NewProp_SizeInGB_MetaData), Z_Construct_UClass_UOperatingSystemHDD_Statics::NewProp_SizeInGB_MetaData) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UOperatingSystemHDD_Statics::NewProp_DiskPartitions_Inner = { "DiskPartitions", nullptr, (EPropertyFlags)0x0004000000020000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UOperatingSystemPartition_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystemHDD_Statics::NewProp_DiskPartitions_MetaData[] = {
		{ "Category", "Debug" },
		{ "Comment", "/** Key is the drive letter. Like C, D, E etc. In Unix this can be /dev/sda, /dev/sda1 etc. */" },
		{ "ModuleRelativePath", "Public/Hardware/OperatingSystemHDD.h" },
		{ "ToolTip", "Key is the drive letter. Like C, D, E etc. In Unix this can be /dev/sda, /dev/sda1 etc." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UOperatingSystemHDD_Statics::NewProp_DiskPartitions = { "DiskPartitions", nullptr, (EPropertyFlags)0x0024080000022801, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOperatingSystemHDD, DiskPartitions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemHDD_Statics::NewProp_DiskPartitions_MetaData), Z_Construct_UClass_UOperatingSystemHDD_Statics::NewProp_DiskPartitions_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystemHDD_Statics::NewProp_PostDiskAllocatedSpaceInBytes_MetaData[] = {
		{ "Category", "Debug" },
		{ "Comment", "/** Space remaining to allocate new partitions. */" },
		{ "ModuleRelativePath", "Public/Hardware/OperatingSystemHDD.h" },
		{ "ToolTip", "Space remaining to allocate new partitions." },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UOperatingSystemHDD_Statics::NewProp_PostDiskAllocatedSpaceInBytes = { "PostDiskAllocatedSpaceInBytes", nullptr, (EPropertyFlags)0x0020080000022815, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOperatingSystemHDD, PostDiskAllocatedSpaceInBytes), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemHDD_Statics::NewProp_PostDiskAllocatedSpaceInBytes_MetaData), Z_Construct_UClass_UOperatingSystemHDD_Statics::NewProp_PostDiskAllocatedSpaceInBytes_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOperatingSystemHDD_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystemHDD_Statics::NewProp_SizeInGB,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystemHDD_Statics::NewProp_DiskPartitions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystemHDD_Statics::NewProp_DiskPartitions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystemHDD_Statics::NewProp_PostDiskAllocatedSpaceInBytes,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOperatingSystemHDD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOperatingSystemHDD>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOperatingSystemHDD_Statics::ClassParams = {
		&UOperatingSystemHDD::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UOperatingSystemHDD_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemHDD_Statics::PropPointers),
		0,
		0x000000A1u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemHDD_Statics::Class_MetaDataParams), Z_Construct_UClass_UOperatingSystemHDD_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemHDD_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UOperatingSystemHDD()
	{
		if (!Z_Registration_Info_UClass_UOperatingSystemHDD.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOperatingSystemHDD.OuterSingleton, Z_Construct_UClass_UOperatingSystemHDD_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOperatingSystemHDD.OuterSingleton;
	}
	template<> OPERATINGSYSTEMSIMULATOR_API UClass* StaticClass<UOperatingSystemHDD>()
	{
		return UOperatingSystemHDD::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOperatingSystemHDD);
	UOperatingSystemHDD::~UOperatingSystemHDD() {}
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Hardware_OperatingSystemHDD_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Hardware_OperatingSystemHDD_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOperatingSystemHDD, UOperatingSystemHDD::StaticClass, TEXT("UOperatingSystemHDD"), &Z_Registration_Info_UClass_UOperatingSystemHDD, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOperatingSystemHDD), 3020887234U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Hardware_OperatingSystemHDD_h_3477854727(TEXT("/Script/OperatingSystemSimulator"),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Hardware_OperatingSystemHDD_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Hardware_OperatingSystemHDD_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
