// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Core/OperatingSystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class UOperatingSystemBaseProgram;
class UOperatingSystemPartition;
enum class EOperatingSystemSizeMethod : uint8;
struct FGameplayTag;
struct FGenericError;
struct FOperatingSystemNotification;
struct FOperatingSystemUser;
#ifdef OPERATINGSYSTEMSIMULATOR_OperatingSystem_generated_h
#error "OperatingSystem.generated.h already included, missing '#pragma once' in OperatingSystem.h"
#endif
#define OPERATINGSYSTEMSIMULATOR_OperatingSystem_generated_h

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Core_OperatingSystem_h_28_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOperatingSystemNotificationSettings_Statics; \
	OPERATINGSYSTEMSIMULATOR_API static class UScriptStruct* StaticStruct();


template<> OPERATINGSYSTEMSIMULATOR_API UScriptStruct* StaticStruct<struct FOperatingSystemNotificationSettings>();

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Core_OperatingSystem_h_65_DELEGATE \
OPERATINGSYSTEMSIMULATOR_API void FOperatingSystemProgramDelegate_DelegateWrapper(const FMulticastScriptDelegate& OperatingSystemProgramDelegate, UOperatingSystemBaseProgram* Program);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Core_OperatingSystem_h_75_SPARSE_DATA
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Core_OperatingSystem_h_75_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Core_OperatingSystem_h_75_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Core_OperatingSystem_h_75_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsPreInstalledOperatingSystem); \
	DECLARE_FUNCTION(execGetRunningProgram); \
	DECLARE_FUNCTION(execIsProgramInstalled); \
	DECLARE_FUNCTION(execGetInstalledProgram); \
	DECLARE_FUNCTION(execGetInstalledPrograms); \
	DECLARE_FUNCTION(execGetToastNotificationDisplayTime); \
	DECLARE_FUNCTION(execGetBsodOnScreenTime); \
	DECLARE_FUNCTION(execIsUnix); \
	DECLARE_FUNCTION(execGetDirectoryIconObject); \
	DECLARE_FUNCTION(execCloseAllRunningPrograms); \
	DECLARE_FUNCTION(execMinimizeProgram); \
	DECLARE_FUNCTION(execCloseProgram); \
	DECLARE_FUNCTION(execGetOperatingSystemPartition); \
	DECLARE_FUNCTION(execGetDiskPartitions); \
	DECLARE_FUNCTION(execHasEnoughSpace); \
	DECLARE_FUNCTION(execUpdateCurrentUserDetails); \
	DECLARE_FUNCTION(execAuthorizeUser); \
	DECLARE_FUNCTION(execLoginUser); \
	DECLARE_FUNCTION(execCreateNewUser); \
	DECLARE_FUNCTION(execInstallationCompleted); \
	DECLARE_FUNCTION(execRefreshPartitions); \
	DECLARE_FUNCTION(execRemovePartition); \
	DECLARE_FUNCTION(execAllocatePartition); \
	DECLARE_FUNCTION(execBeginInstallation); \
	DECLARE_FUNCTION(execInstallProgramFromClass); \
	DECLARE_FUNCTION(execInstallProgramFromPackage); \
	DECLARE_FUNCTION(execUninstallProgramByClass); \
	DECLARE_FUNCTION(execUninstallProgram); \
	DECLARE_FUNCTION(execGetHardDiskSize); \
	DECLARE_FUNCTION(execGetStoragePercentage); \
	DECLARE_FUNCTION(execGetSizeAsText); \
	DECLARE_FUNCTION(execClearAllNotifications); \
	DECLARE_FUNCTION(execGetNotifications); \
	DECLARE_FUNCTION(execGetInitialLoadingTime); \
	DECLARE_FUNCTION(execGetLoadingTime); \
	DECLARE_FUNCTION(execGetInstallationTime); \
	DECLARE_FUNCTION(execCanAutoLogin); \
	DECLARE_FUNCTION(execSetAutoLogin); \
	DECLARE_FUNCTION(execGetDeviceName); \
	DECLARE_FUNCTION(execSetDeviceName); \
	DECLARE_FUNCTION(execShouldInstallStartupPrograms); \
	DECLARE_FUNCTION(execSetToInstallStartupPrograms);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Core_OperatingSystem_h_75_ACCESSORS
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Core_OperatingSystem_h_75_CALLBACK_WRAPPERS
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Core_OperatingSystem_h_75_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOperatingSystem(); \
	friend struct Z_Construct_UClass_UOperatingSystem_Statics; \
public: \
	DECLARE_CLASS(UOperatingSystem, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/OperatingSystemSimulator"), NO_API) \
	DECLARE_SERIALIZER(UOperatingSystem) \
	DECLARE_WITHIN(UOperatingSystemBaseDevice)


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Core_OperatingSystem_h_75_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOperatingSystem(UOperatingSystem&&); \
	NO_API UOperatingSystem(const UOperatingSystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOperatingSystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOperatingSystem); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UOperatingSystem) \
	NO_API virtual ~UOperatingSystem();


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Core_OperatingSystem_h_72_PROLOG
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Core_OperatingSystem_h_75_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Core_OperatingSystem_h_75_SPARSE_DATA \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Core_OperatingSystem_h_75_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Core_OperatingSystem_h_75_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Core_OperatingSystem_h_75_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Core_OperatingSystem_h_75_ACCESSORS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Core_OperatingSystem_h_75_CALLBACK_WRAPPERS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Core_OperatingSystem_h_75_INCLASS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Core_OperatingSystem_h_75_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OPERATINGSYSTEMSIMULATOR_API UClass* StaticClass<class UOperatingSystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Core_OperatingSystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
