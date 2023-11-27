// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Global/ViewportWorldStatics.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class AGameModeBase;
class AGameStateBase;
class UObject;
class UUserWidget;
class UWorld;
enum class ESpawnActorCollisionHandlingMethod : uint8;
enum class ESpawnActorScaleMethod : uint8;
enum class EViewportWorldViewMode : uint8;
struct FViewportWorldHandle;
#ifdef VIEWPORTWORLDS_ViewportWorldStatics_generated_h
#error "ViewportWorldStatics.generated.h already included, missing '#pragma once' in ViewportWorldStatics.h"
#endif
#define VIEWPORTWORLDS_ViewportWorldStatics_generated_h

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_ViewportWorlds_Public_Global_ViewportWorldStatics_h_12_SPARSE_DATA
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_ViewportWorlds_Public_Global_ViewportWorldStatics_h_12_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_ViewportWorlds_Public_Global_ViewportWorldStatics_h_12_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_ViewportWorlds_Public_Global_ViewportWorldStatics_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetGameStateFromHandle); \
	DECLARE_FUNCTION(execGetGameModeFromHandle); \
	DECLARE_FUNCTION(execBelongsToSecondaryWorld); \
	DECLARE_FUNCTION(execIsViewportWorldHandleValid); \
	DECLARE_FUNCTION(execExecuteCommandForHandle); \
	DECLARE_FUNCTION(execSetWorldTickForHandle); \
	DECLARE_FUNCTION(execUpdateViewMode); \
	DECLARE_FUNCTION(execUnloadWorldHandle); \
	DECLARE_FUNCTION(execBeginPlayForWorldHandle); \
	DECLARE_FUNCTION(execInitializeActorsForWorldHandle); \
	DECLARE_FUNCTION(execClearAllWidgetsFromHandle); \
	DECLARE_FUNCTION(execRemoveWidgetFromHandle); \
	DECLARE_FUNCTION(execAddWidgetToHandle); \
	DECLARE_FUNCTION(execOnWorldUnloaded); \
	DECLARE_FUNCTION(execSpawnActorForWorldHandle); \
	DECLARE_FUNCTION(execFindViewportWorldHandle);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_ViewportWorlds_Public_Global_ViewportWorldStatics_h_12_ACCESSORS
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_ViewportWorlds_Public_Global_ViewportWorldStatics_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUViewportWorldStatics(); \
	friend struct Z_Construct_UClass_UViewportWorldStatics_Statics; \
public: \
	DECLARE_CLASS(UViewportWorldStatics, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ViewportWorlds"), NO_API) \
	DECLARE_SERIALIZER(UViewportWorldStatics)


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_ViewportWorlds_Public_Global_ViewportWorldStatics_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UViewportWorldStatics(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UViewportWorldStatics(UViewportWorldStatics&&); \
	NO_API UViewportWorldStatics(const UViewportWorldStatics&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UViewportWorldStatics); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UViewportWorldStatics); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UViewportWorldStatics) \
	NO_API virtual ~UViewportWorldStatics();


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_ViewportWorlds_Public_Global_ViewportWorldStatics_h_9_PROLOG
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_ViewportWorlds_Public_Global_ViewportWorldStatics_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_ViewportWorlds_Public_Global_ViewportWorldStatics_h_12_SPARSE_DATA \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_ViewportWorlds_Public_Global_ViewportWorldStatics_h_12_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_ViewportWorlds_Public_Global_ViewportWorldStatics_h_12_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_ViewportWorlds_Public_Global_ViewportWorldStatics_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_ViewportWorlds_Public_Global_ViewportWorldStatics_h_12_ACCESSORS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_ViewportWorlds_Public_Global_ViewportWorldStatics_h_12_INCLASS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_ViewportWorlds_Public_Global_ViewportWorldStatics_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VIEWPORTWORLDS_API UClass* StaticClass<class UViewportWorldStatics>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_ViewportWorlds_Public_Global_ViewportWorldStatics_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
