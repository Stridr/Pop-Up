// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OperatingSystemSimulator/Public/Widgets/OperatingSystemBsodWidget.h"
#include "OperatingSystemSimulator/Public/OperatingSystemTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOperatingSystemBsodWidget() {}
// Cross Module References
	OPERATINGSYSTEMSIMULATOR_API UClass* Z_Construct_UClass_UOperatingSystem_NoRegister();
	OPERATINGSYSTEMSIMULATOR_API UClass* Z_Construct_UClass_UOperatingSystemBsodWidget();
	OPERATINGSYSTEMSIMULATOR_API UClass* Z_Construct_UClass_UOperatingSystemBsodWidget_NoRegister();
	OPERATINGSYSTEMSIMULATOR_API UScriptStruct* Z_Construct_UScriptStruct_FGenericError();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_OperatingSystemSimulator();
// End Cross Module References
	DEFINE_FUNCTION(UOperatingSystemBsodWidget::execUpdateProgress)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_ProgressPercentage);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateProgress(Z_Param_ProgressPercentage);
		P_NATIVE_END;
	}
	struct OperatingSystemBsodWidget_eventK2_OnProgressChanged_Parms
	{
		float CurrentProgresPercentage;
	};
	static FName NAME_UOperatingSystemBsodWidget_K2_OnProgressChanged = FName(TEXT("K2_OnProgressChanged"));
	void UOperatingSystemBsodWidget::K2_OnProgressChanged(float const& CurrentProgresPercentage)
	{
		OperatingSystemBsodWidget_eventK2_OnProgressChanged_Parms Parms;
		Parms.CurrentProgresPercentage=CurrentProgresPercentage;
		ProcessEvent(FindFunctionChecked(NAME_UOperatingSystemBsodWidget_K2_OnProgressChanged),&Parms);
	}
	void UOperatingSystemBsodWidget::StaticRegisterNativesUOperatingSystemBsodWidget()
	{
		UClass* Class = UOperatingSystemBsodWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "UpdateProgress", &UOperatingSystemBsodWidget::execUpdateProgress },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOperatingSystemBsodWidget_K2_OnProgressChanged_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentProgresPercentage_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentProgresPercentage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemBsodWidget_K2_OnProgressChanged_Statics::NewProp_CurrentProgresPercentage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOperatingSystemBsodWidget_K2_OnProgressChanged_Statics::NewProp_CurrentProgresPercentage = { "CurrentProgresPercentage", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemBsodWidget_eventK2_OnProgressChanged_Parms, CurrentProgresPercentage), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemBsodWidget_K2_OnProgressChanged_Statics::NewProp_CurrentProgresPercentage_MetaData), Z_Construct_UFunction_UOperatingSystemBsodWidget_K2_OnProgressChanged_Statics::NewProp_CurrentProgresPercentage_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperatingSystemBsodWidget_K2_OnProgressChanged_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemBsodWidget_K2_OnProgressChanged_Statics::NewProp_CurrentProgresPercentage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemBsodWidget_K2_OnProgressChanged_Statics::Function_MetaDataParams[] = {
		{ "Category", "OperatingSystemBSOD" },
		{ "DisplayName", "On BSOD Progress Changed" },
		{ "ModuleRelativePath", "Public/Widgets/OperatingSystemBsodWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystemBsodWidget_K2_OnProgressChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystemBsodWidget, nullptr, "K2_OnProgressChanged", nullptr, nullptr, Z_Construct_UFunction_UOperatingSystemBsodWidget_K2_OnProgressChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemBsodWidget_K2_OnProgressChanged_Statics::PropPointers), sizeof(OperatingSystemBsodWidget_eventK2_OnProgressChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08480800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemBsodWidget_K2_OnProgressChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystemBsodWidget_K2_OnProgressChanged_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemBsodWidget_K2_OnProgressChanged_Statics::PropPointers) < 2048);
	static_assert(sizeof(OperatingSystemBsodWidget_eventK2_OnProgressChanged_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOperatingSystemBsodWidget_K2_OnProgressChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystemBsodWidget_K2_OnProgressChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOperatingSystemBsodWidget_UpdateProgress_Statics
	{
		struct OperatingSystemBsodWidget_eventUpdateProgress_Parms
		{
			float ProgressPercentage;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProgressPercentage_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ProgressPercentage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemBsodWidget_UpdateProgress_Statics::NewProp_ProgressPercentage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOperatingSystemBsodWidget_UpdateProgress_Statics::NewProp_ProgressPercentage = { "ProgressPercentage", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemBsodWidget_eventUpdateProgress_Parms, ProgressPercentage), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemBsodWidget_UpdateProgress_Statics::NewProp_ProgressPercentage_MetaData), Z_Construct_UFunction_UOperatingSystemBsodWidget_UpdateProgress_Statics::NewProp_ProgressPercentage_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperatingSystemBsodWidget_UpdateProgress_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemBsodWidget_UpdateProgress_Statics::NewProp_ProgressPercentage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemBsodWidget_UpdateProgress_Statics::Function_MetaDataParams[] = {
		{ "Category", "OperatingSystemBSOD" },
		{ "ModuleRelativePath", "Public/Widgets/OperatingSystemBsodWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystemBsodWidget_UpdateProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystemBsodWidget, nullptr, "UpdateProgress", nullptr, nullptr, Z_Construct_UFunction_UOperatingSystemBsodWidget_UpdateProgress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemBsodWidget_UpdateProgress_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOperatingSystemBsodWidget_UpdateProgress_Statics::OperatingSystemBsodWidget_eventUpdateProgress_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020409, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemBsodWidget_UpdateProgress_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystemBsodWidget_UpdateProgress_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemBsodWidget_UpdateProgress_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOperatingSystemBsodWidget_UpdateProgress_Statics::OperatingSystemBsodWidget_eventUpdateProgress_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOperatingSystemBsodWidget_UpdateProgress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystemBsodWidget_UpdateProgress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOperatingSystemBsodWidget);
	UClass* Z_Construct_UClass_UOperatingSystemBsodWidget_NoRegister()
	{
		return UOperatingSystemBsodWidget::StaticClass();
	}
	struct Z_Construct_UClass_UOperatingSystemBsodWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParentOS_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ParentOS;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BsodError_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BsodError;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOperatingSystemBsodWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_OperatingSystemSimulator,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemBsodWidget_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UOperatingSystemBsodWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOperatingSystemBsodWidget_K2_OnProgressChanged, "K2_OnProgressChanged" }, // 1398304664
		{ &Z_Construct_UFunction_UOperatingSystemBsodWidget_UpdateProgress, "UpdateProgress" }, // 3294750196
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemBsodWidget_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystemBsodWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Widgets/OperatingSystemBsodWidget.h" },
		{ "ModuleRelativePath", "Public/Widgets/OperatingSystemBsodWidget.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystemBsodWidget_Statics::NewProp_ParentOS_MetaData[] = {
		{ "Category", "OperatingSystemBSOD" },
		{ "ModuleRelativePath", "Public/Widgets/OperatingSystemBsodWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UOperatingSystemBsodWidget_Statics::NewProp_ParentOS = { "ParentOS", nullptr, (EPropertyFlags)0x0024080000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOperatingSystemBsodWidget, ParentOS), Z_Construct_UClass_UOperatingSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemBsodWidget_Statics::NewProp_ParentOS_MetaData), Z_Construct_UClass_UOperatingSystemBsodWidget_Statics::NewProp_ParentOS_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystemBsodWidget_Statics::NewProp_BsodError_MetaData[] = {
		{ "Category", "OperatingSystemBSOD" },
		{ "ModuleRelativePath", "Public/Widgets/OperatingSystemBsodWidget.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOperatingSystemBsodWidget_Statics::NewProp_BsodError = { "BsodError", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOperatingSystemBsodWidget, BsodError), Z_Construct_UScriptStruct_FGenericError, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemBsodWidget_Statics::NewProp_BsodError_MetaData), Z_Construct_UClass_UOperatingSystemBsodWidget_Statics::NewProp_BsodError_MetaData) }; // 4286029882
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOperatingSystemBsodWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystemBsodWidget_Statics::NewProp_ParentOS,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystemBsodWidget_Statics::NewProp_BsodError,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOperatingSystemBsodWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOperatingSystemBsodWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOperatingSystemBsodWidget_Statics::ClassParams = {
		&UOperatingSystemBsodWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UOperatingSystemBsodWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemBsodWidget_Statics::PropPointers),
		0,
		0x00B010A1u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemBsodWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UOperatingSystemBsodWidget_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemBsodWidget_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UOperatingSystemBsodWidget()
	{
		if (!Z_Registration_Info_UClass_UOperatingSystemBsodWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOperatingSystemBsodWidget.OuterSingleton, Z_Construct_UClass_UOperatingSystemBsodWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOperatingSystemBsodWidget.OuterSingleton;
	}
	template<> OPERATINGSYSTEMSIMULATOR_API UClass* StaticClass<UOperatingSystemBsodWidget>()
	{
		return UOperatingSystemBsodWidget::StaticClass();
	}
	UOperatingSystemBsodWidget::UOperatingSystemBsodWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOperatingSystemBsodWidget);
	UOperatingSystemBsodWidget::~UOperatingSystemBsodWidget() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Widgets_OperatingSystemBsodWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Widgets_OperatingSystemBsodWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOperatingSystemBsodWidget, UOperatingSystemBsodWidget::StaticClass, TEXT("UOperatingSystemBsodWidget"), &Z_Registration_Info_UClass_UOperatingSystemBsodWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOperatingSystemBsodWidget), 2493906426U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Widgets_OperatingSystemBsodWidget_h_3352505025(TEXT("/Script/OperatingSystemSimulator"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Widgets_OperatingSystemBsodWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Widgets_OperatingSystemBsodWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
