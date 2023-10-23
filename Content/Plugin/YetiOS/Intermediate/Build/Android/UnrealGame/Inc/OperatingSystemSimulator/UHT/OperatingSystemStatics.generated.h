// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Global/OperatingSystemStatics.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AOperatingSystemDeviceActor;
class UObject;
class UOperatingSystem;
class UOperatingSystemBaseHardware;
class UOperatingSystemBaseProgram;
class UOperatingSystemDeviceMessenger;
class UOperatingSystemFile;
class UOperatingSystemUserManager;
class UTexture2D;
enum class EOperatingSystemCommonSizes : uint8;
enum class EOperatingSystemDateSeparator : uint8;
enum class EOperatingSystemNotificationCategory : uint8;
enum class EOperatingSystemNotificationType : uint8;
enum class EOperatingSystemPasswordStrength : uint8;
enum class EOperatingSystemTimeSeparator : uint8;
struct FDateTime;
struct FGameplayTag;
struct FGenericError;
struct FOperatingSystemNotification;
struct FOperatingSystemUniqueId;
struct FOperatingSystemUser;
struct FVersion;
#ifdef OPERATINGSYSTEMSIMULATOR_OperatingSystemStatics_generated_h
#error "OperatingSystemStatics.generated.h already included, missing '#pragma once' in OperatingSystemStatics.h"
#endif
#define OPERATINGSYSTEMSIMULATOR_OperatingSystemStatics_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Global_OperatingSystemStatics_h_21_SPARSE_DATA
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Global_OperatingSystemStatics_h_21_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Global_OperatingSystemStatics_h_21_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Global_OperatingSystemStatics_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsProgramClassCompatibleWithOS); \
	DECLARE_FUNCTION(execGetUserManager); \
	DECLARE_FUNCTION(execFindMessengerFromOperatingSystem); \
	DECLARE_FUNCTION(execFindMessengerForDevice); \
	DECLARE_FUNCTION(execFindDeviceActorsByTag); \
	DECLARE_FUNCTION(execFindDeviceActorByTag); \
	DECLARE_FUNCTION(execDeterminePasswordStrength); \
	DECLARE_FUNCTION(execRegexExpression); \
	DECLARE_FUNCTION(execGetDateAsText); \
	DECLARE_FUNCTION(execGetTimeAsText); \
	DECLARE_FUNCTION(execGenerateRandomErrorCode); \
	DECLARE_FUNCTION(execGetSizeAsText); \
	DECLARE_FUNCTION(execGetCpuSpeedAsText); \
	DECLARE_FUNCTION(execGetSpecialDirectoryName); \
	DECLARE_FUNCTION(execIsNotificationValid); \
	DECLARE_FUNCTION(execUsersNotEqual); \
	DECLARE_FUNCTION(execUsersEqual); \
	DECLARE_FUNCTION(execIsUserValid); \
	DECLARE_FUNCTION(execOpenFile); \
	DECLARE_FUNCTION(execAddNotificationFromError); \
	DECLARE_FUNCTION(execAddNotification); \
	DECLARE_FUNCTION(execRestartOperatingSystem); \
	DECLARE_FUNCTION(execShutdownOperatingSystem); \
	DECLARE_FUNCTION(execGetCpuSocketName); \
	DECLARE_FUNCTION(execFindHardwareByTag); \
	DECLARE_FUNCTION(execConvertBytes_ToMB); \
	DECLARE_FUNCTION(execConvertBytes_ToGB); \
	DECLARE_FUNCTION(execConvertMB_ToGB); \
	DECLARE_FUNCTION(execConvertGB_ToMB); \
	DECLARE_FUNCTION(execConvertGB_ToBytes); \
	DECLARE_FUNCTION(execConvertMB_ToBytes); \
	DECLARE_FUNCTION(execCreateNotification); \
	DECLARE_FUNCTION(execCreateGenericError); \
	DECLARE_FUNCTION(execGetSize); \
	DECLARE_FUNCTION(execIsOperatingSystemTagValid); \
	DECLARE_FUNCTION(execUniqueIdToString); \
	DECLARE_FUNCTION(execIsUniqueIdValid); \
	DECLARE_FUNCTION(execGreaterThan_Version); \
	DECLARE_FUNCTION(execLessThan_Version); \
	DECLARE_FUNCTION(execEqual_Version); \
	DECLARE_FUNCTION(execVersionToString);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Global_OperatingSystemStatics_h_21_ACCESSORS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Global_OperatingSystemStatics_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOperatingSystemStatics(); \
	friend struct Z_Construct_UClass_UOperatingSystemStatics_Statics; \
public: \
	DECLARE_CLASS(UOperatingSystemStatics, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OperatingSystemSimulator"), NO_API) \
	DECLARE_SERIALIZER(UOperatingSystemStatics)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Global_OperatingSystemStatics_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOperatingSystemStatics(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOperatingSystemStatics(UOperatingSystemStatics&&); \
	NO_API UOperatingSystemStatics(const UOperatingSystemStatics&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOperatingSystemStatics); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOperatingSystemStatics); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOperatingSystemStatics) \
	NO_API virtual ~UOperatingSystemStatics();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Global_OperatingSystemStatics_h_18_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Global_OperatingSystemStatics_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Global_OperatingSystemStatics_h_21_SPARSE_DATA \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Global_OperatingSystemStatics_h_21_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Global_OperatingSystemStatics_h_21_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Global_OperatingSystemStatics_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Global_OperatingSystemStatics_h_21_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Global_OperatingSystemStatics_h_21_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Global_OperatingSystemStatics_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OPERATINGSYSTEMSIMULATOR_API UClass* StaticClass<class UOperatingSystemStatics>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Global_OperatingSystemStatics_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
