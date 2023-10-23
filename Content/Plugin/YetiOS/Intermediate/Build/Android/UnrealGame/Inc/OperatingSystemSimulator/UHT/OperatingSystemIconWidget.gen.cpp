// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OperatingSystemSimulator/Public/Widgets/Common/OperatingSystemIconWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOperatingSystemIconWidget() {}
// Cross Module References
	COMMONUI_API UClass* Z_Construct_UClass_UCommonButtonBase();
	OPERATINGSYSTEMSIMULATOR_API UClass* Z_Construct_UClass_UOperatingSystem_NoRegister();
	OPERATINGSYSTEMSIMULATOR_API UClass* Z_Construct_UClass_UOperatingSystemIconWidget();
	OPERATINGSYSTEMSIMULATOR_API UClass* Z_Construct_UClass_UOperatingSystemIconWidget_NoRegister();
	UPackage* Z_Construct_UPackage__Script_OperatingSystemSimulator();
// End Cross Module References
	void UOperatingSystemIconWidget::StaticRegisterNativesUOperatingSystemIconWidget()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOperatingSystemIconWidget);
	UClass* Z_Construct_UClass_UOperatingSystemIconWidget_NoRegister()
	{
		return UOperatingSystemIconWidget::StaticClass();
	}
	struct Z_Construct_UClass_UOperatingSystemIconWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParentOS_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_ParentOS;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOperatingSystemIconWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCommonButtonBase,
		(UObject* (*)())Z_Construct_UPackage__Script_OperatingSystemSimulator,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemIconWidget_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystemIconWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Widgets/Common/OperatingSystemIconWidget.h" },
		{ "ModuleRelativePath", "Public/Widgets/Common/OperatingSystemIconWidget.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystemIconWidget_Statics::NewProp_ParentOS_MetaData[] = {
		{ "Category", "OperatingSystemWidgetBase" },
		{ "ModuleRelativePath", "Public/Widgets/Common/OperatingSystemIconWidget.h" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UOperatingSystemIconWidget_Statics::NewProp_ParentOS = { "ParentOS", nullptr, (EPropertyFlags)0x0024080000000014, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOperatingSystemIconWidget, ParentOS), Z_Construct_UClass_UOperatingSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemIconWidget_Statics::NewProp_ParentOS_MetaData), Z_Construct_UClass_UOperatingSystemIconWidget_Statics::NewProp_ParentOS_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOperatingSystemIconWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystemIconWidget_Statics::NewProp_ParentOS,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOperatingSystemIconWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOperatingSystemIconWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOperatingSystemIconWidget_Statics::ClassParams = {
		&UOperatingSystemIconWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UOperatingSystemIconWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemIconWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemIconWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UOperatingSystemIconWidget_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemIconWidget_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UOperatingSystemIconWidget()
	{
		if (!Z_Registration_Info_UClass_UOperatingSystemIconWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOperatingSystemIconWidget.OuterSingleton, Z_Construct_UClass_UOperatingSystemIconWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOperatingSystemIconWidget.OuterSingleton;
	}
	template<> OPERATINGSYSTEMSIMULATOR_API UClass* StaticClass<UOperatingSystemIconWidget>()
	{
		return UOperatingSystemIconWidget::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOperatingSystemIconWidget);
	UOperatingSystemIconWidget::~UOperatingSystemIconWidget() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Widgets_Common_OperatingSystemIconWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Widgets_Common_OperatingSystemIconWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOperatingSystemIconWidget, UOperatingSystemIconWidget::StaticClass, TEXT("UOperatingSystemIconWidget"), &Z_Registration_Info_UClass_UOperatingSystemIconWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOperatingSystemIconWidget), 2289755012U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Widgets_Common_OperatingSystemIconWidget_h_2300514541(TEXT("/Script/OperatingSystemSimulator"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Widgets_Common_OperatingSystemIconWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Widgets_Common_OperatingSystemIconWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
