// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OperatingSystemSimulator/Public/Widgets/OperatingSystemDeviceWidget.h"
#include "OperatingSystemSimulator/Public/OperatingSystemTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOperatingSystemDeviceWidget() {}
// Cross Module References
	COMMONUI_API UClass* Z_Construct_UClass_UCommonUserWidget();
	OPERATINGSYSTEMSIMULATOR_API UClass* Z_Construct_UClass_UOperatingSystemBaseDevice_NoRegister();
	OPERATINGSYSTEMSIMULATOR_API UClass* Z_Construct_UClass_UOperatingSystemDeviceWidget();
	OPERATINGSYSTEMSIMULATOR_API UClass* Z_Construct_UClass_UOperatingSystemDeviceWidget_NoRegister();
	OPERATINGSYSTEMSIMULATOR_API UScriptStruct* Z_Construct_UScriptStruct_FGenericError();
	UPackage* Z_Construct_UPackage__Script_OperatingSystemSimulator();
// End Cross Module References
	struct OperatingSystemDeviceWidget_eventK2_OnCheckHardwareFailed_Parms
	{
		FGenericError Error;
	};
	struct OperatingSystemDeviceWidget_eventK2_OperatingSystemError_Parms
	{
		FGenericError Error;
	};
	static FName NAME_UOperatingSystemDeviceWidget_K2_OnCheckHardwareFailed = FName(TEXT("K2_OnCheckHardwareFailed"));
	void UOperatingSystemDeviceWidget::K2_OnCheckHardwareFailed(FGenericError const& Error)
	{
		OperatingSystemDeviceWidget_eventK2_OnCheckHardwareFailed_Parms Parms;
		Parms.Error=Error;
		ProcessEvent(FindFunctionChecked(NAME_UOperatingSystemDeviceWidget_K2_OnCheckHardwareFailed),&Parms);
	}
	static FName NAME_UOperatingSystemDeviceWidget_K2_OperatingSystemError = FName(TEXT("K2_OperatingSystemError"));
	void UOperatingSystemDeviceWidget::K2_OperatingSystemError(FGenericError const& Error)
	{
		OperatingSystemDeviceWidget_eventK2_OperatingSystemError_Parms Parms;
		Parms.Error=Error;
		ProcessEvent(FindFunctionChecked(NAME_UOperatingSystemDeviceWidget_K2_OperatingSystemError),&Parms);
	}
	void UOperatingSystemDeviceWidget::StaticRegisterNativesUOperatingSystemDeviceWidget()
	{
	}
	struct Z_Construct_UFunction_UOperatingSystemDeviceWidget_K2_OnCheckHardwareFailed_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemDeviceWidget_K2_OnCheckHardwareFailed_Statics::NewProp_Error_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOperatingSystemDeviceWidget_K2_OnCheckHardwareFailed_Statics::NewProp_Error = { "Error", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemDeviceWidget_eventK2_OnCheckHardwareFailed_Parms, Error), Z_Construct_UScriptStruct_FGenericError, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemDeviceWidget_K2_OnCheckHardwareFailed_Statics::NewProp_Error_MetaData), Z_Construct_UFunction_UOperatingSystemDeviceWidget_K2_OnCheckHardwareFailed_Statics::NewProp_Error_MetaData) }; // 4286029882
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperatingSystemDeviceWidget_K2_OnCheckHardwareFailed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemDeviceWidget_K2_OnCheckHardwareFailed_Statics::NewProp_Error,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemDeviceWidget_K2_OnCheckHardwareFailed_Statics::Function_MetaDataParams[] = {
		{ "Category", "OperatingSystemDeviceWidget" },
		{ "DisplayName", "OnHardwareCheckFailed" },
		{ "ModuleRelativePath", "Public/Widgets/OperatingSystemDeviceWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystemDeviceWidget_K2_OnCheckHardwareFailed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystemDeviceWidget, nullptr, "K2_OnCheckHardwareFailed", nullptr, nullptr, Z_Construct_UFunction_UOperatingSystemDeviceWidget_K2_OnCheckHardwareFailed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemDeviceWidget_K2_OnCheckHardwareFailed_Statics::PropPointers), sizeof(OperatingSystemDeviceWidget_eventK2_OnCheckHardwareFailed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08480800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemDeviceWidget_K2_OnCheckHardwareFailed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystemDeviceWidget_K2_OnCheckHardwareFailed_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemDeviceWidget_K2_OnCheckHardwareFailed_Statics::PropPointers) < 2048);
	static_assert(sizeof(OperatingSystemDeviceWidget_eventK2_OnCheckHardwareFailed_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOperatingSystemDeviceWidget_K2_OnCheckHardwareFailed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystemDeviceWidget_K2_OnCheckHardwareFailed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOperatingSystemDeviceWidget_K2_OperatingSystemError_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemDeviceWidget_K2_OperatingSystemError_Statics::NewProp_Error_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOperatingSystemDeviceWidget_K2_OperatingSystemError_Statics::NewProp_Error = { "Error", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemDeviceWidget_eventK2_OperatingSystemError_Parms, Error), Z_Construct_UScriptStruct_FGenericError, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemDeviceWidget_K2_OperatingSystemError_Statics::NewProp_Error_MetaData), Z_Construct_UFunction_UOperatingSystemDeviceWidget_K2_OperatingSystemError_Statics::NewProp_Error_MetaData) }; // 4286029882
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperatingSystemDeviceWidget_K2_OperatingSystemError_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemDeviceWidget_K2_OperatingSystemError_Statics::NewProp_Error,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemDeviceWidget_K2_OperatingSystemError_Statics::Function_MetaDataParams[] = {
		{ "Category", "OperatingSystemDeviceWidget" },
		{ "DisplayName", "OperatingSystemError" },
		{ "ModuleRelativePath", "Public/Widgets/OperatingSystemDeviceWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystemDeviceWidget_K2_OperatingSystemError_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystemDeviceWidget, nullptr, "K2_OperatingSystemError", nullptr, nullptr, Z_Construct_UFunction_UOperatingSystemDeviceWidget_K2_OperatingSystemError_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemDeviceWidget_K2_OperatingSystemError_Statics::PropPointers), sizeof(OperatingSystemDeviceWidget_eventK2_OperatingSystemError_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08480800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemDeviceWidget_K2_OperatingSystemError_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystemDeviceWidget_K2_OperatingSystemError_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemDeviceWidget_K2_OperatingSystemError_Statics::PropPointers) < 2048);
	static_assert(sizeof(OperatingSystemDeviceWidget_eventK2_OperatingSystemError_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOperatingSystemDeviceWidget_K2_OperatingSystemError()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystemDeviceWidget_K2_OperatingSystemError_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOperatingSystemDeviceWidget);
	UClass* Z_Construct_UClass_UOperatingSystemDeviceWidget_NoRegister()
	{
		return UOperatingSystemDeviceWidget::StaticClass();
	}
	struct Z_Construct_UClass_UOperatingSystemDeviceWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwningDevice_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_OwningDevice;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOperatingSystemDeviceWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCommonUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_OperatingSystemSimulator,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemDeviceWidget_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UOperatingSystemDeviceWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOperatingSystemDeviceWidget_K2_OnCheckHardwareFailed, "K2_OnCheckHardwareFailed" }, // 3462945724
		{ &Z_Construct_UFunction_UOperatingSystemDeviceWidget_K2_OperatingSystemError, "K2_OperatingSystemError" }, // 2853173462
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemDeviceWidget_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystemDeviceWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Widgets/OperatingSystemDeviceWidget.h" },
		{ "ModuleRelativePath", "Public/Widgets/OperatingSystemDeviceWidget.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystemDeviceWidget_Statics::NewProp_OwningDevice_MetaData[] = {
		{ "Category", "OperatingSystemDeviceWidget" },
		{ "ModuleRelativePath", "Public/Widgets/OperatingSystemDeviceWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UOperatingSystemDeviceWidget_Statics::NewProp_OwningDevice = { "OwningDevice", nullptr, (EPropertyFlags)0x0024080000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOperatingSystemDeviceWidget, OwningDevice), Z_Construct_UClass_UOperatingSystemBaseDevice_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemDeviceWidget_Statics::NewProp_OwningDevice_MetaData), Z_Construct_UClass_UOperatingSystemDeviceWidget_Statics::NewProp_OwningDevice_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOperatingSystemDeviceWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystemDeviceWidget_Statics::NewProp_OwningDevice,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOperatingSystemDeviceWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOperatingSystemDeviceWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOperatingSystemDeviceWidget_Statics::ClassParams = {
		&UOperatingSystemDeviceWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UOperatingSystemDeviceWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemDeviceWidget_Statics::PropPointers),
		0,
		0x00B010A1u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemDeviceWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UOperatingSystemDeviceWidget_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemDeviceWidget_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UOperatingSystemDeviceWidget()
	{
		if (!Z_Registration_Info_UClass_UOperatingSystemDeviceWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOperatingSystemDeviceWidget.OuterSingleton, Z_Construct_UClass_UOperatingSystemDeviceWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOperatingSystemDeviceWidget.OuterSingleton;
	}
	template<> OPERATINGSYSTEMSIMULATOR_API UClass* StaticClass<UOperatingSystemDeviceWidget>()
	{
		return UOperatingSystemDeviceWidget::StaticClass();
	}
	UOperatingSystemDeviceWidget::UOperatingSystemDeviceWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOperatingSystemDeviceWidget);
	UOperatingSystemDeviceWidget::~UOperatingSystemDeviceWidget() {}
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Widgets_OperatingSystemDeviceWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Widgets_OperatingSystemDeviceWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOperatingSystemDeviceWidget, UOperatingSystemDeviceWidget::StaticClass, TEXT("UOperatingSystemDeviceWidget"), &Z_Registration_Info_UClass_UOperatingSystemDeviceWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOperatingSystemDeviceWidget), 2058596019U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Widgets_OperatingSystemDeviceWidget_h_2032135189(TEXT("/Script/OperatingSystemSimulator"),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Widgets_OperatingSystemDeviceWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Widgets_OperatingSystemDeviceWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
