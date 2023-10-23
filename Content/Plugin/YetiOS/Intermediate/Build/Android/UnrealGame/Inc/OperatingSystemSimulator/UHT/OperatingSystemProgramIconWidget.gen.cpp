// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OperatingSystemSimulator/Public/Widgets/Common/OperatingSystemProgramIconWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOperatingSystemProgramIconWidget() {}
// Cross Module References
	OPERATINGSYSTEMSIMULATOR_API UClass* Z_Construct_UClass_UOperatingSystemBaseProgram_NoRegister();
	OPERATINGSYSTEMSIMULATOR_API UClass* Z_Construct_UClass_UOperatingSystemIconWidget();
	OPERATINGSYSTEMSIMULATOR_API UClass* Z_Construct_UClass_UOperatingSystemProgramIconWidget();
	OPERATINGSYSTEMSIMULATOR_API UClass* Z_Construct_UClass_UOperatingSystemProgramIconWidget_NoRegister();
	UPackage* Z_Construct_UPackage__Script_OperatingSystemSimulator();
// End Cross Module References
	DEFINE_FUNCTION(UOperatingSystemProgramIconWidget::execGetParentProgram)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UOperatingSystemBaseProgram**)Z_Param__Result=P_THIS->GetParentProgram();
		P_NATIVE_END;
	}
	void UOperatingSystemProgramIconWidget::StaticRegisterNativesUOperatingSystemProgramIconWidget()
	{
		UClass* Class = UOperatingSystemProgramIconWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetParentProgram", &UOperatingSystemProgramIconWidget::execGetParentProgram },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOperatingSystemProgramIconWidget_GetParentProgram_Statics
	{
		struct OperatingSystemProgramIconWidget_eventGetParentProgram_Parms
		{
			UOperatingSystemBaseProgram* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOperatingSystemProgramIconWidget_GetParentProgram_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemProgramIconWidget_eventGetParentProgram_Parms, ReturnValue), Z_Construct_UClass_UOperatingSystemBaseProgram_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperatingSystemProgramIconWidget_GetParentProgram_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemProgramIconWidget_GetParentProgram_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemProgramIconWidget_GetParentProgram_Statics::Function_MetaDataParams[] = {
		{ "Category", "OperatingSystemProgramIconWidget" },
		{ "ModuleRelativePath", "Public/Widgets/Common/OperatingSystemProgramIconWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystemProgramIconWidget_GetParentProgram_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystemProgramIconWidget, nullptr, "GetParentProgram", nullptr, nullptr, Z_Construct_UFunction_UOperatingSystemProgramIconWidget_GetParentProgram_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemProgramIconWidget_GetParentProgram_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOperatingSystemProgramIconWidget_GetParentProgram_Statics::OperatingSystemProgramIconWidget_eventGetParentProgram_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemProgramIconWidget_GetParentProgram_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystemProgramIconWidget_GetParentProgram_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemProgramIconWidget_GetParentProgram_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOperatingSystemProgramIconWidget_GetParentProgram_Statics::OperatingSystemProgramIconWidget_eventGetParentProgram_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOperatingSystemProgramIconWidget_GetParentProgram()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystemProgramIconWidget_GetParentProgram_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOperatingSystemProgramIconWidget);
	UClass* Z_Construct_UClass_UOperatingSystemProgramIconWidget_NoRegister()
	{
		return UOperatingSystemProgramIconWidget::StaticClass();
	}
	struct Z_Construct_UClass_UOperatingSystemProgramIconWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParentProgram_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_ParentProgram;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOperatingSystemProgramIconWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UOperatingSystemIconWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_OperatingSystemSimulator,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemProgramIconWidget_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UOperatingSystemProgramIconWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOperatingSystemProgramIconWidget_GetParentProgram, "GetParentProgram" }, // 3517495855
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemProgramIconWidget_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystemProgramIconWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Widgets/Common/OperatingSystemProgramIconWidget.h" },
		{ "ModuleRelativePath", "Public/Widgets/Common/OperatingSystemProgramIconWidget.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystemProgramIconWidget_Statics::NewProp_ParentProgram_MetaData[] = {
		{ "ModuleRelativePath", "Public/Widgets/Common/OperatingSystemProgramIconWidget.h" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UOperatingSystemProgramIconWidget_Statics::NewProp_ParentProgram = { "ParentProgram", nullptr, (EPropertyFlags)0x0024080000002000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOperatingSystemProgramIconWidget, ParentProgram), Z_Construct_UClass_UOperatingSystemBaseProgram_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemProgramIconWidget_Statics::NewProp_ParentProgram_MetaData), Z_Construct_UClass_UOperatingSystemProgramIconWidget_Statics::NewProp_ParentProgram_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOperatingSystemProgramIconWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystemProgramIconWidget_Statics::NewProp_ParentProgram,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOperatingSystemProgramIconWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOperatingSystemProgramIconWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOperatingSystemProgramIconWidget_Statics::ClassParams = {
		&UOperatingSystemProgramIconWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UOperatingSystemProgramIconWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemProgramIconWidget_Statics::PropPointers),
		0,
		0x00A010A1u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemProgramIconWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UOperatingSystemProgramIconWidget_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemProgramIconWidget_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UOperatingSystemProgramIconWidget()
	{
		if (!Z_Registration_Info_UClass_UOperatingSystemProgramIconWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOperatingSystemProgramIconWidget.OuterSingleton, Z_Construct_UClass_UOperatingSystemProgramIconWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOperatingSystemProgramIconWidget.OuterSingleton;
	}
	template<> OPERATINGSYSTEMSIMULATOR_API UClass* StaticClass<UOperatingSystemProgramIconWidget>()
	{
		return UOperatingSystemProgramIconWidget::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOperatingSystemProgramIconWidget);
	UOperatingSystemProgramIconWidget::~UOperatingSystemProgramIconWidget() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Widgets_Common_OperatingSystemProgramIconWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Widgets_Common_OperatingSystemProgramIconWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOperatingSystemProgramIconWidget, UOperatingSystemProgramIconWidget::StaticClass, TEXT("UOperatingSystemProgramIconWidget"), &Z_Registration_Info_UClass_UOperatingSystemProgramIconWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOperatingSystemProgramIconWidget), 957252314U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Widgets_Common_OperatingSystemProgramIconWidget_h_4252041415(TEXT("/Script/OperatingSystemSimulator"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Widgets_Common_OperatingSystemProgramIconWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Widgets_Common_OperatingSystemProgramIconWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
