// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OperatingSystemSimulator/Public/Widgets/OperatingSystemBiosWidget.h"
#include "OperatingSystemSimulator/Public/OperatingSystemTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOperatingSystemBiosWidget() {}
// Cross Module References
	COMMONUI_API UClass* Z_Construct_UClass_UCommonUserWidget();
	OPERATINGSYSTEMSIMULATOR_API UClass* Z_Construct_UClass_UOperatingSystemBIOS_NoRegister();
	OPERATINGSYSTEMSIMULATOR_API UClass* Z_Construct_UClass_UOperatingSystemBiosWidget();
	OPERATINGSYSTEMSIMULATOR_API UClass* Z_Construct_UClass_UOperatingSystemBiosWidget_NoRegister();
	OPERATINGSYSTEMSIMULATOR_API UClass* Z_Construct_UClass_UOperatingSystemMBB_NoRegister();
	OPERATINGSYSTEMSIMULATOR_API UScriptStruct* Z_Construct_UScriptStruct_FGenericError();
	UPackage* Z_Construct_UPackage__Script_OperatingSystemSimulator();
// End Cross Module References
	struct OperatingSystemBiosWidget_eventK2_OnHardwareError_Parms
	{
		FGenericError Error;
	};
	static FName NAME_UOperatingSystemBiosWidget_K2_OnHardwareError = FName(TEXT("K2_OnHardwareError"));
	void UOperatingSystemBiosWidget::K2_OnHardwareError(FGenericError const& Error)
	{
		OperatingSystemBiosWidget_eventK2_OnHardwareError_Parms Parms;
		Parms.Error=Error;
		ProcessEvent(FindFunctionChecked(NAME_UOperatingSystemBiosWidget_K2_OnHardwareError),&Parms);
	}
	void UOperatingSystemBiosWidget::StaticRegisterNativesUOperatingSystemBiosWidget()
	{
	}
	struct Z_Construct_UFunction_UOperatingSystemBiosWidget_K2_OnHardwareError_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Error_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Error;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemBiosWidget_K2_OnHardwareError_Statics::NewProp_Error_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOperatingSystemBiosWidget_K2_OnHardwareError_Statics::NewProp_Error = { "Error", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemBiosWidget_eventK2_OnHardwareError_Parms, Error), Z_Construct_UScriptStruct_FGenericError, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemBiosWidget_K2_OnHardwareError_Statics::NewProp_Error_MetaData), Z_Construct_UFunction_UOperatingSystemBiosWidget_K2_OnHardwareError_Statics::NewProp_Error_MetaData) }; // 4286029882
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperatingSystemBiosWidget_K2_OnHardwareError_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemBiosWidget_K2_OnHardwareError_Statics::NewProp_Error,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemBiosWidget_K2_OnHardwareError_Statics::Function_MetaDataParams[] = {
		{ "Category", "OperatingSystemBiosWidget" },
		{ "Comment", "/**\n\x09* protected\n\x09* UOperatingSystemBiosWidget::K2_OnHardwareError\n\x09* Event called when hardware fail occurs.\n\x09* @param Error [const FGenericError&] Error information\n\x09**/" },
		{ "DisplayName", "OnHardwareError" },
		{ "ModuleRelativePath", "Public/Widgets/OperatingSystemBiosWidget.h" },
		{ "ToolTip", "protected\nUOperatingSystemBiosWidget::K2_OnHardwareError\nEvent called when hardware fail occurs.\n@param Error [const FGenericError&] Error information" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystemBiosWidget_K2_OnHardwareError_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystemBiosWidget, nullptr, "K2_OnHardwareError", nullptr, nullptr, Z_Construct_UFunction_UOperatingSystemBiosWidget_K2_OnHardwareError_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemBiosWidget_K2_OnHardwareError_Statics::PropPointers), sizeof(OperatingSystemBiosWidget_eventK2_OnHardwareError_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08480800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemBiosWidget_K2_OnHardwareError_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystemBiosWidget_K2_OnHardwareError_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemBiosWidget_K2_OnHardwareError_Statics::PropPointers) < 2048);
	static_assert(sizeof(OperatingSystemBiosWidget_eventK2_OnHardwareError_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOperatingSystemBiosWidget_K2_OnHardwareError()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystemBiosWidget_K2_OnHardwareError_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOperatingSystemBiosWidget);
	UClass* Z_Construct_UClass_UOperatingSystemBiosWidget_NoRegister()
	{
		return UOperatingSystemBiosWidget::StaticClass();
	}
	struct Z_Construct_UClass_UOperatingSystemBiosWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParentMotherboard_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ParentMotherboard;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParentBIOS_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ParentBIOS;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HardwareError_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HardwareError;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOperatingSystemBiosWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCommonUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_OperatingSystemSimulator,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemBiosWidget_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UOperatingSystemBiosWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOperatingSystemBiosWidget_K2_OnHardwareError, "K2_OnHardwareError" }, // 567611133
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemBiosWidget_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystemBiosWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Widgets/OperatingSystemBiosWidget.h" },
		{ "ModuleRelativePath", "Public/Widgets/OperatingSystemBiosWidget.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystemBiosWidget_Statics::NewProp_ParentMotherboard_MetaData[] = {
		{ "Category", "OperatingSystemBiosWidget" },
		{ "ModuleRelativePath", "Public/Widgets/OperatingSystemBiosWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UOperatingSystemBiosWidget_Statics::NewProp_ParentMotherboard = { "ParentMotherboard", nullptr, (EPropertyFlags)0x0024080000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOperatingSystemBiosWidget, ParentMotherboard), Z_Construct_UClass_UOperatingSystemMBB_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemBiosWidget_Statics::NewProp_ParentMotherboard_MetaData), Z_Construct_UClass_UOperatingSystemBiosWidget_Statics::NewProp_ParentMotherboard_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystemBiosWidget_Statics::NewProp_ParentBIOS_MetaData[] = {
		{ "Category", "OperatingSystemBiosWidget" },
		{ "ModuleRelativePath", "Public/Widgets/OperatingSystemBiosWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UOperatingSystemBiosWidget_Statics::NewProp_ParentBIOS = { "ParentBIOS", nullptr, (EPropertyFlags)0x0024080000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOperatingSystemBiosWidget, ParentBIOS), Z_Construct_UClass_UOperatingSystemBIOS_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemBiosWidget_Statics::NewProp_ParentBIOS_MetaData), Z_Construct_UClass_UOperatingSystemBiosWidget_Statics::NewProp_ParentBIOS_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystemBiosWidget_Statics::NewProp_HardwareError_MetaData[] = {
		{ "Category", "OperatingSystemBiosWidget" },
		{ "ModuleRelativePath", "Public/Widgets/OperatingSystemBiosWidget.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOperatingSystemBiosWidget_Statics::NewProp_HardwareError = { "HardwareError", nullptr, (EPropertyFlags)0x0020080000002014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOperatingSystemBiosWidget, HardwareError), Z_Construct_UScriptStruct_FGenericError, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemBiosWidget_Statics::NewProp_HardwareError_MetaData), Z_Construct_UClass_UOperatingSystemBiosWidget_Statics::NewProp_HardwareError_MetaData) }; // 4286029882
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOperatingSystemBiosWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystemBiosWidget_Statics::NewProp_ParentMotherboard,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystemBiosWidget_Statics::NewProp_ParentBIOS,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystemBiosWidget_Statics::NewProp_HardwareError,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOperatingSystemBiosWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOperatingSystemBiosWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOperatingSystemBiosWidget_Statics::ClassParams = {
		&UOperatingSystemBiosWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UOperatingSystemBiosWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemBiosWidget_Statics::PropPointers),
		0,
		0x00B010A1u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemBiosWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UOperatingSystemBiosWidget_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemBiosWidget_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UOperatingSystemBiosWidget()
	{
		if (!Z_Registration_Info_UClass_UOperatingSystemBiosWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOperatingSystemBiosWidget.OuterSingleton, Z_Construct_UClass_UOperatingSystemBiosWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOperatingSystemBiosWidget.OuterSingleton;
	}
	template<> OPERATINGSYSTEMSIMULATOR_API UClass* StaticClass<UOperatingSystemBiosWidget>()
	{
		return UOperatingSystemBiosWidget::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOperatingSystemBiosWidget);
	UOperatingSystemBiosWidget::~UOperatingSystemBiosWidget() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Widgets_OperatingSystemBiosWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Widgets_OperatingSystemBiosWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOperatingSystemBiosWidget, UOperatingSystemBiosWidget::StaticClass, TEXT("UOperatingSystemBiosWidget"), &Z_Registration_Info_UClass_UOperatingSystemBiosWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOperatingSystemBiosWidget), 1693809369U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Widgets_OperatingSystemBiosWidget_h_45044827(TEXT("/Script/OperatingSystemSimulator"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Widgets_OperatingSystemBiosWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Widgets_OperatingSystemBiosWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
