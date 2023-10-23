// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ViewportWorlds/Public/Global/ViewportWorldStatics.h"
#include "ViewportWorlds/Public/ViewportWorldTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeViewportWorldStatics() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AGameStateBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ESpawnActorCollisionHandlingMethod();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ESpawnActorScaleMethod();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ViewportWorlds();
	VIEWPORTWORLDS_API UClass* Z_Construct_UClass_UViewportWorldStatics();
	VIEWPORTWORLDS_API UClass* Z_Construct_UClass_UViewportWorldStatics_NoRegister();
	VIEWPORTWORLDS_API UEnum* Z_Construct_UEnum_ViewportWorlds_EViewportWorldViewMode();
	VIEWPORTWORLDS_API UFunction* Z_Construct_UDelegateFunction_ViewportWorlds_OnWorldUnloaded__DelegateSignature();
	VIEWPORTWORLDS_API UScriptStruct* Z_Construct_UScriptStruct_FViewportWorldHandle();
// End Cross Module References
	DEFINE_FUNCTION(UViewportWorldStatics::execGetGameStateFromHandle)
	{
		P_GET_STRUCT_REF(FViewportWorldHandle,Z_Param_Out_WorldHandle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AGameStateBase**)Z_Param__Result=UViewportWorldStatics::GetGameStateFromHandle(Z_Param_Out_WorldHandle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UViewportWorldStatics::execGetGameModeFromHandle)
	{
		P_GET_STRUCT_REF(FViewportWorldHandle,Z_Param_Out_WorldHandle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AGameModeBase**)Z_Param__Result=UViewportWorldStatics::GetGameModeFromHandle(Z_Param_Out_WorldHandle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UViewportWorldStatics::execBelongsToSecondaryWorld)
	{
		P_GET_OBJECT(UObject,Z_Param_Target);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UViewportWorldStatics::BelongsToSecondaryWorld(Z_Param_Target);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UViewportWorldStatics::execIsViewportWorldHandleValid)
	{
		P_GET_STRUCT_REF(FViewportWorldHandle,Z_Param_Out_TestHandle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UViewportWorldStatics::IsViewportWorldHandleValid(Z_Param_Out_TestHandle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UViewportWorldStatics::execExecuteCommandForHandle)
	{
		P_GET_STRUCT_REF(FViewportWorldHandle,Z_Param_Out_WorldHandle);
		P_GET_PROPERTY(FStrProperty,Z_Param_Command);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UViewportWorldStatics::ExecuteCommandForHandle(Z_Param_Out_WorldHandle,Z_Param_Command);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UViewportWorldStatics::execSetWorldTickForHandle)
	{
		P_GET_STRUCT_REF(FViewportWorldHandle,Z_Param_Out_WorldHandle);
		P_GET_UBOOL(Z_Param_bEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		UViewportWorldStatics::SetWorldTickForHandle(Z_Param_Out_WorldHandle,Z_Param_bEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UViewportWorldStatics::execUpdateViewMode)
	{
		P_GET_STRUCT_REF(FViewportWorldHandle,Z_Param_Out_WorldHandle);
		P_GET_ENUM(EViewportWorldViewMode,Z_Param_NewViewMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UViewportWorldStatics::UpdateViewMode(Z_Param_Out_WorldHandle,EViewportWorldViewMode(Z_Param_NewViewMode));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UViewportWorldStatics::execUnloadWorldHandle)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT_REF(FViewportWorldHandle,Z_Param_Out_WorldHandle);
		P_FINISH;
		P_NATIVE_BEGIN;
		UViewportWorldStatics::UnloadWorldHandle(Z_Param_WorldContextObject,Z_Param_Out_WorldHandle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UViewportWorldStatics::execBeginPlayForWorldHandle)
	{
		P_GET_STRUCT_REF(FViewportWorldHandle,Z_Param_Out_WorldHandle);
		P_FINISH;
		P_NATIVE_BEGIN;
		UViewportWorldStatics::BeginPlayForWorldHandle(Z_Param_Out_WorldHandle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UViewportWorldStatics::execInitializeActorsForWorldHandle)
	{
		P_GET_STRUCT_REF(FViewportWorldHandle,Z_Param_Out_WorldHandle);
		P_FINISH;
		P_NATIVE_BEGIN;
		UViewportWorldStatics::InitializeActorsForWorldHandle(Z_Param_Out_WorldHandle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UViewportWorldStatics::execClearAllWidgetsFromHandle)
	{
		P_GET_STRUCT_REF(FViewportWorldHandle,Z_Param_Out_WorldHandle);
		P_FINISH;
		P_NATIVE_BEGIN;
		UViewportWorldStatics::ClearAllWidgetsFromHandle(Z_Param_Out_WorldHandle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UViewportWorldStatics::execRemoveWidgetFromHandle)
	{
		P_GET_STRUCT_REF(FViewportWorldHandle,Z_Param_Out_WorldHandle);
		P_GET_OBJECT(UUserWidget,Z_Param_Widget);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UViewportWorldStatics::RemoveWidgetFromHandle(Z_Param_Out_WorldHandle,Z_Param_Widget);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UViewportWorldStatics::execAddWidgetToHandle)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT_REF(FViewportWorldHandle,Z_Param_Out_WorldHandle);
		P_GET_OBJECT(UUserWidget,Z_Param_Widget);
		P_GET_PROPERTY(FIntProperty,Z_Param_ZOrder);
		P_FINISH;
		P_NATIVE_BEGIN;
		UViewportWorldStatics::AddWidgetToHandle(Z_Param_WorldContextObject,Z_Param_Out_WorldHandle,Z_Param_Widget,Z_Param_ZOrder);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UViewportWorldStatics::execOnWorldUnloaded)
	{
		P_GET_STRUCT_REF(FViewportWorldHandle,Z_Param_Out_WorldHandle);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnWorldUnloaded);
		P_FINISH;
		P_NATIVE_BEGIN;
		UViewportWorldStatics::OnWorldUnloaded(Z_Param_Out_WorldHandle,FOnWorldUnloaded(Z_Param_Out_OnWorldUnloaded));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UViewportWorldStatics::execSpawnActorForWorldHandle)
	{
		P_GET_STRUCT_REF(FViewportWorldHandle,Z_Param_Out_WorldHandle);
		P_GET_OBJECT(UClass,Z_Param_ActorClass);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_SpawnTransform);
		P_GET_ENUM(ESpawnActorCollisionHandlingMethod,Z_Param_CollisionHandlingMethod);
		P_GET_ENUM(ESpawnActorScaleMethod,Z_Param_TransformScaleMethod);
		P_GET_OBJECT(AActor,Z_Param_Owner);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=UViewportWorldStatics::SpawnActorForWorldHandle(Z_Param_Out_WorldHandle,Z_Param_ActorClass,Z_Param_Out_SpawnTransform,ESpawnActorCollisionHandlingMethod(Z_Param_CollisionHandlingMethod),ESpawnActorScaleMethod(Z_Param_TransformScaleMethod),Z_Param_Owner);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UViewportWorldStatics::execFindViewportWorldHandle)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_SOFTOBJECT(TSoftObjectPtr<UWorld>,Z_Param_TargetWorld);
		P_GET_STRUCT_REF(FViewportWorldHandle,Z_Param_Out_OutHandle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UViewportWorldStatics::FindViewportWorldHandle(Z_Param_WorldContextObject,Z_Param_TargetWorld,Z_Param_Out_OutHandle);
		P_NATIVE_END;
	}
	void UViewportWorldStatics::StaticRegisterNativesUViewportWorldStatics()
	{
		UClass* Class = UViewportWorldStatics::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddWidgetToHandle", &UViewportWorldStatics::execAddWidgetToHandle },
			{ "BeginPlayForWorldHandle", &UViewportWorldStatics::execBeginPlayForWorldHandle },
			{ "BelongsToSecondaryWorld", &UViewportWorldStatics::execBelongsToSecondaryWorld },
			{ "ClearAllWidgetsFromHandle", &UViewportWorldStatics::execClearAllWidgetsFromHandle },
			{ "ExecuteCommandForHandle", &UViewportWorldStatics::execExecuteCommandForHandle },
			{ "FindViewportWorldHandle", &UViewportWorldStatics::execFindViewportWorldHandle },
			{ "GetGameModeFromHandle", &UViewportWorldStatics::execGetGameModeFromHandle },
			{ "GetGameStateFromHandle", &UViewportWorldStatics::execGetGameStateFromHandle },
			{ "InitializeActorsForWorldHandle", &UViewportWorldStatics::execInitializeActorsForWorldHandle },
			{ "IsViewportWorldHandleValid", &UViewportWorldStatics::execIsViewportWorldHandleValid },
			{ "OnWorldUnloaded", &UViewportWorldStatics::execOnWorldUnloaded },
			{ "RemoveWidgetFromHandle", &UViewportWorldStatics::execRemoveWidgetFromHandle },
			{ "SetWorldTickForHandle", &UViewportWorldStatics::execSetWorldTickForHandle },
			{ "SpawnActorForWorldHandle", &UViewportWorldStatics::execSpawnActorForWorldHandle },
			{ "UnloadWorldHandle", &UViewportWorldStatics::execUnloadWorldHandle },
			{ "UpdateViewMode", &UViewportWorldStatics::execUpdateViewMode },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UViewportWorldStatics_AddWidgetToHandle_Statics
	{
		struct ViewportWorldStatics_eventAddWidgetToHandle_Parms
		{
			const UObject* WorldContextObject;
			FViewportWorldHandle WorldHandle;
			UUserWidget* Widget;
			int32 ZOrder;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WorldHandle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Widget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Widget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ZOrder_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ZOrder;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UViewportWorldStatics_AddWidgetToHandle_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UViewportWorldStatics_AddWidgetToHandle_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ViewportWorldStatics_eventAddWidgetToHandle_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UViewportWorldStatics_AddWidgetToHandle_Statics::NewProp_WorldContextObject_MetaData), Z_Construct_UFunction_UViewportWorldStatics_AddWidgetToHandle_Statics::NewProp_WorldContextObject_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UViewportWorldStatics_AddWidgetToHandle_Statics::NewProp_WorldHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UViewportWorldStatics_AddWidgetToHandle_Statics::NewProp_WorldHandle = { "WorldHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ViewportWorldStatics_eventAddWidgetToHandle_Parms, WorldHandle), Z_Construct_UScriptStruct_FViewportWorldHandle, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UViewportWorldStatics_AddWidgetToHandle_Statics::NewProp_WorldHandle_MetaData), Z_Construct_UFunction_UViewportWorldStatics_AddWidgetToHandle_Statics::NewProp_WorldHandle_MetaData) }; // 2124359825
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UViewportWorldStatics_AddWidgetToHandle_Statics::NewProp_Widget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UViewportWorldStatics_AddWidgetToHandle_Statics::NewProp_Widget = { "Widget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ViewportWorldStatics_eventAddWidgetToHandle_Parms, Widget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UViewportWorldStatics_AddWidgetToHandle_Statics::NewProp_Widget_MetaData), Z_Construct_UFunction_UViewportWorldStatics_AddWidgetToHandle_Statics::NewProp_Widget_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UViewportWorldStatics_AddWidgetToHandle_Statics::NewProp_ZOrder_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UViewportWorldStatics_AddWidgetToHandle_Statics::NewProp_ZOrder = { "ZOrder", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ViewportWorldStatics_eventAddWidgetToHandle_Parms, ZOrder), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UViewportWorldStatics_AddWidgetToHandle_Statics::NewProp_ZOrder_MetaData), Z_Construct_UFunction_UViewportWorldStatics_AddWidgetToHandle_Statics::NewProp_ZOrder_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UViewportWorldStatics_AddWidgetToHandle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewportWorldStatics_AddWidgetToHandle_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewportWorldStatics_AddWidgetToHandle_Statics::NewProp_WorldHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewportWorldStatics_AddWidgetToHandle_Statics::NewProp_Widget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewportWorldStatics_AddWidgetToHandle_Statics::NewProp_ZOrder,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UViewportWorldStatics_AddWidgetToHandle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Viewport World Statics|Widget" },
		{ "Comment", "/**\n\x09 * Adds the given widget to the viewport. If the given world handle is not valid this works the same as Widget->AddToViewport\n\x09 * @param WorldContextObject World object.\n\x09 * @param WorldHandle World to add widget to.\n\x09 * @param Widget Target widget to add. Must not be null.\n\x09 * @param ZOrder Larger ZOrder will draw above others with smaller ZOrder. Same ZOrder between different widget will simply draw in the order they were added.\n\x09 */" },
		{ "CPP_Default_ZOrder", "0" },
		{ "ModuleRelativePath", "Public/Global/ViewportWorldStatics.h" },
		{ "ToolTip", "Adds the given widget to the viewport. If the given world handle is not valid this works the same as Widget->AddToViewport\n@param WorldContextObject World object.\n@param WorldHandle World to add widget to.\n@param Widget Target widget to add. Must not be null.\n@param ZOrder Larger ZOrder will draw above others with smaller ZOrder. Same ZOrder between different widget will simply draw in the order they were added." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UViewportWorldStatics_AddWidgetToHandle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UViewportWorldStatics, nullptr, "AddWidgetToHandle", nullptr, nullptr, Z_Construct_UFunction_UViewportWorldStatics_AddWidgetToHandle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UViewportWorldStatics_AddWidgetToHandle_Statics::PropPointers), sizeof(Z_Construct_UFunction_UViewportWorldStatics_AddWidgetToHandle_Statics::ViewportWorldStatics_eventAddWidgetToHandle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UViewportWorldStatics_AddWidgetToHandle_Statics::Function_MetaDataParams), Z_Construct_UFunction_UViewportWorldStatics_AddWidgetToHandle_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UViewportWorldStatics_AddWidgetToHandle_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UViewportWorldStatics_AddWidgetToHandle_Statics::ViewportWorldStatics_eventAddWidgetToHandle_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UViewportWorldStatics_AddWidgetToHandle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UViewportWorldStatics_AddWidgetToHandle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UViewportWorldStatics_BeginPlayForWorldHandle_Statics
	{
		struct ViewportWorldStatics_eventBeginPlayForWorldHandle_Parms
		{
			FViewportWorldHandle WorldHandle;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_WorldHandle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UViewportWorldStatics_BeginPlayForWorldHandle_Statics::NewProp_WorldHandle = { "WorldHandle", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ViewportWorldStatics_eventBeginPlayForWorldHandle_Parms, WorldHandle), Z_Construct_UScriptStruct_FViewportWorldHandle, METADATA_PARAMS(0, nullptr) }; // 2124359825
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UViewportWorldStatics_BeginPlayForWorldHandle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewportWorldStatics_BeginPlayForWorldHandle_Statics::NewProp_WorldHandle,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UViewportWorldStatics_BeginPlayForWorldHandle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Viewport World Statics|Init" },
		{ "Comment", "/**\n\x09 * Calls begin play for given world handle if not done while loading world. If begin play was already called, this function does nothing.\n\x09 * @see UViewportWorldWidget::LoadGameWorld\n\x09 * @param WorldHandle World handle to begin play\n\x09 */" },
		{ "ModuleRelativePath", "Public/Global/ViewportWorldStatics.h" },
		{ "ToolTip", "Calls begin play for given world handle if not done while loading world. If begin play was already called, this function does nothing.\n@see UViewportWorldWidget::LoadGameWorld\n@param WorldHandle World handle to begin play" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UViewportWorldStatics_BeginPlayForWorldHandle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UViewportWorldStatics, nullptr, "BeginPlayForWorldHandle", nullptr, nullptr, Z_Construct_UFunction_UViewportWorldStatics_BeginPlayForWorldHandle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UViewportWorldStatics_BeginPlayForWorldHandle_Statics::PropPointers), sizeof(Z_Construct_UFunction_UViewportWorldStatics_BeginPlayForWorldHandle_Statics::ViewportWorldStatics_eventBeginPlayForWorldHandle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UViewportWorldStatics_BeginPlayForWorldHandle_Statics::Function_MetaDataParams), Z_Construct_UFunction_UViewportWorldStatics_BeginPlayForWorldHandle_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UViewportWorldStatics_BeginPlayForWorldHandle_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UViewportWorldStatics_BeginPlayForWorldHandle_Statics::ViewportWorldStatics_eventBeginPlayForWorldHandle_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UViewportWorldStatics_BeginPlayForWorldHandle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UViewportWorldStatics_BeginPlayForWorldHandle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UViewportWorldStatics_BelongsToSecondaryWorld_Statics
	{
		struct ViewportWorldStatics_eventBelongsToSecondaryWorld_Parms
		{
			const UObject* Target;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UViewportWorldStatics_BelongsToSecondaryWorld_Statics::NewProp_Target_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UViewportWorldStatics_BelongsToSecondaryWorld_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ViewportWorldStatics_eventBelongsToSecondaryWorld_Parms, Target), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UViewportWorldStatics_BelongsToSecondaryWorld_Statics::NewProp_Target_MetaData), Z_Construct_UFunction_UViewportWorldStatics_BelongsToSecondaryWorld_Statics::NewProp_Target_MetaData) };
	void Z_Construct_UFunction_UViewportWorldStatics_BelongsToSecondaryWorld_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ViewportWorldStatics_eventBelongsToSecondaryWorld_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UViewportWorldStatics_BelongsToSecondaryWorld_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ViewportWorldStatics_eventBelongsToSecondaryWorld_Parms), &Z_Construct_UFunction_UViewportWorldStatics_BelongsToSecondaryWorld_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UViewportWorldStatics_BelongsToSecondaryWorld_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewportWorldStatics_BelongsToSecondaryWorld_Statics::NewProp_Target,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewportWorldStatics_BelongsToSecondaryWorld_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UViewportWorldStatics_BelongsToSecondaryWorld_Statics::Function_MetaDataParams[] = {
		{ "Category", "Viewport World Statics|Game" },
		{ "Comment", "/**\n\x09 * Returns true if the given object or actor exists in the viewport world instead of the main game world.\n\x09 * @param Target Target Object/Actor to check\n\x09 * @return True if the object/actor exists in secondary world.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Global/ViewportWorldStatics.h" },
		{ "ToolTip", "Returns true if the given object or actor exists in the viewport world instead of the main game world.\n@param Target Target Object/Actor to check\n@return True if the object/actor exists in secondary world." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UViewportWorldStatics_BelongsToSecondaryWorld_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UViewportWorldStatics, nullptr, "BelongsToSecondaryWorld", nullptr, nullptr, Z_Construct_UFunction_UViewportWorldStatics_BelongsToSecondaryWorld_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UViewportWorldStatics_BelongsToSecondaryWorld_Statics::PropPointers), sizeof(Z_Construct_UFunction_UViewportWorldStatics_BelongsToSecondaryWorld_Statics::ViewportWorldStatics_eventBelongsToSecondaryWorld_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UViewportWorldStatics_BelongsToSecondaryWorld_Statics::Function_MetaDataParams), Z_Construct_UFunction_UViewportWorldStatics_BelongsToSecondaryWorld_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UViewportWorldStatics_BelongsToSecondaryWorld_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UViewportWorldStatics_BelongsToSecondaryWorld_Statics::ViewportWorldStatics_eventBelongsToSecondaryWorld_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UViewportWorldStatics_BelongsToSecondaryWorld()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UViewportWorldStatics_BelongsToSecondaryWorld_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UViewportWorldStatics_ClearAllWidgetsFromHandle_Statics
	{
		struct ViewportWorldStatics_eventClearAllWidgetsFromHandle_Parms
		{
			FViewportWorldHandle WorldHandle;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WorldHandle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UViewportWorldStatics_ClearAllWidgetsFromHandle_Statics::NewProp_WorldHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UViewportWorldStatics_ClearAllWidgetsFromHandle_Statics::NewProp_WorldHandle = { "WorldHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ViewportWorldStatics_eventClearAllWidgetsFromHandle_Parms, WorldHandle), Z_Construct_UScriptStruct_FViewportWorldHandle, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UViewportWorldStatics_ClearAllWidgetsFromHandle_Statics::NewProp_WorldHandle_MetaData), Z_Construct_UFunction_UViewportWorldStatics_ClearAllWidgetsFromHandle_Statics::NewProp_WorldHandle_MetaData) }; // 2124359825
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UViewportWorldStatics_ClearAllWidgetsFromHandle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewportWorldStatics_ClearAllWidgetsFromHandle_Statics::NewProp_WorldHandle,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UViewportWorldStatics_ClearAllWidgetsFromHandle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Viewport World Statics|Widget" },
		{ "Comment", "/**\n\x09 * Clears all widget from viewport.\n\x09 * @param WorldHandle World to remove all widgets from.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Global/ViewportWorldStatics.h" },
		{ "ToolTip", "Clears all widget from viewport.\n@param WorldHandle World to remove all widgets from." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UViewportWorldStatics_ClearAllWidgetsFromHandle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UViewportWorldStatics, nullptr, "ClearAllWidgetsFromHandle", nullptr, nullptr, Z_Construct_UFunction_UViewportWorldStatics_ClearAllWidgetsFromHandle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UViewportWorldStatics_ClearAllWidgetsFromHandle_Statics::PropPointers), sizeof(Z_Construct_UFunction_UViewportWorldStatics_ClearAllWidgetsFromHandle_Statics::ViewportWorldStatics_eventClearAllWidgetsFromHandle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UViewportWorldStatics_ClearAllWidgetsFromHandle_Statics::Function_MetaDataParams), Z_Construct_UFunction_UViewportWorldStatics_ClearAllWidgetsFromHandle_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UViewportWorldStatics_ClearAllWidgetsFromHandle_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UViewportWorldStatics_ClearAllWidgetsFromHandle_Statics::ViewportWorldStatics_eventClearAllWidgetsFromHandle_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UViewportWorldStatics_ClearAllWidgetsFromHandle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UViewportWorldStatics_ClearAllWidgetsFromHandle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UViewportWorldStatics_ExecuteCommandForHandle_Statics
	{
		struct ViewportWorldStatics_eventExecuteCommandForHandle_Parms
		{
			FViewportWorldHandle WorldHandle;
			FString Command;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WorldHandle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Command_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Command;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UViewportWorldStatics_ExecuteCommandForHandle_Statics::NewProp_WorldHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UViewportWorldStatics_ExecuteCommandForHandle_Statics::NewProp_WorldHandle = { "WorldHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ViewportWorldStatics_eventExecuteCommandForHandle_Parms, WorldHandle), Z_Construct_UScriptStruct_FViewportWorldHandle, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UViewportWorldStatics_ExecuteCommandForHandle_Statics::NewProp_WorldHandle_MetaData), Z_Construct_UFunction_UViewportWorldStatics_ExecuteCommandForHandle_Statics::NewProp_WorldHandle_MetaData) }; // 2124359825
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UViewportWorldStatics_ExecuteCommandForHandle_Statics::NewProp_Command_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UViewportWorldStatics_ExecuteCommandForHandle_Statics::NewProp_Command = { "Command", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ViewportWorldStatics_eventExecuteCommandForHandle_Parms, Command), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UViewportWorldStatics_ExecuteCommandForHandle_Statics::NewProp_Command_MetaData), Z_Construct_UFunction_UViewportWorldStatics_ExecuteCommandForHandle_Statics::NewProp_Command_MetaData) };
	void Z_Construct_UFunction_UViewportWorldStatics_ExecuteCommandForHandle_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ViewportWorldStatics_eventExecuteCommandForHandle_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UViewportWorldStatics_ExecuteCommandForHandle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ViewportWorldStatics_eventExecuteCommandForHandle_Parms), &Z_Construct_UFunction_UViewportWorldStatics_ExecuteCommandForHandle_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UViewportWorldStatics_ExecuteCommandForHandle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewportWorldStatics_ExecuteCommandForHandle_Statics::NewProp_WorldHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewportWorldStatics_ExecuteCommandForHandle_Statics::NewProp_Command,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewportWorldStatics_ExecuteCommandForHandle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UViewportWorldStatics_ExecuteCommandForHandle_Statics::Function_MetaDataParams[] = {
		{ "Category", "ViewportWorldStatics" },
		{ "Comment", "/**\n\x09 * Runs command for the world in given handle. Not all commands are supported and returning true doesn't mean the command was success either.\n\x09 * @param WorldHandle Target world handle\n\x09 * @param Command Command to run. Not all commands are supported though.\n\x09 * @return True if the command was executed. This doesn't mean the command actually worked.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Global/ViewportWorldStatics.h" },
		{ "ToolTip", "Runs command for the world in given handle. Not all commands are supported and returning true doesn't mean the command was success either.\n@param WorldHandle Target world handle\n@param Command Command to run. Not all commands are supported though.\n@return True if the command was executed. This doesn't mean the command actually worked." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UViewportWorldStatics_ExecuteCommandForHandle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UViewportWorldStatics, nullptr, "ExecuteCommandForHandle", nullptr, nullptr, Z_Construct_UFunction_UViewportWorldStatics_ExecuteCommandForHandle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UViewportWorldStatics_ExecuteCommandForHandle_Statics::PropPointers), sizeof(Z_Construct_UFunction_UViewportWorldStatics_ExecuteCommandForHandle_Statics::ViewportWorldStatics_eventExecuteCommandForHandle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UViewportWorldStatics_ExecuteCommandForHandle_Statics::Function_MetaDataParams), Z_Construct_UFunction_UViewportWorldStatics_ExecuteCommandForHandle_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UViewportWorldStatics_ExecuteCommandForHandle_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UViewportWorldStatics_ExecuteCommandForHandle_Statics::ViewportWorldStatics_eventExecuteCommandForHandle_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UViewportWorldStatics_ExecuteCommandForHandle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UViewportWorldStatics_ExecuteCommandForHandle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UViewportWorldStatics_FindViewportWorldHandle_Statics
	{
		struct ViewportWorldStatics_eventFindViewportWorldHandle_Parms
		{
			const UObject* WorldContextObject;
			TSoftObjectPtr<UWorld> TargetWorld;
			FViewportWorldHandle OutHandle;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetWorld_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_TargetWorld;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutHandle;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UViewportWorldStatics_FindViewportWorldHandle_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UViewportWorldStatics_FindViewportWorldHandle_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ViewportWorldStatics_eventFindViewportWorldHandle_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UViewportWorldStatics_FindViewportWorldHandle_Statics::NewProp_WorldContextObject_MetaData), Z_Construct_UFunction_UViewportWorldStatics_FindViewportWorldHandle_Statics::NewProp_WorldContextObject_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UViewportWorldStatics_FindViewportWorldHandle_Statics::NewProp_TargetWorld_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_UViewportWorldStatics_FindViewportWorldHandle_Statics::NewProp_TargetWorld = { "TargetWorld", nullptr, (EPropertyFlags)0x0014000000000082, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ViewportWorldStatics_eventFindViewportWorldHandle_Parms, TargetWorld), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UViewportWorldStatics_FindViewportWorldHandle_Statics::NewProp_TargetWorld_MetaData), Z_Construct_UFunction_UViewportWorldStatics_FindViewportWorldHandle_Statics::NewProp_TargetWorld_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UViewportWorldStatics_FindViewportWorldHandle_Statics::NewProp_OutHandle = { "OutHandle", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ViewportWorldStatics_eventFindViewportWorldHandle_Parms, OutHandle), Z_Construct_UScriptStruct_FViewportWorldHandle, METADATA_PARAMS(0, nullptr) }; // 2124359825
	void Z_Construct_UFunction_UViewportWorldStatics_FindViewportWorldHandle_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ViewportWorldStatics_eventFindViewportWorldHandle_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UViewportWorldStatics_FindViewportWorldHandle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ViewportWorldStatics_eventFindViewportWorldHandle_Parms), &Z_Construct_UFunction_UViewportWorldStatics_FindViewportWorldHandle_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UViewportWorldStatics_FindViewportWorldHandle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewportWorldStatics_FindViewportWorldHandle_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewportWorldStatics_FindViewportWorldHandle_Statics::NewProp_TargetWorld,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewportWorldStatics_FindViewportWorldHandle_Statics::NewProp_OutHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewportWorldStatics_FindViewportWorldHandle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UViewportWorldStatics_FindViewportWorldHandle_Statics::Function_MetaDataParams[] = {
		{ "Category", "ViewportWorldStatics" },
		{ "Comment", "/**\n\x09 * Returns a reference to the world handle if the world was loaded. If not, then returns an empty world.\n\x09 * @see UViewportWorldStatics::IsViewportWorldHandleValid.\n\x09 * @param WorldContextObject World object\n\x09 * @param TargetWorld World to look for.\n\x09 * @param OutHandle Reference to the handle or invalid empty handle if world is not loaded.\n\x09 * @return True if OutHandle is valid. False otherwise.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Global/ViewportWorldStatics.h" },
		{ "ToolTip", "Returns a reference to the world handle if the world was loaded. If not, then returns an empty world.\n@see UViewportWorldStatics::IsViewportWorldHandleValid.\n@param WorldContextObject World object\n@param TargetWorld World to look for.\n@param OutHandle Reference to the handle or invalid empty handle if world is not loaded.\n@return True if OutHandle is valid. False otherwise." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UViewportWorldStatics_FindViewportWorldHandle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UViewportWorldStatics, nullptr, "FindViewportWorldHandle", nullptr, nullptr, Z_Construct_UFunction_UViewportWorldStatics_FindViewportWorldHandle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UViewportWorldStatics_FindViewportWorldHandle_Statics::PropPointers), sizeof(Z_Construct_UFunction_UViewportWorldStatics_FindViewportWorldHandle_Statics::ViewportWorldStatics_eventFindViewportWorldHandle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14482401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UViewportWorldStatics_FindViewportWorldHandle_Statics::Function_MetaDataParams), Z_Construct_UFunction_UViewportWorldStatics_FindViewportWorldHandle_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UViewportWorldStatics_FindViewportWorldHandle_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UViewportWorldStatics_FindViewportWorldHandle_Statics::ViewportWorldStatics_eventFindViewportWorldHandle_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UViewportWorldStatics_FindViewportWorldHandle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UViewportWorldStatics_FindViewportWorldHandle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UViewportWorldStatics_GetGameModeFromHandle_Statics
	{
		struct ViewportWorldStatics_eventGetGameModeFromHandle_Parms
		{
			FViewportWorldHandle WorldHandle;
			AGameModeBase* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WorldHandle;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UViewportWorldStatics_GetGameModeFromHandle_Statics::NewProp_WorldHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UViewportWorldStatics_GetGameModeFromHandle_Statics::NewProp_WorldHandle = { "WorldHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ViewportWorldStatics_eventGetGameModeFromHandle_Parms, WorldHandle), Z_Construct_UScriptStruct_FViewportWorldHandle, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UViewportWorldStatics_GetGameModeFromHandle_Statics::NewProp_WorldHandle_MetaData), Z_Construct_UFunction_UViewportWorldStatics_GetGameModeFromHandle_Statics::NewProp_WorldHandle_MetaData) }; // 2124359825
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UViewportWorldStatics_GetGameModeFromHandle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ViewportWorldStatics_eventGetGameModeFromHandle_Parms, ReturnValue), Z_Construct_UClass_AGameModeBase_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UViewportWorldStatics_GetGameModeFromHandle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewportWorldStatics_GetGameModeFromHandle_Statics::NewProp_WorldHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewportWorldStatics_GetGameModeFromHandle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UViewportWorldStatics_GetGameModeFromHandle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Viewport World Statics|Game" },
		{ "Comment", "/**\n\x09 * Returns game mode from handle.\n\x09 * @param WorldHandle Target handle.\n\x09 * @return Returns the game mode from given handle.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Global/ViewportWorldStatics.h" },
		{ "ToolTip", "Returns game mode from handle.\n@param WorldHandle Target handle.\n@return Returns the game mode from given handle." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UViewportWorldStatics_GetGameModeFromHandle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UViewportWorldStatics, nullptr, "GetGameModeFromHandle", nullptr, nullptr, Z_Construct_UFunction_UViewportWorldStatics_GetGameModeFromHandle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UViewportWorldStatics_GetGameModeFromHandle_Statics::PropPointers), sizeof(Z_Construct_UFunction_UViewportWorldStatics_GetGameModeFromHandle_Statics::ViewportWorldStatics_eventGetGameModeFromHandle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UViewportWorldStatics_GetGameModeFromHandle_Statics::Function_MetaDataParams), Z_Construct_UFunction_UViewportWorldStatics_GetGameModeFromHandle_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UViewportWorldStatics_GetGameModeFromHandle_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UViewportWorldStatics_GetGameModeFromHandle_Statics::ViewportWorldStatics_eventGetGameModeFromHandle_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UViewportWorldStatics_GetGameModeFromHandle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UViewportWorldStatics_GetGameModeFromHandle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UViewportWorldStatics_GetGameStateFromHandle_Statics
	{
		struct ViewportWorldStatics_eventGetGameStateFromHandle_Parms
		{
			FViewportWorldHandle WorldHandle;
			AGameStateBase* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WorldHandle;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UViewportWorldStatics_GetGameStateFromHandle_Statics::NewProp_WorldHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UViewportWorldStatics_GetGameStateFromHandle_Statics::NewProp_WorldHandle = { "WorldHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ViewportWorldStatics_eventGetGameStateFromHandle_Parms, WorldHandle), Z_Construct_UScriptStruct_FViewportWorldHandle, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UViewportWorldStatics_GetGameStateFromHandle_Statics::NewProp_WorldHandle_MetaData), Z_Construct_UFunction_UViewportWorldStatics_GetGameStateFromHandle_Statics::NewProp_WorldHandle_MetaData) }; // 2124359825
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UViewportWorldStatics_GetGameStateFromHandle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ViewportWorldStatics_eventGetGameStateFromHandle_Parms, ReturnValue), Z_Construct_UClass_AGameStateBase_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UViewportWorldStatics_GetGameStateFromHandle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewportWorldStatics_GetGameStateFromHandle_Statics::NewProp_WorldHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewportWorldStatics_GetGameStateFromHandle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UViewportWorldStatics_GetGameStateFromHandle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Viewport World Statics|Game" },
		{ "Comment", "/**\n\x09 * Returns game state from handle.\n\x09 * @param WorldHandle Target handle.\n\x09 * @return Returns game state from given handle.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Global/ViewportWorldStatics.h" },
		{ "ToolTip", "Returns game state from handle.\n@param WorldHandle Target handle.\n@return Returns game state from given handle." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UViewportWorldStatics_GetGameStateFromHandle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UViewportWorldStatics, nullptr, "GetGameStateFromHandle", nullptr, nullptr, Z_Construct_UFunction_UViewportWorldStatics_GetGameStateFromHandle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UViewportWorldStatics_GetGameStateFromHandle_Statics::PropPointers), sizeof(Z_Construct_UFunction_UViewportWorldStatics_GetGameStateFromHandle_Statics::ViewportWorldStatics_eventGetGameStateFromHandle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UViewportWorldStatics_GetGameStateFromHandle_Statics::Function_MetaDataParams), Z_Construct_UFunction_UViewportWorldStatics_GetGameStateFromHandle_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UViewportWorldStatics_GetGameStateFromHandle_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UViewportWorldStatics_GetGameStateFromHandle_Statics::ViewportWorldStatics_eventGetGameStateFromHandle_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UViewportWorldStatics_GetGameStateFromHandle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UViewportWorldStatics_GetGameStateFromHandle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UViewportWorldStatics_InitializeActorsForWorldHandle_Statics
	{
		struct ViewportWorldStatics_eventInitializeActorsForWorldHandle_Parms
		{
			FViewportWorldHandle WorldHandle;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_WorldHandle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UViewportWorldStatics_InitializeActorsForWorldHandle_Statics::NewProp_WorldHandle = { "WorldHandle", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ViewportWorldStatics_eventInitializeActorsForWorldHandle_Parms, WorldHandle), Z_Construct_UScriptStruct_FViewportWorldHandle, METADATA_PARAMS(0, nullptr) }; // 2124359825
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UViewportWorldStatics_InitializeActorsForWorldHandle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewportWorldStatics_InitializeActorsForWorldHandle_Statics::NewProp_WorldHandle,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UViewportWorldStatics_InitializeActorsForWorldHandle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Viewport World Statics|Init" },
		{ "Comment", "/**\n\x09 * Initializes actors for given world handle if not done while loading world. If they are initialized, this function does nothing.\n\x09 * @see UViewportWorldWidget::LoadGameWorld\n\x09 * @param WorldHandle World handle to initialize\n\x09 */" },
		{ "ModuleRelativePath", "Public/Global/ViewportWorldStatics.h" },
		{ "ToolTip", "Initializes actors for given world handle if not done while loading world. If they are initialized, this function does nothing.\n@see UViewportWorldWidget::LoadGameWorld\n@param WorldHandle World handle to initialize" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UViewportWorldStatics_InitializeActorsForWorldHandle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UViewportWorldStatics, nullptr, "InitializeActorsForWorldHandle", nullptr, nullptr, Z_Construct_UFunction_UViewportWorldStatics_InitializeActorsForWorldHandle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UViewportWorldStatics_InitializeActorsForWorldHandle_Statics::PropPointers), sizeof(Z_Construct_UFunction_UViewportWorldStatics_InitializeActorsForWorldHandle_Statics::ViewportWorldStatics_eventInitializeActorsForWorldHandle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UViewportWorldStatics_InitializeActorsForWorldHandle_Statics::Function_MetaDataParams), Z_Construct_UFunction_UViewportWorldStatics_InitializeActorsForWorldHandle_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UViewportWorldStatics_InitializeActorsForWorldHandle_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UViewportWorldStatics_InitializeActorsForWorldHandle_Statics::ViewportWorldStatics_eventInitializeActorsForWorldHandle_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UViewportWorldStatics_InitializeActorsForWorldHandle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UViewportWorldStatics_InitializeActorsForWorldHandle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UViewportWorldStatics_IsViewportWorldHandleValid_Statics
	{
		struct ViewportWorldStatics_eventIsViewportWorldHandleValid_Parms
		{
			FViewportWorldHandle TestHandle;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TestHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TestHandle;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UViewportWorldStatics_IsViewportWorldHandleValid_Statics::NewProp_TestHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UViewportWorldStatics_IsViewportWorldHandleValid_Statics::NewProp_TestHandle = { "TestHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ViewportWorldStatics_eventIsViewportWorldHandleValid_Parms, TestHandle), Z_Construct_UScriptStruct_FViewportWorldHandle, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UViewportWorldStatics_IsViewportWorldHandleValid_Statics::NewProp_TestHandle_MetaData), Z_Construct_UFunction_UViewportWorldStatics_IsViewportWorldHandleValid_Statics::NewProp_TestHandle_MetaData) }; // 2124359825
	void Z_Construct_UFunction_UViewportWorldStatics_IsViewportWorldHandleValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ViewportWorldStatics_eventIsViewportWorldHandleValid_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UViewportWorldStatics_IsViewportWorldHandleValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ViewportWorldStatics_eventIsViewportWorldHandleValid_Parms), &Z_Construct_UFunction_UViewportWorldStatics_IsViewportWorldHandleValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UViewportWorldStatics_IsViewportWorldHandleValid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewportWorldStatics_IsViewportWorldHandleValid_Statics::NewProp_TestHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewportWorldStatics_IsViewportWorldHandleValid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UViewportWorldStatics_IsViewportWorldHandleValid_Statics::Function_MetaDataParams[] = {
		{ "Category", "ViewportWorldStatics" },
		{ "Comment", "/**\n\x09 * Returns true if the given handle is valid. This typically means that there is an actual world for the handle.\n\x09 * @param TestHandle Handle to check\n\x09 * @return True if the given handle is valid.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Global/ViewportWorldStatics.h" },
		{ "ToolTip", "Returns true if the given handle is valid. This typically means that there is an actual world for the handle.\n@param TestHandle Handle to check\n@return True if the given handle is valid." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UViewportWorldStatics_IsViewportWorldHandleValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UViewportWorldStatics, nullptr, "IsViewportWorldHandleValid", nullptr, nullptr, Z_Construct_UFunction_UViewportWorldStatics_IsViewportWorldHandleValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UViewportWorldStatics_IsViewportWorldHandleValid_Statics::PropPointers), sizeof(Z_Construct_UFunction_UViewportWorldStatics_IsViewportWorldHandleValid_Statics::ViewportWorldStatics_eventIsViewportWorldHandleValid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UViewportWorldStatics_IsViewportWorldHandleValid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UViewportWorldStatics_IsViewportWorldHandleValid_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UViewportWorldStatics_IsViewportWorldHandleValid_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UViewportWorldStatics_IsViewportWorldHandleValid_Statics::ViewportWorldStatics_eventIsViewportWorldHandleValid_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UViewportWorldStatics_IsViewportWorldHandleValid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UViewportWorldStatics_IsViewportWorldHandleValid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UViewportWorldStatics_OnWorldUnloaded_Statics
	{
		struct ViewportWorldStatics_eventOnWorldUnloaded_Parms
		{
			FViewportWorldHandle WorldHandle;
			FScriptDelegate OnWorldUnloaded;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_WorldHandle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnWorldUnloaded_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnWorldUnloaded;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UViewportWorldStatics_OnWorldUnloaded_Statics::NewProp_WorldHandle = { "WorldHandle", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ViewportWorldStatics_eventOnWorldUnloaded_Parms, WorldHandle), Z_Construct_UScriptStruct_FViewportWorldHandle, METADATA_PARAMS(0, nullptr) }; // 2124359825
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UViewportWorldStatics_OnWorldUnloaded_Statics::NewProp_OnWorldUnloaded_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UViewportWorldStatics_OnWorldUnloaded_Statics::NewProp_OnWorldUnloaded = { "OnWorldUnloaded", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ViewportWorldStatics_eventOnWorldUnloaded_Parms, OnWorldUnloaded), Z_Construct_UDelegateFunction_ViewportWorlds_OnWorldUnloaded__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UViewportWorldStatics_OnWorldUnloaded_Statics::NewProp_OnWorldUnloaded_MetaData), Z_Construct_UFunction_UViewportWorldStatics_OnWorldUnloaded_Statics::NewProp_OnWorldUnloaded_MetaData) }; // 1958828511
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UViewportWorldStatics_OnWorldUnloaded_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewportWorldStatics_OnWorldUnloaded_Statics::NewProp_WorldHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewportWorldStatics_OnWorldUnloaded_Statics::NewProp_OnWorldUnloaded,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UViewportWorldStatics_OnWorldUnloaded_Statics::Function_MetaDataParams[] = {
		{ "Category", "ViewportWorldStatics" },
		{ "Comment", "/**\n\x09 * Triggers the given event when the world handle calls Unload World.\n\x09 * @see UViewportWorldStatics::UnloadWorldHandle\n\x09 * @param WorldHandle World handle to listen to.\n\x09 * @param OnWorldUnloaded Event that should execute when the world unloads from given handle.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Global/ViewportWorldStatics.h" },
		{ "ToolTip", "Triggers the given event when the world handle calls Unload World.\n@see UViewportWorldStatics::UnloadWorldHandle\n@param WorldHandle World handle to listen to.\n@param OnWorldUnloaded Event that should execute when the world unloads from given handle." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UViewportWorldStatics_OnWorldUnloaded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UViewportWorldStatics, nullptr, "OnWorldUnloaded", nullptr, nullptr, Z_Construct_UFunction_UViewportWorldStatics_OnWorldUnloaded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UViewportWorldStatics_OnWorldUnloaded_Statics::PropPointers), sizeof(Z_Construct_UFunction_UViewportWorldStatics_OnWorldUnloaded_Statics::ViewportWorldStatics_eventOnWorldUnloaded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UViewportWorldStatics_OnWorldUnloaded_Statics::Function_MetaDataParams), Z_Construct_UFunction_UViewportWorldStatics_OnWorldUnloaded_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UViewportWorldStatics_OnWorldUnloaded_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UViewportWorldStatics_OnWorldUnloaded_Statics::ViewportWorldStatics_eventOnWorldUnloaded_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UViewportWorldStatics_OnWorldUnloaded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UViewportWorldStatics_OnWorldUnloaded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UViewportWorldStatics_RemoveWidgetFromHandle_Statics
	{
		struct ViewportWorldStatics_eventRemoveWidgetFromHandle_Parms
		{
			FViewportWorldHandle WorldHandle;
			UUserWidget* Widget;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WorldHandle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Widget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Widget;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UViewportWorldStatics_RemoveWidgetFromHandle_Statics::NewProp_WorldHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UViewportWorldStatics_RemoveWidgetFromHandle_Statics::NewProp_WorldHandle = { "WorldHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ViewportWorldStatics_eventRemoveWidgetFromHandle_Parms, WorldHandle), Z_Construct_UScriptStruct_FViewportWorldHandle, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UViewportWorldStatics_RemoveWidgetFromHandle_Statics::NewProp_WorldHandle_MetaData), Z_Construct_UFunction_UViewportWorldStatics_RemoveWidgetFromHandle_Statics::NewProp_WorldHandle_MetaData) }; // 2124359825
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UViewportWorldStatics_RemoveWidgetFromHandle_Statics::NewProp_Widget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UViewportWorldStatics_RemoveWidgetFromHandle_Statics::NewProp_Widget = { "Widget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ViewportWorldStatics_eventRemoveWidgetFromHandle_Parms, Widget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UViewportWorldStatics_RemoveWidgetFromHandle_Statics::NewProp_Widget_MetaData), Z_Construct_UFunction_UViewportWorldStatics_RemoveWidgetFromHandle_Statics::NewProp_Widget_MetaData) };
	void Z_Construct_UFunction_UViewportWorldStatics_RemoveWidgetFromHandle_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ViewportWorldStatics_eventRemoveWidgetFromHandle_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UViewportWorldStatics_RemoveWidgetFromHandle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ViewportWorldStatics_eventRemoveWidgetFromHandle_Parms), &Z_Construct_UFunction_UViewportWorldStatics_RemoveWidgetFromHandle_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UViewportWorldStatics_RemoveWidgetFromHandle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewportWorldStatics_RemoveWidgetFromHandle_Statics::NewProp_WorldHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewportWorldStatics_RemoveWidgetFromHandle_Statics::NewProp_Widget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewportWorldStatics_RemoveWidgetFromHandle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UViewportWorldStatics_RemoveWidgetFromHandle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Viewport World Statics|Widget" },
		{ "Comment", "/**\n\x09 * Removes the given widget (if it was added before) from viewport.\n\x09 * @param WorldHandle World to remove widget from.\n\x09 * @param Widget Widget to remove.\n\x09 * @return True if the widget was removed successfully.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Global/ViewportWorldStatics.h" },
		{ "ToolTip", "Removes the given widget (if it was added before) from viewport.\n@param WorldHandle World to remove widget from.\n@param Widget Widget to remove.\n@return True if the widget was removed successfully." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UViewportWorldStatics_RemoveWidgetFromHandle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UViewportWorldStatics, nullptr, "RemoveWidgetFromHandle", nullptr, nullptr, Z_Construct_UFunction_UViewportWorldStatics_RemoveWidgetFromHandle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UViewportWorldStatics_RemoveWidgetFromHandle_Statics::PropPointers), sizeof(Z_Construct_UFunction_UViewportWorldStatics_RemoveWidgetFromHandle_Statics::ViewportWorldStatics_eventRemoveWidgetFromHandle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UViewportWorldStatics_RemoveWidgetFromHandle_Statics::Function_MetaDataParams), Z_Construct_UFunction_UViewportWorldStatics_RemoveWidgetFromHandle_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UViewportWorldStatics_RemoveWidgetFromHandle_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UViewportWorldStatics_RemoveWidgetFromHandle_Statics::ViewportWorldStatics_eventRemoveWidgetFromHandle_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UViewportWorldStatics_RemoveWidgetFromHandle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UViewportWorldStatics_RemoveWidgetFromHandle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UViewportWorldStatics_SetWorldTickForHandle_Statics
	{
		struct ViewportWorldStatics_eventSetWorldTickForHandle_Parms
		{
			FViewportWorldHandle WorldHandle;
			bool bEnabled;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WorldHandle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[];
#endif
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UViewportWorldStatics_SetWorldTickForHandle_Statics::NewProp_WorldHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UViewportWorldStatics_SetWorldTickForHandle_Statics::NewProp_WorldHandle = { "WorldHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ViewportWorldStatics_eventSetWorldTickForHandle_Parms, WorldHandle), Z_Construct_UScriptStruct_FViewportWorldHandle, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UViewportWorldStatics_SetWorldTickForHandle_Statics::NewProp_WorldHandle_MetaData), Z_Construct_UFunction_UViewportWorldStatics_SetWorldTickForHandle_Statics::NewProp_WorldHandle_MetaData) }; // 2124359825
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UViewportWorldStatics_SetWorldTickForHandle_Statics::NewProp_bEnabled_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UViewportWorldStatics_SetWorldTickForHandle_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((ViewportWorldStatics_eventSetWorldTickForHandle_Parms*)Obj)->bEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UViewportWorldStatics_SetWorldTickForHandle_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ViewportWorldStatics_eventSetWorldTickForHandle_Parms), &Z_Construct_UFunction_UViewportWorldStatics_SetWorldTickForHandle_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UViewportWorldStatics_SetWorldTickForHandle_Statics::NewProp_bEnabled_MetaData), Z_Construct_UFunction_UViewportWorldStatics_SetWorldTickForHandle_Statics::NewProp_bEnabled_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UViewportWorldStatics_SetWorldTickForHandle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewportWorldStatics_SetWorldTickForHandle_Statics::NewProp_WorldHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewportWorldStatics_SetWorldTickForHandle_Statics::NewProp_bEnabled,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UViewportWorldStatics_SetWorldTickForHandle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Viewport World Statics|Render" },
		{ "Comment", "/**\n\x09 * Toggles ticking for the world. This affects the entire world (of the handle) including all actors, objects as well.\n\x09 * @param WorldHandle Target world handle\n\x09 * @param bEnabled True to enable ticking. False otherwise.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Global/ViewportWorldStatics.h" },
		{ "ToolTip", "Toggles ticking for the world. This affects the entire world (of the handle) including all actors, objects as well.\n@param WorldHandle Target world handle\n@param bEnabled True to enable ticking. False otherwise." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UViewportWorldStatics_SetWorldTickForHandle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UViewportWorldStatics, nullptr, "SetWorldTickForHandle", nullptr, nullptr, Z_Construct_UFunction_UViewportWorldStatics_SetWorldTickForHandle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UViewportWorldStatics_SetWorldTickForHandle_Statics::PropPointers), sizeof(Z_Construct_UFunction_UViewportWorldStatics_SetWorldTickForHandle_Statics::ViewportWorldStatics_eventSetWorldTickForHandle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UViewportWorldStatics_SetWorldTickForHandle_Statics::Function_MetaDataParams), Z_Construct_UFunction_UViewportWorldStatics_SetWorldTickForHandle_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UViewportWorldStatics_SetWorldTickForHandle_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UViewportWorldStatics_SetWorldTickForHandle_Statics::ViewportWorldStatics_eventSetWorldTickForHandle_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UViewportWorldStatics_SetWorldTickForHandle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UViewportWorldStatics_SetWorldTickForHandle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UViewportWorldStatics_SpawnActorForWorldHandle_Statics
	{
		struct ViewportWorldStatics_eventSpawnActorForWorldHandle_Parms
		{
			FViewportWorldHandle WorldHandle;
			const TSubclassOf<AActor>  ActorClass;
			FTransform SpawnTransform;
			ESpawnActorCollisionHandlingMethod CollisionHandlingMethod;
			ESpawnActorScaleMethod TransformScaleMethod;
			AActor* Owner;
			AActor* ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_WorldHandle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ActorClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawnTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnTransform;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CollisionHandlingMethod_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionHandlingMethod_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CollisionHandlingMethod;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TransformScaleMethod_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransformScaleMethod_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TransformScaleMethod;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Owner;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UViewportWorldStatics_SpawnActorForWorldHandle_Statics::NewProp_WorldHandle = { "WorldHandle", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ViewportWorldStatics_eventSpawnActorForWorldHandle_Parms, WorldHandle), Z_Construct_UScriptStruct_FViewportWorldHandle, METADATA_PARAMS(0, nullptr) }; // 2124359825
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UViewportWorldStatics_SpawnActorForWorldHandle_Statics::NewProp_ActorClass_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UViewportWorldStatics_SpawnActorForWorldHandle_Statics::NewProp_ActorClass = { "ActorClass", nullptr, (EPropertyFlags)0x0014000000000082, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ViewportWorldStatics_eventSpawnActorForWorldHandle_Parms, ActorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UViewportWorldStatics_SpawnActorForWorldHandle_Statics::NewProp_ActorClass_MetaData), Z_Construct_UFunction_UViewportWorldStatics_SpawnActorForWorldHandle_Statics::NewProp_ActorClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UViewportWorldStatics_SpawnActorForWorldHandle_Statics::NewProp_SpawnTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UViewportWorldStatics_SpawnActorForWorldHandle_Statics::NewProp_SpawnTransform = { "SpawnTransform", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ViewportWorldStatics_eventSpawnActorForWorldHandle_Parms, SpawnTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UViewportWorldStatics_SpawnActorForWorldHandle_Statics::NewProp_SpawnTransform_MetaData), Z_Construct_UFunction_UViewportWorldStatics_SpawnActorForWorldHandle_Statics::NewProp_SpawnTransform_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UViewportWorldStatics_SpawnActorForWorldHandle_Statics::NewProp_CollisionHandlingMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UViewportWorldStatics_SpawnActorForWorldHandle_Statics::NewProp_CollisionHandlingMethod_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UViewportWorldStatics_SpawnActorForWorldHandle_Statics::NewProp_CollisionHandlingMethod = { "CollisionHandlingMethod", nullptr, (EPropertyFlags)0x0010040000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ViewportWorldStatics_eventSpawnActorForWorldHandle_Parms, CollisionHandlingMethod), Z_Construct_UEnum_Engine_ESpawnActorCollisionHandlingMethod, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UViewportWorldStatics_SpawnActorForWorldHandle_Statics::NewProp_CollisionHandlingMethod_MetaData), Z_Construct_UFunction_UViewportWorldStatics_SpawnActorForWorldHandle_Statics::NewProp_CollisionHandlingMethod_MetaData) }; // 1983674720
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UViewportWorldStatics_SpawnActorForWorldHandle_Statics::NewProp_TransformScaleMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UViewportWorldStatics_SpawnActorForWorldHandle_Statics::NewProp_TransformScaleMethod_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UViewportWorldStatics_SpawnActorForWorldHandle_Statics::NewProp_TransformScaleMethod = { "TransformScaleMethod", nullptr, (EPropertyFlags)0x0010040000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ViewportWorldStatics_eventSpawnActorForWorldHandle_Parms, TransformScaleMethod), Z_Construct_UEnum_Engine_ESpawnActorScaleMethod, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UViewportWorldStatics_SpawnActorForWorldHandle_Statics::NewProp_TransformScaleMethod_MetaData), Z_Construct_UFunction_UViewportWorldStatics_SpawnActorForWorldHandle_Statics::NewProp_TransformScaleMethod_MetaData) }; // 1125842637
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UViewportWorldStatics_SpawnActorForWorldHandle_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ViewportWorldStatics_eventSpawnActorForWorldHandle_Parms, Owner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UViewportWorldStatics_SpawnActorForWorldHandle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ViewportWorldStatics_eventSpawnActorForWorldHandle_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UViewportWorldStatics_SpawnActorForWorldHandle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewportWorldStatics_SpawnActorForWorldHandle_Statics::NewProp_WorldHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewportWorldStatics_SpawnActorForWorldHandle_Statics::NewProp_ActorClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewportWorldStatics_SpawnActorForWorldHandle_Statics::NewProp_SpawnTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewportWorldStatics_SpawnActorForWorldHandle_Statics::NewProp_CollisionHandlingMethod_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewportWorldStatics_SpawnActorForWorldHandle_Statics::NewProp_CollisionHandlingMethod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewportWorldStatics_SpawnActorForWorldHandle_Statics::NewProp_TransformScaleMethod_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewportWorldStatics_SpawnActorForWorldHandle_Statics::NewProp_TransformScaleMethod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewportWorldStatics_SpawnActorForWorldHandle_Statics::NewProp_Owner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewportWorldStatics_SpawnActorForWorldHandle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UViewportWorldStatics_SpawnActorForWorldHandle_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "3" },
		{ "Category", "Viewport World Statics|Game" },
		{ "Comment", "/**\n\x09 * Spawns an actor for the given world handle.\n\x09 * This function will ONLY return a valid actor if the following conditions are met:\n\x09 *\x09""1: ActorClass is valid.\n\x09 *\x09""2: Given world handle is valid.\n\x09 *\x09""3: Given world handle has actors initialized. If not initialized, call UViewportWorldStatics::InitializeActorsForWorldHandle\n\x09 *\x09""4: Given world handle has begun play.\n\x09 * \n\x09 * @param WorldHandle Reference to the world handle.\n\x09 * @param ActorClass Obvious right? This is the actor you want to spawn.\n\x09 * @param SpawnTransform Location, rotation and scale for your target actor.\n\x09 * @param CollisionHandlingMethod Defines available strategies for handling the case where an actor is spawned in such a way that it penetrates blocking collision\n\x09 * @param TransformScaleMethod Determines how the transform being passed into actor spawning methods interact with the actor's default root component.\n\x09 * @param Owner Set an owner for the newly spawned actor.\n\x09 * @return Returns a valid actor if the spawning was successful.\n\x09 */" },
		{ "CPP_Default_CollisionHandlingMethod", "Undefined" },
		{ "CPP_Default_Owner", "None" },
		{ "CPP_Default_TransformScaleMethod", "MultiplyWithRoot" },
		{ "DeterminesOutputType", "ActorClass" },
		{ "ModuleRelativePath", "Public/Global/ViewportWorldStatics.h" },
		{ "ToolTip", "Spawns an actor for the given world handle.\nThis function will ONLY return a valid actor if the following conditions are met:\n     1: ActorClass is valid.\n     2: Given world handle is valid.\n     3: Given world handle has actors initialized. If not initialized, call UViewportWorldStatics::InitializeActorsForWorldHandle\n     4: Given world handle has begun play.\n\n@param WorldHandle Reference to the world handle.\n@param ActorClass Obvious right? This is the actor you want to spawn.\n@param SpawnTransform Location, rotation and scale for your target actor.\n@param CollisionHandlingMethod Defines available strategies for handling the case where an actor is spawned in such a way that it penetrates blocking collision\n@param TransformScaleMethod Determines how the transform being passed into actor spawning methods interact with the actor's default root component.\n@param Owner Set an owner for the newly spawned actor.\n@return Returns a valid actor if the spawning was successful." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UViewportWorldStatics_SpawnActorForWorldHandle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UViewportWorldStatics, nullptr, "SpawnActorForWorldHandle", nullptr, nullptr, Z_Construct_UFunction_UViewportWorldStatics_SpawnActorForWorldHandle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UViewportWorldStatics_SpawnActorForWorldHandle_Statics::PropPointers), sizeof(Z_Construct_UFunction_UViewportWorldStatics_SpawnActorForWorldHandle_Statics::ViewportWorldStatics_eventSpawnActorForWorldHandle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UViewportWorldStatics_SpawnActorForWorldHandle_Statics::Function_MetaDataParams), Z_Construct_UFunction_UViewportWorldStatics_SpawnActorForWorldHandle_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UViewportWorldStatics_SpawnActorForWorldHandle_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UViewportWorldStatics_SpawnActorForWorldHandle_Statics::ViewportWorldStatics_eventSpawnActorForWorldHandle_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UViewportWorldStatics_SpawnActorForWorldHandle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UViewportWorldStatics_SpawnActorForWorldHandle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UViewportWorldStatics_UnloadWorldHandle_Statics
	{
		struct ViewportWorldStatics_eventUnloadWorldHandle_Parms
		{
			const UObject* WorldContextObject;
			FViewportWorldHandle WorldHandle;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStructPropertyParams NewProp_WorldHandle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UViewportWorldStatics_UnloadWorldHandle_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UViewportWorldStatics_UnloadWorldHandle_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ViewportWorldStatics_eventUnloadWorldHandle_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UViewportWorldStatics_UnloadWorldHandle_Statics::NewProp_WorldContextObject_MetaData), Z_Construct_UFunction_UViewportWorldStatics_UnloadWorldHandle_Statics::NewProp_WorldContextObject_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UViewportWorldStatics_UnloadWorldHandle_Statics::NewProp_WorldHandle = { "WorldHandle", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ViewportWorldStatics_eventUnloadWorldHandle_Parms, WorldHandle), Z_Construct_UScriptStruct_FViewportWorldHandle, METADATA_PARAMS(0, nullptr) }; // 2124359825
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UViewportWorldStatics_UnloadWorldHandle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewportWorldStatics_UnloadWorldHandle_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewportWorldStatics_UnloadWorldHandle_Statics::NewProp_WorldHandle,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UViewportWorldStatics_UnloadWorldHandle_Statics::Function_MetaDataParams[] = {
		{ "Category", "ViewportWorldStatics" },
		{ "Comment", "/**\n\x09 * Unloads the given world handle.\n\x09 * @param WorldContextObject World object.\n\x09 * @param WorldHandle World handle that should be unloaded\n\x09 */" },
		{ "Keywords", "remove, delete, destroy, viewport" },
		{ "ModuleRelativePath", "Public/Global/ViewportWorldStatics.h" },
		{ "ToolTip", "Unloads the given world handle.\n@param WorldContextObject World object.\n@param WorldHandle World handle that should be unloaded" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UViewportWorldStatics_UnloadWorldHandle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UViewportWorldStatics, nullptr, "UnloadWorldHandle", nullptr, nullptr, Z_Construct_UFunction_UViewportWorldStatics_UnloadWorldHandle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UViewportWorldStatics_UnloadWorldHandle_Statics::PropPointers), sizeof(Z_Construct_UFunction_UViewportWorldStatics_UnloadWorldHandle_Statics::ViewportWorldStatics_eventUnloadWorldHandle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UViewportWorldStatics_UnloadWorldHandle_Statics::Function_MetaDataParams), Z_Construct_UFunction_UViewportWorldStatics_UnloadWorldHandle_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UViewportWorldStatics_UnloadWorldHandle_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UViewportWorldStatics_UnloadWorldHandle_Statics::ViewportWorldStatics_eventUnloadWorldHandle_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UViewportWorldStatics_UnloadWorldHandle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UViewportWorldStatics_UnloadWorldHandle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UViewportWorldStatics_UpdateViewMode_Statics
	{
		struct ViewportWorldStatics_eventUpdateViewMode_Parms
		{
			FViewportWorldHandle WorldHandle;
			EViewportWorldViewMode NewViewMode;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WorldHandle;
		static const UECodeGen_Private::FBytePropertyParams NewProp_NewViewMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewViewMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_NewViewMode;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UViewportWorldStatics_UpdateViewMode_Statics::NewProp_WorldHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UViewportWorldStatics_UpdateViewMode_Statics::NewProp_WorldHandle = { "WorldHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ViewportWorldStatics_eventUpdateViewMode_Parms, WorldHandle), Z_Construct_UScriptStruct_FViewportWorldHandle, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UViewportWorldStatics_UpdateViewMode_Statics::NewProp_WorldHandle_MetaData), Z_Construct_UFunction_UViewportWorldStatics_UpdateViewMode_Statics::NewProp_WorldHandle_MetaData) }; // 2124359825
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UViewportWorldStatics_UpdateViewMode_Statics::NewProp_NewViewMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UViewportWorldStatics_UpdateViewMode_Statics::NewProp_NewViewMode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UViewportWorldStatics_UpdateViewMode_Statics::NewProp_NewViewMode = { "NewViewMode", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ViewportWorldStatics_eventUpdateViewMode_Parms, NewViewMode), Z_Construct_UEnum_ViewportWorlds_EViewportWorldViewMode, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UViewportWorldStatics_UpdateViewMode_Statics::NewProp_NewViewMode_MetaData), Z_Construct_UFunction_UViewportWorldStatics_UpdateViewMode_Statics::NewProp_NewViewMode_MetaData) }; // 4204396864
	void Z_Construct_UFunction_UViewportWorldStatics_UpdateViewMode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ViewportWorldStatics_eventUpdateViewMode_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UViewportWorldStatics_UpdateViewMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ViewportWorldStatics_eventUpdateViewMode_Parms), &Z_Construct_UFunction_UViewportWorldStatics_UpdateViewMode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UViewportWorldStatics_UpdateViewMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewportWorldStatics_UpdateViewMode_Statics::NewProp_WorldHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewportWorldStatics_UpdateViewMode_Statics::NewProp_NewViewMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewportWorldStatics_UpdateViewMode_Statics::NewProp_NewViewMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewportWorldStatics_UpdateViewMode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UViewportWorldStatics_UpdateViewMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Viewport World Statics|Render" },
		{ "Comment", "/**\n\x09 * Changes the world view mode to a new one.\n\x09 * @param WorldHandle World handle to update view mode for.\n\x09 * @param NewViewMode New view mode\n\x09 * @return True if the view mode was changed.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Global/ViewportWorldStatics.h" },
		{ "ToolTip", "Changes the world view mode to a new one.\n@param WorldHandle World handle to update view mode for.\n@param NewViewMode New view mode\n@return True if the view mode was changed." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UViewportWorldStatics_UpdateViewMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UViewportWorldStatics, nullptr, "UpdateViewMode", nullptr, nullptr, Z_Construct_UFunction_UViewportWorldStatics_UpdateViewMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UViewportWorldStatics_UpdateViewMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UViewportWorldStatics_UpdateViewMode_Statics::ViewportWorldStatics_eventUpdateViewMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UViewportWorldStatics_UpdateViewMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UViewportWorldStatics_UpdateViewMode_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UViewportWorldStatics_UpdateViewMode_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UViewportWorldStatics_UpdateViewMode_Statics::ViewportWorldStatics_eventUpdateViewMode_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UViewportWorldStatics_UpdateViewMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UViewportWorldStatics_UpdateViewMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UViewportWorldStatics);
	UClass* Z_Construct_UClass_UViewportWorldStatics_NoRegister()
	{
		return UViewportWorldStatics::StaticClass();
	}
	struct Z_Construct_UClass_UViewportWorldStatics_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UViewportWorldStatics_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ViewportWorlds,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UViewportWorldStatics_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UViewportWorldStatics_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UViewportWorldStatics_AddWidgetToHandle, "AddWidgetToHandle" }, // 1760310484
		{ &Z_Construct_UFunction_UViewportWorldStatics_BeginPlayForWorldHandle, "BeginPlayForWorldHandle" }, // 817696502
		{ &Z_Construct_UFunction_UViewportWorldStatics_BelongsToSecondaryWorld, "BelongsToSecondaryWorld" }, // 3185067196
		{ &Z_Construct_UFunction_UViewportWorldStatics_ClearAllWidgetsFromHandle, "ClearAllWidgetsFromHandle" }, // 3009773403
		{ &Z_Construct_UFunction_UViewportWorldStatics_ExecuteCommandForHandle, "ExecuteCommandForHandle" }, // 3758619551
		{ &Z_Construct_UFunction_UViewportWorldStatics_FindViewportWorldHandle, "FindViewportWorldHandle" }, // 707428442
		{ &Z_Construct_UFunction_UViewportWorldStatics_GetGameModeFromHandle, "GetGameModeFromHandle" }, // 2944991778
		{ &Z_Construct_UFunction_UViewportWorldStatics_GetGameStateFromHandle, "GetGameStateFromHandle" }, // 3248630302
		{ &Z_Construct_UFunction_UViewportWorldStatics_InitializeActorsForWorldHandle, "InitializeActorsForWorldHandle" }, // 3317259018
		{ &Z_Construct_UFunction_UViewportWorldStatics_IsViewportWorldHandleValid, "IsViewportWorldHandleValid" }, // 3982486922
		{ &Z_Construct_UFunction_UViewportWorldStatics_OnWorldUnloaded, "OnWorldUnloaded" }, // 1628254795
		{ &Z_Construct_UFunction_UViewportWorldStatics_RemoveWidgetFromHandle, "RemoveWidgetFromHandle" }, // 1179810364
		{ &Z_Construct_UFunction_UViewportWorldStatics_SetWorldTickForHandle, "SetWorldTickForHandle" }, // 1957863558
		{ &Z_Construct_UFunction_UViewportWorldStatics_SpawnActorForWorldHandle, "SpawnActorForWorldHandle" }, // 797954495
		{ &Z_Construct_UFunction_UViewportWorldStatics_UnloadWorldHandle, "UnloadWorldHandle" }, // 1538192898
		{ &Z_Construct_UFunction_UViewportWorldStatics_UpdateViewMode, "UpdateViewMode" }, // 4034155236
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UViewportWorldStatics_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UViewportWorldStatics_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Global/ViewportWorldStatics.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/Global/ViewportWorldStatics.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UViewportWorldStatics_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UViewportWorldStatics>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UViewportWorldStatics_Statics::ClassParams = {
		&UViewportWorldStatics::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UViewportWorldStatics_Statics::Class_MetaDataParams), Z_Construct_UClass_UViewportWorldStatics_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UViewportWorldStatics()
	{
		if (!Z_Registration_Info_UClass_UViewportWorldStatics.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UViewportWorldStatics.OuterSingleton, Z_Construct_UClass_UViewportWorldStatics_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UViewportWorldStatics.OuterSingleton;
	}
	template<> VIEWPORTWORLDS_API UClass* StaticClass<UViewportWorldStatics>()
	{
		return UViewportWorldStatics::StaticClass();
	}
	UViewportWorldStatics::UViewportWorldStatics(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UViewportWorldStatics);
	UViewportWorldStatics::~UViewportWorldStatics() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_ViewportWorlds_Public_Global_ViewportWorldStatics_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_ViewportWorlds_Public_Global_ViewportWorldStatics_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UViewportWorldStatics, UViewportWorldStatics::StaticClass, TEXT("UViewportWorldStatics"), &Z_Registration_Info_UClass_UViewportWorldStatics, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UViewportWorldStatics), 2284641220U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_ViewportWorlds_Public_Global_ViewportWorldStatics_h_3540093330(TEXT("/Script/ViewportWorlds"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_ViewportWorlds_Public_Global_ViewportWorldStatics_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_ViewportWorlds_Public_Global_ViewportWorldStatics_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
