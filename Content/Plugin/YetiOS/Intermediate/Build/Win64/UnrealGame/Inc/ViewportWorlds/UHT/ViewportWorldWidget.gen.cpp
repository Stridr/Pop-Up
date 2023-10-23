// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ViewportWorlds/Private/ViewportWorldWidget.h"
#include "../../Source/Runtime/Engine/Classes/Engine/Scene.h"
#include "ViewportWorlds/Public/ViewportWorldTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeViewportWorldWidget() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPostProcessSettings();
	UMG_API UClass* Z_Construct_UClass_UContentWidget();
	UPackage* Z_Construct_UPackage__Script_ViewportWorlds();
	VIEWPORTWORLDS_API UClass* Z_Construct_UClass_UViewportWorldWidget();
	VIEWPORTWORLDS_API UClass* Z_Construct_UClass_UViewportWorldWidget_NoRegister();
	VIEWPORTWORLDS_API UEnum* Z_Construct_UEnum_ViewportWorlds_EViewportWorldRenderingMode();
	VIEWPORTWORLDS_API UEnum* Z_Construct_UEnum_ViewportWorlds_EViewportWorldViewMode();
	VIEWPORTWORLDS_API UScriptStruct* Z_Construct_UScriptStruct_FViewportWorldOptions();
// End Cross Module References
	DEFINE_FUNCTION(UViewportWorldWidget::execSetShowInfoText)
	{
		P_GET_UBOOL(Z_Param_bShow);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetShowInfoText(Z_Param_bShow);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UViewportWorldWidget::execLoadGameWorld)
	{
		P_GET_SOFTOBJECT(TSoftObjectPtr<UWorld>,Z_Param_TargetWorld);
		P_GET_STRUCT(FViewportWorldOptions,Z_Param_WorldOptions);
		P_GET_UBOOL(Z_Param_bInitializeActors);
		P_GET_UBOOL(Z_Param_bBeginPlay);
		P_GET_PROPERTY(FStrProperty,Z_Param_GameOptions);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->LoadGameWorld(Z_Param_TargetWorld,Z_Param_WorldOptions,Z_Param_bInitializeActors,Z_Param_bBeginPlay,Z_Param_GameOptions);
		P_NATIVE_END;
	}
	void UViewportWorldWidget::StaticRegisterNativesUViewportWorldWidget()
	{
		UClass* Class = UViewportWorldWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "LoadGameWorld", &UViewportWorldWidget::execLoadGameWorld },
			{ "SetShowInfoText", &UViewportWorldWidget::execSetShowInfoText },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UViewportWorldWidget_LoadGameWorld_Statics
	{
		struct ViewportWorldWidget_eventLoadGameWorld_Parms
		{
			TSoftObjectPtr<UWorld> TargetWorld;
			FViewportWorldOptions WorldOptions;
			bool bInitializeActors;
			bool bBeginPlay;
			FString GameOptions;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_TargetWorld;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldOptions_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WorldOptions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInitializeActors_MetaData[];
#endif
		static void NewProp_bInitializeActors_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInitializeActors;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bBeginPlay_MetaData[];
#endif
		static void NewProp_bBeginPlay_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBeginPlay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameOptions_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_GameOptions;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_UViewportWorldWidget_LoadGameWorld_Statics::NewProp_TargetWorld = { "TargetWorld", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ViewportWorldWidget_eventLoadGameWorld_Parms, TargetWorld), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UViewportWorldWidget_LoadGameWorld_Statics::NewProp_WorldOptions_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UViewportWorldWidget_LoadGameWorld_Statics::NewProp_WorldOptions = { "WorldOptions", nullptr, (EPropertyFlags)0x0010040000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ViewportWorldWidget_eventLoadGameWorld_Parms, WorldOptions), Z_Construct_UScriptStruct_FViewportWorldOptions, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UViewportWorldWidget_LoadGameWorld_Statics::NewProp_WorldOptions_MetaData), Z_Construct_UFunction_UViewportWorldWidget_LoadGameWorld_Statics::NewProp_WorldOptions_MetaData) }; // 314000971
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UViewportWorldWidget_LoadGameWorld_Statics::NewProp_bInitializeActors_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UViewportWorldWidget_LoadGameWorld_Statics::NewProp_bInitializeActors_SetBit(void* Obj)
	{
		((ViewportWorldWidget_eventLoadGameWorld_Parms*)Obj)->bInitializeActors = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UViewportWorldWidget_LoadGameWorld_Statics::NewProp_bInitializeActors = { "bInitializeActors", nullptr, (EPropertyFlags)0x0010040000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ViewportWorldWidget_eventLoadGameWorld_Parms), &Z_Construct_UFunction_UViewportWorldWidget_LoadGameWorld_Statics::NewProp_bInitializeActors_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UViewportWorldWidget_LoadGameWorld_Statics::NewProp_bInitializeActors_MetaData), Z_Construct_UFunction_UViewportWorldWidget_LoadGameWorld_Statics::NewProp_bInitializeActors_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UViewportWorldWidget_LoadGameWorld_Statics::NewProp_bBeginPlay_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UViewportWorldWidget_LoadGameWorld_Statics::NewProp_bBeginPlay_SetBit(void* Obj)
	{
		((ViewportWorldWidget_eventLoadGameWorld_Parms*)Obj)->bBeginPlay = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UViewportWorldWidget_LoadGameWorld_Statics::NewProp_bBeginPlay = { "bBeginPlay", nullptr, (EPropertyFlags)0x0010040000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ViewportWorldWidget_eventLoadGameWorld_Parms), &Z_Construct_UFunction_UViewportWorldWidget_LoadGameWorld_Statics::NewProp_bBeginPlay_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UViewportWorldWidget_LoadGameWorld_Statics::NewProp_bBeginPlay_MetaData), Z_Construct_UFunction_UViewportWorldWidget_LoadGameWorld_Statics::NewProp_bBeginPlay_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UViewportWorldWidget_LoadGameWorld_Statics::NewProp_GameOptions_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UViewportWorldWidget_LoadGameWorld_Statics::NewProp_GameOptions = { "GameOptions", nullptr, (EPropertyFlags)0x0010040000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ViewportWorldWidget_eventLoadGameWorld_Parms, GameOptions), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UViewportWorldWidget_LoadGameWorld_Statics::NewProp_GameOptions_MetaData), Z_Construct_UFunction_UViewportWorldWidget_LoadGameWorld_Statics::NewProp_GameOptions_MetaData) };
	void Z_Construct_UFunction_UViewportWorldWidget_LoadGameWorld_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ViewportWorldWidget_eventLoadGameWorld_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UViewportWorldWidget_LoadGameWorld_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ViewportWorldWidget_eventLoadGameWorld_Parms), &Z_Construct_UFunction_UViewportWorldWidget_LoadGameWorld_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UViewportWorldWidget_LoadGameWorld_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewportWorldWidget_LoadGameWorld_Statics::NewProp_TargetWorld,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewportWorldWidget_LoadGameWorld_Statics::NewProp_WorldOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewportWorldWidget_LoadGameWorld_Statics::NewProp_bInitializeActors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewportWorldWidget_LoadGameWorld_Statics::NewProp_bBeginPlay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewportWorldWidget_LoadGameWorld_Statics::NewProp_GameOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewportWorldWidget_LoadGameWorld_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UViewportWorldWidget_LoadGameWorld_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "1" },
		{ "Category", "ViewportWorldWidget" },
		{ "CPP_Default_bBeginPlay", "true" },
		{ "CPP_Default_bInitializeActors", "true" },
		{ "CPP_Default_GameOptions", "" },
		{ "CPP_Default_WorldOptions", "()" },
		{ "ModuleRelativePath", "Private/ViewportWorldWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UViewportWorldWidget_LoadGameWorld_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UViewportWorldWidget, nullptr, "LoadGameWorld", nullptr, nullptr, Z_Construct_UFunction_UViewportWorldWidget_LoadGameWorld_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UViewportWorldWidget_LoadGameWorld_Statics::PropPointers), sizeof(Z_Construct_UFunction_UViewportWorldWidget_LoadGameWorld_Statics::ViewportWorldWidget_eventLoadGameWorld_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UViewportWorldWidget_LoadGameWorld_Statics::Function_MetaDataParams), Z_Construct_UFunction_UViewportWorldWidget_LoadGameWorld_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UViewportWorldWidget_LoadGameWorld_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UViewportWorldWidget_LoadGameWorld_Statics::ViewportWorldWidget_eventLoadGameWorld_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UViewportWorldWidget_LoadGameWorld()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UViewportWorldWidget_LoadGameWorld_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UViewportWorldWidget_SetShowInfoText_Statics
	{
		struct ViewportWorldWidget_eventSetShowInfoText_Parms
		{
			bool bShow;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShow_MetaData[];
#endif
		static void NewProp_bShow_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShow;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UViewportWorldWidget_SetShowInfoText_Statics::NewProp_bShow_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UViewportWorldWidget_SetShowInfoText_Statics::NewProp_bShow_SetBit(void* Obj)
	{
		((ViewportWorldWidget_eventSetShowInfoText_Parms*)Obj)->bShow = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UViewportWorldWidget_SetShowInfoText_Statics::NewProp_bShow = { "bShow", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ViewportWorldWidget_eventSetShowInfoText_Parms), &Z_Construct_UFunction_UViewportWorldWidget_SetShowInfoText_Statics::NewProp_bShow_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UViewportWorldWidget_SetShowInfoText_Statics::NewProp_bShow_MetaData), Z_Construct_UFunction_UViewportWorldWidget_SetShowInfoText_Statics::NewProp_bShow_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UViewportWorldWidget_SetShowInfoText_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewportWorldWidget_SetShowInfoText_Statics::NewProp_bShow,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UViewportWorldWidget_SetShowInfoText_Statics::Function_MetaDataParams[] = {
		{ "Category", "ViewportWorldWidget" },
		{ "ModuleRelativePath", "Private/ViewportWorldWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UViewportWorldWidget_SetShowInfoText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UViewportWorldWidget, nullptr, "SetShowInfoText", nullptr, nullptr, Z_Construct_UFunction_UViewportWorldWidget_SetShowInfoText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UViewportWorldWidget_SetShowInfoText_Statics::PropPointers), sizeof(Z_Construct_UFunction_UViewportWorldWidget_SetShowInfoText_Statics::ViewportWorldWidget_eventSetShowInfoText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UViewportWorldWidget_SetShowInfoText_Statics::Function_MetaDataParams), Z_Construct_UFunction_UViewportWorldWidget_SetShowInfoText_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UViewportWorldWidget_SetShowInfoText_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UViewportWorldWidget_SetShowInfoText_Statics::ViewportWorldWidget_eventSetShowInfoText_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UViewportWorldWidget_SetShowInfoText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UViewportWorldWidget_SetShowInfoText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UViewportWorldWidget);
	UClass* Z_Construct_UClass_UViewportWorldWidget_NoRegister()
	{
		return UViewportWorldWidget::StaticClass();
	}
	struct Z_Construct_UClass_UViewportWorldWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowDebugSlateText_MetaData[];
#endif
		static void NewProp_bShowDebugSlateText_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowDebugSlateText;
		static const UECodeGen_Private::FBytePropertyParams NewProp_RenderingMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RenderingMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_RenderingMode;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ViewMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ViewMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ViewMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FastRenderPostProcess_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FastRenderPostProcess;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UViewportWorldWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UContentWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_ViewportWorlds,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UViewportWorldWidget_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UViewportWorldWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UViewportWorldWidget_LoadGameWorld, "LoadGameWorld" }, // 274674072
		{ &Z_Construct_UFunction_UViewportWorldWidget_SetShowInfoText, "SetShowInfoText" }, // 1108678107
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UViewportWorldWidget_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UViewportWorldWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ViewportWorldWidget.h" },
		{ "ModuleRelativePath", "Private/ViewportWorldWidget.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UViewportWorldWidget_Statics::NewProp_bShowDebugSlateText_MetaData[] = {
		{ "Category", "ViewportWorldWidget" },
		{ "ModuleRelativePath", "Private/ViewportWorldWidget.h" },
	};
#endif
	void Z_Construct_UClass_UViewportWorldWidget_Statics::NewProp_bShowDebugSlateText_SetBit(void* Obj)
	{
		((UViewportWorldWidget*)Obj)->bShowDebugSlateText = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UViewportWorldWidget_Statics::NewProp_bShowDebugSlateText = { "bShowDebugSlateText", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UViewportWorldWidget), &Z_Construct_UClass_UViewportWorldWidget_Statics::NewProp_bShowDebugSlateText_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UViewportWorldWidget_Statics::NewProp_bShowDebugSlateText_MetaData), Z_Construct_UClass_UViewportWorldWidget_Statics::NewProp_bShowDebugSlateText_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UViewportWorldWidget_Statics::NewProp_RenderingMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UViewportWorldWidget_Statics::NewProp_RenderingMode_MetaData[] = {
		{ "Category", "ViewportWorldWidget" },
		{ "ModuleRelativePath", "Private/ViewportWorldWidget.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UViewportWorldWidget_Statics::NewProp_RenderingMode = { "RenderingMode", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UViewportWorldWidget, RenderingMode), Z_Construct_UEnum_ViewportWorlds_EViewportWorldRenderingMode, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UViewportWorldWidget_Statics::NewProp_RenderingMode_MetaData), Z_Construct_UClass_UViewportWorldWidget_Statics::NewProp_RenderingMode_MetaData) }; // 3729622833
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UViewportWorldWidget_Statics::NewProp_ViewMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UViewportWorldWidget_Statics::NewProp_ViewMode_MetaData[] = {
		{ "Category", "ViewportWorldWidget" },
		{ "ModuleRelativePath", "Private/ViewportWorldWidget.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UViewportWorldWidget_Statics::NewProp_ViewMode = { "ViewMode", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UViewportWorldWidget, ViewMode), Z_Construct_UEnum_ViewportWorlds_EViewportWorldViewMode, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UViewportWorldWidget_Statics::NewProp_ViewMode_MetaData), Z_Construct_UClass_UViewportWorldWidget_Statics::NewProp_ViewMode_MetaData) }; // 4204396864
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UViewportWorldWidget_Statics::NewProp_FastRenderPostProcess_MetaData[] = {
		{ "Category", "ViewportWorldWidget" },
		{ "EditCondition", "RenderingMode == EViewportWorldRenderingMode::Fast" },
		{ "ModuleRelativePath", "Private/ViewportWorldWidget.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UViewportWorldWidget_Statics::NewProp_FastRenderPostProcess = { "FastRenderPostProcess", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UViewportWorldWidget, FastRenderPostProcess), Z_Construct_UScriptStruct_FPostProcessSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UViewportWorldWidget_Statics::NewProp_FastRenderPostProcess_MetaData), Z_Construct_UClass_UViewportWorldWidget_Statics::NewProp_FastRenderPostProcess_MetaData) }; // 2922880151
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UViewportWorldWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UViewportWorldWidget_Statics::NewProp_bShowDebugSlateText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UViewportWorldWidget_Statics::NewProp_RenderingMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UViewportWorldWidget_Statics::NewProp_RenderingMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UViewportWorldWidget_Statics::NewProp_ViewMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UViewportWorldWidget_Statics::NewProp_ViewMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UViewportWorldWidget_Statics::NewProp_FastRenderPostProcess,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UViewportWorldWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UViewportWorldWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UViewportWorldWidget_Statics::ClassParams = {
		&UViewportWorldWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UViewportWorldWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UViewportWorldWidget_Statics::PropPointers),
		0,
		0x00A000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UViewportWorldWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UViewportWorldWidget_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UViewportWorldWidget_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UViewportWorldWidget()
	{
		if (!Z_Registration_Info_UClass_UViewportWorldWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UViewportWorldWidget.OuterSingleton, Z_Construct_UClass_UViewportWorldWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UViewportWorldWidget.OuterSingleton;
	}
	template<> VIEWPORTWORLDS_API UClass* StaticClass<UViewportWorldWidget>()
	{
		return UViewportWorldWidget::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UViewportWorldWidget);
	UViewportWorldWidget::~UViewportWorldWidget() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_ViewportWorlds_Private_ViewportWorldWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_ViewportWorlds_Private_ViewportWorldWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UViewportWorldWidget, UViewportWorldWidget::StaticClass, TEXT("UViewportWorldWidget"), &Z_Registration_Info_UClass_UViewportWorldWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UViewportWorldWidget), 3509939346U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_ViewportWorlds_Private_ViewportWorldWidget_h_1295256429(TEXT("/Script/ViewportWorlds"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_ViewportWorlds_Private_ViewportWorldWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_ViewportWorlds_Private_ViewportWorldWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
