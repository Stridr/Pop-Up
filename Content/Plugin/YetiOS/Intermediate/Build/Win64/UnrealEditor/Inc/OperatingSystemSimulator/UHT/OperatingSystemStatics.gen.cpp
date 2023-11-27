// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OperatingSystemSimulator/Public/Global/OperatingSystemStatics.h"
#include "GameplayTagContainer.h"
#include "OperatingSystemSimulator/Public/OperatingSystemTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOperatingSystemStatics() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	OPERATINGSYSTEMSIMULATOR_API UClass* Z_Construct_UClass_AOperatingSystemDeviceActor_NoRegister();
	OPERATINGSYSTEMSIMULATOR_API UClass* Z_Construct_UClass_UOperatingSystem_NoRegister();
	OPERATINGSYSTEMSIMULATOR_API UClass* Z_Construct_UClass_UOperatingSystemBaseHardware_NoRegister();
	OPERATINGSYSTEMSIMULATOR_API UClass* Z_Construct_UClass_UOperatingSystemBaseProgram_NoRegister();
	OPERATINGSYSTEMSIMULATOR_API UClass* Z_Construct_UClass_UOperatingSystemDeviceMessenger_NoRegister();
	OPERATINGSYSTEMSIMULATOR_API UClass* Z_Construct_UClass_UOperatingSystemFile_NoRegister();
	OPERATINGSYSTEMSIMULATOR_API UClass* Z_Construct_UClass_UOperatingSystemStatics();
	OPERATINGSYSTEMSIMULATOR_API UClass* Z_Construct_UClass_UOperatingSystemStatics_NoRegister();
	OPERATINGSYSTEMSIMULATOR_API UClass* Z_Construct_UClass_UOperatingSystemUserManager_NoRegister();
	OPERATINGSYSTEMSIMULATOR_API UEnum* Z_Construct_UEnum_OperatingSystemSimulator_EOperatingSystemCommonSizes();
	OPERATINGSYSTEMSIMULATOR_API UEnum* Z_Construct_UEnum_OperatingSystemSimulator_EOperatingSystemDateSeparator();
	OPERATINGSYSTEMSIMULATOR_API UEnum* Z_Construct_UEnum_OperatingSystemSimulator_EOperatingSystemNotificationCategory();
	OPERATINGSYSTEMSIMULATOR_API UEnum* Z_Construct_UEnum_OperatingSystemSimulator_EOperatingSystemNotificationType();
	OPERATINGSYSTEMSIMULATOR_API UEnum* Z_Construct_UEnum_OperatingSystemSimulator_EOperatingSystemPasswordStrength();
	OPERATINGSYSTEMSIMULATOR_API UEnum* Z_Construct_UEnum_OperatingSystemSimulator_EOperatingSystemTimeSeparator();
	OPERATINGSYSTEMSIMULATOR_API UScriptStruct* Z_Construct_UScriptStruct_FGenericError();
	OPERATINGSYSTEMSIMULATOR_API UScriptStruct* Z_Construct_UScriptStruct_FOperatingSystemNotification();
	OPERATINGSYSTEMSIMULATOR_API UScriptStruct* Z_Construct_UScriptStruct_FOperatingSystemUniqueId();
	OPERATINGSYSTEMSIMULATOR_API UScriptStruct* Z_Construct_UScriptStruct_FOperatingSystemUser();
	OPERATINGSYSTEMSIMULATOR_API UScriptStruct* Z_Construct_UScriptStruct_FVersion();
	UPackage* Z_Construct_UPackage__Script_OperatingSystemSimulator();
// End Cross Module References
	DEFINE_FUNCTION(UOperatingSystemStatics::execIsProgramClassCompatibleWithOS)
	{
		P_GET_OBJECT(UClass,Z_Param_ProgramClass);
		P_GET_OBJECT(UOperatingSystem,Z_Param_TargetOS);
		P_GET_STRUCT_REF(FGenericError,Z_Param_Out_OutError);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UOperatingSystemStatics::IsProgramClassCompatibleWithOS(Z_Param_ProgramClass,Z_Param_TargetOS,Z_Param_Out_OutError);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOperatingSystemStatics::execGetUserManager)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UOperatingSystemUserManager**)Z_Param__Result=UOperatingSystemStatics::GetUserManager(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOperatingSystemStatics::execFindMessengerFromOperatingSystem)
	{
		P_GET_OBJECT(UOperatingSystem,Z_Param_TargetOS);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UOperatingSystemDeviceMessenger**)Z_Param__Result=UOperatingSystemStatics::FindMessengerFromOperatingSystem(Z_Param_TargetOS);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOperatingSystemStatics::execFindMessengerForDevice)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FGameplayTag,Z_Param_TestTag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UOperatingSystemDeviceMessenger**)Z_Param__Result=UOperatingSystemStatics::FindMessengerForDevice(Z_Param_WorldContextObject,Z_Param_TestTag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOperatingSystemStatics::execFindDeviceActorsByTag)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FGameplayTag,Z_Param_TestTag);
		P_GET_TARRAY_REF(AOperatingSystemDeviceActor*,Z_Param_Out_OutDeviceActors);
		P_FINISH;
		P_NATIVE_BEGIN;
		UOperatingSystemStatics::FindDeviceActorsByTag(Z_Param_WorldContextObject,Z_Param_TestTag,Z_Param_Out_OutDeviceActors);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOperatingSystemStatics::execFindDeviceActorByTag)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FGameplayTag,Z_Param_TestTag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AOperatingSystemDeviceActor**)Z_Param__Result=UOperatingSystemStatics::FindDeviceActorByTag(Z_Param_WorldContextObject,Z_Param_TestTag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOperatingSystemStatics::execDeterminePasswordStrength)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Input);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EOperatingSystemPasswordStrength*)Z_Param__Result=UOperatingSystemStatics::DeterminePasswordStrength(Z_Param_Input);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOperatingSystemStatics::execRegexExpression)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_TargetString);
		P_GET_PROPERTY(FStrProperty,Z_Param_RegexPattern);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UOperatingSystemStatics::RegexExpression(Z_Param_TargetString,Z_Param_RegexPattern);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOperatingSystemStatics::execGetDateAsText)
	{
		P_GET_STRUCT_REF(FDateTime,Z_Param_Out_DateTime);
		P_GET_ENUM(EOperatingSystemDateSeparator,Z_Param_Separator);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=UOperatingSystemStatics::GetDateAsText(Z_Param_Out_DateTime,EOperatingSystemDateSeparator(Z_Param_Separator));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOperatingSystemStatics::execGetTimeAsText)
	{
		P_GET_STRUCT_REF(FDateTime,Z_Param_Out_DateTime);
		P_GET_UBOOL(Z_Param_bShowSeconds);
		P_GET_ENUM(EOperatingSystemTimeSeparator,Z_Param_Separator);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=UOperatingSystemStatics::GetTimeAsText(Z_Param_Out_DateTime,Z_Param_bShowSeconds,EOperatingSystemTimeSeparator(Z_Param_Separator));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOperatingSystemStatics::execGenerateRandomErrorCode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=UOperatingSystemStatics::GenerateRandomErrorCode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOperatingSystemStatics::execGetSizeAsText)
	{
		P_GET_ENUM(EOperatingSystemCommonSizes,Z_Param_Size);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=UOperatingSystemStatics::GetSizeAsText(EOperatingSystemCommonSizes(Z_Param_Size));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOperatingSystemStatics::execGetCpuSpeedAsText)
	{
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_CpuSpeedInGHz);
		P_GET_UBOOL(Z_Param_bUseGHZ);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=UOperatingSystemStatics::GetCpuSpeedAsText(Z_Param_Out_CpuSpeedInGHz,Z_Param_bUseGHZ);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOperatingSystemStatics::execGetSpecialDirectoryName)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_DirectoryTag);
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_OutDirectoryName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UOperatingSystemStatics::GetSpecialDirectoryName(Z_Param_DirectoryTag,Z_Param_Out_OutDirectoryName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOperatingSystemStatics::execIsNotificationValid)
	{
		P_GET_STRUCT_REF(FOperatingSystemNotification,Z_Param_Out_TestNotification);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UOperatingSystemStatics::IsNotificationValid(Z_Param_Out_TestNotification);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOperatingSystemStatics::execUsersNotEqual)
	{
		P_GET_STRUCT_REF(FOperatingSystemUser,Z_Param_Out_Lhs);
		P_GET_STRUCT_REF(FOperatingSystemUser,Z_Param_Out_Rhs);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UOperatingSystemStatics::UsersNotEqual(Z_Param_Out_Lhs,Z_Param_Out_Rhs);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOperatingSystemStatics::execUsersEqual)
	{
		P_GET_STRUCT_REF(FOperatingSystemUser,Z_Param_Out_Lhs);
		P_GET_STRUCT_REF(FOperatingSystemUser,Z_Param_Out_Rhs);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UOperatingSystemStatics::UsersEqual(Z_Param_Out_Lhs,Z_Param_Out_Rhs);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOperatingSystemStatics::execIsUserValid)
	{
		P_GET_STRUCT_REF(FOperatingSystemUser,Z_Param_Out_TestUser);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UOperatingSystemStatics::IsUserValid(Z_Param_Out_TestUser);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOperatingSystemStatics::execOpenFile)
	{
		P_GET_OBJECT(UOperatingSystemFile,Z_Param_TargetFile);
		P_GET_STRUCT_REF(FGenericError,Z_Param_Out_OutError);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UOperatingSystemFile**)Z_Param__Result=UOperatingSystemStatics::OpenFile(Z_Param_TargetFile,Z_Param_Out_OutError);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOperatingSystemStatics::execAddNotificationFromError)
	{
		P_GET_OBJECT(UOperatingSystem,Z_Param_TargetOperatingSystem);
		P_GET_STRUCT_REF(FGenericError,Z_Param_Out_Error);
		P_GET_ENUM(EOperatingSystemNotificationCategory,Z_Param_NotificationCategory);
		P_GET_ENUM(EOperatingSystemNotificationType,Z_Param_Verbosity);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UOperatingSystemStatics::AddNotificationFromError(Z_Param_TargetOperatingSystem,Z_Param_Out_Error,EOperatingSystemNotificationCategory(Z_Param_NotificationCategory),EOperatingSystemNotificationType(Z_Param_Verbosity));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOperatingSystemStatics::execAddNotification)
	{
		P_GET_OBJECT(UOperatingSystem,Z_Param_TargetOperatingSystem);
		P_GET_STRUCT_REF(FOperatingSystemNotification,Z_Param_Out_Notification);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UOperatingSystemStatics::AddNotification(Z_Param_TargetOperatingSystem,Z_Param_Out_Notification);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOperatingSystemStatics::execRestartOperatingSystem)
	{
		P_GET_OBJECT(UOperatingSystem,Z_Param_TargetOS);
		P_FINISH;
		P_NATIVE_BEGIN;
		UOperatingSystemStatics::RestartOperatingSystem(Z_Param_TargetOS);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOperatingSystemStatics::execShutdownOperatingSystem)
	{
		P_GET_OBJECT(UOperatingSystem,Z_Param_TargetOS);
		P_FINISH;
		P_NATIVE_BEGIN;
		UOperatingSystemStatics::ShutdownOperatingSystem(Z_Param_TargetOS);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOperatingSystemStatics::execGetCpuSocketName)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_SocketTag);
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_OutValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UOperatingSystemStatics::GetCpuSocketName(Z_Param_SocketTag,Z_Param_Out_OutValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOperatingSystemStatics::execFindHardwareByTag)
	{
		P_GET_OBJECT(AOperatingSystemDeviceActor,Z_Param_TargetDevice);
		P_GET_STRUCT(FGameplayTag,Z_Param_HardwareTag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UOperatingSystemBaseHardware**)Z_Param__Result=UOperatingSystemStatics::FindHardwareByTag(Z_Param_TargetDevice,Z_Param_HardwareTag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOperatingSystemStatics::execConvertBytes_ToMB)
	{
		P_GET_PROPERTY(FDoubleProperty,Z_Param_SizeInBytes);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UOperatingSystemStatics::ConvertBytes_ToMB(Z_Param_SizeInBytes);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOperatingSystemStatics::execConvertBytes_ToGB)
	{
		P_GET_PROPERTY(FDoubleProperty,Z_Param_SizeInBytes);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UOperatingSystemStatics::ConvertBytes_ToGB(Z_Param_SizeInBytes);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOperatingSystemStatics::execConvertMB_ToGB)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_SizeInMB);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UOperatingSystemStatics::ConvertMB_ToGB(Z_Param_SizeInMB);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOperatingSystemStatics::execConvertGB_ToMB)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_SizeInGB);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UOperatingSystemStatics::ConvertGB_ToMB(Z_Param_SizeInGB);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOperatingSystemStatics::execConvertGB_ToBytes)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_SizeInGB);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(double*)Z_Param__Result=UOperatingSystemStatics::ConvertGB_ToBytes(Z_Param_SizeInGB);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOperatingSystemStatics::execConvertMB_ToBytes)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_SizeInMB);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(double*)Z_Param__Result=UOperatingSystemStatics::ConvertMB_ToBytes(Z_Param_SizeInMB);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOperatingSystemStatics::execCreateNotification)
	{
		P_GET_PROPERTY(FTextProperty,Z_Param_Title);
		P_GET_PROPERTY(FTextProperty,Z_Param_Description);
		P_GET_ENUM(EOperatingSystemNotificationCategory,Z_Param_NotificationCategory);
		P_GET_ENUM(EOperatingSystemNotificationType,Z_Param_Verbosity);
		P_GET_SOFTOBJECT(TSoftObjectPtr<UTexture2D>,Z_Param_Icon);
		P_GET_PROPERTY(FTextProperty,Z_Param_Code);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FOperatingSystemNotification*)Z_Param__Result=UOperatingSystemStatics::CreateNotification(Z_Param_Title,Z_Param_Description,EOperatingSystemNotificationCategory(Z_Param_NotificationCategory),EOperatingSystemNotificationType(Z_Param_Verbosity),Z_Param_Icon,Z_Param_Code);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOperatingSystemStatics::execCreateGenericError)
	{
		P_GET_PROPERTY(FTextProperty,Z_Param_ErrorCode);
		P_GET_PROPERTY(FTextProperty,Z_Param_ErrorDescription);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGenericError*)Z_Param__Result=UOperatingSystemStatics::CreateGenericError(Z_Param_ErrorCode,Z_Param_ErrorDescription);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOperatingSystemStatics::execGetSize)
	{
		P_GET_ENUM_REF(EOperatingSystemCommonSizes,Z_Param_Out_Size);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UOperatingSystemStatics::GetSize((EOperatingSystemCommonSizes&)(Z_Param_Out_Size));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOperatingSystemStatics::execIsOperatingSystemTagValid)
	{
		P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_TestTag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UOperatingSystemStatics::IsOperatingSystemTagValid(Z_Param_Out_TestTag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOperatingSystemStatics::execUniqueIdToString)
	{
		P_GET_STRUCT_REF(FOperatingSystemUniqueId,Z_Param_Out_TestID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UOperatingSystemStatics::UniqueIdToString(Z_Param_Out_TestID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOperatingSystemStatics::execIsUniqueIdValid)
	{
		P_GET_STRUCT_REF(FOperatingSystemUniqueId,Z_Param_Out_TestID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UOperatingSystemStatics::IsUniqueIdValid(Z_Param_Out_TestID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOperatingSystemStatics::execGreaterThan_Version)
	{
		P_GET_STRUCT_REF(FVersion,Z_Param_Out_VersionOne);
		P_GET_STRUCT_REF(FVersion,Z_Param_Out_VersionTwo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UOperatingSystemStatics::GreaterThan_Version(Z_Param_Out_VersionOne,Z_Param_Out_VersionTwo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOperatingSystemStatics::execLessThan_Version)
	{
		P_GET_STRUCT_REF(FVersion,Z_Param_Out_VersionOne);
		P_GET_STRUCT_REF(FVersion,Z_Param_Out_VersionTwo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UOperatingSystemStatics::LessThan_Version(Z_Param_Out_VersionOne,Z_Param_Out_VersionTwo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOperatingSystemStatics::execEqual_Version)
	{
		P_GET_STRUCT_REF(FVersion,Z_Param_Out_VersionOne);
		P_GET_STRUCT_REF(FVersion,Z_Param_Out_VersionTwo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UOperatingSystemStatics::Equal_Version(Z_Param_Out_VersionOne,Z_Param_Out_VersionTwo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOperatingSystemStatics::execVersionToString)
	{
		P_GET_STRUCT_REF(FVersion,Z_Param_Out_Version);
		P_GET_UBOOL(Z_Param_bIgnorePatch);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UOperatingSystemStatics::VersionToString(Z_Param_Out_Version,Z_Param_bIgnorePatch);
		P_NATIVE_END;
	}
	void UOperatingSystemStatics::StaticRegisterNativesUOperatingSystemStatics()
	{
		UClass* Class = UOperatingSystemStatics::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddNotification", &UOperatingSystemStatics::execAddNotification },
			{ "AddNotificationFromError", &UOperatingSystemStatics::execAddNotificationFromError },
			{ "ConvertBytes_ToGB", &UOperatingSystemStatics::execConvertBytes_ToGB },
			{ "ConvertBytes_ToMB", &UOperatingSystemStatics::execConvertBytes_ToMB },
			{ "ConvertGB_ToBytes", &UOperatingSystemStatics::execConvertGB_ToBytes },
			{ "ConvertGB_ToMB", &UOperatingSystemStatics::execConvertGB_ToMB },
			{ "ConvertMB_ToBytes", &UOperatingSystemStatics::execConvertMB_ToBytes },
			{ "ConvertMB_ToGB", &UOperatingSystemStatics::execConvertMB_ToGB },
			{ "CreateGenericError", &UOperatingSystemStatics::execCreateGenericError },
			{ "CreateNotification", &UOperatingSystemStatics::execCreateNotification },
			{ "DeterminePasswordStrength", &UOperatingSystemStatics::execDeterminePasswordStrength },
			{ "Equal_Version", &UOperatingSystemStatics::execEqual_Version },
			{ "FindDeviceActorByTag", &UOperatingSystemStatics::execFindDeviceActorByTag },
			{ "FindDeviceActorsByTag", &UOperatingSystemStatics::execFindDeviceActorsByTag },
			{ "FindHardwareByTag", &UOperatingSystemStatics::execFindHardwareByTag },
			{ "FindMessengerForDevice", &UOperatingSystemStatics::execFindMessengerForDevice },
			{ "FindMessengerFromOperatingSystem", &UOperatingSystemStatics::execFindMessengerFromOperatingSystem },
			{ "GenerateRandomErrorCode", &UOperatingSystemStatics::execGenerateRandomErrorCode },
			{ "GetCpuSocketName", &UOperatingSystemStatics::execGetCpuSocketName },
			{ "GetCpuSpeedAsText", &UOperatingSystemStatics::execGetCpuSpeedAsText },
			{ "GetDateAsText", &UOperatingSystemStatics::execGetDateAsText },
			{ "GetSize", &UOperatingSystemStatics::execGetSize },
			{ "GetSizeAsText", &UOperatingSystemStatics::execGetSizeAsText },
			{ "GetSpecialDirectoryName", &UOperatingSystemStatics::execGetSpecialDirectoryName },
			{ "GetTimeAsText", &UOperatingSystemStatics::execGetTimeAsText },
			{ "GetUserManager", &UOperatingSystemStatics::execGetUserManager },
			{ "GreaterThan_Version", &UOperatingSystemStatics::execGreaterThan_Version },
			{ "IsNotificationValid", &UOperatingSystemStatics::execIsNotificationValid },
			{ "IsOperatingSystemTagValid", &UOperatingSystemStatics::execIsOperatingSystemTagValid },
			{ "IsProgramClassCompatibleWithOS", &UOperatingSystemStatics::execIsProgramClassCompatibleWithOS },
			{ "IsUniqueIdValid", &UOperatingSystemStatics::execIsUniqueIdValid },
			{ "IsUserValid", &UOperatingSystemStatics::execIsUserValid },
			{ "LessThan_Version", &UOperatingSystemStatics::execLessThan_Version },
			{ "OpenFile", &UOperatingSystemStatics::execOpenFile },
			{ "RegexExpression", &UOperatingSystemStatics::execRegexExpression },
			{ "RestartOperatingSystem", &UOperatingSystemStatics::execRestartOperatingSystem },
			{ "ShutdownOperatingSystem", &UOperatingSystemStatics::execShutdownOperatingSystem },
			{ "UniqueIdToString", &UOperatingSystemStatics::execUniqueIdToString },
			{ "UsersEqual", &UOperatingSystemStatics::execUsersEqual },
			{ "UsersNotEqual", &UOperatingSystemStatics::execUsersNotEqual },
			{ "VersionToString", &UOperatingSystemStatics::execVersionToString },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOperatingSystemStatics_AddNotification_Statics
	{
		struct OperatingSystemStatics_eventAddNotification_Parms
		{
			UOperatingSystem* TargetOperatingSystem;
			FOperatingSystemNotification Notification;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetOperatingSystem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Notification_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Notification;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOperatingSystemStatics_AddNotification_Statics::NewProp_TargetOperatingSystem = { "TargetOperatingSystem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemStatics_eventAddNotification_Parms, TargetOperatingSystem), Z_Construct_UClass_UOperatingSystem_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemStatics_AddNotification_Statics::NewProp_Notification_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOperatingSystemStatics_AddNotification_Statics::NewProp_Notification = { "Notification", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemStatics_eventAddNotification_Parms, Notification), Z_Construct_UScriptStruct_FOperatingSystemNotification, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemStatics_AddNotification_Statics::NewProp_Notification_MetaData), Z_Construct_UFunction_UOperatingSystemStatics_AddNotification_Statics::NewProp_Notification_MetaData) }; // 2023410135
	void Z_Construct_UFunction_UOperatingSystemStatics_AddNotification_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OperatingSystemStatics_eventAddNotification_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOperatingSystemStatics_AddNotification_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OperatingSystemStatics_eventAddNotification_Parms), &Z_Construct_UFunction_UOperatingSystemStatics_AddNotification_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperatingSystemStatics_AddNotification_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemStatics_AddNotification_Statics::NewProp_TargetOperatingSystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemStatics_AddNotification_Statics::NewProp_Notification,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemStatics_AddNotification_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemStatics_AddNotification_Statics::Function_MetaDataParams[] = {
		{ "Category", "OperatingSystemStatics" },
		{ "ModuleRelativePath", "Public/Global/OperatingSystemStatics.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystemStatics_AddNotification_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystemStatics, nullptr, "AddNotification", nullptr, nullptr, Z_Construct_UFunction_UOperatingSystemStatics_AddNotification_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemStatics_AddNotification_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOperatingSystemStatics_AddNotification_Statics::OperatingSystemStatics_eventAddNotification_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemStatics_AddNotification_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystemStatics_AddNotification_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemStatics_AddNotification_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOperatingSystemStatics_AddNotification_Statics::OperatingSystemStatics_eventAddNotification_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOperatingSystemStatics_AddNotification()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystemStatics_AddNotification_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOperatingSystemStatics_AddNotificationFromError_Statics
	{
		struct OperatingSystemStatics_eventAddNotificationFromError_Parms
		{
			UOperatingSystem* TargetOperatingSystem;
			FGenericError Error;
			EOperatingSystemNotificationCategory NotificationCategory;
			EOperatingSystemNotificationType Verbosity;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetOperatingSystem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Error_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Error;
		static const UECodeGen_Private::FBytePropertyParams NewProp_NotificationCategory_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NotificationCategory_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_NotificationCategory;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Verbosity_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Verbosity_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Verbosity;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOperatingSystemStatics_AddNotificationFromError_Statics::NewProp_TargetOperatingSystem = { "TargetOperatingSystem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemStatics_eventAddNotificationFromError_Parms, TargetOperatingSystem), Z_Construct_UClass_UOperatingSystem_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemStatics_AddNotificationFromError_Statics::NewProp_Error_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOperatingSystemStatics_AddNotificationFromError_Statics::NewProp_Error = { "Error", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemStatics_eventAddNotificationFromError_Parms, Error), Z_Construct_UScriptStruct_FGenericError, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemStatics_AddNotificationFromError_Statics::NewProp_Error_MetaData), Z_Construct_UFunction_UOperatingSystemStatics_AddNotificationFromError_Statics::NewProp_Error_MetaData) }; // 4286029882
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOperatingSystemStatics_AddNotificationFromError_Statics::NewProp_NotificationCategory_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemStatics_AddNotificationFromError_Statics::NewProp_NotificationCategory_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOperatingSystemStatics_AddNotificationFromError_Statics::NewProp_NotificationCategory = { "NotificationCategory", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemStatics_eventAddNotificationFromError_Parms, NotificationCategory), Z_Construct_UEnum_OperatingSystemSimulator_EOperatingSystemNotificationCategory, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemStatics_AddNotificationFromError_Statics::NewProp_NotificationCategory_MetaData), Z_Construct_UFunction_UOperatingSystemStatics_AddNotificationFromError_Statics::NewProp_NotificationCategory_MetaData) }; // 1998519099
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOperatingSystemStatics_AddNotificationFromError_Statics::NewProp_Verbosity_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemStatics_AddNotificationFromError_Statics::NewProp_Verbosity_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOperatingSystemStatics_AddNotificationFromError_Statics::NewProp_Verbosity = { "Verbosity", nullptr, (EPropertyFlags)0x0010040000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemStatics_eventAddNotificationFromError_Parms, Verbosity), Z_Construct_UEnum_OperatingSystemSimulator_EOperatingSystemNotificationType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemStatics_AddNotificationFromError_Statics::NewProp_Verbosity_MetaData), Z_Construct_UFunction_UOperatingSystemStatics_AddNotificationFromError_Statics::NewProp_Verbosity_MetaData) }; // 3889312608
	void Z_Construct_UFunction_UOperatingSystemStatics_AddNotificationFromError_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OperatingSystemStatics_eventAddNotificationFromError_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOperatingSystemStatics_AddNotificationFromError_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OperatingSystemStatics_eventAddNotificationFromError_Parms), &Z_Construct_UFunction_UOperatingSystemStatics_AddNotificationFromError_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperatingSystemStatics_AddNotificationFromError_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemStatics_AddNotificationFromError_Statics::NewProp_TargetOperatingSystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemStatics_AddNotificationFromError_Statics::NewProp_Error,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemStatics_AddNotificationFromError_Statics::NewProp_NotificationCategory_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemStatics_AddNotificationFromError_Statics::NewProp_NotificationCategory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemStatics_AddNotificationFromError_Statics::NewProp_Verbosity_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemStatics_AddNotificationFromError_Statics::NewProp_Verbosity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemStatics_AddNotificationFromError_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemStatics_AddNotificationFromError_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "3" },
		{ "Category", "OperatingSystemStatics" },
		{ "CPP_Default_Verbosity", "Error" },
		{ "ModuleRelativePath", "Public/Global/OperatingSystemStatics.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystemStatics_AddNotificationFromError_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystemStatics, nullptr, "AddNotificationFromError", nullptr, nullptr, Z_Construct_UFunction_UOperatingSystemStatics_AddNotificationFromError_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemStatics_AddNotificationFromError_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOperatingSystemStatics_AddNotificationFromError_Statics::OperatingSystemStatics_eventAddNotificationFromError_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemStatics_AddNotificationFromError_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystemStatics_AddNotificationFromError_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemStatics_AddNotificationFromError_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOperatingSystemStatics_AddNotificationFromError_Statics::OperatingSystemStatics_eventAddNotificationFromError_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOperatingSystemStatics_AddNotificationFromError()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystemStatics_AddNotificationFromError_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOperatingSystemStatics_ConvertBytes_ToGB_Statics
	{
		struct OperatingSystemStatics_eventConvertBytes_ToGB_Parms
		{
			double SizeInBytes;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SizeInBytes_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_SizeInBytes;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemStatics_ConvertBytes_ToGB_Statics::NewProp_SizeInBytes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UOperatingSystemStatics_ConvertBytes_ToGB_Statics::NewProp_SizeInBytes = { "SizeInBytes", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemStatics_eventConvertBytes_ToGB_Parms, SizeInBytes), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemStatics_ConvertBytes_ToGB_Statics::NewProp_SizeInBytes_MetaData), Z_Construct_UFunction_UOperatingSystemStatics_ConvertBytes_ToGB_Statics::NewProp_SizeInBytes_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOperatingSystemStatics_ConvertBytes_ToGB_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemStatics_eventConvertBytes_ToGB_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperatingSystemStatics_ConvertBytes_ToGB_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemStatics_ConvertBytes_ToGB_Statics::NewProp_SizeInBytes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemStatics_ConvertBytes_ToGB_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemStatics_ConvertBytes_ToGB_Statics::Function_MetaDataParams[] = {
		{ "Category", "OperatingSystemStatics" },
		{ "CompactNodeTitle", "B => GB" },
		{ "ModuleRelativePath", "Public/Global/OperatingSystemStatics.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystemStatics_ConvertBytes_ToGB_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystemStatics, nullptr, "ConvertBytes_ToGB", nullptr, nullptr, Z_Construct_UFunction_UOperatingSystemStatics_ConvertBytes_ToGB_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemStatics_ConvertBytes_ToGB_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOperatingSystemStatics_ConvertBytes_ToGB_Statics::OperatingSystemStatics_eventConvertBytes_ToGB_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemStatics_ConvertBytes_ToGB_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystemStatics_ConvertBytes_ToGB_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemStatics_ConvertBytes_ToGB_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOperatingSystemStatics_ConvertBytes_ToGB_Statics::OperatingSystemStatics_eventConvertBytes_ToGB_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOperatingSystemStatics_ConvertBytes_ToGB()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystemStatics_ConvertBytes_ToGB_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOperatingSystemStatics_ConvertBytes_ToMB_Statics
	{
		struct OperatingSystemStatics_eventConvertBytes_ToMB_Parms
		{
			double SizeInBytes;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SizeInBytes_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_SizeInBytes;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemStatics_ConvertBytes_ToMB_Statics::NewProp_SizeInBytes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UOperatingSystemStatics_ConvertBytes_ToMB_Statics::NewProp_SizeInBytes = { "SizeInBytes", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemStatics_eventConvertBytes_ToMB_Parms, SizeInBytes), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemStatics_ConvertBytes_ToMB_Statics::NewProp_SizeInBytes_MetaData), Z_Construct_UFunction_UOperatingSystemStatics_ConvertBytes_ToMB_Statics::NewProp_SizeInBytes_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOperatingSystemStatics_ConvertBytes_ToMB_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemStatics_eventConvertBytes_ToMB_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperatingSystemStatics_ConvertBytes_ToMB_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemStatics_ConvertBytes_ToMB_Statics::NewProp_SizeInBytes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemStatics_ConvertBytes_ToMB_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemStatics_ConvertBytes_ToMB_Statics::Function_MetaDataParams[] = {
		{ "Category", "OperatingSystemStatics" },
		{ "CompactNodeTitle", "B => MB" },
		{ "ModuleRelativePath", "Public/Global/OperatingSystemStatics.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystemStatics_ConvertBytes_ToMB_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystemStatics, nullptr, "ConvertBytes_ToMB", nullptr, nullptr, Z_Construct_UFunction_UOperatingSystemStatics_ConvertBytes_ToMB_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemStatics_ConvertBytes_ToMB_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOperatingSystemStatics_ConvertBytes_ToMB_Statics::OperatingSystemStatics_eventConvertBytes_ToMB_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemStatics_ConvertBytes_ToMB_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystemStatics_ConvertBytes_ToMB_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemStatics_ConvertBytes_ToMB_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOperatingSystemStatics_ConvertBytes_ToMB_Statics::OperatingSystemStatics_eventConvertBytes_ToMB_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOperatingSystemStatics_ConvertBytes_ToMB()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystemStatics_ConvertBytes_ToMB_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOperatingSystemStatics_ConvertGB_ToBytes_Statics
	{
		struct OperatingSystemStatics_eventConvertGB_ToBytes_Parms
		{
			float SizeInGB;
			double ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SizeInGB_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SizeInGB;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemStatics_ConvertGB_ToBytes_Statics::NewProp_SizeInGB_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOperatingSystemStatics_ConvertGB_ToBytes_Statics::NewProp_SizeInGB = { "SizeInGB", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemStatics_eventConvertGB_ToBytes_Parms, SizeInGB), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemStatics_ConvertGB_ToBytes_Statics::NewProp_SizeInGB_MetaData), Z_Construct_UFunction_UOperatingSystemStatics_ConvertGB_ToBytes_Statics::NewProp_SizeInGB_MetaData) };
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UOperatingSystemStatics_ConvertGB_ToBytes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemStatics_eventConvertGB_ToBytes_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperatingSystemStatics_ConvertGB_ToBytes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemStatics_ConvertGB_ToBytes_Statics::NewProp_SizeInGB,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemStatics_ConvertGB_ToBytes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemStatics_ConvertGB_ToBytes_Statics::Function_MetaDataParams[] = {
		{ "Category", "OperatingSystemStatics" },
		{ "CompactNodeTitle", "GB => B" },
		{ "ModuleRelativePath", "Public/Global/OperatingSystemStatics.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystemStatics_ConvertGB_ToBytes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystemStatics, nullptr, "ConvertGB_ToBytes", nullptr, nullptr, Z_Construct_UFunction_UOperatingSystemStatics_ConvertGB_ToBytes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemStatics_ConvertGB_ToBytes_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOperatingSystemStatics_ConvertGB_ToBytes_Statics::OperatingSystemStatics_eventConvertGB_ToBytes_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemStatics_ConvertGB_ToBytes_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystemStatics_ConvertGB_ToBytes_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemStatics_ConvertGB_ToBytes_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOperatingSystemStatics_ConvertGB_ToBytes_Statics::OperatingSystemStatics_eventConvertGB_ToBytes_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOperatingSystemStatics_ConvertGB_ToBytes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystemStatics_ConvertGB_ToBytes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOperatingSystemStatics_ConvertGB_ToMB_Statics
	{
		struct OperatingSystemStatics_eventConvertGB_ToMB_Parms
		{
			float SizeInGB;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SizeInGB_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SizeInGB;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemStatics_ConvertGB_ToMB_Statics::NewProp_SizeInGB_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOperatingSystemStatics_ConvertGB_ToMB_Statics::NewProp_SizeInGB = { "SizeInGB", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemStatics_eventConvertGB_ToMB_Parms, SizeInGB), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemStatics_ConvertGB_ToMB_Statics::NewProp_SizeInGB_MetaData), Z_Construct_UFunction_UOperatingSystemStatics_ConvertGB_ToMB_Statics::NewProp_SizeInGB_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOperatingSystemStatics_ConvertGB_ToMB_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemStatics_eventConvertGB_ToMB_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperatingSystemStatics_ConvertGB_ToMB_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemStatics_ConvertGB_ToMB_Statics::NewProp_SizeInGB,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemStatics_ConvertGB_ToMB_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemStatics_ConvertGB_ToMB_Statics::Function_MetaDataParams[] = {
		{ "Category", "OperatingSystemStatics" },
		{ "CompactNodeTitle", "GB => MB" },
		{ "ModuleRelativePath", "Public/Global/OperatingSystemStatics.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystemStatics_ConvertGB_ToMB_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystemStatics, nullptr, "ConvertGB_ToMB", nullptr, nullptr, Z_Construct_UFunction_UOperatingSystemStatics_ConvertGB_ToMB_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemStatics_ConvertGB_ToMB_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOperatingSystemStatics_ConvertGB_ToMB_Statics::OperatingSystemStatics_eventConvertGB_ToMB_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemStatics_ConvertGB_ToMB_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystemStatics_ConvertGB_ToMB_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemStatics_ConvertGB_ToMB_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOperatingSystemStatics_ConvertGB_ToMB_Statics::OperatingSystemStatics_eventConvertGB_ToMB_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOperatingSystemStatics_ConvertGB_ToMB()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystemStatics_ConvertGB_ToMB_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOperatingSystemStatics_ConvertMB_ToBytes_Statics
	{
		struct OperatingSystemStatics_eventConvertMB_ToBytes_Parms
		{
			float SizeInMB;
			double ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SizeInMB_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SizeInMB;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemStatics_ConvertMB_ToBytes_Statics::NewProp_SizeInMB_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOperatingSystemStatics_ConvertMB_ToBytes_Statics::NewProp_SizeInMB = { "SizeInMB", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemStatics_eventConvertMB_ToBytes_Parms, SizeInMB), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemStatics_ConvertMB_ToBytes_Statics::NewProp_SizeInMB_MetaData), Z_Construct_UFunction_UOperatingSystemStatics_ConvertMB_ToBytes_Statics::NewProp_SizeInMB_MetaData) };
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UOperatingSystemStatics_ConvertMB_ToBytes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemStatics_eventConvertMB_ToBytes_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperatingSystemStatics_ConvertMB_ToBytes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemStatics_ConvertMB_ToBytes_Statics::NewProp_SizeInMB,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemStatics_ConvertMB_ToBytes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemStatics_ConvertMB_ToBytes_Statics::Function_MetaDataParams[] = {
		{ "Category", "OperatingSystemStatics" },
		{ "CompactNodeTitle", "MB => B" },
		{ "ModuleRelativePath", "Public/Global/OperatingSystemStatics.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystemStatics_ConvertMB_ToBytes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystemStatics, nullptr, "ConvertMB_ToBytes", nullptr, nullptr, Z_Construct_UFunction_UOperatingSystemStatics_ConvertMB_ToBytes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemStatics_ConvertMB_ToBytes_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOperatingSystemStatics_ConvertMB_ToBytes_Statics::OperatingSystemStatics_eventConvertMB_ToBytes_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemStatics_ConvertMB_ToBytes_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystemStatics_ConvertMB_ToBytes_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemStatics_ConvertMB_ToBytes_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOperatingSystemStatics_ConvertMB_ToBytes_Statics::OperatingSystemStatics_eventConvertMB_ToBytes_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOperatingSystemStatics_ConvertMB_ToBytes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystemStatics_ConvertMB_ToBytes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOperatingSystemStatics_ConvertMB_ToGB_Statics
	{
		struct OperatingSystemStatics_eventConvertMB_ToGB_Parms
		{
			float SizeInMB;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SizeInMB_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SizeInMB;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemStatics_ConvertMB_ToGB_Statics::NewProp_SizeInMB_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOperatingSystemStatics_ConvertMB_ToGB_Statics::NewProp_SizeInMB = { "SizeInMB", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemStatics_eventConvertMB_ToGB_Parms, SizeInMB), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemStatics_ConvertMB_ToGB_Statics::NewProp_SizeInMB_MetaData), Z_Construct_UFunction_UOperatingSystemStatics_ConvertMB_ToGB_Statics::NewProp_SizeInMB_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOperatingSystemStatics_ConvertMB_ToGB_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemStatics_eventConvertMB_ToGB_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperatingSystemStatics_ConvertMB_ToGB_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemStatics_ConvertMB_ToGB_Statics::NewProp_SizeInMB,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemStatics_ConvertMB_ToGB_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemStatics_ConvertMB_ToGB_Statics::Function_MetaDataParams[] = {
		{ "Category", "OperatingSystemStatics" },
		{ "CompactNodeTitle", "MB => GB" },
		{ "ModuleRelativePath", "Public/Global/OperatingSystemStatics.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystemStatics_ConvertMB_ToGB_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystemStatics, nullptr, "ConvertMB_ToGB", nullptr, nullptr, Z_Construct_UFunction_UOperatingSystemStatics_ConvertMB_ToGB_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemStatics_ConvertMB_ToGB_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOperatingSystemStatics_ConvertMB_ToGB_Statics::OperatingSystemStatics_eventConvertMB_ToGB_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemStatics_ConvertMB_ToGB_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystemStatics_ConvertMB_ToGB_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemStatics_ConvertMB_ToGB_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOperatingSystemStatics_ConvertMB_ToGB_Statics::OperatingSystemStatics_eventConvertMB_ToGB_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOperatingSystemStatics_ConvertMB_ToGB()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystemStatics_ConvertMB_ToGB_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOperatingSystemStatics_CreateGenericError_Statics
	{
		struct OperatingSystemStatics_eventCreateGenericError_Parms
		{
			FText ErrorCode;
			FText ErrorDescription;
			FGenericError ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ErrorCode_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_ErrorCode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ErrorDescription_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_ErrorDescription;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemStatics_CreateGenericError_Statics::NewProp_ErrorCode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UOperatingSystemStatics_CreateGenericError_Statics::NewProp_ErrorCode = { "ErrorCode", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemStatics_eventCreateGenericError_Parms, ErrorCode), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemStatics_CreateGenericError_Statics::NewProp_ErrorCode_MetaData), Z_Construct_UFunction_UOperatingSystemStatics_CreateGenericError_Statics::NewProp_ErrorCode_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemStatics_CreateGenericError_Statics::NewProp_ErrorDescription_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UOperatingSystemStatics_CreateGenericError_Statics::NewProp_ErrorDescription = { "ErrorDescription", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemStatics_eventCreateGenericError_Parms, ErrorDescription), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemStatics_CreateGenericError_Statics::NewProp_ErrorDescription_MetaData), Z_Construct_UFunction_UOperatingSystemStatics_CreateGenericError_Statics::NewProp_ErrorDescription_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOperatingSystemStatics_CreateGenericError_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemStatics_eventCreateGenericError_Parms, ReturnValue), Z_Construct_UScriptStruct_FGenericError, METADATA_PARAMS(0, nullptr) }; // 4286029882
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperatingSystemStatics_CreateGenericError_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemStatics_CreateGenericError_Statics::NewProp_ErrorCode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemStatics_CreateGenericError_Statics::NewProp_ErrorDescription,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemStatics_CreateGenericError_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemStatics_CreateGenericError_Statics::Function_MetaDataParams[] = {
		{ "Category", "OperatingSystemStatics" },
		{ "ModuleRelativePath", "Public/Global/OperatingSystemStatics.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystemStatics_CreateGenericError_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystemStatics, nullptr, "CreateGenericError", nullptr, nullptr, Z_Construct_UFunction_UOperatingSystemStatics_CreateGenericError_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemStatics_CreateGenericError_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOperatingSystemStatics_CreateGenericError_Statics::OperatingSystemStatics_eventCreateGenericError_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemStatics_CreateGenericError_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystemStatics_CreateGenericError_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemStatics_CreateGenericError_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOperatingSystemStatics_CreateGenericError_Statics::OperatingSystemStatics_eventCreateGenericError_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOperatingSystemStatics_CreateGenericError()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystemStatics_CreateGenericError_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOperatingSystemStatics_CreateNotification_Statics
	{
		struct OperatingSystemStatics_eventCreateNotification_Parms
		{
			FText Title;
			FText Description;
			EOperatingSystemNotificationCategory NotificationCategory;
			EOperatingSystemNotificationType Verbosity;
			TSoftObjectPtr<UTexture2D> Icon;
			FText Code;
			FOperatingSystemNotification ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Title_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Title;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Description;
		static const UECodeGen_Private::FBytePropertyParams NewProp_NotificationCategory_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NotificationCategory_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_NotificationCategory;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Verbosity_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Verbosity_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Verbosity;
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Icon;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Code_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Code;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemStatics_CreateNotification_Statics::NewProp_Title_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UOperatingSystemStatics_CreateNotification_Statics::NewProp_Title = { "Title", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemStatics_eventCreateNotification_Parms, Title), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemStatics_CreateNotification_Statics::NewProp_Title_MetaData), Z_Construct_UFunction_UOperatingSystemStatics_CreateNotification_Statics::NewProp_Title_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemStatics_CreateNotification_Statics::NewProp_Description_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UOperatingSystemStatics_CreateNotification_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemStatics_eventCreateNotification_Parms, Description), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemStatics_CreateNotification_Statics::NewProp_Description_MetaData), Z_Construct_UFunction_UOperatingSystemStatics_CreateNotification_Statics::NewProp_Description_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOperatingSystemStatics_CreateNotification_Statics::NewProp_NotificationCategory_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemStatics_CreateNotification_Statics::NewProp_NotificationCategory_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOperatingSystemStatics_CreateNotification_Statics::NewProp_NotificationCategory = { "NotificationCategory", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemStatics_eventCreateNotification_Parms, NotificationCategory), Z_Construct_UEnum_OperatingSystemSimulator_EOperatingSystemNotificationCategory, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemStatics_CreateNotification_Statics::NewProp_NotificationCategory_MetaData), Z_Construct_UFunction_UOperatingSystemStatics_CreateNotification_Statics::NewProp_NotificationCategory_MetaData) }; // 1998519099
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOperatingSystemStatics_CreateNotification_Statics::NewProp_Verbosity_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemStatics_CreateNotification_Statics::NewProp_Verbosity_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOperatingSystemStatics_CreateNotification_Statics::NewProp_Verbosity = { "Verbosity", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemStatics_eventCreateNotification_Parms, Verbosity), Z_Construct_UEnum_OperatingSystemSimulator_EOperatingSystemNotificationType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemStatics_CreateNotification_Statics::NewProp_Verbosity_MetaData), Z_Construct_UFunction_UOperatingSystemStatics_CreateNotification_Statics::NewProp_Verbosity_MetaData) }; // 3889312608
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_UOperatingSystemStatics_CreateNotification_Statics::NewProp_Icon = { "Icon", nullptr, (EPropertyFlags)0x0014040000000080, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemStatics_eventCreateNotification_Parms, Icon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemStatics_CreateNotification_Statics::NewProp_Code_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UOperatingSystemStatics_CreateNotification_Statics::NewProp_Code = { "Code", nullptr, (EPropertyFlags)0x0010040000000082, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemStatics_eventCreateNotification_Parms, Code), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemStatics_CreateNotification_Statics::NewProp_Code_MetaData), Z_Construct_UFunction_UOperatingSystemStatics_CreateNotification_Statics::NewProp_Code_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOperatingSystemStatics_CreateNotification_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemStatics_eventCreateNotification_Parms, ReturnValue), Z_Construct_UScriptStruct_FOperatingSystemNotification, METADATA_PARAMS(0, nullptr) }; // 2023410135
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperatingSystemStatics_CreateNotification_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemStatics_CreateNotification_Statics::NewProp_Title,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemStatics_CreateNotification_Statics::NewProp_Description,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemStatics_CreateNotification_Statics::NewProp_NotificationCategory_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemStatics_CreateNotification_Statics::NewProp_NotificationCategory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemStatics_CreateNotification_Statics::NewProp_Verbosity_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemStatics_CreateNotification_Statics::NewProp_Verbosity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemStatics_CreateNotification_Statics::NewProp_Icon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemStatics_CreateNotification_Statics::NewProp_Code,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemStatics_CreateNotification_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemStatics_CreateNotification_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "4" },
		{ "Category", "OperatingSystemStatics" },
		{ "ModuleRelativePath", "Public/Global/OperatingSystemStatics.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystemStatics_CreateNotification_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystemStatics, nullptr, "CreateNotification", nullptr, nullptr, Z_Construct_UFunction_UOperatingSystemStatics_CreateNotification_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemStatics_CreateNotification_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOperatingSystemStatics_CreateNotification_Statics::OperatingSystemStatics_eventCreateNotification_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemStatics_CreateNotification_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystemStatics_CreateNotification_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemStatics_CreateNotification_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOperatingSystemStatics_CreateNotification_Statics::OperatingSystemStatics_eventCreateNotification_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOperatingSystemStatics_CreateNotification()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystemStatics_CreateNotification_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOperatingSystemStatics_DeterminePasswordStrength_Statics
	{
		struct OperatingSystemStatics_eventDeterminePasswordStrength_Parms
		{
			FString Input;
			EOperatingSystemPasswordStrength ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Input;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemStatics_DeterminePasswordStrength_Statics::NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOperatingSystemStatics_DeterminePasswordStrength_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemStatics_eventDeterminePasswordStrength_Parms, Input), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemStatics_DeterminePasswordStrength_Statics::NewProp_Input_MetaData), Z_Construct_UFunction_UOperatingSystemStatics_DeterminePasswordStrength_Statics::NewProp_Input_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOperatingSystemStatics_DeterminePasswordStrength_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOperatingSystemStatics_DeterminePasswordStrength_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemStatics_eventDeterminePasswordStrength_Parms, ReturnValue), Z_Construct_UEnum_OperatingSystemSimulator_EOperatingSystemPasswordStrength, METADATA_PARAMS(0, nullptr) }; // 1152089991
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperatingSystemStatics_DeterminePasswordStrength_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemStatics_DeterminePasswordStrength_Statics::NewProp_Input,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemStatics_DeterminePasswordStrength_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemStatics_DeterminePasswordStrength_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemStatics_DeterminePasswordStrength_Statics::Function_MetaDataParams[] = {
		{ "Category", "OperatingSystemStatics" },
		{ "ModuleRelativePath", "Public/Global/OperatingSystemStatics.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystemStatics_DeterminePasswordStrength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystemStatics, nullptr, "DeterminePasswordStrength", nullptr, nullptr, Z_Construct_UFunction_UOperatingSystemStatics_DeterminePasswordStrength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemStatics_DeterminePasswordStrength_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOperatingSystemStatics_DeterminePasswordStrength_Statics::OperatingSystemStatics_eventDeterminePasswordStrength_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemStatics_DeterminePasswordStrength_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystemStatics_DeterminePasswordStrength_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemStatics_DeterminePasswordStrength_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOperatingSystemStatics_DeterminePasswordStrength_Statics::OperatingSystemStatics_eventDeterminePasswordStrength_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOperatingSystemStatics_DeterminePasswordStrength()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystemStatics_DeterminePasswordStrength_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOperatingSystemStatics_Equal_Version_Statics
	{
		struct OperatingSystemStatics_eventEqual_Version_Parms
		{
			FVersion VersionOne;
			FVersion VersionTwo;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VersionOne_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_VersionOne;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VersionTwo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_VersionTwo;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemStatics_Equal_Version_Statics::NewProp_VersionOne_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOperatingSystemStatics_Equal_Version_Statics::NewProp_VersionOne = { "VersionOne", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemStatics_eventEqual_Version_Parms, VersionOne), Z_Construct_UScriptStruct_FVersion, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemStatics_Equal_Version_Statics::NewProp_VersionOne_MetaData), Z_Construct_UFunction_UOperatingSystemStatics_Equal_Version_Statics::NewProp_VersionOne_MetaData) }; // 2963316928
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemStatics_Equal_Version_Statics::NewProp_VersionTwo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOperatingSystemStatics_Equal_Version_Statics::NewProp_VersionTwo = { "VersionTwo", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemStatics_eventEqual_Version_Parms, VersionTwo), Z_Construct_UScriptStruct_FVersion, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemStatics_Equal_Version_Statics::NewProp_VersionTwo_MetaData), Z_Construct_UFunction_UOperatingSystemStatics_Equal_Version_Statics::NewProp_VersionTwo_MetaData) }; // 2963316928
	void Z_Construct_UFunction_UOperatingSystemStatics_Equal_Version_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OperatingSystemStatics_eventEqual_Version_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOperatingSystemStatics_Equal_Version_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OperatingSystemStatics_eventEqual_Version_Parms), &Z_Construct_UFunction_UOperatingSystemStatics_Equal_Version_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperatingSystemStatics_Equal_Version_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemStatics_Equal_Version_Statics::NewProp_VersionOne,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemStatics_Equal_Version_Statics::NewProp_VersionTwo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemStatics_Equal_Version_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemStatics_Equal_Version_Statics::Function_MetaDataParams[] = {
		{ "Category", "OperatingSystemStatics" },
		{ "CompactNodeTitle", "==" },
		{ "ModuleRelativePath", "Public/Global/OperatingSystemStatics.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystemStatics_Equal_Version_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystemStatics, nullptr, "Equal_Version", nullptr, nullptr, Z_Construct_UFunction_UOperatingSystemStatics_Equal_Version_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemStatics_Equal_Version_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOperatingSystemStatics_Equal_Version_Statics::OperatingSystemStatics_eventEqual_Version_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14482401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemStatics_Equal_Version_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystemStatics_Equal_Version_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemStatics_Equal_Version_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOperatingSystemStatics_Equal_Version_Statics::OperatingSystemStatics_eventEqual_Version_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOperatingSystemStatics_Equal_Version()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystemStatics_Equal_Version_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOperatingSystemStatics_FindDeviceActorByTag_Statics
	{
		struct OperatingSystemStatics_eventFindDeviceActorByTag_Parms
		{
			const UObject* WorldContextObject;
			FGameplayTag TestTag;
			AOperatingSystemDeviceActor* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TestTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TestTag;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemStatics_FindDeviceActorByTag_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOperatingSystemStatics_FindDeviceActorByTag_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemStatics_eventFindDeviceActorByTag_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemStatics_FindDeviceActorByTag_Statics::NewProp_WorldContextObject_MetaData), Z_Construct_UFunction_UOperatingSystemStatics_FindDeviceActorByTag_Statics::NewProp_WorldContextObject_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemStatics_FindDeviceActorByTag_Statics::NewProp_TestTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOperatingSystemStatics_FindDeviceActorByTag_Statics::NewProp_TestTag = { "TestTag", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemStatics_eventFindDeviceActorByTag_Parms, TestTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemStatics_FindDeviceActorByTag_Statics::NewProp_TestTag_MetaData), Z_Construct_UFunction_UOperatingSystemStatics_FindDeviceActorByTag_Statics::NewProp_TestTag_MetaData) }; // 2083603574
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOperatingSystemStatics_FindDeviceActorByTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemStatics_eventFindDeviceActorByTag_Parms, ReturnValue), Z_Construct_UClass_AOperatingSystemDeviceActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperatingSystemStatics_FindDeviceActorByTag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemStatics_FindDeviceActorByTag_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemStatics_FindDeviceActorByTag_Statics::NewProp_TestTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemStatics_FindDeviceActorByTag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemStatics_FindDeviceActorByTag_Statics::Function_MetaDataParams[] = {
		{ "Categories", "OperatingSystem.Devices" },
		{ "Category", "OperatingSystemStatics" },
		{ "ModuleRelativePath", "Public/Global/OperatingSystemStatics.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystemStatics_FindDeviceActorByTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystemStatics, nullptr, "FindDeviceActorByTag", nullptr, nullptr, Z_Construct_UFunction_UOperatingSystemStatics_FindDeviceActorByTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemStatics_FindDeviceActorByTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOperatingSystemStatics_FindDeviceActorByTag_Statics::OperatingSystemStatics_eventFindDeviceActorByTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemStatics_FindDeviceActorByTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystemStatics_FindDeviceActorByTag_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemStatics_FindDeviceActorByTag_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOperatingSystemStatics_FindDeviceActorByTag_Statics::OperatingSystemStatics_eventFindDeviceActorByTag_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOperatingSystemStatics_FindDeviceActorByTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystemStatics_FindDeviceActorByTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOperatingSystemStatics_FindDeviceActorsByTag_Statics
	{
		struct OperatingSystemStatics_eventFindDeviceActorsByTag_Parms
		{
			const UObject* WorldContextObject;
			FGameplayTag TestTag;
			TArray<AOperatingSystemDeviceActor*> OutDeviceActors;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TestTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TestTag;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OutDeviceActors_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutDeviceActors;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemStatics_FindDeviceActorsByTag_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOperatingSystemStatics_FindDeviceActorsByTag_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemStatics_eventFindDeviceActorsByTag_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemStatics_FindDeviceActorsByTag_Statics::NewProp_WorldContextObject_MetaData), Z_Construct_UFunction_UOperatingSystemStatics_FindDeviceActorsByTag_Statics::NewProp_WorldContextObject_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemStatics_FindDeviceActorsByTag_Statics::NewProp_TestTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOperatingSystemStatics_FindDeviceActorsByTag_Statics::NewProp_TestTag = { "TestTag", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemStatics_eventFindDeviceActorsByTag_Parms, TestTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemStatics_FindDeviceActorsByTag_Statics::NewProp_TestTag_MetaData), Z_Construct_UFunction_UOperatingSystemStatics_FindDeviceActorsByTag_Statics::NewProp_TestTag_MetaData) }; // 2083603574
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOperatingSystemStatics_FindDeviceActorsByTag_Statics::NewProp_OutDeviceActors_Inner = { "OutDeviceActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AOperatingSystemDeviceActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOperatingSystemStatics_FindDeviceActorsByTag_Statics::NewProp_OutDeviceActors = { "OutDeviceActors", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemStatics_eventFindDeviceActorsByTag_Parms, OutDeviceActors), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperatingSystemStatics_FindDeviceActorsByTag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemStatics_FindDeviceActorsByTag_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemStatics_FindDeviceActorsByTag_Statics::NewProp_TestTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemStatics_FindDeviceActorsByTag_Statics::NewProp_OutDeviceActors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemStatics_FindDeviceActorsByTag_Statics::NewProp_OutDeviceActors,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemStatics_FindDeviceActorsByTag_Statics::Function_MetaDataParams[] = {
		{ "Categories", "OperatingSystem.Devices" },
		{ "Category", "OperatingSystemStatics" },
		{ "ModuleRelativePath", "Public/Global/OperatingSystemStatics.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystemStatics_FindDeviceActorsByTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystemStatics, nullptr, "FindDeviceActorsByTag", nullptr, nullptr, Z_Construct_UFunction_UOperatingSystemStatics_FindDeviceActorsByTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemStatics_FindDeviceActorsByTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOperatingSystemStatics_FindDeviceActorsByTag_Statics::OperatingSystemStatics_eventFindDeviceActorsByTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemStatics_FindDeviceActorsByTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystemStatics_FindDeviceActorsByTag_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemStatics_FindDeviceActorsByTag_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOperatingSystemStatics_FindDeviceActorsByTag_Statics::OperatingSystemStatics_eventFindDeviceActorsByTag_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOperatingSystemStatics_FindDeviceActorsByTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystemStatics_FindDeviceActorsByTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOperatingSystemStatics_FindHardwareByTag_Statics
	{
		struct OperatingSystemStatics_eventFindHardwareByTag_Parms
		{
			const AOperatingSystemDeviceActor* TargetDevice;
			FGameplayTag HardwareTag;
			UOperatingSystemBaseHardware* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetDevice_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetDevice;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HardwareTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HardwareTag;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemStatics_FindHardwareByTag_Statics::NewProp_TargetDevice_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOperatingSystemStatics_FindHardwareByTag_Statics::NewProp_TargetDevice = { "TargetDevice", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemStatics_eventFindHardwareByTag_Parms, TargetDevice), Z_Construct_UClass_AOperatingSystemDeviceActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemStatics_FindHardwareByTag_Statics::NewProp_TargetDevice_MetaData), Z_Construct_UFunction_UOperatingSystemStatics_FindHardwareByTag_Statics::NewProp_TargetDevice_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemStatics_FindHardwareByTag_Statics::NewProp_HardwareTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOperatingSystemStatics_FindHardwareByTag_Statics::NewProp_HardwareTag = { "HardwareTag", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemStatics_eventFindHardwareByTag_Parms, HardwareTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemStatics_FindHardwareByTag_Statics::NewProp_HardwareTag_MetaData), Z_Construct_UFunction_UOperatingSystemStatics_FindHardwareByTag_Statics::NewProp_HardwareTag_MetaData) }; // 2083603574
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOperatingSystemStatics_FindHardwareByTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemStatics_eventFindHardwareByTag_Parms, ReturnValue), Z_Construct_UClass_UOperatingSystemBaseHardware_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperatingSystemStatics_FindHardwareByTag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemStatics_FindHardwareByTag_Statics::NewProp_TargetDevice,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemStatics_FindHardwareByTag_Statics::NewProp_HardwareTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemStatics_FindHardwareByTag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemStatics_FindHardwareByTag_Statics::Function_MetaDataParams[] = {
		{ "Categories", "OperatingSystem.Hardware.Type" },
		{ "Category", "OperatingSystemStatics" },
		{ "ModuleRelativePath", "Public/Global/OperatingSystemStatics.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystemStatics_FindHardwareByTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystemStatics, nullptr, "FindHardwareByTag", nullptr, nullptr, Z_Construct_UFunction_UOperatingSystemStatics_FindHardwareByTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemStatics_FindHardwareByTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOperatingSystemStatics_FindHardwareByTag_Statics::OperatingSystemStatics_eventFindHardwareByTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemStatics_FindHardwareByTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystemStatics_FindHardwareByTag_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemStatics_FindHardwareByTag_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOperatingSystemStatics_FindHardwareByTag_Statics::OperatingSystemStatics_eventFindHardwareByTag_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOperatingSystemStatics_FindHardwareByTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystemStatics_FindHardwareByTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOperatingSystemStatics_FindMessengerForDevice_Statics
	{
		struct OperatingSystemStatics_eventFindMessengerForDevice_Parms
		{
			const UObject* WorldContextObject;
			FGameplayTag TestTag;
			UOperatingSystemDeviceMessenger* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TestTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TestTag;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemStatics_FindMessengerForDevice_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOperatingSystemStatics_FindMessengerForDevice_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemStatics_eventFindMessengerForDevice_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemStatics_FindMessengerForDevice_Statics::NewProp_WorldContextObject_MetaData), Z_Construct_UFunction_UOperatingSystemStatics_FindMessengerForDevice_Statics::NewProp_WorldContextObject_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemStatics_FindMessengerForDevice_Statics::NewProp_TestTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOperatingSystemStatics_FindMessengerForDevice_Statics::NewProp_TestTag = { "TestTag", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemStatics_eventFindMessengerForDevice_Parms, TestTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemStatics_FindMessengerForDevice_Statics::NewProp_TestTag_MetaData), Z_Construct_UFunction_UOperatingSystemStatics_FindMessengerForDevice_Statics::NewProp_TestTag_MetaData) }; // 2083603574
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOperatingSystemStatics_FindMessengerForDevice_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemStatics_eventFindMessengerForDevice_Parms, ReturnValue), Z_Construct_UClass_UOperatingSystemDeviceMessenger_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperatingSystemStatics_FindMessengerForDevice_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemStatics_FindMessengerForDevice_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemStatics_FindMessengerForDevice_Statics::NewProp_TestTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemStatics_FindMessengerForDevice_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemStatics_FindMessengerForDevice_Statics::Function_MetaDataParams[] = {
		{ "Categories", "OperatingSystem.Devices" },
		{ "Category", "OperatingSystemStatics" },
		{ "Keywords", "get messenger" },
		{ "ModuleRelativePath", "Public/Global/OperatingSystemStatics.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystemStatics_FindMessengerForDevice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystemStatics, nullptr, "FindMessengerForDevice", nullptr, nullptr, Z_Construct_UFunction_UOperatingSystemStatics_FindMessengerForDevice_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemStatics_FindMessengerForDevice_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOperatingSystemStatics_FindMessengerForDevice_Statics::OperatingSystemStatics_eventFindMessengerForDevice_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemStatics_FindMessengerForDevice_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystemStatics_FindMessengerForDevice_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemStatics_FindMessengerForDevice_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOperatingSystemStatics_FindMessengerForDevice_Statics::OperatingSystemStatics_eventFindMessengerForDevice_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOperatingSystemStatics_FindMessengerForDevice()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystemStatics_FindMessengerForDevice_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOperatingSystemStatics_FindMessengerFromOperatingSystem_Statics
	{
		struct OperatingSystemStatics_eventFindMessengerFromOperatingSystem_Parms
		{
			const UOperatingSystem* TargetOS;
			UOperatingSystemDeviceMessenger* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetOS_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetOS;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemStatics_FindMessengerFromOperatingSystem_Statics::NewProp_TargetOS_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOperatingSystemStatics_FindMessengerFromOperatingSystem_Statics::NewProp_TargetOS = { "TargetOS", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemStatics_eventFindMessengerFromOperatingSystem_Parms, TargetOS), Z_Construct_UClass_UOperatingSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemStatics_FindMessengerFromOperatingSystem_Statics::NewProp_TargetOS_MetaData), Z_Construct_UFunction_UOperatingSystemStatics_FindMessengerFromOperatingSystem_Statics::NewProp_TargetOS_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOperatingSystemStatics_FindMessengerFromOperatingSystem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemStatics_eventFindMessengerFromOperatingSystem_Parms, ReturnValue), Z_Construct_UClass_UOperatingSystemDeviceMessenger_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperatingSystemStatics_FindMessengerFromOperatingSystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemStatics_FindMessengerFromOperatingSystem_Statics::NewProp_TargetOS,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemStatics_FindMessengerFromOperatingSystem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemStatics_FindMessengerFromOperatingSystem_Statics::Function_MetaDataParams[] = {
		{ "Category", "OperatingSystemStatics" },
		{ "Keywords", "get messenger" },
		{ "ModuleRelativePath", "Public/Global/OperatingSystemStatics.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystemStatics_FindMessengerFromOperatingSystem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystemStatics, nullptr, "FindMessengerFromOperatingSystem", nullptr, nullptr, Z_Construct_UFunction_UOperatingSystemStatics_FindMessengerFromOperatingSystem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemStatics_FindMessengerFromOperatingSystem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOperatingSystemStatics_FindMessengerFromOperatingSystem_Statics::OperatingSystemStatics_eventFindMessengerFromOperatingSystem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemStatics_FindMessengerFromOperatingSystem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystemStatics_FindMessengerFromOperatingSystem_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemStatics_FindMessengerFromOperatingSystem_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOperatingSystemStatics_FindMessengerFromOperatingSystem_Statics::OperatingSystemStatics_eventFindMessengerFromOperatingSystem_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOperatingSystemStatics_FindMessengerFromOperatingSystem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystemStatics_FindMessengerFromOperatingSystem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOperatingSystemStatics_GenerateRandomErrorCode_Statics
	{
		struct OperatingSystemStatics_eventGenerateRandomErrorCode_Parms
		{
			FText ReturnValue;
		};
		static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UOperatingSystemStatics_GenerateRandomErrorCode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemStatics_eventGenerateRandomErrorCode_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperatingSystemStatics_GenerateRandomErrorCode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemStatics_GenerateRandomErrorCode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemStatics_GenerateRandomErrorCode_Statics::Function_MetaDataParams[] = {
		{ "Category", "OperatingSystemStatics" },
		{ "ModuleRelativePath", "Public/Global/OperatingSystemStatics.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystemStatics_GenerateRandomErrorCode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystemStatics, nullptr, "GenerateRandomErrorCode", nullptr, nullptr, Z_Construct_UFunction_UOperatingSystemStatics_GenerateRandomErrorCode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemStatics_GenerateRandomErrorCode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOperatingSystemStatics_GenerateRandomErrorCode_Statics::OperatingSystemStatics_eventGenerateRandomErrorCode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemStatics_GenerateRandomErrorCode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystemStatics_GenerateRandomErrorCode_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemStatics_GenerateRandomErrorCode_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOperatingSystemStatics_GenerateRandomErrorCode_Statics::OperatingSystemStatics_eventGenerateRandomErrorCode_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOperatingSystemStatics_GenerateRandomErrorCode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystemStatics_GenerateRandomErrorCode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOperatingSystemStatics_GetCpuSocketName_Statics
	{
		struct OperatingSystemStatics_eventGetCpuSocketName_Parms
		{
			FGameplayTag SocketTag;
			FText OutValue;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SocketTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SocketTag;
		static const UECodeGen_Private::FTextPropertyParams NewProp_OutValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemStatics_GetCpuSocketName_Statics::NewProp_SocketTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOperatingSystemStatics_GetCpuSocketName_Statics::NewProp_SocketTag = { "SocketTag", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemStatics_eventGetCpuSocketName_Parms, SocketTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemStatics_GetCpuSocketName_Statics::NewProp_SocketTag_MetaData), Z_Construct_UFunction_UOperatingSystemStatics_GetCpuSocketName_Statics::NewProp_SocketTag_MetaData) }; // 2083603574
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UOperatingSystemStatics_GetCpuSocketName_Statics::NewProp_OutValue = { "OutValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemStatics_eventGetCpuSocketName_Parms, OutValue), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UOperatingSystemStatics_GetCpuSocketName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OperatingSystemStatics_eventGetCpuSocketName_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOperatingSystemStatics_GetCpuSocketName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OperatingSystemStatics_eventGetCpuSocketName_Parms), &Z_Construct_UFunction_UOperatingSystemStatics_GetCpuSocketName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperatingSystemStatics_GetCpuSocketName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemStatics_GetCpuSocketName_Statics::NewProp_SocketTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemStatics_GetCpuSocketName_Statics::NewProp_OutValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemStatics_GetCpuSocketName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemStatics_GetCpuSocketName_Statics::Function_MetaDataParams[] = {
		{ "Categories", "OperatingSystem.Hardware.CPU.Socket" },
		{ "Category", "OperatingSystemStatics" },
		{ "ModuleRelativePath", "Public/Global/OperatingSystemStatics.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystemStatics_GetCpuSocketName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystemStatics, nullptr, "GetCpuSocketName", nullptr, nullptr, Z_Construct_UFunction_UOperatingSystemStatics_GetCpuSocketName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemStatics_GetCpuSocketName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOperatingSystemStatics_GetCpuSocketName_Statics::OperatingSystemStatics_eventGetCpuSocketName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemStatics_GetCpuSocketName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystemStatics_GetCpuSocketName_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemStatics_GetCpuSocketName_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOperatingSystemStatics_GetCpuSocketName_Statics::OperatingSystemStatics_eventGetCpuSocketName_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOperatingSystemStatics_GetCpuSocketName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystemStatics_GetCpuSocketName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOperatingSystemStatics_GetCpuSpeedAsText_Statics
	{
		struct OperatingSystemStatics_eventGetCpuSpeedAsText_Parms
		{
			float CpuSpeedInGHz;
			bool bUseGHZ;
			FText ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CpuSpeedInGHz_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CpuSpeedInGHz;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseGHZ_MetaData[];
#endif
		static void NewProp_bUseGHZ_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseGHZ;
		static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemStatics_GetCpuSpeedAsText_Statics::NewProp_CpuSpeedInGHz_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOperatingSystemStatics_GetCpuSpeedAsText_Statics::NewProp_CpuSpeedInGHz = { "CpuSpeedInGHz", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemStatics_eventGetCpuSpeedAsText_Parms, CpuSpeedInGHz), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemStatics_GetCpuSpeedAsText_Statics::NewProp_CpuSpeedInGHz_MetaData), Z_Construct_UFunction_UOperatingSystemStatics_GetCpuSpeedAsText_Statics::NewProp_CpuSpeedInGHz_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemStatics_GetCpuSpeedAsText_Statics::NewProp_bUseGHZ_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UOperatingSystemStatics_GetCpuSpeedAsText_Statics::NewProp_bUseGHZ_SetBit(void* Obj)
	{
		((OperatingSystemStatics_eventGetCpuSpeedAsText_Parms*)Obj)->bUseGHZ = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOperatingSystemStatics_GetCpuSpeedAsText_Statics::NewProp_bUseGHZ = { "bUseGHZ", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OperatingSystemStatics_eventGetCpuSpeedAsText_Parms), &Z_Construct_UFunction_UOperatingSystemStatics_GetCpuSpeedAsText_Statics::NewProp_bUseGHZ_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemStatics_GetCpuSpeedAsText_Statics::NewProp_bUseGHZ_MetaData), Z_Construct_UFunction_UOperatingSystemStatics_GetCpuSpeedAsText_Statics::NewProp_bUseGHZ_MetaData) };
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UOperatingSystemStatics_GetCpuSpeedAsText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemStatics_eventGetCpuSpeedAsText_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperatingSystemStatics_GetCpuSpeedAsText_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemStatics_GetCpuSpeedAsText_Statics::NewProp_CpuSpeedInGHz,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemStatics_GetCpuSpeedAsText_Statics::NewProp_bUseGHZ,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemStatics_GetCpuSpeedAsText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemStatics_GetCpuSpeedAsText_Statics::Function_MetaDataParams[] = {
		{ "Category", "OperatingSystemStatics" },
		{ "Comment", "/**\n\x09* public\n\x09* static UOperatingSystemStatics::GetCpuSpeedAsText\n\x09* Returns the CPU speed as FText.\n\x09* @param CpuSpeedInGHz [const float&] CPU Speed in GHz.\n\x09* @param bUseGHZ [const bool] If true return value will use GHz. If false, it will be MHz.\n\x09* @return [FText] CPU Speed as FText.\n\x09**/" },
		{ "CPP_Default_bUseGHZ", "true" },
		{ "ModuleRelativePath", "Public/Global/OperatingSystemStatics.h" },
		{ "ToolTip", "public\nstatic UOperatingSystemStatics::GetCpuSpeedAsText\nReturns the CPU speed as FText.\n@param CpuSpeedInGHz [const float&] CPU Speed in GHz.\n@param bUseGHZ [const bool] If true return value will use GHz. If false, it will be MHz.\n@return [FText] CPU Speed as FText." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystemStatics_GetCpuSpeedAsText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystemStatics, nullptr, "GetCpuSpeedAsText", nullptr, nullptr, Z_Construct_UFunction_UOperatingSystemStatics_GetCpuSpeedAsText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemStatics_GetCpuSpeedAsText_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOperatingSystemStatics_GetCpuSpeedAsText_Statics::OperatingSystemStatics_eventGetCpuSpeedAsText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemStatics_GetCpuSpeedAsText_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystemStatics_GetCpuSpeedAsText_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemStatics_GetCpuSpeedAsText_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOperatingSystemStatics_GetCpuSpeedAsText_Statics::OperatingSystemStatics_eventGetCpuSpeedAsText_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOperatingSystemStatics_GetCpuSpeedAsText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystemStatics_GetCpuSpeedAsText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOperatingSystemStatics_GetDateAsText_Statics
	{
		struct OperatingSystemStatics_eventGetDateAsText_Parms
		{
			FDateTime DateTime;
			EOperatingSystemDateSeparator Separator;
			FText ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DateTime_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DateTime;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Separator_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Separator_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Separator;
		static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemStatics_GetDateAsText_Statics::NewProp_DateTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOperatingSystemStatics_GetDateAsText_Statics::NewProp_DateTime = { "DateTime", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemStatics_eventGetDateAsText_Parms, DateTime), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemStatics_GetDateAsText_Statics::NewProp_DateTime_MetaData), Z_Construct_UFunction_UOperatingSystemStatics_GetDateAsText_Statics::NewProp_DateTime_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOperatingSystemStatics_GetDateAsText_Statics::NewProp_Separator_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemStatics_GetDateAsText_Statics::NewProp_Separator_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOperatingSystemStatics_GetDateAsText_Statics::NewProp_Separator = { "Separator", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemStatics_eventGetDateAsText_Parms, Separator), Z_Construct_UEnum_OperatingSystemSimulator_EOperatingSystemDateSeparator, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemStatics_GetDateAsText_Statics::NewProp_Separator_MetaData), Z_Construct_UFunction_UOperatingSystemStatics_GetDateAsText_Statics::NewProp_Separator_MetaData) }; // 3286433650
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UOperatingSystemStatics_GetDateAsText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemStatics_eventGetDateAsText_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperatingSystemStatics_GetDateAsText_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemStatics_GetDateAsText_Statics::NewProp_DateTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemStatics_GetDateAsText_Statics::NewProp_Separator_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemStatics_GetDateAsText_Statics::NewProp_Separator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemStatics_GetDateAsText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemStatics_GetDateAsText_Statics::Function_MetaDataParams[] = {
		{ "Category", "OperatingSystemStatics" },
		{ "CPP_Default_Separator", "Dash" },
		{ "ModuleRelativePath", "Public/Global/OperatingSystemStatics.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystemStatics_GetDateAsText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystemStatics, nullptr, "GetDateAsText", nullptr, nullptr, Z_Construct_UFunction_UOperatingSystemStatics_GetDateAsText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemStatics_GetDateAsText_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOperatingSystemStatics_GetDateAsText_Statics::OperatingSystemStatics_eventGetDateAsText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemStatics_GetDateAsText_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystemStatics_GetDateAsText_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemStatics_GetDateAsText_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOperatingSystemStatics_GetDateAsText_Statics::OperatingSystemStatics_eventGetDateAsText_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOperatingSystemStatics_GetDateAsText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystemStatics_GetDateAsText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOperatingSystemStatics_GetSize_Statics
	{
		struct OperatingSystemStatics_eventGetSize_Parms
		{
			EOperatingSystemCommonSizes Size;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Size_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Size;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOperatingSystemStatics_GetSize_Statics::NewProp_Size_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemStatics_GetSize_Statics::NewProp_Size_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOperatingSystemStatics_GetSize_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemStatics_eventGetSize_Parms, Size), Z_Construct_UEnum_OperatingSystemSimulator_EOperatingSystemCommonSizes, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemStatics_GetSize_Statics::NewProp_Size_MetaData), Z_Construct_UFunction_UOperatingSystemStatics_GetSize_Statics::NewProp_Size_MetaData) }; // 167520951
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOperatingSystemStatics_GetSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemStatics_eventGetSize_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperatingSystemStatics_GetSize_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemStatics_GetSize_Statics::NewProp_Size_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemStatics_GetSize_Statics::NewProp_Size,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemStatics_GetSize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemStatics_GetSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "OperatingSystemStatics" },
		{ "ModuleRelativePath", "Public/Global/OperatingSystemStatics.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystemStatics_GetSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystemStatics, nullptr, "GetSize", nullptr, nullptr, Z_Construct_UFunction_UOperatingSystemStatics_GetSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemStatics_GetSize_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOperatingSystemStatics_GetSize_Statics::OperatingSystemStatics_eventGetSize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemStatics_GetSize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystemStatics_GetSize_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemStatics_GetSize_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOperatingSystemStatics_GetSize_Statics::OperatingSystemStatics_eventGetSize_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOperatingSystemStatics_GetSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystemStatics_GetSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOperatingSystemStatics_GetSizeAsText_Statics
	{
		struct OperatingSystemStatics_eventGetSizeAsText_Parms
		{
			EOperatingSystemCommonSizes Size;
			FText ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Size_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Size;
		static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOperatingSystemStatics_GetSizeAsText_Statics::NewProp_Size_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemStatics_GetSizeAsText_Statics::NewProp_Size_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOperatingSystemStatics_GetSizeAsText_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemStatics_eventGetSizeAsText_Parms, Size), Z_Construct_UEnum_OperatingSystemSimulator_EOperatingSystemCommonSizes, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemStatics_GetSizeAsText_Statics::NewProp_Size_MetaData), Z_Construct_UFunction_UOperatingSystemStatics_GetSizeAsText_Statics::NewProp_Size_MetaData) }; // 167520951
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UOperatingSystemStatics_GetSizeAsText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemStatics_eventGetSizeAsText_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperatingSystemStatics_GetSizeAsText_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemStatics_GetSizeAsText_Statics::NewProp_Size_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemStatics_GetSizeAsText_Statics::NewProp_Size,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemStatics_GetSizeAsText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemStatics_GetSizeAsText_Statics::Function_MetaDataParams[] = {
		{ "Category", "OperatingSystemStatics" },
		{ "ModuleRelativePath", "Public/Global/OperatingSystemStatics.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystemStatics_GetSizeAsText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystemStatics, nullptr, "GetSizeAsText", nullptr, nullptr, Z_Construct_UFunction_UOperatingSystemStatics_GetSizeAsText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemStatics_GetSizeAsText_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOperatingSystemStatics_GetSizeAsText_Statics::OperatingSystemStatics_eventGetSizeAsText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemStatics_GetSizeAsText_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystemStatics_GetSizeAsText_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemStatics_GetSizeAsText_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOperatingSystemStatics_GetSizeAsText_Statics::OperatingSystemStatics_eventGetSizeAsText_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOperatingSystemStatics_GetSizeAsText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystemStatics_GetSizeAsText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOperatingSystemStatics_GetSpecialDirectoryName_Statics
	{
		struct OperatingSystemStatics_eventGetSpecialDirectoryName_Parms
		{
			FGameplayTag DirectoryTag;
			FText OutDirectoryName;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DirectoryTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DirectoryTag;
		static const UECodeGen_Private::FTextPropertyParams NewProp_OutDirectoryName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemStatics_GetSpecialDirectoryName_Statics::NewProp_DirectoryTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOperatingSystemStatics_GetSpecialDirectoryName_Statics::NewProp_DirectoryTag = { "DirectoryTag", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemStatics_eventGetSpecialDirectoryName_Parms, DirectoryTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemStatics_GetSpecialDirectoryName_Statics::NewProp_DirectoryTag_MetaData), Z_Construct_UFunction_UOperatingSystemStatics_GetSpecialDirectoryName_Statics::NewProp_DirectoryTag_MetaData) }; // 2083603574
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UOperatingSystemStatics_GetSpecialDirectoryName_Statics::NewProp_OutDirectoryName = { "OutDirectoryName", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemStatics_eventGetSpecialDirectoryName_Parms, OutDirectoryName), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UOperatingSystemStatics_GetSpecialDirectoryName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OperatingSystemStatics_eventGetSpecialDirectoryName_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOperatingSystemStatics_GetSpecialDirectoryName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OperatingSystemStatics_eventGetSpecialDirectoryName_Parms), &Z_Construct_UFunction_UOperatingSystemStatics_GetSpecialDirectoryName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperatingSystemStatics_GetSpecialDirectoryName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemStatics_GetSpecialDirectoryName_Statics::NewProp_DirectoryTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemStatics_GetSpecialDirectoryName_Statics::NewProp_OutDirectoryName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemStatics_GetSpecialDirectoryName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemStatics_GetSpecialDirectoryName_Statics::Function_MetaDataParams[] = {
		{ "Categories", "OperatingSystem.Directory" },
		{ "Category", "OperatingSystemStatics" },
		{ "ModuleRelativePath", "Public/Global/OperatingSystemStatics.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystemStatics_GetSpecialDirectoryName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystemStatics, nullptr, "GetSpecialDirectoryName", nullptr, nullptr, Z_Construct_UFunction_UOperatingSystemStatics_GetSpecialDirectoryName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemStatics_GetSpecialDirectoryName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOperatingSystemStatics_GetSpecialDirectoryName_Statics::OperatingSystemStatics_eventGetSpecialDirectoryName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemStatics_GetSpecialDirectoryName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystemStatics_GetSpecialDirectoryName_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemStatics_GetSpecialDirectoryName_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOperatingSystemStatics_GetSpecialDirectoryName_Statics::OperatingSystemStatics_eventGetSpecialDirectoryName_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOperatingSystemStatics_GetSpecialDirectoryName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystemStatics_GetSpecialDirectoryName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOperatingSystemStatics_GetTimeAsText_Statics
	{
		struct OperatingSystemStatics_eventGetTimeAsText_Parms
		{
			FDateTime DateTime;
			bool bShowSeconds;
			EOperatingSystemTimeSeparator Separator;
			FText ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DateTime_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DateTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowSeconds_MetaData[];
#endif
		static void NewProp_bShowSeconds_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowSeconds;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Separator_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Separator_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Separator;
		static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemStatics_GetTimeAsText_Statics::NewProp_DateTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOperatingSystemStatics_GetTimeAsText_Statics::NewProp_DateTime = { "DateTime", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemStatics_eventGetTimeAsText_Parms, DateTime), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemStatics_GetTimeAsText_Statics::NewProp_DateTime_MetaData), Z_Construct_UFunction_UOperatingSystemStatics_GetTimeAsText_Statics::NewProp_DateTime_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemStatics_GetTimeAsText_Statics::NewProp_bShowSeconds_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UOperatingSystemStatics_GetTimeAsText_Statics::NewProp_bShowSeconds_SetBit(void* Obj)
	{
		((OperatingSystemStatics_eventGetTimeAsText_Parms*)Obj)->bShowSeconds = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOperatingSystemStatics_GetTimeAsText_Statics::NewProp_bShowSeconds = { "bShowSeconds", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OperatingSystemStatics_eventGetTimeAsText_Parms), &Z_Construct_UFunction_UOperatingSystemStatics_GetTimeAsText_Statics::NewProp_bShowSeconds_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemStatics_GetTimeAsText_Statics::NewProp_bShowSeconds_MetaData), Z_Construct_UFunction_UOperatingSystemStatics_GetTimeAsText_Statics::NewProp_bShowSeconds_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOperatingSystemStatics_GetTimeAsText_Statics::NewProp_Separator_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemStatics_GetTimeAsText_Statics::NewProp_Separator_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOperatingSystemStatics_GetTimeAsText_Statics::NewProp_Separator = { "Separator", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemStatics_eventGetTimeAsText_Parms, Separator), Z_Construct_UEnum_OperatingSystemSimulator_EOperatingSystemTimeSeparator, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemStatics_GetTimeAsText_Statics::NewProp_Separator_MetaData), Z_Construct_UFunction_UOperatingSystemStatics_GetTimeAsText_Statics::NewProp_Separator_MetaData) }; // 2485156736
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UOperatingSystemStatics_GetTimeAsText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemStatics_eventGetTimeAsText_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperatingSystemStatics_GetTimeAsText_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemStatics_GetTimeAsText_Statics::NewProp_DateTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemStatics_GetTimeAsText_Statics::NewProp_bShowSeconds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemStatics_GetTimeAsText_Statics::NewProp_Separator_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemStatics_GetTimeAsText_Statics::NewProp_Separator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemStatics_GetTimeAsText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemStatics_GetTimeAsText_Statics::Function_MetaDataParams[] = {
		{ "Category", "OperatingSystemStatics" },
		{ "CPP_Default_bShowSeconds", "false" },
		{ "CPP_Default_Separator", "Colon" },
		{ "ModuleRelativePath", "Public/Global/OperatingSystemStatics.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystemStatics_GetTimeAsText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystemStatics, nullptr, "GetTimeAsText", nullptr, nullptr, Z_Construct_UFunction_UOperatingSystemStatics_GetTimeAsText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemStatics_GetTimeAsText_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOperatingSystemStatics_GetTimeAsText_Statics::OperatingSystemStatics_eventGetTimeAsText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemStatics_GetTimeAsText_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystemStatics_GetTimeAsText_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemStatics_GetTimeAsText_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOperatingSystemStatics_GetTimeAsText_Statics::OperatingSystemStatics_eventGetTimeAsText_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOperatingSystemStatics_GetTimeAsText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystemStatics_GetTimeAsText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOperatingSystemStatics_GetUserManager_Statics
	{
		struct OperatingSystemStatics_eventGetUserManager_Parms
		{
			const UObject* WorldContextObject;
			UOperatingSystemUserManager* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemStatics_GetUserManager_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOperatingSystemStatics_GetUserManager_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemStatics_eventGetUserManager_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemStatics_GetUserManager_Statics::NewProp_WorldContextObject_MetaData), Z_Construct_UFunction_UOperatingSystemStatics_GetUserManager_Statics::NewProp_WorldContextObject_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOperatingSystemStatics_GetUserManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemStatics_eventGetUserManager_Parms, ReturnValue), Z_Construct_UClass_UOperatingSystemUserManager_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperatingSystemStatics_GetUserManager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemStatics_GetUserManager_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemStatics_GetUserManager_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemStatics_GetUserManager_Statics::Function_MetaDataParams[] = {
		{ "Category", "OperatingSystemStatics" },
		{ "Keywords", "find, database" },
		{ "ModuleRelativePath", "Public/Global/OperatingSystemStatics.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystemStatics_GetUserManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystemStatics, nullptr, "GetUserManager", nullptr, nullptr, Z_Construct_UFunction_UOperatingSystemStatics_GetUserManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemStatics_GetUserManager_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOperatingSystemStatics_GetUserManager_Statics::OperatingSystemStatics_eventGetUserManager_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemStatics_GetUserManager_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystemStatics_GetUserManager_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemStatics_GetUserManager_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOperatingSystemStatics_GetUserManager_Statics::OperatingSystemStatics_eventGetUserManager_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOperatingSystemStatics_GetUserManager()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystemStatics_GetUserManager_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOperatingSystemStatics_GreaterThan_Version_Statics
	{
		struct OperatingSystemStatics_eventGreaterThan_Version_Parms
		{
			FVersion VersionOne;
			FVersion VersionTwo;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VersionOne_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_VersionOne;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VersionTwo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_VersionTwo;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemStatics_GreaterThan_Version_Statics::NewProp_VersionOne_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOperatingSystemStatics_GreaterThan_Version_Statics::NewProp_VersionOne = { "VersionOne", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemStatics_eventGreaterThan_Version_Parms, VersionOne), Z_Construct_UScriptStruct_FVersion, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemStatics_GreaterThan_Version_Statics::NewProp_VersionOne_MetaData), Z_Construct_UFunction_UOperatingSystemStatics_GreaterThan_Version_Statics::NewProp_VersionOne_MetaData) }; // 2963316928
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemStatics_GreaterThan_Version_Statics::NewProp_VersionTwo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOperatingSystemStatics_GreaterThan_Version_Statics::NewProp_VersionTwo = { "VersionTwo", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemStatics_eventGreaterThan_Version_Parms, VersionTwo), Z_Construct_UScriptStruct_FVersion, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemStatics_GreaterThan_Version_Statics::NewProp_VersionTwo_MetaData), Z_Construct_UFunction_UOperatingSystemStatics_GreaterThan_Version_Statics::NewProp_VersionTwo_MetaData) }; // 2963316928
	void Z_Construct_UFunction_UOperatingSystemStatics_GreaterThan_Version_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OperatingSystemStatics_eventGreaterThan_Version_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOperatingSystemStatics_GreaterThan_Version_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OperatingSystemStatics_eventGreaterThan_Version_Parms), &Z_Construct_UFunction_UOperatingSystemStatics_GreaterThan_Version_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperatingSystemStatics_GreaterThan_Version_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemStatics_GreaterThan_Version_Statics::NewProp_VersionOne,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemStatics_GreaterThan_Version_Statics::NewProp_VersionTwo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemStatics_GreaterThan_Version_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemStatics_GreaterThan_Version_Statics::Function_MetaDataParams[] = {
		{ "Category", "OperatingSystemStatics" },
		{ "CompactNodeTitle", ">" },
		{ "ModuleRelativePath", "Public/Global/OperatingSystemStatics.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystemStatics_GreaterThan_Version_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystemStatics, nullptr, "GreaterThan_Version", nullptr, nullptr, Z_Construct_UFunction_UOperatingSystemStatics_GreaterThan_Version_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemStatics_GreaterThan_Version_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOperatingSystemStatics_GreaterThan_Version_Statics::OperatingSystemStatics_eventGreaterThan_Version_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14482401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemStatics_GreaterThan_Version_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystemStatics_GreaterThan_Version_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemStatics_GreaterThan_Version_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOperatingSystemStatics_GreaterThan_Version_Statics::OperatingSystemStatics_eventGreaterThan_Version_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOperatingSystemStatics_GreaterThan_Version()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystemStatics_GreaterThan_Version_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOperatingSystemStatics_IsNotificationValid_Statics
	{
		struct OperatingSystemStatics_eventIsNotificationValid_Parms
		{
			FOperatingSystemNotification TestNotification;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TestNotification_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TestNotification;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemStatics_IsNotificationValid_Statics::NewProp_TestNotification_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOperatingSystemStatics_IsNotificationValid_Statics::NewProp_TestNotification = { "TestNotification", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemStatics_eventIsNotificationValid_Parms, TestNotification), Z_Construct_UScriptStruct_FOperatingSystemNotification, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemStatics_IsNotificationValid_Statics::NewProp_TestNotification_MetaData), Z_Construct_UFunction_UOperatingSystemStatics_IsNotificationValid_Statics::NewProp_TestNotification_MetaData) }; // 2023410135
	void Z_Construct_UFunction_UOperatingSystemStatics_IsNotificationValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OperatingSystemStatics_eventIsNotificationValid_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOperatingSystemStatics_IsNotificationValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OperatingSystemStatics_eventIsNotificationValid_Parms), &Z_Construct_UFunction_UOperatingSystemStatics_IsNotificationValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperatingSystemStatics_IsNotificationValid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemStatics_IsNotificationValid_Statics::NewProp_TestNotification,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemStatics_IsNotificationValid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemStatics_IsNotificationValid_Statics::Function_MetaDataParams[] = {
		{ "Category", "OperatingSystemStatics" },
		{ "ModuleRelativePath", "Public/Global/OperatingSystemStatics.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystemStatics_IsNotificationValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystemStatics, nullptr, "IsNotificationValid", nullptr, nullptr, Z_Construct_UFunction_UOperatingSystemStatics_IsNotificationValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemStatics_IsNotificationValid_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOperatingSystemStatics_IsNotificationValid_Statics::OperatingSystemStatics_eventIsNotificationValid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemStatics_IsNotificationValid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystemStatics_IsNotificationValid_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemStatics_IsNotificationValid_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOperatingSystemStatics_IsNotificationValid_Statics::OperatingSystemStatics_eventIsNotificationValid_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOperatingSystemStatics_IsNotificationValid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystemStatics_IsNotificationValid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOperatingSystemStatics_IsOperatingSystemTagValid_Statics
	{
		struct OperatingSystemStatics_eventIsOperatingSystemTagValid_Parms
		{
			FGameplayTag TestTag;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TestTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TestTag;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemStatics_IsOperatingSystemTagValid_Statics::NewProp_TestTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOperatingSystemStatics_IsOperatingSystemTagValid_Statics::NewProp_TestTag = { "TestTag", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemStatics_eventIsOperatingSystemTagValid_Parms, TestTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemStatics_IsOperatingSystemTagValid_Statics::NewProp_TestTag_MetaData), Z_Construct_UFunction_UOperatingSystemStatics_IsOperatingSystemTagValid_Statics::NewProp_TestTag_MetaData) }; // 2083603574
	void Z_Construct_UFunction_UOperatingSystemStatics_IsOperatingSystemTagValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OperatingSystemStatics_eventIsOperatingSystemTagValid_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOperatingSystemStatics_IsOperatingSystemTagValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OperatingSystemStatics_eventIsOperatingSystemTagValid_Parms), &Z_Construct_UFunction_UOperatingSystemStatics_IsOperatingSystemTagValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperatingSystemStatics_IsOperatingSystemTagValid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemStatics_IsOperatingSystemTagValid_Statics::NewProp_TestTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemStatics_IsOperatingSystemTagValid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemStatics_IsOperatingSystemTagValid_Statics::Function_MetaDataParams[] = {
		{ "Category", "OperatingSystemStatics" },
		{ "ModuleRelativePath", "Public/Global/OperatingSystemStatics.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystemStatics_IsOperatingSystemTagValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystemStatics, nullptr, "IsOperatingSystemTagValid", nullptr, nullptr, Z_Construct_UFunction_UOperatingSystemStatics_IsOperatingSystemTagValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemStatics_IsOperatingSystemTagValid_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOperatingSystemStatics_IsOperatingSystemTagValid_Statics::OperatingSystemStatics_eventIsOperatingSystemTagValid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemStatics_IsOperatingSystemTagValid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystemStatics_IsOperatingSystemTagValid_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemStatics_IsOperatingSystemTagValid_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOperatingSystemStatics_IsOperatingSystemTagValid_Statics::OperatingSystemStatics_eventIsOperatingSystemTagValid_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOperatingSystemStatics_IsOperatingSystemTagValid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystemStatics_IsOperatingSystemTagValid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOperatingSystemStatics_IsProgramClassCompatibleWithOS_Statics
	{
		struct OperatingSystemStatics_eventIsProgramClassCompatibleWithOS_Parms
		{
			const TSubclassOf<UOperatingSystemBaseProgram>  ProgramClass;
			const UOperatingSystem* TargetOS;
			FGenericError OutError;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProgramClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ProgramClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetOS_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetOS;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutError;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemStatics_IsProgramClassCompatibleWithOS_Statics::NewProp_ProgramClass_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UOperatingSystemStatics_IsProgramClassCompatibleWithOS_Statics::NewProp_ProgramClass = { "ProgramClass", nullptr, (EPropertyFlags)0x0014000000000082, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemStatics_eventIsProgramClassCompatibleWithOS_Parms, ProgramClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UOperatingSystemBaseProgram_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemStatics_IsProgramClassCompatibleWithOS_Statics::NewProp_ProgramClass_MetaData), Z_Construct_UFunction_UOperatingSystemStatics_IsProgramClassCompatibleWithOS_Statics::NewProp_ProgramClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemStatics_IsProgramClassCompatibleWithOS_Statics::NewProp_TargetOS_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOperatingSystemStatics_IsProgramClassCompatibleWithOS_Statics::NewProp_TargetOS = { "TargetOS", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemStatics_eventIsProgramClassCompatibleWithOS_Parms, TargetOS), Z_Construct_UClass_UOperatingSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemStatics_IsProgramClassCompatibleWithOS_Statics::NewProp_TargetOS_MetaData), Z_Construct_UFunction_UOperatingSystemStatics_IsProgramClassCompatibleWithOS_Statics::NewProp_TargetOS_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOperatingSystemStatics_IsProgramClassCompatibleWithOS_Statics::NewProp_OutError = { "OutError", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemStatics_eventIsProgramClassCompatibleWithOS_Parms, OutError), Z_Construct_UScriptStruct_FGenericError, METADATA_PARAMS(0, nullptr) }; // 4286029882
	void Z_Construct_UFunction_UOperatingSystemStatics_IsProgramClassCompatibleWithOS_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OperatingSystemStatics_eventIsProgramClassCompatibleWithOS_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOperatingSystemStatics_IsProgramClassCompatibleWithOS_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OperatingSystemStatics_eventIsProgramClassCompatibleWithOS_Parms), &Z_Construct_UFunction_UOperatingSystemStatics_IsProgramClassCompatibleWithOS_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperatingSystemStatics_IsProgramClassCompatibleWithOS_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemStatics_IsProgramClassCompatibleWithOS_Statics::NewProp_ProgramClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemStatics_IsProgramClassCompatibleWithOS_Statics::NewProp_TargetOS,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemStatics_IsProgramClassCompatibleWithOS_Statics::NewProp_OutError,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemStatics_IsProgramClassCompatibleWithOS_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemStatics_IsProgramClassCompatibleWithOS_Statics::Function_MetaDataParams[] = {
		{ "Category", "OperatingSystemStatics" },
		{ "ModuleRelativePath", "Public/Global/OperatingSystemStatics.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystemStatics_IsProgramClassCompatibleWithOS_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystemStatics, nullptr, "IsProgramClassCompatibleWithOS", nullptr, nullptr, Z_Construct_UFunction_UOperatingSystemStatics_IsProgramClassCompatibleWithOS_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemStatics_IsProgramClassCompatibleWithOS_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOperatingSystemStatics_IsProgramClassCompatibleWithOS_Statics::OperatingSystemStatics_eventIsProgramClassCompatibleWithOS_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemStatics_IsProgramClassCompatibleWithOS_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystemStatics_IsProgramClassCompatibleWithOS_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemStatics_IsProgramClassCompatibleWithOS_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOperatingSystemStatics_IsProgramClassCompatibleWithOS_Statics::OperatingSystemStatics_eventIsProgramClassCompatibleWithOS_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOperatingSystemStatics_IsProgramClassCompatibleWithOS()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystemStatics_IsProgramClassCompatibleWithOS_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOperatingSystemStatics_IsUniqueIdValid_Statics
	{
		struct OperatingSystemStatics_eventIsUniqueIdValid_Parms
		{
			FOperatingSystemUniqueId TestID;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TestID_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TestID;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemStatics_IsUniqueIdValid_Statics::NewProp_TestID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOperatingSystemStatics_IsUniqueIdValid_Statics::NewProp_TestID = { "TestID", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemStatics_eventIsUniqueIdValid_Parms, TestID), Z_Construct_UScriptStruct_FOperatingSystemUniqueId, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemStatics_IsUniqueIdValid_Statics::NewProp_TestID_MetaData), Z_Construct_UFunction_UOperatingSystemStatics_IsUniqueIdValid_Statics::NewProp_TestID_MetaData) }; // 2242450855
	void Z_Construct_UFunction_UOperatingSystemStatics_IsUniqueIdValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OperatingSystemStatics_eventIsUniqueIdValid_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOperatingSystemStatics_IsUniqueIdValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OperatingSystemStatics_eventIsUniqueIdValid_Parms), &Z_Construct_UFunction_UOperatingSystemStatics_IsUniqueIdValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperatingSystemStatics_IsUniqueIdValid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemStatics_IsUniqueIdValid_Statics::NewProp_TestID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemStatics_IsUniqueIdValid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemStatics_IsUniqueIdValid_Statics::Function_MetaDataParams[] = {
		{ "Category", "OperatingSystemStatics" },
		{ "ModuleRelativePath", "Public/Global/OperatingSystemStatics.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystemStatics_IsUniqueIdValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystemStatics, nullptr, "IsUniqueIdValid", nullptr, nullptr, Z_Construct_UFunction_UOperatingSystemStatics_IsUniqueIdValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemStatics_IsUniqueIdValid_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOperatingSystemStatics_IsUniqueIdValid_Statics::OperatingSystemStatics_eventIsUniqueIdValid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemStatics_IsUniqueIdValid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystemStatics_IsUniqueIdValid_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemStatics_IsUniqueIdValid_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOperatingSystemStatics_IsUniqueIdValid_Statics::OperatingSystemStatics_eventIsUniqueIdValid_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOperatingSystemStatics_IsUniqueIdValid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystemStatics_IsUniqueIdValid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOperatingSystemStatics_IsUserValid_Statics
	{
		struct OperatingSystemStatics_eventIsUserValid_Parms
		{
			FOperatingSystemUser TestUser;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TestUser_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TestUser;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemStatics_IsUserValid_Statics::NewProp_TestUser_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOperatingSystemStatics_IsUserValid_Statics::NewProp_TestUser = { "TestUser", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemStatics_eventIsUserValid_Parms, TestUser), Z_Construct_UScriptStruct_FOperatingSystemUser, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemStatics_IsUserValid_Statics::NewProp_TestUser_MetaData), Z_Construct_UFunction_UOperatingSystemStatics_IsUserValid_Statics::NewProp_TestUser_MetaData) }; // 1295920940
	void Z_Construct_UFunction_UOperatingSystemStatics_IsUserValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OperatingSystemStatics_eventIsUserValid_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOperatingSystemStatics_IsUserValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OperatingSystemStatics_eventIsUserValid_Parms), &Z_Construct_UFunction_UOperatingSystemStatics_IsUserValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperatingSystemStatics_IsUserValid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemStatics_IsUserValid_Statics::NewProp_TestUser,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemStatics_IsUserValid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemStatics_IsUserValid_Statics::Function_MetaDataParams[] = {
		{ "Category", "OperatingSystemStatics" },
		{ "ModuleRelativePath", "Public/Global/OperatingSystemStatics.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystemStatics_IsUserValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystemStatics, nullptr, "IsUserValid", nullptr, nullptr, Z_Construct_UFunction_UOperatingSystemStatics_IsUserValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemStatics_IsUserValid_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOperatingSystemStatics_IsUserValid_Statics::OperatingSystemStatics_eventIsUserValid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemStatics_IsUserValid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystemStatics_IsUserValid_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemStatics_IsUserValid_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOperatingSystemStatics_IsUserValid_Statics::OperatingSystemStatics_eventIsUserValid_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOperatingSystemStatics_IsUserValid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystemStatics_IsUserValid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOperatingSystemStatics_LessThan_Version_Statics
	{
		struct OperatingSystemStatics_eventLessThan_Version_Parms
		{
			FVersion VersionOne;
			FVersion VersionTwo;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VersionOne_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_VersionOne;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VersionTwo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_VersionTwo;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemStatics_LessThan_Version_Statics::NewProp_VersionOne_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOperatingSystemStatics_LessThan_Version_Statics::NewProp_VersionOne = { "VersionOne", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemStatics_eventLessThan_Version_Parms, VersionOne), Z_Construct_UScriptStruct_FVersion, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemStatics_LessThan_Version_Statics::NewProp_VersionOne_MetaData), Z_Construct_UFunction_UOperatingSystemStatics_LessThan_Version_Statics::NewProp_VersionOne_MetaData) }; // 2963316928
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemStatics_LessThan_Version_Statics::NewProp_VersionTwo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOperatingSystemStatics_LessThan_Version_Statics::NewProp_VersionTwo = { "VersionTwo", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemStatics_eventLessThan_Version_Parms, VersionTwo), Z_Construct_UScriptStruct_FVersion, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemStatics_LessThan_Version_Statics::NewProp_VersionTwo_MetaData), Z_Construct_UFunction_UOperatingSystemStatics_LessThan_Version_Statics::NewProp_VersionTwo_MetaData) }; // 2963316928
	void Z_Construct_UFunction_UOperatingSystemStatics_LessThan_Version_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OperatingSystemStatics_eventLessThan_Version_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOperatingSystemStatics_LessThan_Version_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OperatingSystemStatics_eventLessThan_Version_Parms), &Z_Construct_UFunction_UOperatingSystemStatics_LessThan_Version_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperatingSystemStatics_LessThan_Version_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemStatics_LessThan_Version_Statics::NewProp_VersionOne,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemStatics_LessThan_Version_Statics::NewProp_VersionTwo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemStatics_LessThan_Version_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemStatics_LessThan_Version_Statics::Function_MetaDataParams[] = {
		{ "Category", "OperatingSystemStatics" },
		{ "CompactNodeTitle", "<" },
		{ "ModuleRelativePath", "Public/Global/OperatingSystemStatics.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystemStatics_LessThan_Version_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystemStatics, nullptr, "LessThan_Version", nullptr, nullptr, Z_Construct_UFunction_UOperatingSystemStatics_LessThan_Version_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemStatics_LessThan_Version_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOperatingSystemStatics_LessThan_Version_Statics::OperatingSystemStatics_eventLessThan_Version_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14482401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemStatics_LessThan_Version_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystemStatics_LessThan_Version_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemStatics_LessThan_Version_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOperatingSystemStatics_LessThan_Version_Statics::OperatingSystemStatics_eventLessThan_Version_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOperatingSystemStatics_LessThan_Version()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystemStatics_LessThan_Version_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOperatingSystemStatics_OpenFile_Statics
	{
		struct OperatingSystemStatics_eventOpenFile_Parms
		{
			UOperatingSystemFile* TargetFile;
			FGenericError OutError;
			UOperatingSystemFile* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetFile;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutError;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOperatingSystemStatics_OpenFile_Statics::NewProp_TargetFile = { "TargetFile", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemStatics_eventOpenFile_Parms, TargetFile), Z_Construct_UClass_UOperatingSystemFile_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOperatingSystemStatics_OpenFile_Statics::NewProp_OutError = { "OutError", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemStatics_eventOpenFile_Parms, OutError), Z_Construct_UScriptStruct_FGenericError, METADATA_PARAMS(0, nullptr) }; // 4286029882
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOperatingSystemStatics_OpenFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemStatics_eventOpenFile_Parms, ReturnValue), Z_Construct_UClass_UOperatingSystemFile_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperatingSystemStatics_OpenFile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemStatics_OpenFile_Statics::NewProp_TargetFile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemStatics_OpenFile_Statics::NewProp_OutError,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemStatics_OpenFile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemStatics_OpenFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "OperatingSystemStatics" },
		{ "ModuleRelativePath", "Public/Global/OperatingSystemStatics.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystemStatics_OpenFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystemStatics, nullptr, "OpenFile", nullptr, nullptr, Z_Construct_UFunction_UOperatingSystemStatics_OpenFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemStatics_OpenFile_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOperatingSystemStatics_OpenFile_Statics::OperatingSystemStatics_eventOpenFile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemStatics_OpenFile_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystemStatics_OpenFile_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemStatics_OpenFile_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOperatingSystemStatics_OpenFile_Statics::OperatingSystemStatics_eventOpenFile_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOperatingSystemStatics_OpenFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystemStatics_OpenFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOperatingSystemStatics_RegexExpression_Statics
	{
		struct OperatingSystemStatics_eventRegexExpression_Parms
		{
			FString TargetString;
			FString RegexPattern;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetString_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_TargetString;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RegexPattern_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_RegexPattern;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemStatics_RegexExpression_Statics::NewProp_TargetString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOperatingSystemStatics_RegexExpression_Statics::NewProp_TargetString = { "TargetString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemStatics_eventRegexExpression_Parms, TargetString), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemStatics_RegexExpression_Statics::NewProp_TargetString_MetaData), Z_Construct_UFunction_UOperatingSystemStatics_RegexExpression_Statics::NewProp_TargetString_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemStatics_RegexExpression_Statics::NewProp_RegexPattern_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOperatingSystemStatics_RegexExpression_Statics::NewProp_RegexPattern = { "RegexPattern", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemStatics_eventRegexExpression_Parms, RegexPattern), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemStatics_RegexExpression_Statics::NewProp_RegexPattern_MetaData), Z_Construct_UFunction_UOperatingSystemStatics_RegexExpression_Statics::NewProp_RegexPattern_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOperatingSystemStatics_RegexExpression_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemStatics_eventRegexExpression_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperatingSystemStatics_RegexExpression_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemStatics_RegexExpression_Statics::NewProp_TargetString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemStatics_RegexExpression_Statics::NewProp_RegexPattern,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemStatics_RegexExpression_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemStatics_RegexExpression_Statics::Function_MetaDataParams[] = {
		{ "Category", "OperatingSystemStatics" },
		{ "ModuleRelativePath", "Public/Global/OperatingSystemStatics.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystemStatics_RegexExpression_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystemStatics, nullptr, "RegexExpression", nullptr, nullptr, Z_Construct_UFunction_UOperatingSystemStatics_RegexExpression_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemStatics_RegexExpression_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOperatingSystemStatics_RegexExpression_Statics::OperatingSystemStatics_eventRegexExpression_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemStatics_RegexExpression_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystemStatics_RegexExpression_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemStatics_RegexExpression_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOperatingSystemStatics_RegexExpression_Statics::OperatingSystemStatics_eventRegexExpression_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOperatingSystemStatics_RegexExpression()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystemStatics_RegexExpression_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOperatingSystemStatics_RestartOperatingSystem_Statics
	{
		struct OperatingSystemStatics_eventRestartOperatingSystem_Parms
		{
			UOperatingSystem* TargetOS;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetOS;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOperatingSystemStatics_RestartOperatingSystem_Statics::NewProp_TargetOS = { "TargetOS", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemStatics_eventRestartOperatingSystem_Parms, TargetOS), Z_Construct_UClass_UOperatingSystem_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperatingSystemStatics_RestartOperatingSystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemStatics_RestartOperatingSystem_Statics::NewProp_TargetOS,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemStatics_RestartOperatingSystem_Statics::Function_MetaDataParams[] = {
		{ "Category", "OperatingSystemStatics" },
		{ "ModuleRelativePath", "Public/Global/OperatingSystemStatics.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystemStatics_RestartOperatingSystem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystemStatics, nullptr, "RestartOperatingSystem", nullptr, nullptr, Z_Construct_UFunction_UOperatingSystemStatics_RestartOperatingSystem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemStatics_RestartOperatingSystem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOperatingSystemStatics_RestartOperatingSystem_Statics::OperatingSystemStatics_eventRestartOperatingSystem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemStatics_RestartOperatingSystem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystemStatics_RestartOperatingSystem_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemStatics_RestartOperatingSystem_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOperatingSystemStatics_RestartOperatingSystem_Statics::OperatingSystemStatics_eventRestartOperatingSystem_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOperatingSystemStatics_RestartOperatingSystem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystemStatics_RestartOperatingSystem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOperatingSystemStatics_ShutdownOperatingSystem_Statics
	{
		struct OperatingSystemStatics_eventShutdownOperatingSystem_Parms
		{
			UOperatingSystem* TargetOS;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetOS;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOperatingSystemStatics_ShutdownOperatingSystem_Statics::NewProp_TargetOS = { "TargetOS", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemStatics_eventShutdownOperatingSystem_Parms, TargetOS), Z_Construct_UClass_UOperatingSystem_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperatingSystemStatics_ShutdownOperatingSystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemStatics_ShutdownOperatingSystem_Statics::NewProp_TargetOS,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemStatics_ShutdownOperatingSystem_Statics::Function_MetaDataParams[] = {
		{ "Category", "OperatingSystemStatics" },
		{ "ModuleRelativePath", "Public/Global/OperatingSystemStatics.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystemStatics_ShutdownOperatingSystem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystemStatics, nullptr, "ShutdownOperatingSystem", nullptr, nullptr, Z_Construct_UFunction_UOperatingSystemStatics_ShutdownOperatingSystem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemStatics_ShutdownOperatingSystem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOperatingSystemStatics_ShutdownOperatingSystem_Statics::OperatingSystemStatics_eventShutdownOperatingSystem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemStatics_ShutdownOperatingSystem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystemStatics_ShutdownOperatingSystem_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemStatics_ShutdownOperatingSystem_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOperatingSystemStatics_ShutdownOperatingSystem_Statics::OperatingSystemStatics_eventShutdownOperatingSystem_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOperatingSystemStatics_ShutdownOperatingSystem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystemStatics_ShutdownOperatingSystem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOperatingSystemStatics_UniqueIdToString_Statics
	{
		struct OperatingSystemStatics_eventUniqueIdToString_Parms
		{
			FOperatingSystemUniqueId TestID;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TestID_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TestID;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemStatics_UniqueIdToString_Statics::NewProp_TestID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOperatingSystemStatics_UniqueIdToString_Statics::NewProp_TestID = { "TestID", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemStatics_eventUniqueIdToString_Parms, TestID), Z_Construct_UScriptStruct_FOperatingSystemUniqueId, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemStatics_UniqueIdToString_Statics::NewProp_TestID_MetaData), Z_Construct_UFunction_UOperatingSystemStatics_UniqueIdToString_Statics::NewProp_TestID_MetaData) }; // 2242450855
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOperatingSystemStatics_UniqueIdToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemStatics_eventUniqueIdToString_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperatingSystemStatics_UniqueIdToString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemStatics_UniqueIdToString_Statics::NewProp_TestID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemStatics_UniqueIdToString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemStatics_UniqueIdToString_Statics::Function_MetaDataParams[] = {
		{ "Category", "OperatingSystemStatics" },
		{ "ModuleRelativePath", "Public/Global/OperatingSystemStatics.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystemStatics_UniqueIdToString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystemStatics, nullptr, "UniqueIdToString", nullptr, nullptr, Z_Construct_UFunction_UOperatingSystemStatics_UniqueIdToString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemStatics_UniqueIdToString_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOperatingSystemStatics_UniqueIdToString_Statics::OperatingSystemStatics_eventUniqueIdToString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemStatics_UniqueIdToString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystemStatics_UniqueIdToString_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemStatics_UniqueIdToString_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOperatingSystemStatics_UniqueIdToString_Statics::OperatingSystemStatics_eventUniqueIdToString_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOperatingSystemStatics_UniqueIdToString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystemStatics_UniqueIdToString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOperatingSystemStatics_UsersEqual_Statics
	{
		struct OperatingSystemStatics_eventUsersEqual_Parms
		{
			FOperatingSystemUser Lhs;
			FOperatingSystemUser Rhs;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Lhs_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Lhs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Rhs_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Rhs;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemStatics_UsersEqual_Statics::NewProp_Lhs_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOperatingSystemStatics_UsersEqual_Statics::NewProp_Lhs = { "Lhs", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemStatics_eventUsersEqual_Parms, Lhs), Z_Construct_UScriptStruct_FOperatingSystemUser, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemStatics_UsersEqual_Statics::NewProp_Lhs_MetaData), Z_Construct_UFunction_UOperatingSystemStatics_UsersEqual_Statics::NewProp_Lhs_MetaData) }; // 1295920940
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemStatics_UsersEqual_Statics::NewProp_Rhs_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOperatingSystemStatics_UsersEqual_Statics::NewProp_Rhs = { "Rhs", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemStatics_eventUsersEqual_Parms, Rhs), Z_Construct_UScriptStruct_FOperatingSystemUser, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemStatics_UsersEqual_Statics::NewProp_Rhs_MetaData), Z_Construct_UFunction_UOperatingSystemStatics_UsersEqual_Statics::NewProp_Rhs_MetaData) }; // 1295920940
	void Z_Construct_UFunction_UOperatingSystemStatics_UsersEqual_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OperatingSystemStatics_eventUsersEqual_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOperatingSystemStatics_UsersEqual_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OperatingSystemStatics_eventUsersEqual_Parms), &Z_Construct_UFunction_UOperatingSystemStatics_UsersEqual_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperatingSystemStatics_UsersEqual_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemStatics_UsersEqual_Statics::NewProp_Lhs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemStatics_UsersEqual_Statics::NewProp_Rhs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemStatics_UsersEqual_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemStatics_UsersEqual_Statics::Function_MetaDataParams[] = {
		{ "Category", "OperatingSystemStatics" },
		{ "CompactNodeTitle", "==" },
		{ "ModuleRelativePath", "Public/Global/OperatingSystemStatics.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystemStatics_UsersEqual_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystemStatics, nullptr, "UsersEqual", nullptr, nullptr, Z_Construct_UFunction_UOperatingSystemStatics_UsersEqual_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemStatics_UsersEqual_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOperatingSystemStatics_UsersEqual_Statics::OperatingSystemStatics_eventUsersEqual_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemStatics_UsersEqual_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystemStatics_UsersEqual_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemStatics_UsersEqual_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOperatingSystemStatics_UsersEqual_Statics::OperatingSystemStatics_eventUsersEqual_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOperatingSystemStatics_UsersEqual()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystemStatics_UsersEqual_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOperatingSystemStatics_UsersNotEqual_Statics
	{
		struct OperatingSystemStatics_eventUsersNotEqual_Parms
		{
			FOperatingSystemUser Lhs;
			FOperatingSystemUser Rhs;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Lhs_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Lhs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Rhs_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Rhs;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemStatics_UsersNotEqual_Statics::NewProp_Lhs_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOperatingSystemStatics_UsersNotEqual_Statics::NewProp_Lhs = { "Lhs", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemStatics_eventUsersNotEqual_Parms, Lhs), Z_Construct_UScriptStruct_FOperatingSystemUser, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemStatics_UsersNotEqual_Statics::NewProp_Lhs_MetaData), Z_Construct_UFunction_UOperatingSystemStatics_UsersNotEqual_Statics::NewProp_Lhs_MetaData) }; // 1295920940
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemStatics_UsersNotEqual_Statics::NewProp_Rhs_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOperatingSystemStatics_UsersNotEqual_Statics::NewProp_Rhs = { "Rhs", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemStatics_eventUsersNotEqual_Parms, Rhs), Z_Construct_UScriptStruct_FOperatingSystemUser, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemStatics_UsersNotEqual_Statics::NewProp_Rhs_MetaData), Z_Construct_UFunction_UOperatingSystemStatics_UsersNotEqual_Statics::NewProp_Rhs_MetaData) }; // 1295920940
	void Z_Construct_UFunction_UOperatingSystemStatics_UsersNotEqual_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OperatingSystemStatics_eventUsersNotEqual_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOperatingSystemStatics_UsersNotEqual_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OperatingSystemStatics_eventUsersNotEqual_Parms), &Z_Construct_UFunction_UOperatingSystemStatics_UsersNotEqual_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperatingSystemStatics_UsersNotEqual_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemStatics_UsersNotEqual_Statics::NewProp_Lhs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemStatics_UsersNotEqual_Statics::NewProp_Rhs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemStatics_UsersNotEqual_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemStatics_UsersNotEqual_Statics::Function_MetaDataParams[] = {
		{ "Category", "OperatingSystemStatics" },
		{ "CompactNodeTitle", "!=" },
		{ "ModuleRelativePath", "Public/Global/OperatingSystemStatics.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystemStatics_UsersNotEqual_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystemStatics, nullptr, "UsersNotEqual", nullptr, nullptr, Z_Construct_UFunction_UOperatingSystemStatics_UsersNotEqual_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemStatics_UsersNotEqual_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOperatingSystemStatics_UsersNotEqual_Statics::OperatingSystemStatics_eventUsersNotEqual_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemStatics_UsersNotEqual_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystemStatics_UsersNotEqual_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemStatics_UsersNotEqual_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOperatingSystemStatics_UsersNotEqual_Statics::OperatingSystemStatics_eventUsersNotEqual_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOperatingSystemStatics_UsersNotEqual()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystemStatics_UsersNotEqual_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOperatingSystemStatics_VersionToString_Statics
	{
		struct OperatingSystemStatics_eventVersionToString_Parms
		{
			FVersion Version;
			bool bIgnorePatch;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Version_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Version;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIgnorePatch_MetaData[];
#endif
		static void NewProp_bIgnorePatch_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnorePatch;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemStatics_VersionToString_Statics::NewProp_Version_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOperatingSystemStatics_VersionToString_Statics::NewProp_Version = { "Version", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemStatics_eventVersionToString_Parms, Version), Z_Construct_UScriptStruct_FVersion, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemStatics_VersionToString_Statics::NewProp_Version_MetaData), Z_Construct_UFunction_UOperatingSystemStatics_VersionToString_Statics::NewProp_Version_MetaData) }; // 2963316928
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemStatics_VersionToString_Statics::NewProp_bIgnorePatch_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UOperatingSystemStatics_VersionToString_Statics::NewProp_bIgnorePatch_SetBit(void* Obj)
	{
		((OperatingSystemStatics_eventVersionToString_Parms*)Obj)->bIgnorePatch = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOperatingSystemStatics_VersionToString_Statics::NewProp_bIgnorePatch = { "bIgnorePatch", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OperatingSystemStatics_eventVersionToString_Parms), &Z_Construct_UFunction_UOperatingSystemStatics_VersionToString_Statics::NewProp_bIgnorePatch_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemStatics_VersionToString_Statics::NewProp_bIgnorePatch_MetaData), Z_Construct_UFunction_UOperatingSystemStatics_VersionToString_Statics::NewProp_bIgnorePatch_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOperatingSystemStatics_VersionToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemStatics_eventVersionToString_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperatingSystemStatics_VersionToString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemStatics_VersionToString_Statics::NewProp_Version,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemStatics_VersionToString_Statics::NewProp_bIgnorePatch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemStatics_VersionToString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemStatics_VersionToString_Statics::Function_MetaDataParams[] = {
		{ "Category", "OperatingSystemStatics" },
		{ "CPP_Default_bIgnorePatch", "false" },
		{ "ModuleRelativePath", "Public/Global/OperatingSystemStatics.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystemStatics_VersionToString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystemStatics, nullptr, "VersionToString", nullptr, nullptr, Z_Construct_UFunction_UOperatingSystemStatics_VersionToString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemStatics_VersionToString_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOperatingSystemStatics_VersionToString_Statics::OperatingSystemStatics_eventVersionToString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14482401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemStatics_VersionToString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystemStatics_VersionToString_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemStatics_VersionToString_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOperatingSystemStatics_VersionToString_Statics::OperatingSystemStatics_eventVersionToString_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOperatingSystemStatics_VersionToString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystemStatics_VersionToString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOperatingSystemStatics);
	UClass* Z_Construct_UClass_UOperatingSystemStatics_NoRegister()
	{
		return UOperatingSystemStatics::StaticClass();
	}
	struct Z_Construct_UClass_UOperatingSystemStatics_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOperatingSystemStatics_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_OperatingSystemSimulator,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemStatics_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UOperatingSystemStatics_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOperatingSystemStatics_AddNotification, "AddNotification" }, // 2850662622
		{ &Z_Construct_UFunction_UOperatingSystemStatics_AddNotificationFromError, "AddNotificationFromError" }, // 1484290509
		{ &Z_Construct_UFunction_UOperatingSystemStatics_ConvertBytes_ToGB, "ConvertBytes_ToGB" }, // 3467518702
		{ &Z_Construct_UFunction_UOperatingSystemStatics_ConvertBytes_ToMB, "ConvertBytes_ToMB" }, // 1606113731
		{ &Z_Construct_UFunction_UOperatingSystemStatics_ConvertGB_ToBytes, "ConvertGB_ToBytes" }, // 2024101720
		{ &Z_Construct_UFunction_UOperatingSystemStatics_ConvertGB_ToMB, "ConvertGB_ToMB" }, // 2218576034
		{ &Z_Construct_UFunction_UOperatingSystemStatics_ConvertMB_ToBytes, "ConvertMB_ToBytes" }, // 4013314687
		{ &Z_Construct_UFunction_UOperatingSystemStatics_ConvertMB_ToGB, "ConvertMB_ToGB" }, // 466424910
		{ &Z_Construct_UFunction_UOperatingSystemStatics_CreateGenericError, "CreateGenericError" }, // 2711938568
		{ &Z_Construct_UFunction_UOperatingSystemStatics_CreateNotification, "CreateNotification" }, // 473929967
		{ &Z_Construct_UFunction_UOperatingSystemStatics_DeterminePasswordStrength, "DeterminePasswordStrength" }, // 785624936
		{ &Z_Construct_UFunction_UOperatingSystemStatics_Equal_Version, "Equal_Version" }, // 2178495951
		{ &Z_Construct_UFunction_UOperatingSystemStatics_FindDeviceActorByTag, "FindDeviceActorByTag" }, // 969966721
		{ &Z_Construct_UFunction_UOperatingSystemStatics_FindDeviceActorsByTag, "FindDeviceActorsByTag" }, // 3712660280
		{ &Z_Construct_UFunction_UOperatingSystemStatics_FindHardwareByTag, "FindHardwareByTag" }, // 3675091017
		{ &Z_Construct_UFunction_UOperatingSystemStatics_FindMessengerForDevice, "FindMessengerForDevice" }, // 1480496022
		{ &Z_Construct_UFunction_UOperatingSystemStatics_FindMessengerFromOperatingSystem, "FindMessengerFromOperatingSystem" }, // 2750500750
		{ &Z_Construct_UFunction_UOperatingSystemStatics_GenerateRandomErrorCode, "GenerateRandomErrorCode" }, // 3478800288
		{ &Z_Construct_UFunction_UOperatingSystemStatics_GetCpuSocketName, "GetCpuSocketName" }, // 3206951527
		{ &Z_Construct_UFunction_UOperatingSystemStatics_GetCpuSpeedAsText, "GetCpuSpeedAsText" }, // 1214285907
		{ &Z_Construct_UFunction_UOperatingSystemStatics_GetDateAsText, "GetDateAsText" }, // 1766457811
		{ &Z_Construct_UFunction_UOperatingSystemStatics_GetSize, "GetSize" }, // 1940508824
		{ &Z_Construct_UFunction_UOperatingSystemStatics_GetSizeAsText, "GetSizeAsText" }, // 1460125372
		{ &Z_Construct_UFunction_UOperatingSystemStatics_GetSpecialDirectoryName, "GetSpecialDirectoryName" }, // 3174583480
		{ &Z_Construct_UFunction_UOperatingSystemStatics_GetTimeAsText, "GetTimeAsText" }, // 2299510140
		{ &Z_Construct_UFunction_UOperatingSystemStatics_GetUserManager, "GetUserManager" }, // 3895616333
		{ &Z_Construct_UFunction_UOperatingSystemStatics_GreaterThan_Version, "GreaterThan_Version" }, // 1809607111
		{ &Z_Construct_UFunction_UOperatingSystemStatics_IsNotificationValid, "IsNotificationValid" }, // 321843468
		{ &Z_Construct_UFunction_UOperatingSystemStatics_IsOperatingSystemTagValid, "IsOperatingSystemTagValid" }, // 3415823252
		{ &Z_Construct_UFunction_UOperatingSystemStatics_IsProgramClassCompatibleWithOS, "IsProgramClassCompatibleWithOS" }, // 4112928434
		{ &Z_Construct_UFunction_UOperatingSystemStatics_IsUniqueIdValid, "IsUniqueIdValid" }, // 907737030
		{ &Z_Construct_UFunction_UOperatingSystemStatics_IsUserValid, "IsUserValid" }, // 3163276143
		{ &Z_Construct_UFunction_UOperatingSystemStatics_LessThan_Version, "LessThan_Version" }, // 1388808803
		{ &Z_Construct_UFunction_UOperatingSystemStatics_OpenFile, "OpenFile" }, // 244273124
		{ &Z_Construct_UFunction_UOperatingSystemStatics_RegexExpression, "RegexExpression" }, // 2650259339
		{ &Z_Construct_UFunction_UOperatingSystemStatics_RestartOperatingSystem, "RestartOperatingSystem" }, // 1406563336
		{ &Z_Construct_UFunction_UOperatingSystemStatics_ShutdownOperatingSystem, "ShutdownOperatingSystem" }, // 4021222256
		{ &Z_Construct_UFunction_UOperatingSystemStatics_UniqueIdToString, "UniqueIdToString" }, // 3726307941
		{ &Z_Construct_UFunction_UOperatingSystemStatics_UsersEqual, "UsersEqual" }, // 1871213043
		{ &Z_Construct_UFunction_UOperatingSystemStatics_UsersNotEqual, "UsersNotEqual" }, // 3478506930
		{ &Z_Construct_UFunction_UOperatingSystemStatics_VersionToString, "VersionToString" }, // 3505982275
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemStatics_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystemStatics_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Global/OperatingSystemStatics.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/Global/OperatingSystemStatics.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOperatingSystemStatics_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOperatingSystemStatics>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOperatingSystemStatics_Statics::ClassParams = {
		&UOperatingSystemStatics::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemStatics_Statics::Class_MetaDataParams), Z_Construct_UClass_UOperatingSystemStatics_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UOperatingSystemStatics()
	{
		if (!Z_Registration_Info_UClass_UOperatingSystemStatics.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOperatingSystemStatics.OuterSingleton, Z_Construct_UClass_UOperatingSystemStatics_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOperatingSystemStatics.OuterSingleton;
	}
	template<> OPERATINGSYSTEMSIMULATOR_API UClass* StaticClass<UOperatingSystemStatics>()
	{
		return UOperatingSystemStatics::StaticClass();
	}
	UOperatingSystemStatics::UOperatingSystemStatics(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOperatingSystemStatics);
	UOperatingSystemStatics::~UOperatingSystemStatics() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Global_OperatingSystemStatics_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Global_OperatingSystemStatics_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOperatingSystemStatics, UOperatingSystemStatics::StaticClass, TEXT("UOperatingSystemStatics"), &Z_Registration_Info_UClass_UOperatingSystemStatics, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOperatingSystemStatics), 3559633447U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Global_OperatingSystemStatics_h_1795170451(TEXT("/Script/OperatingSystemSimulator"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Global_OperatingSystemStatics_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Global_OperatingSystemStatics_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
