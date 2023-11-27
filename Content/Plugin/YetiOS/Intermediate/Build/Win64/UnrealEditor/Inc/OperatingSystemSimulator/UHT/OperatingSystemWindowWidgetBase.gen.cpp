// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OperatingSystemSimulator/Public/Widgets/Common/OperatingSystemWindowWidgetBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOperatingSystemWindowWidgetBase() {}
// Cross Module References
	DRAGGABLEWINDOWUMG_API UClass* Z_Construct_UClass_UDraggableWindow_NoRegister();
	OPERATINGSYSTEMSIMULATOR_API UClass* Z_Construct_UClass_UOperatingSystemWidgetBase();
	OPERATINGSYSTEMSIMULATOR_API UClass* Z_Construct_UClass_UOperatingSystemWindowWidgetBase();
	OPERATINGSYSTEMSIMULATOR_API UClass* Z_Construct_UClass_UOperatingSystemWindowWidgetBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_OperatingSystemSimulator();
// End Cross Module References
	DEFINE_FUNCTION(UOperatingSystemWindowWidgetBase::execBringWindowToFront)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BringWindowToFront();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOperatingSystemWindowWidgetBase::execSetParentWindow)
	{
		P_GET_OBJECT(UDraggableWindow,Z_Param_NewWindow);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetParentWindow(Z_Param_NewWindow);
		P_NATIVE_END;
	}
	static FName NAME_UOperatingSystemWindowWidgetBase_K2_OnDestroyWidget = FName(TEXT("K2_OnDestroyWidget"));
	void UOperatingSystemWindowWidgetBase::K2_OnDestroyWidget()
	{
		ProcessEvent(FindFunctionChecked(NAME_UOperatingSystemWindowWidgetBase_K2_OnDestroyWidget),NULL);
	}
	static FName NAME_UOperatingSystemWindowWidgetBase_K2_OnSetWindow = FName(TEXT("K2_OnSetWindow"));
	void UOperatingSystemWindowWidgetBase::K2_OnSetWindow()
	{
		ProcessEvent(FindFunctionChecked(NAME_UOperatingSystemWindowWidgetBase_K2_OnSetWindow),NULL);
	}
	void UOperatingSystemWindowWidgetBase::StaticRegisterNativesUOperatingSystemWindowWidgetBase()
	{
		UClass* Class = UOperatingSystemWindowWidgetBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BringWindowToFront", &UOperatingSystemWindowWidgetBase::execBringWindowToFront },
			{ "SetParentWindow", &UOperatingSystemWindowWidgetBase::execSetParentWindow },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOperatingSystemWindowWidgetBase_BringWindowToFront_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemWindowWidgetBase_BringWindowToFront_Statics::Function_MetaDataParams[] = {
		{ "Category", "OperatingSystemWindowWidgetBase" },
		{ "ModuleRelativePath", "Public/Widgets/Common/OperatingSystemWindowWidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystemWindowWidgetBase_BringWindowToFront_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystemWindowWidgetBase, nullptr, "BringWindowToFront", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemWindowWidgetBase_BringWindowToFront_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystemWindowWidgetBase_BringWindowToFront_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UOperatingSystemWindowWidgetBase_BringWindowToFront()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystemWindowWidgetBase_BringWindowToFront_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOperatingSystemWindowWidgetBase_K2_OnDestroyWidget_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemWindowWidgetBase_K2_OnDestroyWidget_Statics::Function_MetaDataParams[] = {
		{ "Category", "OperatingSystemWindowWidgetBase" },
		{ "Comment", "/** This event is called before Event Destruct. */" },
		{ "DisplayName", "OnDestroyWidget" },
		{ "ModuleRelativePath", "Public/Widgets/Common/OperatingSystemWindowWidgetBase.h" },
		{ "ToolTip", "This event is called before Event Destruct." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystemWindowWidgetBase_K2_OnDestroyWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystemWindowWidgetBase, nullptr, "K2_OnDestroyWidget", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemWindowWidgetBase_K2_OnDestroyWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystemWindowWidgetBase_K2_OnDestroyWidget_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UOperatingSystemWindowWidgetBase_K2_OnDestroyWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystemWindowWidgetBase_K2_OnDestroyWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOperatingSystemWindowWidgetBase_K2_OnSetWindow_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemWindowWidgetBase_K2_OnSetWindow_Statics::Function_MetaDataParams[] = {
		{ "Category", "OperatingSystemWindowWidgetBase" },
		{ "DisplayName", "OnSetWindow" },
		{ "ModuleRelativePath", "Public/Widgets/Common/OperatingSystemWindowWidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystemWindowWidgetBase_K2_OnSetWindow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystemWindowWidgetBase, nullptr, "K2_OnSetWindow", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemWindowWidgetBase_K2_OnSetWindow_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystemWindowWidgetBase_K2_OnSetWindow_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UOperatingSystemWindowWidgetBase_K2_OnSetWindow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystemWindowWidgetBase_K2_OnSetWindow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOperatingSystemWindowWidgetBase_SetParentWindow_Statics
	{
		struct OperatingSystemWindowWidgetBase_eventSetParentWindow_Parms
		{
			UDraggableWindow* NewWindow;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewWindow_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewWindow;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemWindowWidgetBase_SetParentWindow_Statics::NewProp_NewWindow_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOperatingSystemWindowWidgetBase_SetParentWindow_Statics::NewProp_NewWindow = { "NewWindow", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemWindowWidgetBase_eventSetParentWindow_Parms, NewWindow), Z_Construct_UClass_UDraggableWindow_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemWindowWidgetBase_SetParentWindow_Statics::NewProp_NewWindow_MetaData), Z_Construct_UFunction_UOperatingSystemWindowWidgetBase_SetParentWindow_Statics::NewProp_NewWindow_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperatingSystemWindowWidgetBase_SetParentWindow_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemWindowWidgetBase_SetParentWindow_Statics::NewProp_NewWindow,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemWindowWidgetBase_SetParentWindow_Statics::Function_MetaDataParams[] = {
		{ "Category", "OperatingSystemWindowWidgetBase" },
		{ "ModuleRelativePath", "Public/Widgets/Common/OperatingSystemWindowWidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystemWindowWidgetBase_SetParentWindow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystemWindowWidgetBase, nullptr, "SetParentWindow", nullptr, nullptr, Z_Construct_UFunction_UOperatingSystemWindowWidgetBase_SetParentWindow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemWindowWidgetBase_SetParentWindow_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOperatingSystemWindowWidgetBase_SetParentWindow_Statics::OperatingSystemWindowWidgetBase_eventSetParentWindow_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemWindowWidgetBase_SetParentWindow_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystemWindowWidgetBase_SetParentWindow_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemWindowWidgetBase_SetParentWindow_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOperatingSystemWindowWidgetBase_SetParentWindow_Statics::OperatingSystemWindowWidgetBase_eventSetParentWindow_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOperatingSystemWindowWidgetBase_SetParentWindow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystemWindowWidgetBase_SetParentWindow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOperatingSystemWindowWidgetBase);
	UClass* Z_Construct_UClass_UOperatingSystemWindowWidgetBase_NoRegister()
	{
		return UOperatingSystemWindowWidgetBase::StaticClass();
	}
	struct Z_Construct_UClass_UOperatingSystemWindowWidgetBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParentWindow_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ParentWindow;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOperatingSystemWindowWidgetBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UOperatingSystemWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_OperatingSystemSimulator,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemWindowWidgetBase_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UOperatingSystemWindowWidgetBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOperatingSystemWindowWidgetBase_BringWindowToFront, "BringWindowToFront" }, // 2941733839
		{ &Z_Construct_UFunction_UOperatingSystemWindowWidgetBase_K2_OnDestroyWidget, "K2_OnDestroyWidget" }, // 2725946808
		{ &Z_Construct_UFunction_UOperatingSystemWindowWidgetBase_K2_OnSetWindow, "K2_OnSetWindow" }, // 2259561830
		{ &Z_Construct_UFunction_UOperatingSystemWindowWidgetBase_SetParentWindow, "SetParentWindow" }, // 253734195
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemWindowWidgetBase_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystemWindowWidgetBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Inherit from this if the widget requires a parent window\n * For example: File widget and Program widget.\n */" },
		{ "IncludePath", "Widgets/Common/OperatingSystemWindowWidgetBase.h" },
		{ "ModuleRelativePath", "Public/Widgets/Common/OperatingSystemWindowWidgetBase.h" },
		{ "ToolTip", "Inherit from this if the widget requires a parent window\nFor example: File widget and Program widget." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystemWindowWidgetBase_Statics::NewProp_ParentWindow_MetaData[] = {
		{ "Category", "OperatingSystemWindowWidgetBase" },
		{ "EditInline", "true" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/Widgets/Common/OperatingSystemWindowWidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UOperatingSystemWindowWidgetBase_Statics::NewProp_ParentWindow = { "ParentWindow", nullptr, (EPropertyFlags)0x002508000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOperatingSystemWindowWidgetBase, ParentWindow), Z_Construct_UClass_UDraggableWindow_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemWindowWidgetBase_Statics::NewProp_ParentWindow_MetaData), Z_Construct_UClass_UOperatingSystemWindowWidgetBase_Statics::NewProp_ParentWindow_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOperatingSystemWindowWidgetBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystemWindowWidgetBase_Statics::NewProp_ParentWindow,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOperatingSystemWindowWidgetBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOperatingSystemWindowWidgetBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOperatingSystemWindowWidgetBase_Statics::ClassParams = {
		&UOperatingSystemWindowWidgetBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UOperatingSystemWindowWidgetBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemWindowWidgetBase_Statics::PropPointers),
		0,
		0x00B010A1u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemWindowWidgetBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UOperatingSystemWindowWidgetBase_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemWindowWidgetBase_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UOperatingSystemWindowWidgetBase()
	{
		if (!Z_Registration_Info_UClass_UOperatingSystemWindowWidgetBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOperatingSystemWindowWidgetBase.OuterSingleton, Z_Construct_UClass_UOperatingSystemWindowWidgetBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOperatingSystemWindowWidgetBase.OuterSingleton;
	}
	template<> OPERATINGSYSTEMSIMULATOR_API UClass* StaticClass<UOperatingSystemWindowWidgetBase>()
	{
		return UOperatingSystemWindowWidgetBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOperatingSystemWindowWidgetBase);
	UOperatingSystemWindowWidgetBase::~UOperatingSystemWindowWidgetBase() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Widgets_Common_OperatingSystemWindowWidgetBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Widgets_Common_OperatingSystemWindowWidgetBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOperatingSystemWindowWidgetBase, UOperatingSystemWindowWidgetBase::StaticClass, TEXT("UOperatingSystemWindowWidgetBase"), &Z_Registration_Info_UClass_UOperatingSystemWindowWidgetBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOperatingSystemWindowWidgetBase), 1630628675U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Widgets_Common_OperatingSystemWindowWidgetBase_h_3311643349(TEXT("/Script/OperatingSystemSimulator"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Widgets_Common_OperatingSystemWindowWidgetBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Widgets_Common_OperatingSystemWindowWidgetBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
