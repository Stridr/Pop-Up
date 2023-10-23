// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OperatingSystemSimulator/Public/Core/OperatingSystem.h"
#include "GameplayTagContainer.h"
#include "OperatingSystemSimulator/Public/Devices/OperatingSystemBaseDevice.h"
#include "OperatingSystemSimulator/Public/OperatingSystemTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOperatingSystem() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	DRAGGABLEWINDOWUMG_API UClass* Z_Construct_UClass_UDraggableWindow_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	OPERATINGSYSTEMSIMULATOR_API UClass* Z_Construct_UClass_UOperatingSystem();
	OPERATINGSYSTEMSIMULATOR_API UClass* Z_Construct_UClass_UOperatingSystem_NoRegister();
	OPERATINGSYSTEMSIMULATOR_API UClass* Z_Construct_UClass_UOperatingSystemBaseDevice_NoRegister();
	OPERATINGSYSTEMSIMULATOR_API UClass* Z_Construct_UClass_UOperatingSystemBaseProgram_NoRegister();
	OPERATINGSYSTEMSIMULATOR_API UClass* Z_Construct_UClass_UOperatingSystemBsodWidget_NoRegister();
	OPERATINGSYSTEMSIMULATOR_API UClass* Z_Construct_UClass_UOperatingSystemDirectoriesCollection_NoRegister();
	OPERATINGSYSTEMSIMULATOR_API UClass* Z_Construct_UClass_UOperatingSystemPartition_NoRegister();
	OPERATINGSYSTEMSIMULATOR_API UClass* Z_Construct_UClass_UOperatingSystemProgramsCollection_NoRegister();
	OPERATINGSYSTEMSIMULATOR_API UClass* Z_Construct_UClass_UOperatingSystemTaskbarButton_NoRegister();
	OPERATINGSYSTEMSIMULATOR_API UClass* Z_Construct_UClass_UOperatingSystemWidget_NoRegister();
	OPERATINGSYSTEMSIMULATOR_API UEnum* Z_Construct_UEnum_OperatingSystemSimulator_EOperatingSystemSizeMethod();
	OPERATINGSYSTEMSIMULATOR_API UFunction* Z_Construct_UDelegateFunction_OperatingSystemSimulator_OperatingSystemProgramDelegate__DelegateSignature();
	OPERATINGSYSTEMSIMULATOR_API UScriptStruct* Z_Construct_UScriptStruct_FGenericError();
	OPERATINGSYSTEMSIMULATOR_API UScriptStruct* Z_Construct_UScriptStruct_FOperatingSystemNotification();
	OPERATINGSYSTEMSIMULATOR_API UScriptStruct* Z_Construct_UScriptStruct_FOperatingSystemNotificationSettings();
	OPERATINGSYSTEMSIMULATOR_API UScriptStruct* Z_Construct_UScriptStruct_FOperatingSystemRangeTime();
	OPERATINGSYSTEMSIMULATOR_API UScriptStruct* Z_Construct_UScriptStruct_FOperatingSystemUniqueId();
	OPERATINGSYSTEMSIMULATOR_API UScriptStruct* Z_Construct_UScriptStruct_FOperatingSystemUser();
	OPERATINGSYSTEMSIMULATOR_API UScriptStruct* Z_Construct_UScriptStruct_FVersion();
	UPackage* Z_Construct_UPackage__Script_OperatingSystemSimulator();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OperatingSystemNotificationSettings;
class UScriptStruct* FOperatingSystemNotificationSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OperatingSystemNotificationSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OperatingSystemNotificationSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOperatingSystemNotificationSettings, (UObject*)Z_Construct_UPackage__Script_OperatingSystemSimulator(), TEXT("OperatingSystemNotificationSettings"));
	}
	return Z_Registration_Info_UScriptStruct_OperatingSystemNotificationSettings.OuterSingleton;
}
template<> OPERATINGSYSTEMSIMULATOR_API UScriptStruct* StaticStruct<FOperatingSystemNotificationSettings>()
{
	return FOperatingSystemNotificationSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FOperatingSystemNotificationSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableNotifications_MetaData[];
#endif
		static void NewProp_bEnableNotifications_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableNotifications;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPlayNotificationSound_MetaData[];
#endif
		static void NewProp_bPlayNotificationSound_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPlayNotificationSound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ToastNotificationTime_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_ToastNotificationTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NotificationSoundDefault_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_NotificationSoundDefault;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NotificationSoundWarning_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_NotificationSoundWarning;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NotificationSoundError_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_NotificationSoundError;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOperatingSystemNotificationSettings_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/OperatingSystem.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOperatingSystemNotificationSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOperatingSystemNotificationSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOperatingSystemNotificationSettings_Statics::NewProp_bEnableNotifications_MetaData[] = {
		{ "Category", "Notification Settings" },
		{ "Comment", "/** Enable notifications in Operating System. */" },
		{ "ModuleRelativePath", "Public/Core/OperatingSystem.h" },
		{ "ToolTip", "Enable notifications in Operating System." },
	};
#endif
	void Z_Construct_UScriptStruct_FOperatingSystemNotificationSettings_Statics::NewProp_bEnableNotifications_SetBit(void* Obj)
	{
		((FOperatingSystemNotificationSettings*)Obj)->bEnableNotifications = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOperatingSystemNotificationSettings_Statics::NewProp_bEnableNotifications = { "bEnableNotifications", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FOperatingSystemNotificationSettings), &Z_Construct_UScriptStruct_FOperatingSystemNotificationSettings_Statics::NewProp_bEnableNotifications_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOperatingSystemNotificationSettings_Statics::NewProp_bEnableNotifications_MetaData), Z_Construct_UScriptStruct_FOperatingSystemNotificationSettings_Statics::NewProp_bEnableNotifications_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOperatingSystemNotificationSettings_Statics::NewProp_bPlayNotificationSound_MetaData[] = {
		{ "Category", "Notification Settings" },
		{ "Comment", "/** Should we play a sound when a notification is received? */" },
		{ "EditCondition", "bEnableNotifications" },
		{ "ModuleRelativePath", "Public/Core/OperatingSystem.h" },
		{ "ToolTip", "Should we play a sound when a notification is received?" },
	};
#endif
	void Z_Construct_UScriptStruct_FOperatingSystemNotificationSettings_Statics::NewProp_bPlayNotificationSound_SetBit(void* Obj)
	{
		((FOperatingSystemNotificationSettings*)Obj)->bPlayNotificationSound = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOperatingSystemNotificationSettings_Statics::NewProp_bPlayNotificationSound = { "bPlayNotificationSound", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FOperatingSystemNotificationSettings), &Z_Construct_UScriptStruct_FOperatingSystemNotificationSettings_Statics::NewProp_bPlayNotificationSound_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOperatingSystemNotificationSettings_Statics::NewProp_bPlayNotificationSound_MetaData), Z_Construct_UScriptStruct_FOperatingSystemNotificationSettings_Statics::NewProp_bPlayNotificationSound_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOperatingSystemNotificationSettings_Statics::NewProp_ToastNotificationTime_MetaData[] = {
		{ "Category", "Notification Settings" },
		{ "ClampMin", "1" },
		{ "Comment", "/** How long the toast notification should display on screen. Toast notifications are implemented in UMG and this has no effect if you have not done that. */" },
		{ "EditCondition", "bEnableNotifications" },
		{ "ForceUnits", "Seconds" },
		{ "ModuleRelativePath", "Public/Core/OperatingSystem.h" },
		{ "ToolTip", "How long the toast notification should display on screen. Toast notifications are implemented in UMG and this has no effect if you have not done that." },
		{ "UIMax", "7" },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FOperatingSystemNotificationSettings_Statics::NewProp_ToastNotificationTime = { "ToastNotificationTime", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOperatingSystemNotificationSettings, ToastNotificationTime), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOperatingSystemNotificationSettings_Statics::NewProp_ToastNotificationTime_MetaData), Z_Construct_UScriptStruct_FOperatingSystemNotificationSettings_Statics::NewProp_ToastNotificationTime_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOperatingSystemNotificationSettings_Statics::NewProp_NotificationSoundDefault_MetaData[] = {
		{ "Category", "Notification Settings" },
		{ "Comment", "/** Default sound to play. */" },
		{ "EditCondition", "bEnableNotifications && bPlayNotificationSound" },
		{ "ModuleRelativePath", "Public/Core/OperatingSystem.h" },
		{ "ToolTip", "Default sound to play." },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FOperatingSystemNotificationSettings_Statics::NewProp_NotificationSoundDefault = { "NotificationSoundDefault", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOperatingSystemNotificationSettings, NotificationSoundDefault), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOperatingSystemNotificationSettings_Statics::NewProp_NotificationSoundDefault_MetaData), Z_Construct_UScriptStruct_FOperatingSystemNotificationSettings_Statics::NewProp_NotificationSoundDefault_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOperatingSystemNotificationSettings_Statics::NewProp_NotificationSoundWarning_MetaData[] = {
		{ "Category", "Notification Settings" },
		{ "Comment", "/** Warning sound to play if notification is a warning. */" },
		{ "EditCondition", "bEnableNotifications && bPlayNotificationSound" },
		{ "ModuleRelativePath", "Public/Core/OperatingSystem.h" },
		{ "ToolTip", "Warning sound to play if notification is a warning." },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FOperatingSystemNotificationSettings_Statics::NewProp_NotificationSoundWarning = { "NotificationSoundWarning", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOperatingSystemNotificationSettings, NotificationSoundWarning), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOperatingSystemNotificationSettings_Statics::NewProp_NotificationSoundWarning_MetaData), Z_Construct_UScriptStruct_FOperatingSystemNotificationSettings_Statics::NewProp_NotificationSoundWarning_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOperatingSystemNotificationSettings_Statics::NewProp_NotificationSoundError_MetaData[] = {
		{ "Category", "Notification Settings" },
		{ "Comment", "/** Error sound to play if notification is an error. */" },
		{ "EditCondition", "bEnableNotifications && bPlayNotificationSound" },
		{ "ModuleRelativePath", "Public/Core/OperatingSystem.h" },
		{ "ToolTip", "Error sound to play if notification is an error." },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FOperatingSystemNotificationSettings_Statics::NewProp_NotificationSoundError = { "NotificationSoundError", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOperatingSystemNotificationSettings, NotificationSoundError), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOperatingSystemNotificationSettings_Statics::NewProp_NotificationSoundError_MetaData), Z_Construct_UScriptStruct_FOperatingSystemNotificationSettings_Statics::NewProp_NotificationSoundError_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOperatingSystemNotificationSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOperatingSystemNotificationSettings_Statics::NewProp_bEnableNotifications,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOperatingSystemNotificationSettings_Statics::NewProp_bPlayNotificationSound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOperatingSystemNotificationSettings_Statics::NewProp_ToastNotificationTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOperatingSystemNotificationSettings_Statics::NewProp_NotificationSoundDefault,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOperatingSystemNotificationSettings_Statics::NewProp_NotificationSoundWarning,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOperatingSystemNotificationSettings_Statics::NewProp_NotificationSoundError,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOperatingSystemNotificationSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OperatingSystemSimulator,
		nullptr,
		&NewStructOps,
		"OperatingSystemNotificationSettings",
		Z_Construct_UScriptStruct_FOperatingSystemNotificationSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOperatingSystemNotificationSettings_Statics::PropPointers),
		sizeof(FOperatingSystemNotificationSettings),
		alignof(FOperatingSystemNotificationSettings),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOperatingSystemNotificationSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOperatingSystemNotificationSettings_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOperatingSystemNotificationSettings_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FOperatingSystemNotificationSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_OperatingSystemNotificationSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OperatingSystemNotificationSettings.InnerSingleton, Z_Construct_UScriptStruct_FOperatingSystemNotificationSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_OperatingSystemNotificationSettings.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_OperatingSystemSimulator_OperatingSystemProgramDelegate__DelegateSignature_Statics
	{
		struct _Script_OperatingSystemSimulator_eventOperatingSystemProgramDelegate_Parms
		{
			UOperatingSystemBaseProgram* Program;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Program;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_OperatingSystemSimulator_OperatingSystemProgramDelegate__DelegateSignature_Statics::NewProp_Program = { "Program", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OperatingSystemSimulator_eventOperatingSystemProgramDelegate_Parms, Program), Z_Construct_UClass_UOperatingSystemBaseProgram_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OperatingSystemSimulator_OperatingSystemProgramDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OperatingSystemSimulator_OperatingSystemProgramDelegate__DelegateSignature_Statics::NewProp_Program,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OperatingSystemSimulator_OperatingSystemProgramDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/OperatingSystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OperatingSystemSimulator_OperatingSystemProgramDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OperatingSystemSimulator, nullptr, "OperatingSystemProgramDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_OperatingSystemSimulator_OperatingSystemProgramDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OperatingSystemSimulator_OperatingSystemProgramDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OperatingSystemSimulator_OperatingSystemProgramDelegate__DelegateSignature_Statics::_Script_OperatingSystemSimulator_eventOperatingSystemProgramDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OperatingSystemSimulator_OperatingSystemProgramDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OperatingSystemSimulator_OperatingSystemProgramDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OperatingSystemSimulator_OperatingSystemProgramDelegate__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_OperatingSystemSimulator_OperatingSystemProgramDelegate__DelegateSignature_Statics::_Script_OperatingSystemSimulator_eventOperatingSystemProgramDelegate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_OperatingSystemSimulator_OperatingSystemProgramDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OperatingSystemSimulator_OperatingSystemProgramDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOperatingSystemProgramDelegate_DelegateWrapper(const FMulticastScriptDelegate& OperatingSystemProgramDelegate, UOperatingSystemBaseProgram* Program)
{
	struct _Script_OperatingSystemSimulator_eventOperatingSystemProgramDelegate_Parms
	{
		UOperatingSystemBaseProgram* Program;
	};
	_Script_OperatingSystemSimulator_eventOperatingSystemProgramDelegate_Parms Parms;
	Parms.Program=Program;
	OperatingSystemProgramDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UOperatingSystem::execIsPreInstalledOperatingSystem)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsPreInstalledOperatingSystem();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOperatingSystem::execGetRunningProgram)
	{
		P_GET_SOFTCLASS(TSoftClassPtr<UOperatingSystemBaseProgram> ,Z_Param_TestClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UOperatingSystemBaseProgram**)Z_Param__Result=P_THIS->GetRunningProgram(Z_Param_TestClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOperatingSystem::execIsProgramInstalled)
	{
		P_GET_SOFTCLASS(TSoftClassPtr<UOperatingSystemBaseProgram> ,Z_Param_TestClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsProgramInstalled(Z_Param_TestClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOperatingSystem::execGetInstalledProgram)
	{
		P_GET_SOFTCLASS(TSoftClassPtr<UOperatingSystemBaseProgram> ,Z_Param_TestClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UOperatingSystemBaseProgram**)Z_Param__Result=P_THIS->GetInstalledProgram(Z_Param_TestClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOperatingSystem::execGetInstalledPrograms)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UOperatingSystemBaseProgram*>*)Z_Param__Result=P_THIS->GetInstalledPrograms();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOperatingSystem::execGetToastNotificationDisplayTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetToastNotificationDisplayTime();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOperatingSystem::execGetBsodOnScreenTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetBsodOnScreenTime();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOperatingSystem::execIsUnix)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsUnix();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOperatingSystem::execGetDirectoryIconObject)
	{
		P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_TestTag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UObject**)Z_Param__Result=P_THIS->GetDirectoryIconObject(Z_Param_Out_TestTag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOperatingSystem::execCloseAllRunningPrograms)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CloseAllRunningPrograms();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOperatingSystem::execMinimizeProgram)
	{
		P_GET_OBJECT(UOperatingSystemBaseProgram,Z_Param_TargetProgram);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MinimizeProgram(Z_Param_TargetProgram);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOperatingSystem::execCloseProgram)
	{
		P_GET_OBJECT(UOperatingSystemBaseProgram,Z_Param_TargetProgram);
		P_GET_STRUCT_REF(FGenericError,Z_Param_Out_OutError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CloseProgram(Z_Param_TargetProgram,Z_Param_Out_OutError);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOperatingSystem::execGetOperatingSystemPartition)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UOperatingSystemPartition**)Z_Param__Result=P_THIS->GetOperatingSystemPartition();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOperatingSystem::execGetDiskPartitions)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UOperatingSystemPartition*>*)Z_Param__Result=P_THIS->GetDiskPartitions();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOperatingSystem::execHasEnoughSpace)
	{
		P_GET_PROPERTY_REF(FDoubleProperty,Z_Param_Out_TestSizeInBytes);
		P_GET_OBJECT(UOperatingSystemPartition,Z_Param_InPartition);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasEnoughSpace(Z_Param_Out_TestSizeInBytes,Z_Param_InPartition);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOperatingSystem::execUpdateCurrentUserDetails)
	{
		P_GET_STRUCT_REF(FOperatingSystemUser,Z_Param_Out_UpdatedDetails);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->UpdateCurrentUserDetails(Z_Param_Out_UpdatedDetails);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOperatingSystem::execAuthorizeUser)
	{
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_Email);
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_Password);
		P_GET_STRUCT_REF(FOperatingSystemUser,Z_Param_Out_OutAuthorizedUser);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AuthorizeUser(Z_Param_Out_Email,Z_Param_Out_Password,Z_Param_Out_OutAuthorizedUser);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOperatingSystem::execLoginUser)
	{
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_Username);
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_Password);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->LoginUser(Z_Param_Out_Username,Z_Param_Out_Password);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOperatingSystem::execCreateNewUser)
	{
		P_GET_STRUCT_REF(FOperatingSystemUser,Z_Param_Out_NewUser);
		P_GET_UBOOL(Z_Param_bSetAsActive);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CreateNewUser(Z_Param_Out_NewUser,Z_Param_bSetAsActive);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOperatingSystem::execInstallationCompleted)
	{
		P_GET_UBOOL(Z_Param_bSwitchToDesktop);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InstallationCompleted(Z_Param_bSwitchToDesktop);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOperatingSystem::execRefreshPartitions)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RefreshPartitions();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOperatingSystem::execRemovePartition)
	{
		P_GET_OBJECT(UOperatingSystemPartition,Z_Param_PartitionToDelete);
		P_GET_STRUCT_REF(FGenericError,Z_Param_Out_OutError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemovePartition(Z_Param_PartitionToDelete,Z_Param_Out_OutError);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOperatingSystem::execAllocatePartition)
	{
		P_GET_PROPERTY(FDoubleProperty,Z_Param_SizeInBytes);
		P_GET_STRUCT_REF(FGenericError,Z_Param_Out_OutError);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UOperatingSystemPartition**)Z_Param__Result=P_THIS->AllocatePartition(Z_Param_SizeInBytes,Z_Param_Out_OutError);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOperatingSystem::execBeginInstallation)
	{
		P_GET_OBJECT(UOperatingSystemPartition,Z_Param_TargetPartition);
		P_GET_STRUCT_REF(FGenericError,Z_Param_Out_OutError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BeginInstallation(Z_Param_TargetPartition,Z_Param_Out_OutError);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOperatingSystem::execInstallProgramFromClass)
	{
		P_GET_STRUCT_REF(FGenericError,Z_Param_Out_OutErrorIfAny);
		P_GET_SOFTCLASS(TSoftClassPtr<UOperatingSystemBaseProgram> ,Z_Param_ProgramClass);
		P_GET_OBJECT(UOperatingSystemPartition,Z_Param_TargetPartition);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UOperatingSystemBaseProgram**)Z_Param__Result=P_THIS->InstallProgramFromClass(Z_Param_Out_OutErrorIfAny,Z_Param_ProgramClass,Z_Param_TargetPartition);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOperatingSystem::execInstallProgramFromPackage)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_ProgramIdentifier);
		P_GET_STRUCT_REF(FGenericError,Z_Param_Out_OutErrorIfAny);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UOperatingSystemBaseProgram**)Z_Param__Result=P_THIS->InstallProgramFromPackage(Z_Param_Out_ProgramIdentifier,Z_Param_Out_OutErrorIfAny);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOperatingSystem::execUninstallProgramByClass)
	{
		P_GET_SOFTCLASS(TSoftClassPtr<UOperatingSystemBaseProgram> ,Z_Param_ProgramClass);
		P_GET_STRUCT_REF(FGenericError,Z_Param_Out_OutErrorIfAny);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UninstallProgramByClass(Z_Param_ProgramClass,Z_Param_Out_OutErrorIfAny);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOperatingSystem::execUninstallProgram)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_ProgramIdentifier);
		P_GET_STRUCT_REF(FGenericError,Z_Param_Out_OutErrorIfAny);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UninstallProgram(Z_Param_Out_ProgramIdentifier,Z_Param_Out_OutErrorIfAny);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOperatingSystem::execGetHardDiskSize)
	{
		P_GET_STRUCT_REF(FGenericError,Z_Param_Out_OutError);
		P_GET_ENUM(EOperatingSystemSizeMethod,Z_Param_SizeMethod);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(double*)Z_Param__Result=P_THIS->GetHardDiskSize(Z_Param_Out_OutError,EOperatingSystemSizeMethod(Z_Param_SizeMethod));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOperatingSystem::execGetStoragePercentage)
	{
		P_GET_OBJECT(UOperatingSystemPartition,Z_Param_Partition);
		P_GET_STRUCT_REF(FGenericError,Z_Param_Out_OutError);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetStoragePercentage(Z_Param_Partition,Z_Param_Out_OutError);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOperatingSystem::execGetSizeAsText)
	{
		P_GET_ENUM(EOperatingSystemSizeMethod,Z_Param_SizeMethod);
		P_GET_OBJECT(UOperatingSystemPartition,Z_Param_Partition);
		P_GET_STRUCT_REF(FGenericError,Z_Param_Out_OutError);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->GetSizeAsText(EOperatingSystemSizeMethod(Z_Param_SizeMethod),Z_Param_Partition,Z_Param_Out_OutError);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOperatingSystem::execClearAllNotifications)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearAllNotifications();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOperatingSystem::execGetNotifications)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FOperatingSystemNotification>*)Z_Param__Result=P_THIS->GetNotifications();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOperatingSystem::execGetInitialLoadingTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetInitialLoadingTime();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOperatingSystem::execGetLoadingTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetLoadingTime();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOperatingSystem::execGetInstallationTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetInstallationTime();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOperatingSystem::execCanAutoLogin)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanAutoLogin();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOperatingSystem::execSetAutoLogin)
	{
		P_GET_UBOOL(Z_Param_bEnableAutoLogin);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAutoLogin(Z_Param_bEnableAutoLogin);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOperatingSystem::execGetDeviceName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->GetDeviceName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOperatingSystem::execSetDeviceName)
	{
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_NewName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDeviceName(Z_Param_Out_NewName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOperatingSystem::execShouldInstallStartupPrograms)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ShouldInstallStartupPrograms();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOperatingSystem::execSetToInstallStartupPrograms)
	{
		P_GET_UBOOL(Z_Param_bInstall);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetToInstallStartupPrograms(Z_Param_bInstall);
		P_NATIVE_END;
	}
	struct OperatingSystem_eventK2_CanStartOperatingSystem_Parms
	{
		FGenericError ReturnError;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		OperatingSystem_eventK2_CanStartOperatingSystem_Parms()
			: ReturnValue(false)
		{
		}
	};
	static FName NAME_UOperatingSystem_K2_CanStartOperatingSystem = FName(TEXT("K2_CanStartOperatingSystem"));
	bool UOperatingSystem::K2_CanStartOperatingSystem(FGenericError& ReturnError)
	{
		OperatingSystem_eventK2_CanStartOperatingSystem_Parms Parms;
		Parms.ReturnError=ReturnError;
		ProcessEvent(FindFunctionChecked(NAME_UOperatingSystem_K2_CanStartOperatingSystem),&Parms);
		ReturnError=Parms.ReturnError;
		return !!Parms.ReturnValue;
	}
	void UOperatingSystem::StaticRegisterNativesUOperatingSystem()
	{
		UClass* Class = UOperatingSystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AllocatePartition", &UOperatingSystem::execAllocatePartition },
			{ "AuthorizeUser", &UOperatingSystem::execAuthorizeUser },
			{ "BeginInstallation", &UOperatingSystem::execBeginInstallation },
			{ "CanAutoLogin", &UOperatingSystem::execCanAutoLogin },
			{ "ClearAllNotifications", &UOperatingSystem::execClearAllNotifications },
			{ "CloseAllRunningPrograms", &UOperatingSystem::execCloseAllRunningPrograms },
			{ "CloseProgram", &UOperatingSystem::execCloseProgram },
			{ "CreateNewUser", &UOperatingSystem::execCreateNewUser },
			{ "GetBsodOnScreenTime", &UOperatingSystem::execGetBsodOnScreenTime },
			{ "GetDeviceName", &UOperatingSystem::execGetDeviceName },
			{ "GetDirectoryIconObject", &UOperatingSystem::execGetDirectoryIconObject },
			{ "GetDiskPartitions", &UOperatingSystem::execGetDiskPartitions },
			{ "GetHardDiskSize", &UOperatingSystem::execGetHardDiskSize },
			{ "GetInitialLoadingTime", &UOperatingSystem::execGetInitialLoadingTime },
			{ "GetInstallationTime", &UOperatingSystem::execGetInstallationTime },
			{ "GetInstalledProgram", &UOperatingSystem::execGetInstalledProgram },
			{ "GetInstalledPrograms", &UOperatingSystem::execGetInstalledPrograms },
			{ "GetLoadingTime", &UOperatingSystem::execGetLoadingTime },
			{ "GetNotifications", &UOperatingSystem::execGetNotifications },
			{ "GetOperatingSystemPartition", &UOperatingSystem::execGetOperatingSystemPartition },
			{ "GetRunningProgram", &UOperatingSystem::execGetRunningProgram },
			{ "GetSizeAsText", &UOperatingSystem::execGetSizeAsText },
			{ "GetStoragePercentage", &UOperatingSystem::execGetStoragePercentage },
			{ "GetToastNotificationDisplayTime", &UOperatingSystem::execGetToastNotificationDisplayTime },
			{ "HasEnoughSpace", &UOperatingSystem::execHasEnoughSpace },
			{ "InstallationCompleted", &UOperatingSystem::execInstallationCompleted },
			{ "InstallProgramFromClass", &UOperatingSystem::execInstallProgramFromClass },
			{ "InstallProgramFromPackage", &UOperatingSystem::execInstallProgramFromPackage },
			{ "IsPreInstalledOperatingSystem", &UOperatingSystem::execIsPreInstalledOperatingSystem },
			{ "IsProgramInstalled", &UOperatingSystem::execIsProgramInstalled },
			{ "IsUnix", &UOperatingSystem::execIsUnix },
			{ "LoginUser", &UOperatingSystem::execLoginUser },
			{ "MinimizeProgram", &UOperatingSystem::execMinimizeProgram },
			{ "RefreshPartitions", &UOperatingSystem::execRefreshPartitions },
			{ "RemovePartition", &UOperatingSystem::execRemovePartition },
			{ "SetAutoLogin", &UOperatingSystem::execSetAutoLogin },
			{ "SetDeviceName", &UOperatingSystem::execSetDeviceName },
			{ "SetToInstallStartupPrograms", &UOperatingSystem::execSetToInstallStartupPrograms },
			{ "ShouldInstallStartupPrograms", &UOperatingSystem::execShouldInstallStartupPrograms },
			{ "UninstallProgram", &UOperatingSystem::execUninstallProgram },
			{ "UninstallProgramByClass", &UOperatingSystem::execUninstallProgramByClass },
			{ "UpdateCurrentUserDetails", &UOperatingSystem::execUpdateCurrentUserDetails },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOperatingSystem_AllocatePartition_Statics
	{
		struct OperatingSystem_eventAllocatePartition_Parms
		{
			double SizeInBytes;
			FGenericError OutError;
			UOperatingSystemPartition* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SizeInBytes_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_SizeInBytes;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutError;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystem_AllocatePartition_Statics::NewProp_SizeInBytes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UOperatingSystem_AllocatePartition_Statics::NewProp_SizeInBytes = { "SizeInBytes", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystem_eventAllocatePartition_Parms, SizeInBytes), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystem_AllocatePartition_Statics::NewProp_SizeInBytes_MetaData), Z_Construct_UFunction_UOperatingSystem_AllocatePartition_Statics::NewProp_SizeInBytes_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOperatingSystem_AllocatePartition_Statics::NewProp_OutError = { "OutError", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystem_eventAllocatePartition_Parms, OutError), Z_Construct_UScriptStruct_FGenericError, METADATA_PARAMS(0, nullptr) }; // 4286029882
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOperatingSystem_AllocatePartition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystem_eventAllocatePartition_Parms, ReturnValue), Z_Construct_UClass_UOperatingSystemPartition_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperatingSystem_AllocatePartition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystem_AllocatePartition_Statics::NewProp_SizeInBytes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystem_AllocatePartition_Statics::NewProp_OutError,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystem_AllocatePartition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystem_AllocatePartition_Statics::Function_MetaDataParams[] = {
		{ "Category", "OperatingSystem" },
		{ "ModuleRelativePath", "Public/Core/OperatingSystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystem_AllocatePartition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystem, nullptr, "AllocatePartition", nullptr, nullptr, Z_Construct_UFunction_UOperatingSystem_AllocatePartition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystem_AllocatePartition_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOperatingSystem_AllocatePartition_Statics::OperatingSystem_eventAllocatePartition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystem_AllocatePartition_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystem_AllocatePartition_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystem_AllocatePartition_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOperatingSystem_AllocatePartition_Statics::OperatingSystem_eventAllocatePartition_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOperatingSystem_AllocatePartition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystem_AllocatePartition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOperatingSystem_AuthorizeUser_Statics
	{
		struct OperatingSystem_eventAuthorizeUser_Parms
		{
			FText Email;
			FText Password;
			FOperatingSystemUser OutAuthorizedUser;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Email_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Email;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Password_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Password;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutAuthorizedUser;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystem_AuthorizeUser_Statics::NewProp_Email_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UOperatingSystem_AuthorizeUser_Statics::NewProp_Email = { "Email", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystem_eventAuthorizeUser_Parms, Email), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystem_AuthorizeUser_Statics::NewProp_Email_MetaData), Z_Construct_UFunction_UOperatingSystem_AuthorizeUser_Statics::NewProp_Email_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystem_AuthorizeUser_Statics::NewProp_Password_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UOperatingSystem_AuthorizeUser_Statics::NewProp_Password = { "Password", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystem_eventAuthorizeUser_Parms, Password), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystem_AuthorizeUser_Statics::NewProp_Password_MetaData), Z_Construct_UFunction_UOperatingSystem_AuthorizeUser_Statics::NewProp_Password_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOperatingSystem_AuthorizeUser_Statics::NewProp_OutAuthorizedUser = { "OutAuthorizedUser", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystem_eventAuthorizeUser_Parms, OutAuthorizedUser), Z_Construct_UScriptStruct_FOperatingSystemUser, METADATA_PARAMS(0, nullptr) }; // 1295920940
	void Z_Construct_UFunction_UOperatingSystem_AuthorizeUser_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OperatingSystem_eventAuthorizeUser_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOperatingSystem_AuthorizeUser_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OperatingSystem_eventAuthorizeUser_Parms), &Z_Construct_UFunction_UOperatingSystem_AuthorizeUser_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperatingSystem_AuthorizeUser_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystem_AuthorizeUser_Statics::NewProp_Email,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystem_AuthorizeUser_Statics::NewProp_Password,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystem_AuthorizeUser_Statics::NewProp_OutAuthorizedUser,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystem_AuthorizeUser_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystem_AuthorizeUser_Statics::Function_MetaDataParams[] = {
		{ "Category", "OperatingSystem" },
		{ "ModuleRelativePath", "Public/Core/OperatingSystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystem_AuthorizeUser_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystem, nullptr, "AuthorizeUser", nullptr, nullptr, Z_Construct_UFunction_UOperatingSystem_AuthorizeUser_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystem_AuthorizeUser_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOperatingSystem_AuthorizeUser_Statics::OperatingSystem_eventAuthorizeUser_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystem_AuthorizeUser_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystem_AuthorizeUser_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystem_AuthorizeUser_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOperatingSystem_AuthorizeUser_Statics::OperatingSystem_eventAuthorizeUser_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOperatingSystem_AuthorizeUser()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystem_AuthorizeUser_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOperatingSystem_BeginInstallation_Statics
	{
		struct OperatingSystem_eventBeginInstallation_Parms
		{
			UOperatingSystemPartition* TargetPartition;
			FGenericError OutError;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetPartition;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutError;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOperatingSystem_BeginInstallation_Statics::NewProp_TargetPartition = { "TargetPartition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystem_eventBeginInstallation_Parms, TargetPartition), Z_Construct_UClass_UOperatingSystemPartition_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOperatingSystem_BeginInstallation_Statics::NewProp_OutError = { "OutError", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystem_eventBeginInstallation_Parms, OutError), Z_Construct_UScriptStruct_FGenericError, METADATA_PARAMS(0, nullptr) }; // 4286029882
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperatingSystem_BeginInstallation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystem_BeginInstallation_Statics::NewProp_TargetPartition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystem_BeginInstallation_Statics::NewProp_OutError,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystem_BeginInstallation_Statics::Function_MetaDataParams[] = {
		{ "Category", "OperatingSystem" },
		{ "Comment", "/**\n\x09* public\n\x09* UOperatingSystem::BeginInstallation\n\x09* Begin installation of this Operating System. \n\x09* This is a simple timer which will call UOperatingSystem::FinishInstallation after the time returned by UOperatingSystem::GetInstallationTime()\n\x09* @param TargetPartition Which partition to install to? Must not be null.\n\x09* @param OutError [FGenericError&] Outputs error (if any). Use the IsValid in this struct to check if there was any error.\n\x09**/" },
		{ "ModuleRelativePath", "Public/Core/OperatingSystem.h" },
		{ "ToolTip", "public\nUOperatingSystem::BeginInstallation\nBegin installation of this Operating System.\nThis is a simple timer which will call UOperatingSystem::FinishInstallation after the time returned by UOperatingSystem::GetInstallationTime()\n@param TargetPartition Which partition to install to? Must not be null.\n@param OutError [FGenericError&] Outputs error (if any). Use the IsValid in this struct to check if there was any error." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystem_BeginInstallation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystem, nullptr, "BeginInstallation", nullptr, nullptr, Z_Construct_UFunction_UOperatingSystem_BeginInstallation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystem_BeginInstallation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOperatingSystem_BeginInstallation_Statics::OperatingSystem_eventBeginInstallation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystem_BeginInstallation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystem_BeginInstallation_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystem_BeginInstallation_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOperatingSystem_BeginInstallation_Statics::OperatingSystem_eventBeginInstallation_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOperatingSystem_BeginInstallation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystem_BeginInstallation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOperatingSystem_CanAutoLogin_Statics
	{
		struct OperatingSystem_eventCanAutoLogin_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UOperatingSystem_CanAutoLogin_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OperatingSystem_eventCanAutoLogin_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOperatingSystem_CanAutoLogin_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OperatingSystem_eventCanAutoLogin_Parms), &Z_Construct_UFunction_UOperatingSystem_CanAutoLogin_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperatingSystem_CanAutoLogin_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystem_CanAutoLogin_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystem_CanAutoLogin_Statics::Function_MetaDataParams[] = {
		{ "Category", "OperatingSystem" },
		{ "ModuleRelativePath", "Public/Core/OperatingSystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystem_CanAutoLogin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystem, nullptr, "CanAutoLogin", nullptr, nullptr, Z_Construct_UFunction_UOperatingSystem_CanAutoLogin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystem_CanAutoLogin_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOperatingSystem_CanAutoLogin_Statics::OperatingSystem_eventCanAutoLogin_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystem_CanAutoLogin_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystem_CanAutoLogin_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystem_CanAutoLogin_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOperatingSystem_CanAutoLogin_Statics::OperatingSystem_eventCanAutoLogin_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOperatingSystem_CanAutoLogin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystem_CanAutoLogin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOperatingSystem_ClearAllNotifications_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystem_ClearAllNotifications_Statics::Function_MetaDataParams[] = {
		{ "Category", "OperatingSystem" },
		{ "ModuleRelativePath", "Public/Core/OperatingSystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystem_ClearAllNotifications_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystem, nullptr, "ClearAllNotifications", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystem_ClearAllNotifications_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystem_ClearAllNotifications_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UOperatingSystem_ClearAllNotifications()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystem_ClearAllNotifications_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOperatingSystem_CloseAllRunningPrograms_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystem_CloseAllRunningPrograms_Statics::Function_MetaDataParams[] = {
		{ "Category", "OperatingSystem" },
		{ "ModuleRelativePath", "Public/Core/OperatingSystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystem_CloseAllRunningPrograms_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystem, nullptr, "CloseAllRunningPrograms", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystem_CloseAllRunningPrograms_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystem_CloseAllRunningPrograms_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UOperatingSystem_CloseAllRunningPrograms()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystem_CloseAllRunningPrograms_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOperatingSystem_CloseProgram_Statics
	{
		struct OperatingSystem_eventCloseProgram_Parms
		{
			UOperatingSystemBaseProgram* TargetProgram;
			FGenericError OutError;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetProgram;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutError;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOperatingSystem_CloseProgram_Statics::NewProp_TargetProgram = { "TargetProgram", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystem_eventCloseProgram_Parms, TargetProgram), Z_Construct_UClass_UOperatingSystemBaseProgram_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOperatingSystem_CloseProgram_Statics::NewProp_OutError = { "OutError", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystem_eventCloseProgram_Parms, OutError), Z_Construct_UScriptStruct_FGenericError, METADATA_PARAMS(0, nullptr) }; // 4286029882
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperatingSystem_CloseProgram_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystem_CloseProgram_Statics::NewProp_TargetProgram,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystem_CloseProgram_Statics::NewProp_OutError,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystem_CloseProgram_Statics::Function_MetaDataParams[] = {
		{ "Category", "OperatingSystem" },
		{ "ModuleRelativePath", "Public/Core/OperatingSystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystem_CloseProgram_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystem, nullptr, "CloseProgram", nullptr, nullptr, Z_Construct_UFunction_UOperatingSystem_CloseProgram_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystem_CloseProgram_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOperatingSystem_CloseProgram_Statics::OperatingSystem_eventCloseProgram_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystem_CloseProgram_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystem_CloseProgram_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystem_CloseProgram_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOperatingSystem_CloseProgram_Statics::OperatingSystem_eventCloseProgram_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOperatingSystem_CloseProgram()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystem_CloseProgram_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOperatingSystem_CreateNewUser_Statics
	{
		struct OperatingSystem_eventCreateNewUser_Parms
		{
			FOperatingSystemUser NewUser;
			bool bSetAsActive;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewUser_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewUser;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSetAsActive_MetaData[];
#endif
		static void NewProp_bSetAsActive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSetAsActive;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystem_CreateNewUser_Statics::NewProp_NewUser_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOperatingSystem_CreateNewUser_Statics::NewProp_NewUser = { "NewUser", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystem_eventCreateNewUser_Parms, NewUser), Z_Construct_UScriptStruct_FOperatingSystemUser, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystem_CreateNewUser_Statics::NewProp_NewUser_MetaData), Z_Construct_UFunction_UOperatingSystem_CreateNewUser_Statics::NewProp_NewUser_MetaData) }; // 1295920940
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystem_CreateNewUser_Statics::NewProp_bSetAsActive_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UOperatingSystem_CreateNewUser_Statics::NewProp_bSetAsActive_SetBit(void* Obj)
	{
		((OperatingSystem_eventCreateNewUser_Parms*)Obj)->bSetAsActive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOperatingSystem_CreateNewUser_Statics::NewProp_bSetAsActive = { "bSetAsActive", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OperatingSystem_eventCreateNewUser_Parms), &Z_Construct_UFunction_UOperatingSystem_CreateNewUser_Statics::NewProp_bSetAsActive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystem_CreateNewUser_Statics::NewProp_bSetAsActive_MetaData), Z_Construct_UFunction_UOperatingSystem_CreateNewUser_Statics::NewProp_bSetAsActive_MetaData) };
	void Z_Construct_UFunction_UOperatingSystem_CreateNewUser_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OperatingSystem_eventCreateNewUser_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOperatingSystem_CreateNewUser_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OperatingSystem_eventCreateNewUser_Parms), &Z_Construct_UFunction_UOperatingSystem_CreateNewUser_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperatingSystem_CreateNewUser_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystem_CreateNewUser_Statics::NewProp_NewUser,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystem_CreateNewUser_Statics::NewProp_bSetAsActive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystem_CreateNewUser_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystem_CreateNewUser_Statics::Function_MetaDataParams[] = {
		{ "Category", "OperatingSystem" },
		{ "CPP_Default_bSetAsActive", "false" },
		{ "ModuleRelativePath", "Public/Core/OperatingSystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystem_CreateNewUser_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystem, nullptr, "CreateNewUser", nullptr, nullptr, Z_Construct_UFunction_UOperatingSystem_CreateNewUser_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystem_CreateNewUser_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOperatingSystem_CreateNewUser_Statics::OperatingSystem_eventCreateNewUser_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystem_CreateNewUser_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystem_CreateNewUser_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystem_CreateNewUser_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOperatingSystem_CreateNewUser_Statics::OperatingSystem_eventCreateNewUser_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOperatingSystem_CreateNewUser()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystem_CreateNewUser_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOperatingSystem_GetBsodOnScreenTime_Statics
	{
		struct OperatingSystem_eventGetBsodOnScreenTime_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOperatingSystem_GetBsodOnScreenTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystem_eventGetBsodOnScreenTime_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperatingSystem_GetBsodOnScreenTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystem_GetBsodOnScreenTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystem_GetBsodOnScreenTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "OperatingSystem" },
		{ "ModuleRelativePath", "Public/Core/OperatingSystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystem_GetBsodOnScreenTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystem, nullptr, "GetBsodOnScreenTime", nullptr, nullptr, Z_Construct_UFunction_UOperatingSystem_GetBsodOnScreenTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystem_GetBsodOnScreenTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOperatingSystem_GetBsodOnScreenTime_Statics::OperatingSystem_eventGetBsodOnScreenTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystem_GetBsodOnScreenTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystem_GetBsodOnScreenTime_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystem_GetBsodOnScreenTime_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOperatingSystem_GetBsodOnScreenTime_Statics::OperatingSystem_eventGetBsodOnScreenTime_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOperatingSystem_GetBsodOnScreenTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystem_GetBsodOnScreenTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOperatingSystem_GetDeviceName_Statics
	{
		struct OperatingSystem_eventGetDeviceName_Parms
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
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UOperatingSystem_GetDeviceName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystem_eventGetDeviceName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperatingSystem_GetDeviceName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystem_GetDeviceName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystem_GetDeviceName_Statics::Function_MetaDataParams[] = {
		{ "Category", "OperatingSystem" },
		{ "ModuleRelativePath", "Public/Core/OperatingSystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystem_GetDeviceName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystem, nullptr, "GetDeviceName", nullptr, nullptr, Z_Construct_UFunction_UOperatingSystem_GetDeviceName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystem_GetDeviceName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOperatingSystem_GetDeviceName_Statics::OperatingSystem_eventGetDeviceName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystem_GetDeviceName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystem_GetDeviceName_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystem_GetDeviceName_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOperatingSystem_GetDeviceName_Statics::OperatingSystem_eventGetDeviceName_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOperatingSystem_GetDeviceName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystem_GetDeviceName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOperatingSystem_GetDirectoryIconObject_Statics
	{
		struct OperatingSystem_eventGetDirectoryIconObject_Parms
		{
			FGameplayTag TestTag;
			UObject* ReturnValue;
		};
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystem_GetDirectoryIconObject_Statics::NewProp_TestTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOperatingSystem_GetDirectoryIconObject_Statics::NewProp_TestTag = { "TestTag", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystem_eventGetDirectoryIconObject_Parms, TestTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystem_GetDirectoryIconObject_Statics::NewProp_TestTag_MetaData), Z_Construct_UFunction_UOperatingSystem_GetDirectoryIconObject_Statics::NewProp_TestTag_MetaData) }; // 2083603574
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOperatingSystem_GetDirectoryIconObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystem_eventGetDirectoryIconObject_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperatingSystem_GetDirectoryIconObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystem_GetDirectoryIconObject_Statics::NewProp_TestTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystem_GetDirectoryIconObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystem_GetDirectoryIconObject_Statics::Function_MetaDataParams[] = {
		{ "Categories", "OperatingSystem.Directory" },
		{ "Category", "OperatingSystem" },
		{ "ModuleRelativePath", "Public/Core/OperatingSystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystem_GetDirectoryIconObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystem, nullptr, "GetDirectoryIconObject", nullptr, nullptr, Z_Construct_UFunction_UOperatingSystem_GetDirectoryIconObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystem_GetDirectoryIconObject_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOperatingSystem_GetDirectoryIconObject_Statics::OperatingSystem_eventGetDirectoryIconObject_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystem_GetDirectoryIconObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystem_GetDirectoryIconObject_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystem_GetDirectoryIconObject_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOperatingSystem_GetDirectoryIconObject_Statics::OperatingSystem_eventGetDirectoryIconObject_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOperatingSystem_GetDirectoryIconObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystem_GetDirectoryIconObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOperatingSystem_GetDiskPartitions_Statics
	{
		struct OperatingSystem_eventGetDiskPartitions_Parms
		{
			TArray<UOperatingSystemPartition*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOperatingSystem_GetDiskPartitions_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UOperatingSystemPartition_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOperatingSystem_GetDiskPartitions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystem_eventGetDiskPartitions_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperatingSystem_GetDiskPartitions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystem_GetDiskPartitions_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystem_GetDiskPartitions_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystem_GetDiskPartitions_Statics::Function_MetaDataParams[] = {
		{ "Category", "OperatingSystem" },
		{ "ModuleRelativePath", "Public/Core/OperatingSystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystem_GetDiskPartitions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystem, nullptr, "GetDiskPartitions", nullptr, nullptr, Z_Construct_UFunction_UOperatingSystem_GetDiskPartitions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystem_GetDiskPartitions_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOperatingSystem_GetDiskPartitions_Statics::OperatingSystem_eventGetDiskPartitions_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystem_GetDiskPartitions_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystem_GetDiskPartitions_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystem_GetDiskPartitions_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOperatingSystem_GetDiskPartitions_Statics::OperatingSystem_eventGetDiskPartitions_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOperatingSystem_GetDiskPartitions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystem_GetDiskPartitions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOperatingSystem_GetHardDiskSize_Statics
	{
		struct OperatingSystem_eventGetHardDiskSize_Parms
		{
			FGenericError OutError;
			EOperatingSystemSizeMethod SizeMethod;
			double ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutError;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SizeMethod_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SizeMethod_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SizeMethod;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOperatingSystem_GetHardDiskSize_Statics::NewProp_OutError = { "OutError", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystem_eventGetHardDiskSize_Parms, OutError), Z_Construct_UScriptStruct_FGenericError, METADATA_PARAMS(0, nullptr) }; // 4286029882
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOperatingSystem_GetHardDiskSize_Statics::NewProp_SizeMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystem_GetHardDiskSize_Statics::NewProp_SizeMethod_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOperatingSystem_GetHardDiskSize_Statics::NewProp_SizeMethod = { "SizeMethod", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystem_eventGetHardDiskSize_Parms, SizeMethod), Z_Construct_UEnum_OperatingSystemSimulator_EOperatingSystemSizeMethod, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystem_GetHardDiskSize_Statics::NewProp_SizeMethod_MetaData), Z_Construct_UFunction_UOperatingSystem_GetHardDiskSize_Statics::NewProp_SizeMethod_MetaData) }; // 1509746507
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UOperatingSystem_GetHardDiskSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystem_eventGetHardDiskSize_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperatingSystem_GetHardDiskSize_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystem_GetHardDiskSize_Statics::NewProp_OutError,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystem_GetHardDiskSize_Statics::NewProp_SizeMethod_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystem_GetHardDiskSize_Statics::NewProp_SizeMethod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystem_GetHardDiskSize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystem_GetHardDiskSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "OperatingSystem" },
		{ "Comment", "/**\n\x09* public\n\x09* UOperatingSystem::GetHardDiskSize const\n\x09* Returns the Hard Disk total size in given method.\n\x09* @param OutError [FGenericError&] If any error this will be valid.\n\x09* @param SizeMethod [const EOperatingSystemSizeMethod] How you want to represent the return size to be.\n\x09* @return [double] Size in given method.\n\x09**/" },
		{ "CPP_Default_SizeMethod", "GB" },
		{ "ModuleRelativePath", "Public/Core/OperatingSystem.h" },
		{ "ToolTip", "public\nUOperatingSystem::GetHardDiskSize const\nReturns the Hard Disk total size in given method.\n@param OutError [FGenericError&] If any error this will be valid.\n@param SizeMethod [const EOperatingSystemSizeMethod] How you want to represent the return size to be.\n@return [double] Size in given method." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystem_GetHardDiskSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystem, nullptr, "GetHardDiskSize", nullptr, nullptr, Z_Construct_UFunction_UOperatingSystem_GetHardDiskSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystem_GetHardDiskSize_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOperatingSystem_GetHardDiskSize_Statics::OperatingSystem_eventGetHardDiskSize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystem_GetHardDiskSize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystem_GetHardDiskSize_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystem_GetHardDiskSize_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOperatingSystem_GetHardDiskSize_Statics::OperatingSystem_eventGetHardDiskSize_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOperatingSystem_GetHardDiskSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystem_GetHardDiskSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOperatingSystem_GetInitialLoadingTime_Statics
	{
		struct OperatingSystem_eventGetInitialLoadingTime_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOperatingSystem_GetInitialLoadingTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystem_eventGetInitialLoadingTime_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperatingSystem_GetInitialLoadingTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystem_GetInitialLoadingTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystem_GetInitialLoadingTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "OperatingSystem" },
		{ "ModuleRelativePath", "Public/Core/OperatingSystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystem_GetInitialLoadingTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystem, nullptr, "GetInitialLoadingTime", nullptr, nullptr, Z_Construct_UFunction_UOperatingSystem_GetInitialLoadingTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystem_GetInitialLoadingTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOperatingSystem_GetInitialLoadingTime_Statics::OperatingSystem_eventGetInitialLoadingTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystem_GetInitialLoadingTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystem_GetInitialLoadingTime_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystem_GetInitialLoadingTime_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOperatingSystem_GetInitialLoadingTime_Statics::OperatingSystem_eventGetInitialLoadingTime_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOperatingSystem_GetInitialLoadingTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystem_GetInitialLoadingTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOperatingSystem_GetInstallationTime_Statics
	{
		struct OperatingSystem_eventGetInstallationTime_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOperatingSystem_GetInstallationTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystem_eventGetInstallationTime_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperatingSystem_GetInstallationTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystem_GetInstallationTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystem_GetInstallationTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "OperatingSystem" },
		{ "ModuleRelativePath", "Public/Core/OperatingSystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystem_GetInstallationTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystem, nullptr, "GetInstallationTime", nullptr, nullptr, Z_Construct_UFunction_UOperatingSystem_GetInstallationTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystem_GetInstallationTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOperatingSystem_GetInstallationTime_Statics::OperatingSystem_eventGetInstallationTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystem_GetInstallationTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystem_GetInstallationTime_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystem_GetInstallationTime_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOperatingSystem_GetInstallationTime_Statics::OperatingSystem_eventGetInstallationTime_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOperatingSystem_GetInstallationTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystem_GetInstallationTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOperatingSystem_GetInstalledProgram_Statics
	{
		struct OperatingSystem_eventGetInstalledProgram_Parms
		{
			TSoftClassPtr<UOperatingSystemBaseProgram>  TestClass;
			UOperatingSystemBaseProgram* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TestClass_MetaData[];
#endif
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_TestClass;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystem_GetInstalledProgram_Statics::NewProp_TestClass_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UFunction_UOperatingSystem_GetInstalledProgram_Statics::NewProp_TestClass = { "TestClass", nullptr, (EPropertyFlags)0x0014000000000082, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystem_eventGetInstalledProgram_Parms, TestClass), Z_Construct_UClass_UOperatingSystemBaseProgram_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystem_GetInstalledProgram_Statics::NewProp_TestClass_MetaData), Z_Construct_UFunction_UOperatingSystem_GetInstalledProgram_Statics::NewProp_TestClass_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOperatingSystem_GetInstalledProgram_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystem_eventGetInstalledProgram_Parms, ReturnValue), Z_Construct_UClass_UOperatingSystemBaseProgram_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperatingSystem_GetInstalledProgram_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystem_GetInstalledProgram_Statics::NewProp_TestClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystem_GetInstalledProgram_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystem_GetInstalledProgram_Statics::Function_MetaDataParams[] = {
		{ "Category", "OperatingSystem" },
		{ "ModuleRelativePath", "Public/Core/OperatingSystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystem_GetInstalledProgram_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystem, nullptr, "GetInstalledProgram", nullptr, nullptr, Z_Construct_UFunction_UOperatingSystem_GetInstalledProgram_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystem_GetInstalledProgram_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOperatingSystem_GetInstalledProgram_Statics::OperatingSystem_eventGetInstalledProgram_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystem_GetInstalledProgram_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystem_GetInstalledProgram_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystem_GetInstalledProgram_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOperatingSystem_GetInstalledProgram_Statics::OperatingSystem_eventGetInstalledProgram_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOperatingSystem_GetInstalledProgram()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystem_GetInstalledProgram_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOperatingSystem_GetInstalledPrograms_Statics
	{
		struct OperatingSystem_eventGetInstalledPrograms_Parms
		{
			TArray<UOperatingSystemBaseProgram*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOperatingSystem_GetInstalledPrograms_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UOperatingSystemBaseProgram_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOperatingSystem_GetInstalledPrograms_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystem_eventGetInstalledPrograms_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperatingSystem_GetInstalledPrograms_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystem_GetInstalledPrograms_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystem_GetInstalledPrograms_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystem_GetInstalledPrograms_Statics::Function_MetaDataParams[] = {
		{ "Category", "OperatingSystem" },
		{ "ModuleRelativePath", "Public/Core/OperatingSystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystem_GetInstalledPrograms_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystem, nullptr, "GetInstalledPrograms", nullptr, nullptr, Z_Construct_UFunction_UOperatingSystem_GetInstalledPrograms_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystem_GetInstalledPrograms_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOperatingSystem_GetInstalledPrograms_Statics::OperatingSystem_eventGetInstalledPrograms_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystem_GetInstalledPrograms_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystem_GetInstalledPrograms_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystem_GetInstalledPrograms_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOperatingSystem_GetInstalledPrograms_Statics::OperatingSystem_eventGetInstalledPrograms_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOperatingSystem_GetInstalledPrograms()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystem_GetInstalledPrograms_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOperatingSystem_GetLoadingTime_Statics
	{
		struct OperatingSystem_eventGetLoadingTime_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOperatingSystem_GetLoadingTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystem_eventGetLoadingTime_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperatingSystem_GetLoadingTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystem_GetLoadingTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystem_GetLoadingTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "OperatingSystem" },
		{ "ModuleRelativePath", "Public/Core/OperatingSystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystem_GetLoadingTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystem, nullptr, "GetLoadingTime", nullptr, nullptr, Z_Construct_UFunction_UOperatingSystem_GetLoadingTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystem_GetLoadingTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOperatingSystem_GetLoadingTime_Statics::OperatingSystem_eventGetLoadingTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystem_GetLoadingTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystem_GetLoadingTime_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystem_GetLoadingTime_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOperatingSystem_GetLoadingTime_Statics::OperatingSystem_eventGetLoadingTime_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOperatingSystem_GetLoadingTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystem_GetLoadingTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOperatingSystem_GetNotifications_Statics
	{
		struct OperatingSystem_eventGetNotifications_Parms
		{
			TArray<FOperatingSystemNotification> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOperatingSystem_GetNotifications_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FOperatingSystemNotification, METADATA_PARAMS(0, nullptr) }; // 2023410135
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystem_GetNotifications_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOperatingSystem_GetNotifications_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystem_eventGetNotifications_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystem_GetNotifications_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UOperatingSystem_GetNotifications_Statics::NewProp_ReturnValue_MetaData) }; // 2023410135
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperatingSystem_GetNotifications_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystem_GetNotifications_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystem_GetNotifications_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystem_GetNotifications_Statics::Function_MetaDataParams[] = {
		{ "Category", "OperatingSystem" },
		{ "ModuleRelativePath", "Public/Core/OperatingSystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystem_GetNotifications_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystem, nullptr, "GetNotifications", nullptr, nullptr, Z_Construct_UFunction_UOperatingSystem_GetNotifications_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystem_GetNotifications_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOperatingSystem_GetNotifications_Statics::OperatingSystem_eventGetNotifications_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystem_GetNotifications_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystem_GetNotifications_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystem_GetNotifications_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOperatingSystem_GetNotifications_Statics::OperatingSystem_eventGetNotifications_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOperatingSystem_GetNotifications()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystem_GetNotifications_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOperatingSystem_GetOperatingSystemPartition_Statics
	{
		struct OperatingSystem_eventGetOperatingSystemPartition_Parms
		{
			UOperatingSystemPartition* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOperatingSystem_GetOperatingSystemPartition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystem_eventGetOperatingSystemPartition_Parms, ReturnValue), Z_Construct_UClass_UOperatingSystemPartition_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperatingSystem_GetOperatingSystemPartition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystem_GetOperatingSystemPartition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystem_GetOperatingSystemPartition_Statics::Function_MetaDataParams[] = {
		{ "Category", "OperatingSystem" },
		{ "ModuleRelativePath", "Public/Core/OperatingSystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystem_GetOperatingSystemPartition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystem, nullptr, "GetOperatingSystemPartition", nullptr, nullptr, Z_Construct_UFunction_UOperatingSystem_GetOperatingSystemPartition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystem_GetOperatingSystemPartition_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOperatingSystem_GetOperatingSystemPartition_Statics::OperatingSystem_eventGetOperatingSystemPartition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystem_GetOperatingSystemPartition_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystem_GetOperatingSystemPartition_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystem_GetOperatingSystemPartition_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOperatingSystem_GetOperatingSystemPartition_Statics::OperatingSystem_eventGetOperatingSystemPartition_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOperatingSystem_GetOperatingSystemPartition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystem_GetOperatingSystemPartition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOperatingSystem_GetRunningProgram_Statics
	{
		struct OperatingSystem_eventGetRunningProgram_Parms
		{
			TSoftClassPtr<UOperatingSystemBaseProgram>  TestClass;
			UOperatingSystemBaseProgram* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TestClass_MetaData[];
#endif
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_TestClass;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystem_GetRunningProgram_Statics::NewProp_TestClass_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UFunction_UOperatingSystem_GetRunningProgram_Statics::NewProp_TestClass = { "TestClass", nullptr, (EPropertyFlags)0x0014000000000082, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystem_eventGetRunningProgram_Parms, TestClass), Z_Construct_UClass_UOperatingSystemBaseProgram_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystem_GetRunningProgram_Statics::NewProp_TestClass_MetaData), Z_Construct_UFunction_UOperatingSystem_GetRunningProgram_Statics::NewProp_TestClass_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOperatingSystem_GetRunningProgram_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystem_eventGetRunningProgram_Parms, ReturnValue), Z_Construct_UClass_UOperatingSystemBaseProgram_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperatingSystem_GetRunningProgram_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystem_GetRunningProgram_Statics::NewProp_TestClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystem_GetRunningProgram_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystem_GetRunningProgram_Statics::Function_MetaDataParams[] = {
		{ "Category", "OperatingSystem" },
		{ "ModuleRelativePath", "Public/Core/OperatingSystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystem_GetRunningProgram_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystem, nullptr, "GetRunningProgram", nullptr, nullptr, Z_Construct_UFunction_UOperatingSystem_GetRunningProgram_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystem_GetRunningProgram_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOperatingSystem_GetRunningProgram_Statics::OperatingSystem_eventGetRunningProgram_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystem_GetRunningProgram_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystem_GetRunningProgram_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystem_GetRunningProgram_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOperatingSystem_GetRunningProgram_Statics::OperatingSystem_eventGetRunningProgram_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOperatingSystem_GetRunningProgram()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystem_GetRunningProgram_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOperatingSystem_GetSizeAsText_Statics
	{
		struct OperatingSystem_eventGetSizeAsText_Parms
		{
			EOperatingSystemSizeMethod SizeMethod;
			const UOperatingSystemPartition* Partition;
			FGenericError OutError;
			FText ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_SizeMethod_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SizeMethod_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SizeMethod;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Partition_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Partition;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutError;
		static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOperatingSystem_GetSizeAsText_Statics::NewProp_SizeMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystem_GetSizeAsText_Statics::NewProp_SizeMethod_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOperatingSystem_GetSizeAsText_Statics::NewProp_SizeMethod = { "SizeMethod", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystem_eventGetSizeAsText_Parms, SizeMethod), Z_Construct_UEnum_OperatingSystemSimulator_EOperatingSystemSizeMethod, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystem_GetSizeAsText_Statics::NewProp_SizeMethod_MetaData), Z_Construct_UFunction_UOperatingSystem_GetSizeAsText_Statics::NewProp_SizeMethod_MetaData) }; // 1509746507
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystem_GetSizeAsText_Statics::NewProp_Partition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOperatingSystem_GetSizeAsText_Statics::NewProp_Partition = { "Partition", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystem_eventGetSizeAsText_Parms, Partition), Z_Construct_UClass_UOperatingSystemPartition_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystem_GetSizeAsText_Statics::NewProp_Partition_MetaData), Z_Construct_UFunction_UOperatingSystem_GetSizeAsText_Statics::NewProp_Partition_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOperatingSystem_GetSizeAsText_Statics::NewProp_OutError = { "OutError", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystem_eventGetSizeAsText_Parms, OutError), Z_Construct_UScriptStruct_FGenericError, METADATA_PARAMS(0, nullptr) }; // 4286029882
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UOperatingSystem_GetSizeAsText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystem_eventGetSizeAsText_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperatingSystem_GetSizeAsText_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystem_GetSizeAsText_Statics::NewProp_SizeMethod_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystem_GetSizeAsText_Statics::NewProp_SizeMethod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystem_GetSizeAsText_Statics::NewProp_Partition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystem_GetSizeAsText_Statics::NewProp_OutError,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystem_GetSizeAsText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystem_GetSizeAsText_Statics::Function_MetaDataParams[] = {
		{ "Category", "OperatingSystem" },
		{ "Comment", "/**\n\x09* public\n\x09* UOperatingSystem::GetSizeAsText const\n\x09* Returns the size of this Hard disk in given format\n\x09* @param SizeMethod [const EOperatingSystemSizeMethod] Your preferred method. Bytes, Megabytes or Gigabytes.\n\x09* @return [FText] Return text in the format {Size} {SizeString}. For example: 256 GB.\n\x09**/" },
		{ "ModuleRelativePath", "Public/Core/OperatingSystem.h" },
		{ "ToolTip", "public\nUOperatingSystem::GetSizeAsText const\nReturns the size of this Hard disk in given format\n@param SizeMethod [const EOperatingSystemSizeMethod] Your preferred method. Bytes, Megabytes or Gigabytes.\n@return [FText] Return text in the format {Size} {SizeString}. For example: 256 GB." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystem_GetSizeAsText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystem, nullptr, "GetSizeAsText", nullptr, nullptr, Z_Construct_UFunction_UOperatingSystem_GetSizeAsText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystem_GetSizeAsText_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOperatingSystem_GetSizeAsText_Statics::OperatingSystem_eventGetSizeAsText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystem_GetSizeAsText_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystem_GetSizeAsText_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystem_GetSizeAsText_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOperatingSystem_GetSizeAsText_Statics::OperatingSystem_eventGetSizeAsText_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOperatingSystem_GetSizeAsText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystem_GetSizeAsText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOperatingSystem_GetStoragePercentage_Statics
	{
		struct OperatingSystem_eventGetStoragePercentage_Parms
		{
			const UOperatingSystemPartition* Partition;
			FGenericError OutError;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Partition_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Partition;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutError;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystem_GetStoragePercentage_Statics::NewProp_Partition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOperatingSystem_GetStoragePercentage_Statics::NewProp_Partition = { "Partition", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystem_eventGetStoragePercentage_Parms, Partition), Z_Construct_UClass_UOperatingSystemPartition_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystem_GetStoragePercentage_Statics::NewProp_Partition_MetaData), Z_Construct_UFunction_UOperatingSystem_GetStoragePercentage_Statics::NewProp_Partition_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOperatingSystem_GetStoragePercentage_Statics::NewProp_OutError = { "OutError", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystem_eventGetStoragePercentage_Parms, OutError), Z_Construct_UScriptStruct_FGenericError, METADATA_PARAMS(0, nullptr) }; // 4286029882
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOperatingSystem_GetStoragePercentage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystem_eventGetStoragePercentage_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperatingSystem_GetStoragePercentage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystem_GetStoragePercentage_Statics::NewProp_Partition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystem_GetStoragePercentage_Statics::NewProp_OutError,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystem_GetStoragePercentage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystem_GetStoragePercentage_Statics::Function_MetaDataParams[] = {
		{ "Category", "OperatingSystem" },
		{ "Comment", "/**\n\x09* public\n\x09* UOperatingSystem::GetStoragePercentage const\n\x09* Returns the percentage of storage available. For example: 75%, 40% etc.\n\x09* @return [float] Percentage of storage remaining in 0 - 100 range.\n\x09**/" },
		{ "ModuleRelativePath", "Public/Core/OperatingSystem.h" },
		{ "ToolTip", "public\nUOperatingSystem::GetStoragePercentage const\nReturns the percentage of storage available. For example: 75%, 40% etc.\n@return [float] Percentage of storage remaining in 0 - 100 range." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystem_GetStoragePercentage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystem, nullptr, "GetStoragePercentage", nullptr, nullptr, Z_Construct_UFunction_UOperatingSystem_GetStoragePercentage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystem_GetStoragePercentage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOperatingSystem_GetStoragePercentage_Statics::OperatingSystem_eventGetStoragePercentage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystem_GetStoragePercentage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystem_GetStoragePercentage_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystem_GetStoragePercentage_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOperatingSystem_GetStoragePercentage_Statics::OperatingSystem_eventGetStoragePercentage_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOperatingSystem_GetStoragePercentage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystem_GetStoragePercentage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOperatingSystem_GetToastNotificationDisplayTime_Statics
	{
		struct OperatingSystem_eventGetToastNotificationDisplayTime_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOperatingSystem_GetToastNotificationDisplayTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystem_eventGetToastNotificationDisplayTime_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperatingSystem_GetToastNotificationDisplayTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystem_GetToastNotificationDisplayTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystem_GetToastNotificationDisplayTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "OperatingSystem" },
		{ "ModuleRelativePath", "Public/Core/OperatingSystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystem_GetToastNotificationDisplayTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystem, nullptr, "GetToastNotificationDisplayTime", nullptr, nullptr, Z_Construct_UFunction_UOperatingSystem_GetToastNotificationDisplayTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystem_GetToastNotificationDisplayTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOperatingSystem_GetToastNotificationDisplayTime_Statics::OperatingSystem_eventGetToastNotificationDisplayTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystem_GetToastNotificationDisplayTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystem_GetToastNotificationDisplayTime_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystem_GetToastNotificationDisplayTime_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOperatingSystem_GetToastNotificationDisplayTime_Statics::OperatingSystem_eventGetToastNotificationDisplayTime_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOperatingSystem_GetToastNotificationDisplayTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystem_GetToastNotificationDisplayTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOperatingSystem_HasEnoughSpace_Statics
	{
		struct OperatingSystem_eventHasEnoughSpace_Parms
		{
			double TestSizeInBytes;
			const UOperatingSystemPartition* InPartition;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TestSizeInBytes_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_TestSizeInBytes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InPartition_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InPartition;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystem_HasEnoughSpace_Statics::NewProp_TestSizeInBytes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UOperatingSystem_HasEnoughSpace_Statics::NewProp_TestSizeInBytes = { "TestSizeInBytes", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystem_eventHasEnoughSpace_Parms, TestSizeInBytes), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystem_HasEnoughSpace_Statics::NewProp_TestSizeInBytes_MetaData), Z_Construct_UFunction_UOperatingSystem_HasEnoughSpace_Statics::NewProp_TestSizeInBytes_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystem_HasEnoughSpace_Statics::NewProp_InPartition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOperatingSystem_HasEnoughSpace_Statics::NewProp_InPartition = { "InPartition", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystem_eventHasEnoughSpace_Parms, InPartition), Z_Construct_UClass_UOperatingSystemPartition_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystem_HasEnoughSpace_Statics::NewProp_InPartition_MetaData), Z_Construct_UFunction_UOperatingSystem_HasEnoughSpace_Statics::NewProp_InPartition_MetaData) };
	void Z_Construct_UFunction_UOperatingSystem_HasEnoughSpace_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OperatingSystem_eventHasEnoughSpace_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOperatingSystem_HasEnoughSpace_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OperatingSystem_eventHasEnoughSpace_Parms), &Z_Construct_UFunction_UOperatingSystem_HasEnoughSpace_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperatingSystem_HasEnoughSpace_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystem_HasEnoughSpace_Statics::NewProp_TestSizeInBytes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystem_HasEnoughSpace_Statics::NewProp_InPartition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystem_HasEnoughSpace_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystem_HasEnoughSpace_Statics::Function_MetaDataParams[] = {
		{ "Category", "OperatingSystem" },
		{ "ModuleRelativePath", "Public/Core/OperatingSystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystem_HasEnoughSpace_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystem, nullptr, "HasEnoughSpace", nullptr, nullptr, Z_Construct_UFunction_UOperatingSystem_HasEnoughSpace_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystem_HasEnoughSpace_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOperatingSystem_HasEnoughSpace_Statics::OperatingSystem_eventHasEnoughSpace_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystem_HasEnoughSpace_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystem_HasEnoughSpace_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystem_HasEnoughSpace_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOperatingSystem_HasEnoughSpace_Statics::OperatingSystem_eventHasEnoughSpace_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOperatingSystem_HasEnoughSpace()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystem_HasEnoughSpace_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOperatingSystem_InstallationCompleted_Statics
	{
		struct OperatingSystem_eventInstallationCompleted_Parms
		{
			bool bSwitchToDesktop;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSwitchToDesktop_MetaData[];
#endif
		static void NewProp_bSwitchToDesktop_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSwitchToDesktop;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystem_InstallationCompleted_Statics::NewProp_bSwitchToDesktop_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UOperatingSystem_InstallationCompleted_Statics::NewProp_bSwitchToDesktop_SetBit(void* Obj)
	{
		((OperatingSystem_eventInstallationCompleted_Parms*)Obj)->bSwitchToDesktop = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOperatingSystem_InstallationCompleted_Statics::NewProp_bSwitchToDesktop = { "bSwitchToDesktop", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OperatingSystem_eventInstallationCompleted_Parms), &Z_Construct_UFunction_UOperatingSystem_InstallationCompleted_Statics::NewProp_bSwitchToDesktop_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystem_InstallationCompleted_Statics::NewProp_bSwitchToDesktop_MetaData), Z_Construct_UFunction_UOperatingSystem_InstallationCompleted_Statics::NewProp_bSwitchToDesktop_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperatingSystem_InstallationCompleted_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystem_InstallationCompleted_Statics::NewProp_bSwitchToDesktop,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystem_InstallationCompleted_Statics::Function_MetaDataParams[] = {
		{ "Category", "OperatingSystem" },
		{ "CPP_Default_bSwitchToDesktop", "true" },
		{ "ModuleRelativePath", "Public/Core/OperatingSystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystem_InstallationCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystem, nullptr, "InstallationCompleted", nullptr, nullptr, Z_Construct_UFunction_UOperatingSystem_InstallationCompleted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystem_InstallationCompleted_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOperatingSystem_InstallationCompleted_Statics::OperatingSystem_eventInstallationCompleted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystem_InstallationCompleted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystem_InstallationCompleted_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystem_InstallationCompleted_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOperatingSystem_InstallationCompleted_Statics::OperatingSystem_eventInstallationCompleted_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOperatingSystem_InstallationCompleted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystem_InstallationCompleted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOperatingSystem_InstallProgramFromClass_Statics
	{
		struct OperatingSystem_eventInstallProgramFromClass_Parms
		{
			FGenericError OutErrorIfAny;
			TSoftClassPtr<UOperatingSystemBaseProgram>  ProgramClass;
			UOperatingSystemPartition* TargetPartition;
			UOperatingSystemBaseProgram* ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutErrorIfAny;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProgramClass_MetaData[];
#endif
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_ProgramClass;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetPartition;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOperatingSystem_InstallProgramFromClass_Statics::NewProp_OutErrorIfAny = { "OutErrorIfAny", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystem_eventInstallProgramFromClass_Parms, OutErrorIfAny), Z_Construct_UScriptStruct_FGenericError, METADATA_PARAMS(0, nullptr) }; // 4286029882
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystem_InstallProgramFromClass_Statics::NewProp_ProgramClass_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UFunction_UOperatingSystem_InstallProgramFromClass_Statics::NewProp_ProgramClass = { "ProgramClass", nullptr, (EPropertyFlags)0x0014000000000082, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystem_eventInstallProgramFromClass_Parms, ProgramClass), Z_Construct_UClass_UOperatingSystemBaseProgram_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystem_InstallProgramFromClass_Statics::NewProp_ProgramClass_MetaData), Z_Construct_UFunction_UOperatingSystem_InstallProgramFromClass_Statics::NewProp_ProgramClass_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOperatingSystem_InstallProgramFromClass_Statics::NewProp_TargetPartition = { "TargetPartition", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystem_eventInstallProgramFromClass_Parms, TargetPartition), Z_Construct_UClass_UOperatingSystemPartition_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOperatingSystem_InstallProgramFromClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystem_eventInstallProgramFromClass_Parms, ReturnValue), Z_Construct_UClass_UOperatingSystemBaseProgram_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperatingSystem_InstallProgramFromClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystem_InstallProgramFromClass_Statics::NewProp_OutErrorIfAny,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystem_InstallProgramFromClass_Statics::NewProp_ProgramClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystem_InstallProgramFromClass_Statics::NewProp_TargetPartition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystem_InstallProgramFromClass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystem_InstallProgramFromClass_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "2" },
		{ "Category", "OperatingSystem" },
		{ "Comment", "/**\n\x09 * public\n\x09 * UOperatingSystem::InstallProgramFromClass\n\x09 * Installs the given program class. If target partition is null, system partition is automatically used.\n\x09 * @param OutErrorIfAny Outputs any error. Use the IsValid from this struct to check if there are any errors.\n\x09 * @param ProgramClass Target program class to install\n\x09 * @param TargetPartition Target partition to install. If null, then system partition is automatically used.\n\x09 * @return Valid program if installed. Null otherwise.\n\x09 */" },
		{ "CPP_Default_TargetPartition", "None" },
		{ "ModuleRelativePath", "Public/Core/OperatingSystem.h" },
		{ "ToolTip", "public\nUOperatingSystem::InstallProgramFromClass\nInstalls the given program class. If target partition is null, system partition is automatically used.\n@param OutErrorIfAny Outputs any error. Use the IsValid from this struct to check if there are any errors.\n@param ProgramClass Target program class to install\n@param TargetPartition Target partition to install. If null, then system partition is automatically used.\n@return Valid program if installed. Null otherwise." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystem_InstallProgramFromClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystem, nullptr, "InstallProgramFromClass", nullptr, nullptr, Z_Construct_UFunction_UOperatingSystem_InstallProgramFromClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystem_InstallProgramFromClass_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOperatingSystem_InstallProgramFromClass_Statics::OperatingSystem_eventInstallProgramFromClass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystem_InstallProgramFromClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystem_InstallProgramFromClass_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystem_InstallProgramFromClass_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOperatingSystem_InstallProgramFromClass_Statics::OperatingSystem_eventInstallProgramFromClass_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOperatingSystem_InstallProgramFromClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystem_InstallProgramFromClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOperatingSystem_InstallProgramFromPackage_Statics
	{
		struct OperatingSystem_eventInstallProgramFromPackage_Parms
		{
			FName ProgramIdentifier;
			FGenericError OutErrorIfAny;
			UOperatingSystemBaseProgram* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProgramIdentifier_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ProgramIdentifier;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutErrorIfAny;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystem_InstallProgramFromPackage_Statics::NewProp_ProgramIdentifier_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UOperatingSystem_InstallProgramFromPackage_Statics::NewProp_ProgramIdentifier = { "ProgramIdentifier", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystem_eventInstallProgramFromPackage_Parms, ProgramIdentifier), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystem_InstallProgramFromPackage_Statics::NewProp_ProgramIdentifier_MetaData), Z_Construct_UFunction_UOperatingSystem_InstallProgramFromPackage_Statics::NewProp_ProgramIdentifier_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOperatingSystem_InstallProgramFromPackage_Statics::NewProp_OutErrorIfAny = { "OutErrorIfAny", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystem_eventInstallProgramFromPackage_Parms, OutErrorIfAny), Z_Construct_UScriptStruct_FGenericError, METADATA_PARAMS(0, nullptr) }; // 4286029882
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOperatingSystem_InstallProgramFromPackage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystem_eventInstallProgramFromPackage_Parms, ReturnValue), Z_Construct_UClass_UOperatingSystemBaseProgram_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperatingSystem_InstallProgramFromPackage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystem_InstallProgramFromPackage_Statics::NewProp_ProgramIdentifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystem_InstallProgramFromPackage_Statics::NewProp_OutErrorIfAny,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystem_InstallProgramFromPackage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystem_InstallProgramFromPackage_Statics::Function_MetaDataParams[] = {
		{ "Category", "OperatingSystem" },
		{ "ModuleRelativePath", "Public/Core/OperatingSystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystem_InstallProgramFromPackage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystem, nullptr, "InstallProgramFromPackage", nullptr, nullptr, Z_Construct_UFunction_UOperatingSystem_InstallProgramFromPackage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystem_InstallProgramFromPackage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOperatingSystem_InstallProgramFromPackage_Statics::OperatingSystem_eventInstallProgramFromPackage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystem_InstallProgramFromPackage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystem_InstallProgramFromPackage_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystem_InstallProgramFromPackage_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOperatingSystem_InstallProgramFromPackage_Statics::OperatingSystem_eventInstallProgramFromPackage_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOperatingSystem_InstallProgramFromPackage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystem_InstallProgramFromPackage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOperatingSystem_IsPreInstalledOperatingSystem_Statics
	{
		struct OperatingSystem_eventIsPreInstalledOperatingSystem_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UOperatingSystem_IsPreInstalledOperatingSystem_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OperatingSystem_eventIsPreInstalledOperatingSystem_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOperatingSystem_IsPreInstalledOperatingSystem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OperatingSystem_eventIsPreInstalledOperatingSystem_Parms), &Z_Construct_UFunction_UOperatingSystem_IsPreInstalledOperatingSystem_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperatingSystem_IsPreInstalledOperatingSystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystem_IsPreInstalledOperatingSystem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystem_IsPreInstalledOperatingSystem_Statics::Function_MetaDataParams[] = {
		{ "Category", "OperatingSystem" },
		{ "ModuleRelativePath", "Public/Core/OperatingSystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystem_IsPreInstalledOperatingSystem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystem, nullptr, "IsPreInstalledOperatingSystem", nullptr, nullptr, Z_Construct_UFunction_UOperatingSystem_IsPreInstalledOperatingSystem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystem_IsPreInstalledOperatingSystem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOperatingSystem_IsPreInstalledOperatingSystem_Statics::OperatingSystem_eventIsPreInstalledOperatingSystem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystem_IsPreInstalledOperatingSystem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystem_IsPreInstalledOperatingSystem_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystem_IsPreInstalledOperatingSystem_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOperatingSystem_IsPreInstalledOperatingSystem_Statics::OperatingSystem_eventIsPreInstalledOperatingSystem_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOperatingSystem_IsPreInstalledOperatingSystem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystem_IsPreInstalledOperatingSystem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOperatingSystem_IsProgramInstalled_Statics
	{
		struct OperatingSystem_eventIsProgramInstalled_Parms
		{
			TSoftClassPtr<UOperatingSystemBaseProgram>  TestClass;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TestClass_MetaData[];
#endif
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_TestClass;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystem_IsProgramInstalled_Statics::NewProp_TestClass_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UFunction_UOperatingSystem_IsProgramInstalled_Statics::NewProp_TestClass = { "TestClass", nullptr, (EPropertyFlags)0x0014000000000082, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystem_eventIsProgramInstalled_Parms, TestClass), Z_Construct_UClass_UOperatingSystemBaseProgram_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystem_IsProgramInstalled_Statics::NewProp_TestClass_MetaData), Z_Construct_UFunction_UOperatingSystem_IsProgramInstalled_Statics::NewProp_TestClass_MetaData) };
	void Z_Construct_UFunction_UOperatingSystem_IsProgramInstalled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OperatingSystem_eventIsProgramInstalled_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOperatingSystem_IsProgramInstalled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OperatingSystem_eventIsProgramInstalled_Parms), &Z_Construct_UFunction_UOperatingSystem_IsProgramInstalled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperatingSystem_IsProgramInstalled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystem_IsProgramInstalled_Statics::NewProp_TestClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystem_IsProgramInstalled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystem_IsProgramInstalled_Statics::Function_MetaDataParams[] = {
		{ "Category", "OperatingSystem" },
		{ "ModuleRelativePath", "Public/Core/OperatingSystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystem_IsProgramInstalled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystem, nullptr, "IsProgramInstalled", nullptr, nullptr, Z_Construct_UFunction_UOperatingSystem_IsProgramInstalled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystem_IsProgramInstalled_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOperatingSystem_IsProgramInstalled_Statics::OperatingSystem_eventIsProgramInstalled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystem_IsProgramInstalled_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystem_IsProgramInstalled_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystem_IsProgramInstalled_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOperatingSystem_IsProgramInstalled_Statics::OperatingSystem_eventIsProgramInstalled_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOperatingSystem_IsProgramInstalled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystem_IsProgramInstalled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOperatingSystem_IsUnix_Statics
	{
		struct OperatingSystem_eventIsUnix_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UOperatingSystem_IsUnix_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OperatingSystem_eventIsUnix_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOperatingSystem_IsUnix_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OperatingSystem_eventIsUnix_Parms), &Z_Construct_UFunction_UOperatingSystem_IsUnix_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperatingSystem_IsUnix_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystem_IsUnix_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystem_IsUnix_Statics::Function_MetaDataParams[] = {
		{ "Category", "OperatingSystem" },
		{ "ModuleRelativePath", "Public/Core/OperatingSystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystem_IsUnix_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystem, nullptr, "IsUnix", nullptr, nullptr, Z_Construct_UFunction_UOperatingSystem_IsUnix_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystem_IsUnix_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOperatingSystem_IsUnix_Statics::OperatingSystem_eventIsUnix_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystem_IsUnix_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystem_IsUnix_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystem_IsUnix_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOperatingSystem_IsUnix_Statics::OperatingSystem_eventIsUnix_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOperatingSystem_IsUnix()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystem_IsUnix_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOperatingSystem_K2_CanStartOperatingSystem_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnError;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOperatingSystem_K2_CanStartOperatingSystem_Statics::NewProp_ReturnError = { "ReturnError", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystem_eventK2_CanStartOperatingSystem_Parms, ReturnError), Z_Construct_UScriptStruct_FGenericError, METADATA_PARAMS(0, nullptr) }; // 4286029882
	void Z_Construct_UFunction_UOperatingSystem_K2_CanStartOperatingSystem_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OperatingSystem_eventK2_CanStartOperatingSystem_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOperatingSystem_K2_CanStartOperatingSystem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OperatingSystem_eventK2_CanStartOperatingSystem_Parms), &Z_Construct_UFunction_UOperatingSystem_K2_CanStartOperatingSystem_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperatingSystem_K2_CanStartOperatingSystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystem_K2_CanStartOperatingSystem_Statics::NewProp_ReturnError,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystem_K2_CanStartOperatingSystem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystem_K2_CanStartOperatingSystem_Statics::Function_MetaDataParams[] = {
		{ "Category", "OperatingSystem" },
		{ "DisplayName", "Can Start Operating System" },
		{ "ModuleRelativePath", "Public/Core/OperatingSystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystem_K2_CanStartOperatingSystem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystem, nullptr, "K2_CanStartOperatingSystem", nullptr, nullptr, Z_Construct_UFunction_UOperatingSystem_K2_CanStartOperatingSystem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystem_K2_CanStartOperatingSystem_Statics::PropPointers), sizeof(OperatingSystem_eventK2_CanStartOperatingSystem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08480800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystem_K2_CanStartOperatingSystem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystem_K2_CanStartOperatingSystem_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystem_K2_CanStartOperatingSystem_Statics::PropPointers) < 2048);
	static_assert(sizeof(OperatingSystem_eventK2_CanStartOperatingSystem_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOperatingSystem_K2_CanStartOperatingSystem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystem_K2_CanStartOperatingSystem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOperatingSystem_LoginUser_Statics
	{
		struct OperatingSystem_eventLoginUser_Parms
		{
			FText Username;
			FText Password;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Username_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Username;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Password_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Password;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystem_LoginUser_Statics::NewProp_Username_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UOperatingSystem_LoginUser_Statics::NewProp_Username = { "Username", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystem_eventLoginUser_Parms, Username), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystem_LoginUser_Statics::NewProp_Username_MetaData), Z_Construct_UFunction_UOperatingSystem_LoginUser_Statics::NewProp_Username_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystem_LoginUser_Statics::NewProp_Password_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UOperatingSystem_LoginUser_Statics::NewProp_Password = { "Password", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystem_eventLoginUser_Parms, Password), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystem_LoginUser_Statics::NewProp_Password_MetaData), Z_Construct_UFunction_UOperatingSystem_LoginUser_Statics::NewProp_Password_MetaData) };
	void Z_Construct_UFunction_UOperatingSystem_LoginUser_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OperatingSystem_eventLoginUser_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOperatingSystem_LoginUser_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OperatingSystem_eventLoginUser_Parms), &Z_Construct_UFunction_UOperatingSystem_LoginUser_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperatingSystem_LoginUser_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystem_LoginUser_Statics::NewProp_Username,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystem_LoginUser_Statics::NewProp_Password,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystem_LoginUser_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystem_LoginUser_Statics::Function_MetaDataParams[] = {
		{ "Category", "OperatingSystem" },
		{ "ModuleRelativePath", "Public/Core/OperatingSystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystem_LoginUser_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystem, nullptr, "LoginUser", nullptr, nullptr, Z_Construct_UFunction_UOperatingSystem_LoginUser_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystem_LoginUser_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOperatingSystem_LoginUser_Statics::OperatingSystem_eventLoginUser_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystem_LoginUser_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystem_LoginUser_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystem_LoginUser_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOperatingSystem_LoginUser_Statics::OperatingSystem_eventLoginUser_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOperatingSystem_LoginUser()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystem_LoginUser_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOperatingSystem_MinimizeProgram_Statics
	{
		struct OperatingSystem_eventMinimizeProgram_Parms
		{
			UOperatingSystemBaseProgram* TargetProgram;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetProgram;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOperatingSystem_MinimizeProgram_Statics::NewProp_TargetProgram = { "TargetProgram", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystem_eventMinimizeProgram_Parms, TargetProgram), Z_Construct_UClass_UOperatingSystemBaseProgram_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperatingSystem_MinimizeProgram_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystem_MinimizeProgram_Statics::NewProp_TargetProgram,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystem_MinimizeProgram_Statics::Function_MetaDataParams[] = {
		{ "Category", "OperatingSystem" },
		{ "ModuleRelativePath", "Public/Core/OperatingSystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystem_MinimizeProgram_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystem, nullptr, "MinimizeProgram", nullptr, nullptr, Z_Construct_UFunction_UOperatingSystem_MinimizeProgram_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystem_MinimizeProgram_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOperatingSystem_MinimizeProgram_Statics::OperatingSystem_eventMinimizeProgram_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystem_MinimizeProgram_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystem_MinimizeProgram_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystem_MinimizeProgram_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOperatingSystem_MinimizeProgram_Statics::OperatingSystem_eventMinimizeProgram_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOperatingSystem_MinimizeProgram()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystem_MinimizeProgram_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOperatingSystem_RefreshPartitions_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystem_RefreshPartitions_Statics::Function_MetaDataParams[] = {
		{ "Category", "OperatingSystem" },
		{ "ModuleRelativePath", "Public/Core/OperatingSystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystem_RefreshPartitions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystem, nullptr, "RefreshPartitions", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystem_RefreshPartitions_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystem_RefreshPartitions_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UOperatingSystem_RefreshPartitions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystem_RefreshPartitions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOperatingSystem_RemovePartition_Statics
	{
		struct OperatingSystem_eventRemovePartition_Parms
		{
			UOperatingSystemPartition* PartitionToDelete;
			FGenericError OutError;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PartitionToDelete;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutError;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOperatingSystem_RemovePartition_Statics::NewProp_PartitionToDelete = { "PartitionToDelete", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystem_eventRemovePartition_Parms, PartitionToDelete), Z_Construct_UClass_UOperatingSystemPartition_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOperatingSystem_RemovePartition_Statics::NewProp_OutError = { "OutError", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystem_eventRemovePartition_Parms, OutError), Z_Construct_UScriptStruct_FGenericError, METADATA_PARAMS(0, nullptr) }; // 4286029882
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperatingSystem_RemovePartition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystem_RemovePartition_Statics::NewProp_PartitionToDelete,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystem_RemovePartition_Statics::NewProp_OutError,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystem_RemovePartition_Statics::Function_MetaDataParams[] = {
		{ "Category", "OperatingSystem" },
		{ "ModuleRelativePath", "Public/Core/OperatingSystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystem_RemovePartition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystem, nullptr, "RemovePartition", nullptr, nullptr, Z_Construct_UFunction_UOperatingSystem_RemovePartition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystem_RemovePartition_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOperatingSystem_RemovePartition_Statics::OperatingSystem_eventRemovePartition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystem_RemovePartition_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystem_RemovePartition_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystem_RemovePartition_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOperatingSystem_RemovePartition_Statics::OperatingSystem_eventRemovePartition_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOperatingSystem_RemovePartition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystem_RemovePartition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOperatingSystem_SetAutoLogin_Statics
	{
		struct OperatingSystem_eventSetAutoLogin_Parms
		{
			bool bEnableAutoLogin;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableAutoLogin_MetaData[];
#endif
		static void NewProp_bEnableAutoLogin_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableAutoLogin;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystem_SetAutoLogin_Statics::NewProp_bEnableAutoLogin_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UOperatingSystem_SetAutoLogin_Statics::NewProp_bEnableAutoLogin_SetBit(void* Obj)
	{
		((OperatingSystem_eventSetAutoLogin_Parms*)Obj)->bEnableAutoLogin = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOperatingSystem_SetAutoLogin_Statics::NewProp_bEnableAutoLogin = { "bEnableAutoLogin", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OperatingSystem_eventSetAutoLogin_Parms), &Z_Construct_UFunction_UOperatingSystem_SetAutoLogin_Statics::NewProp_bEnableAutoLogin_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystem_SetAutoLogin_Statics::NewProp_bEnableAutoLogin_MetaData), Z_Construct_UFunction_UOperatingSystem_SetAutoLogin_Statics::NewProp_bEnableAutoLogin_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperatingSystem_SetAutoLogin_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystem_SetAutoLogin_Statics::NewProp_bEnableAutoLogin,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystem_SetAutoLogin_Statics::Function_MetaDataParams[] = {
		{ "Category", "OperatingSystem" },
		{ "ModuleRelativePath", "Public/Core/OperatingSystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystem_SetAutoLogin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystem, nullptr, "SetAutoLogin", nullptr, nullptr, Z_Construct_UFunction_UOperatingSystem_SetAutoLogin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystem_SetAutoLogin_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOperatingSystem_SetAutoLogin_Statics::OperatingSystem_eventSetAutoLogin_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystem_SetAutoLogin_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystem_SetAutoLogin_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystem_SetAutoLogin_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOperatingSystem_SetAutoLogin_Statics::OperatingSystem_eventSetAutoLogin_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOperatingSystem_SetAutoLogin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystem_SetAutoLogin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOperatingSystem_SetDeviceName_Statics
	{
		struct OperatingSystem_eventSetDeviceName_Parms
		{
			FText NewName;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewName_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_NewName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystem_SetDeviceName_Statics::NewProp_NewName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UOperatingSystem_SetDeviceName_Statics::NewProp_NewName = { "NewName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystem_eventSetDeviceName_Parms, NewName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystem_SetDeviceName_Statics::NewProp_NewName_MetaData), Z_Construct_UFunction_UOperatingSystem_SetDeviceName_Statics::NewProp_NewName_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperatingSystem_SetDeviceName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystem_SetDeviceName_Statics::NewProp_NewName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystem_SetDeviceName_Statics::Function_MetaDataParams[] = {
		{ "Category", "OperatingSystem" },
		{ "ModuleRelativePath", "Public/Core/OperatingSystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystem_SetDeviceName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystem, nullptr, "SetDeviceName", nullptr, nullptr, Z_Construct_UFunction_UOperatingSystem_SetDeviceName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystem_SetDeviceName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOperatingSystem_SetDeviceName_Statics::OperatingSystem_eventSetDeviceName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystem_SetDeviceName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystem_SetDeviceName_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystem_SetDeviceName_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOperatingSystem_SetDeviceName_Statics::OperatingSystem_eventSetDeviceName_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOperatingSystem_SetDeviceName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystem_SetDeviceName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOperatingSystem_SetToInstallStartupPrograms_Statics
	{
		struct OperatingSystem_eventSetToInstallStartupPrograms_Parms
		{
			bool bInstall;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInstall_MetaData[];
#endif
		static void NewProp_bInstall_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInstall;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystem_SetToInstallStartupPrograms_Statics::NewProp_bInstall_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UOperatingSystem_SetToInstallStartupPrograms_Statics::NewProp_bInstall_SetBit(void* Obj)
	{
		((OperatingSystem_eventSetToInstallStartupPrograms_Parms*)Obj)->bInstall = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOperatingSystem_SetToInstallStartupPrograms_Statics::NewProp_bInstall = { "bInstall", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OperatingSystem_eventSetToInstallStartupPrograms_Parms), &Z_Construct_UFunction_UOperatingSystem_SetToInstallStartupPrograms_Statics::NewProp_bInstall_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystem_SetToInstallStartupPrograms_Statics::NewProp_bInstall_MetaData), Z_Construct_UFunction_UOperatingSystem_SetToInstallStartupPrograms_Statics::NewProp_bInstall_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperatingSystem_SetToInstallStartupPrograms_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystem_SetToInstallStartupPrograms_Statics::NewProp_bInstall,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystem_SetToInstallStartupPrograms_Statics::Function_MetaDataParams[] = {
		{ "Category", "OperatingSystem" },
		{ "ModuleRelativePath", "Public/Core/OperatingSystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystem_SetToInstallStartupPrograms_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystem, nullptr, "SetToInstallStartupPrograms", nullptr, nullptr, Z_Construct_UFunction_UOperatingSystem_SetToInstallStartupPrograms_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystem_SetToInstallStartupPrograms_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOperatingSystem_SetToInstallStartupPrograms_Statics::OperatingSystem_eventSetToInstallStartupPrograms_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystem_SetToInstallStartupPrograms_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystem_SetToInstallStartupPrograms_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystem_SetToInstallStartupPrograms_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOperatingSystem_SetToInstallStartupPrograms_Statics::OperatingSystem_eventSetToInstallStartupPrograms_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOperatingSystem_SetToInstallStartupPrograms()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystem_SetToInstallStartupPrograms_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOperatingSystem_ShouldInstallStartupPrograms_Statics
	{
		struct OperatingSystem_eventShouldInstallStartupPrograms_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UOperatingSystem_ShouldInstallStartupPrograms_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OperatingSystem_eventShouldInstallStartupPrograms_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOperatingSystem_ShouldInstallStartupPrograms_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OperatingSystem_eventShouldInstallStartupPrograms_Parms), &Z_Construct_UFunction_UOperatingSystem_ShouldInstallStartupPrograms_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperatingSystem_ShouldInstallStartupPrograms_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystem_ShouldInstallStartupPrograms_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystem_ShouldInstallStartupPrograms_Statics::Function_MetaDataParams[] = {
		{ "Category", "OperatingSystem" },
		{ "ModuleRelativePath", "Public/Core/OperatingSystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystem_ShouldInstallStartupPrograms_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystem, nullptr, "ShouldInstallStartupPrograms", nullptr, nullptr, Z_Construct_UFunction_UOperatingSystem_ShouldInstallStartupPrograms_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystem_ShouldInstallStartupPrograms_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOperatingSystem_ShouldInstallStartupPrograms_Statics::OperatingSystem_eventShouldInstallStartupPrograms_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystem_ShouldInstallStartupPrograms_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystem_ShouldInstallStartupPrograms_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystem_ShouldInstallStartupPrograms_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOperatingSystem_ShouldInstallStartupPrograms_Statics::OperatingSystem_eventShouldInstallStartupPrograms_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOperatingSystem_ShouldInstallStartupPrograms()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystem_ShouldInstallStartupPrograms_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOperatingSystem_UninstallProgram_Statics
	{
		struct OperatingSystem_eventUninstallProgram_Parms
		{
			FName ProgramIdentifier;
			FGenericError OutErrorIfAny;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProgramIdentifier_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ProgramIdentifier;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutErrorIfAny;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystem_UninstallProgram_Statics::NewProp_ProgramIdentifier_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UOperatingSystem_UninstallProgram_Statics::NewProp_ProgramIdentifier = { "ProgramIdentifier", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystem_eventUninstallProgram_Parms, ProgramIdentifier), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystem_UninstallProgram_Statics::NewProp_ProgramIdentifier_MetaData), Z_Construct_UFunction_UOperatingSystem_UninstallProgram_Statics::NewProp_ProgramIdentifier_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOperatingSystem_UninstallProgram_Statics::NewProp_OutErrorIfAny = { "OutErrorIfAny", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystem_eventUninstallProgram_Parms, OutErrorIfAny), Z_Construct_UScriptStruct_FGenericError, METADATA_PARAMS(0, nullptr) }; // 4286029882
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperatingSystem_UninstallProgram_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystem_UninstallProgram_Statics::NewProp_ProgramIdentifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystem_UninstallProgram_Statics::NewProp_OutErrorIfAny,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystem_UninstallProgram_Statics::Function_MetaDataParams[] = {
		{ "Category", "OperatingSystem" },
		{ "Comment", "/**\n\x09 * public\n\x09 * UOperatingSystem::UninstallProgram\n\x09 * Uninstalls the given program identifier from this Operating System.\n\x09 * @param ProgramIdentifier Identifier of the program to uninstall.\n\x09 * @param OutErrorIfAny Outputs uninstall error (if any).\n\x09 */" },
		{ "ModuleRelativePath", "Public/Core/OperatingSystem.h" },
		{ "ToolTip", "public\nUOperatingSystem::UninstallProgram\nUninstalls the given program identifier from this Operating System.\n@param ProgramIdentifier Identifier of the program to uninstall.\n@param OutErrorIfAny Outputs uninstall error (if any)." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystem_UninstallProgram_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystem, nullptr, "UninstallProgram", nullptr, nullptr, Z_Construct_UFunction_UOperatingSystem_UninstallProgram_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystem_UninstallProgram_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOperatingSystem_UninstallProgram_Statics::OperatingSystem_eventUninstallProgram_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystem_UninstallProgram_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystem_UninstallProgram_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystem_UninstallProgram_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOperatingSystem_UninstallProgram_Statics::OperatingSystem_eventUninstallProgram_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOperatingSystem_UninstallProgram()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystem_UninstallProgram_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOperatingSystem_UninstallProgramByClass_Statics
	{
		struct OperatingSystem_eventUninstallProgramByClass_Parms
		{
			TSoftClassPtr<UOperatingSystemBaseProgram>  ProgramClass;
			FGenericError OutErrorIfAny;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProgramClass_MetaData[];
#endif
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_ProgramClass;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutErrorIfAny;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystem_UninstallProgramByClass_Statics::NewProp_ProgramClass_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UFunction_UOperatingSystem_UninstallProgramByClass_Statics::NewProp_ProgramClass = { "ProgramClass", nullptr, (EPropertyFlags)0x0014000000000082, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystem_eventUninstallProgramByClass_Parms, ProgramClass), Z_Construct_UClass_UOperatingSystemBaseProgram_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystem_UninstallProgramByClass_Statics::NewProp_ProgramClass_MetaData), Z_Construct_UFunction_UOperatingSystem_UninstallProgramByClass_Statics::NewProp_ProgramClass_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOperatingSystem_UninstallProgramByClass_Statics::NewProp_OutErrorIfAny = { "OutErrorIfAny", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystem_eventUninstallProgramByClass_Parms, OutErrorIfAny), Z_Construct_UScriptStruct_FGenericError, METADATA_PARAMS(0, nullptr) }; // 4286029882
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperatingSystem_UninstallProgramByClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystem_UninstallProgramByClass_Statics::NewProp_ProgramClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystem_UninstallProgramByClass_Statics::NewProp_OutErrorIfAny,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystem_UninstallProgramByClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "OperatingSystem" },
		{ "Comment", "/**\n\x09 * public\n\x09 * UOperatingSystem::UninstallProgramByClass\n\x09 * Uninstalls the given program class from this Operating System.\n\x09 * @param ProgramClass Target program class to uninstall.\n\x09 * @param OutErrorIfAny Outputs uninstall error (if any).\n\x09 */" },
		{ "ModuleRelativePath", "Public/Core/OperatingSystem.h" },
		{ "ToolTip", "public\nUOperatingSystem::UninstallProgramByClass\nUninstalls the given program class from this Operating System.\n@param ProgramClass Target program class to uninstall.\n@param OutErrorIfAny Outputs uninstall error (if any)." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystem_UninstallProgramByClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystem, nullptr, "UninstallProgramByClass", nullptr, nullptr, Z_Construct_UFunction_UOperatingSystem_UninstallProgramByClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystem_UninstallProgramByClass_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOperatingSystem_UninstallProgramByClass_Statics::OperatingSystem_eventUninstallProgramByClass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystem_UninstallProgramByClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystem_UninstallProgramByClass_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystem_UninstallProgramByClass_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOperatingSystem_UninstallProgramByClass_Statics::OperatingSystem_eventUninstallProgramByClass_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOperatingSystem_UninstallProgramByClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystem_UninstallProgramByClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOperatingSystem_UpdateCurrentUserDetails_Statics
	{
		struct OperatingSystem_eventUpdateCurrentUserDetails_Parms
		{
			FOperatingSystemUser UpdatedDetails;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UpdatedDetails_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_UpdatedDetails;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystem_UpdateCurrentUserDetails_Statics::NewProp_UpdatedDetails_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOperatingSystem_UpdateCurrentUserDetails_Statics::NewProp_UpdatedDetails = { "UpdatedDetails", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystem_eventUpdateCurrentUserDetails_Parms, UpdatedDetails), Z_Construct_UScriptStruct_FOperatingSystemUser, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystem_UpdateCurrentUserDetails_Statics::NewProp_UpdatedDetails_MetaData), Z_Construct_UFunction_UOperatingSystem_UpdateCurrentUserDetails_Statics::NewProp_UpdatedDetails_MetaData) }; // 1295920940
	void Z_Construct_UFunction_UOperatingSystem_UpdateCurrentUserDetails_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OperatingSystem_eventUpdateCurrentUserDetails_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOperatingSystem_UpdateCurrentUserDetails_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OperatingSystem_eventUpdateCurrentUserDetails_Parms), &Z_Construct_UFunction_UOperatingSystem_UpdateCurrentUserDetails_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperatingSystem_UpdateCurrentUserDetails_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystem_UpdateCurrentUserDetails_Statics::NewProp_UpdatedDetails,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystem_UpdateCurrentUserDetails_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystem_UpdateCurrentUserDetails_Statics::Function_MetaDataParams[] = {
		{ "Category", "OperatingSystem" },
		{ "Comment", "/**\n\x09 * public\n\x09 * UOperatingSystem::UpdateCurrentUserDetails\n\x09 * Updates the details for the current user. If you don't want specific settings to change simply leave them empty or null.\n\x09 * @param UpdatedDetails Settings to update. If a setting is left null or empty, that is not updated.\n\x09 * @return True if the details were updated. False otherwise.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Core/OperatingSystem.h" },
		{ "ToolTip", "public\nUOperatingSystem::UpdateCurrentUserDetails\nUpdates the details for the current user. If you don't want specific settings to change simply leave them empty or null.\n@param UpdatedDetails Settings to update. If a setting is left null or empty, that is not updated.\n@return True if the details were updated. False otherwise." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystem_UpdateCurrentUserDetails_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystem, nullptr, "UpdateCurrentUserDetails", nullptr, nullptr, Z_Construct_UFunction_UOperatingSystem_UpdateCurrentUserDetails_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystem_UpdateCurrentUserDetails_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOperatingSystem_UpdateCurrentUserDetails_Statics::OperatingSystem_eventUpdateCurrentUserDetails_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystem_UpdateCurrentUserDetails_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystem_UpdateCurrentUserDetails_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystem_UpdateCurrentUserDetails_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOperatingSystem_UpdateCurrentUserDetails_Statics::OperatingSystem_eventUpdateCurrentUserDetails_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOperatingSystem_UpdateCurrentUserDetails()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystem_UpdateCurrentUserDetails_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOperatingSystem);
	UClass* Z_Construct_UClass_UOperatingSystem_NoRegister()
	{
		return UOperatingSystem::StaticClass();
	}
	struct Z_Construct_UClass_UOperatingSystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CompanyName_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_CompanyName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Version_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Version;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Icon_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Icon;
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_DirectoryIcons_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_DirectoryIcons_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DirectoryIcons_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_DirectoryIcons;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InstallationSpace_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InstallationSpace;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SupportedDevices_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SupportedDevices;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MustHavePrograms_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_MustHavePrograms;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PostInstallStartupPrograms_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_PostInstallStartupPrograms;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultDirectories_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_DefaultDirectories;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WidgetClass_MetaData[];
#endif
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_WidgetClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BsodWidgetClass_MetaData[];
#endif
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_BsodWidgetClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NotificationSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NotificationSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InstallationTime_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InstallationTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LoadingTime_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LoadingTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LoadingTimeInitial_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LoadingTimeInitial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LogonToDesktopTime_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LogonToDesktopTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BsodOnScreenTime_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BsodOnScreenTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OperatingSystemTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OperatingSystemTag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParentDevice_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_ParentDevice;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OperatingSystemWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_OperatingSystemWidget;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RunningPrograms_ValueProp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_RunningPrograms_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RunningPrograms_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_RunningPrograms;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_InstalledPrograms_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InstalledPrograms_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InstalledPrograms;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentUser_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentUser;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsPreInstalled_MetaData[];
#endif
		static void NewProp_bIsPreInstalled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsPreInstalled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsStartingForTheTime_MetaData[];
#endif
		static void NewProp_bIsStartingForTheTime_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsStartingForTheTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TotalNotifications_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_TotalNotifications;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TotalErrorNotifications_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_TotalErrorNotifications;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TotalWarningNotifications_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_TotalWarningNotifications;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BSODWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BSODWidget;
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_TaskbarButtons_ValueProp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_TaskbarButtons_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TaskbarButtons_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_TaskbarButtons;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetPartitionID_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetPartitionID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastBroughtToFrontWindow_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_LastBroughtToFrontWindow;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoLogin_MetaData[];
#endif
		static void NewProp_bAutoLogin_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoLogin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInstallStartupPrograms_MetaData[];
#endif
		static void NewProp_bInstallStartupPrograms_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInstallStartupPrograms;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasBlueprintCanStartOperatingSystem_MetaData[];
#endif
		static void NewProp_bHasBlueprintCanStartOperatingSystem_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasBlueprintCanStartOperatingSystem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnProgramStarted_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnProgramStarted;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnProgramClosed_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnProgramClosed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnProgramInstalled_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnProgramInstalled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnProgramUninstalled_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnProgramUninstalled;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOperatingSystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_OperatingSystemSimulator,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystem_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UOperatingSystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOperatingSystem_AllocatePartition, "AllocatePartition" }, // 2568909374
		{ &Z_Construct_UFunction_UOperatingSystem_AuthorizeUser, "AuthorizeUser" }, // 2405604233
		{ &Z_Construct_UFunction_UOperatingSystem_BeginInstallation, "BeginInstallation" }, // 2556145350
		{ &Z_Construct_UFunction_UOperatingSystem_CanAutoLogin, "CanAutoLogin" }, // 1639506732
		{ &Z_Construct_UFunction_UOperatingSystem_ClearAllNotifications, "ClearAllNotifications" }, // 432216116
		{ &Z_Construct_UFunction_UOperatingSystem_CloseAllRunningPrograms, "CloseAllRunningPrograms" }, // 581637832
		{ &Z_Construct_UFunction_UOperatingSystem_CloseProgram, "CloseProgram" }, // 828890330
		{ &Z_Construct_UFunction_UOperatingSystem_CreateNewUser, "CreateNewUser" }, // 1223013517
		{ &Z_Construct_UFunction_UOperatingSystem_GetBsodOnScreenTime, "GetBsodOnScreenTime" }, // 577241793
		{ &Z_Construct_UFunction_UOperatingSystem_GetDeviceName, "GetDeviceName" }, // 1672116891
		{ &Z_Construct_UFunction_UOperatingSystem_GetDirectoryIconObject, "GetDirectoryIconObject" }, // 1184753153
		{ &Z_Construct_UFunction_UOperatingSystem_GetDiskPartitions, "GetDiskPartitions" }, // 1865339930
		{ &Z_Construct_UFunction_UOperatingSystem_GetHardDiskSize, "GetHardDiskSize" }, // 108472881
		{ &Z_Construct_UFunction_UOperatingSystem_GetInitialLoadingTime, "GetInitialLoadingTime" }, // 2369531906
		{ &Z_Construct_UFunction_UOperatingSystem_GetInstallationTime, "GetInstallationTime" }, // 1520437837
		{ &Z_Construct_UFunction_UOperatingSystem_GetInstalledProgram, "GetInstalledProgram" }, // 154242300
		{ &Z_Construct_UFunction_UOperatingSystem_GetInstalledPrograms, "GetInstalledPrograms" }, // 1495252161
		{ &Z_Construct_UFunction_UOperatingSystem_GetLoadingTime, "GetLoadingTime" }, // 3293952443
		{ &Z_Construct_UFunction_UOperatingSystem_GetNotifications, "GetNotifications" }, // 3506668566
		{ &Z_Construct_UFunction_UOperatingSystem_GetOperatingSystemPartition, "GetOperatingSystemPartition" }, // 1125835949
		{ &Z_Construct_UFunction_UOperatingSystem_GetRunningProgram, "GetRunningProgram" }, // 1797410071
		{ &Z_Construct_UFunction_UOperatingSystem_GetSizeAsText, "GetSizeAsText" }, // 1393859902
		{ &Z_Construct_UFunction_UOperatingSystem_GetStoragePercentage, "GetStoragePercentage" }, // 4029457348
		{ &Z_Construct_UFunction_UOperatingSystem_GetToastNotificationDisplayTime, "GetToastNotificationDisplayTime" }, // 2664037318
		{ &Z_Construct_UFunction_UOperatingSystem_HasEnoughSpace, "HasEnoughSpace" }, // 4061897035
		{ &Z_Construct_UFunction_UOperatingSystem_InstallationCompleted, "InstallationCompleted" }, // 2088400573
		{ &Z_Construct_UFunction_UOperatingSystem_InstallProgramFromClass, "InstallProgramFromClass" }, // 512527205
		{ &Z_Construct_UFunction_UOperatingSystem_InstallProgramFromPackage, "InstallProgramFromPackage" }, // 1775319011
		{ &Z_Construct_UFunction_UOperatingSystem_IsPreInstalledOperatingSystem, "IsPreInstalledOperatingSystem" }, // 49672141
		{ &Z_Construct_UFunction_UOperatingSystem_IsProgramInstalled, "IsProgramInstalled" }, // 2750296058
		{ &Z_Construct_UFunction_UOperatingSystem_IsUnix, "IsUnix" }, // 2330236492
		{ &Z_Construct_UFunction_UOperatingSystem_K2_CanStartOperatingSystem, "K2_CanStartOperatingSystem" }, // 1908585106
		{ &Z_Construct_UFunction_UOperatingSystem_LoginUser, "LoginUser" }, // 337416689
		{ &Z_Construct_UFunction_UOperatingSystem_MinimizeProgram, "MinimizeProgram" }, // 2254434318
		{ &Z_Construct_UFunction_UOperatingSystem_RefreshPartitions, "RefreshPartitions" }, // 2804095658
		{ &Z_Construct_UFunction_UOperatingSystem_RemovePartition, "RemovePartition" }, // 525918541
		{ &Z_Construct_UFunction_UOperatingSystem_SetAutoLogin, "SetAutoLogin" }, // 2994056639
		{ &Z_Construct_UFunction_UOperatingSystem_SetDeviceName, "SetDeviceName" }, // 4194610072
		{ &Z_Construct_UFunction_UOperatingSystem_SetToInstallStartupPrograms, "SetToInstallStartupPrograms" }, // 1407592107
		{ &Z_Construct_UFunction_UOperatingSystem_ShouldInstallStartupPrograms, "ShouldInstallStartupPrograms" }, // 4198795016
		{ &Z_Construct_UFunction_UOperatingSystem_UninstallProgram, "UninstallProgram" }, // 3387791956
		{ &Z_Construct_UFunction_UOperatingSystem_UninstallProgramByClass, "UninstallProgramByClass" }, // 4293079333
		{ &Z_Construct_UFunction_UOperatingSystem_UpdateCurrentUserDetails, "UpdateCurrentUserDetails" }, // 3903869828
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystem_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystem_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Main Operating System class.\n * DO NOT inherit from this class directly.\n * @See UOperatingSystemUnix\n * @See UOperatingSystemNonUnix\n */" },
		{ "IncludePath", "Core/OperatingSystem.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/Core/OperatingSystem.h" },
		{ "ToolTip", "Main Operating System class.\nDO NOT inherit from this class directly.\n@See UOperatingSystemUnix\n@See UOperatingSystemNonUnix" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystem_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "OperatingSystem" },
		{ "Comment", "/** Name of this operating system. Think of this as just Windows or MacOS or Ubuntu etc. */" },
		{ "ModuleRelativePath", "Public/Core/OperatingSystem.h" },
		{ "ToolTip", "Name of this operating system. Think of this as just Windows or MacOS or Ubuntu etc." },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UOperatingSystem_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOperatingSystem, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystem_Statics::NewProp_Name_MetaData), Z_Construct_UClass_UOperatingSystem_Statics::NewProp_Name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystem_Statics::NewProp_CompanyName_MetaData[] = {
		{ "Category", "OperatingSystem" },
		{ "Comment", "/** Company that made this operating system. Think of this as just Microsoft or Apple or Canonical etc. */" },
		{ "ModuleRelativePath", "Public/Core/OperatingSystem.h" },
		{ "ToolTip", "Company that made this operating system. Think of this as just Microsoft or Apple or Canonical etc." },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UOperatingSystem_Statics::NewProp_CompanyName = { "CompanyName", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOperatingSystem, CompanyName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystem_Statics::NewProp_CompanyName_MetaData), Z_Construct_UClass_UOperatingSystem_Statics::NewProp_CompanyName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystem_Statics::NewProp_Version_MetaData[] = {
		{ "Category", "OperatingSystem" },
		{ "Comment", "/** Current version of this Operating System. */" },
		{ "ModuleRelativePath", "Public/Core/OperatingSystem.h" },
		{ "ToolTip", "Current version of this Operating System." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOperatingSystem_Statics::NewProp_Version = { "Version", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOperatingSystem, Version), Z_Construct_UScriptStruct_FVersion, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystem_Statics::NewProp_Version_MetaData), Z_Construct_UClass_UOperatingSystem_Statics::NewProp_Version_MetaData) }; // 2963316928
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystem_Statics::NewProp_Icon_MetaData[] = {
		{ "AllowedClasses", "Texture, MaterialInterface" },
		{ "Category", "OperatingSystem" },
		{ "Comment", "/** An icon (either texture or user interface material) for this Operating System. */" },
		{ "DisplayThumbnail", "TRUE" },
		{ "ModuleRelativePath", "Public/Core/OperatingSystem.h" },
		{ "ToolTip", "An icon (either texture or user interface material) for this Operating System." },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UOperatingSystem_Statics::NewProp_Icon = { "Icon", nullptr, (EPropertyFlags)0x0024080000010015, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOperatingSystem, Icon), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystem_Statics::NewProp_Icon_MetaData), Z_Construct_UClass_UOperatingSystem_Statics::NewProp_Icon_MetaData) };
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UOperatingSystem_Statics::NewProp_DirectoryIcons_ValueProp = { "DirectoryIcons", nullptr, (EPropertyFlags)0x0004000000000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOperatingSystem_Statics::NewProp_DirectoryIcons_Key_KeyProp = { "DirectoryIcons_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystem_Statics::NewProp_DirectoryIcons_MetaData[] = {
		{ "AllowedClasses", "Texture, MaterialInterface" },
		{ "Categories", "OperatingSystem.Directory" },
		{ "Category", "OperatingSystem" },
		{ "DisplayThumbnail", "TRUE" },
		{ "ForceInlineRow", "" },
		{ "ModuleRelativePath", "Public/Core/OperatingSystem.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UOperatingSystem_Statics::NewProp_DirectoryIcons = { "DirectoryIcons", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOperatingSystem, DirectoryIcons), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystem_Statics::NewProp_DirectoryIcons_MetaData), Z_Construct_UClass_UOperatingSystem_Statics::NewProp_DirectoryIcons_MetaData) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystem_Statics::NewProp_InstallationSpace_MetaData[] = {
		{ "Category", "OperatingSystem" },
		{ "ClampMax", "20" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Space required by this OS for installation. Remember, this is all simulated so don't worry about anything related to your PC. */" },
		{ "ForceUnits", "Gigabytes" },
		{ "ModuleRelativePath", "Public/Core/OperatingSystem.h" },
		{ "ToolTip", "Space required by this OS for installation. Remember, this is all simulated so don't worry about anything related to your PC." },
		{ "UIMax", "20" },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOperatingSystem_Statics::NewProp_InstallationSpace = { "InstallationSpace", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOperatingSystem, InstallationSpace), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystem_Statics::NewProp_InstallationSpace_MetaData), Z_Construct_UClass_UOperatingSystem_Statics::NewProp_InstallationSpace_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystem_Statics::NewProp_SupportedDevices_MetaData[] = {
		{ "Categories", "OperatingSystem.Devices" },
		{ "Category", "OperatingSystem" },
		{ "Comment", "/** List of devices this Operating System supports. If empty, it is assumed all devices are supported. */" },
		{ "ModuleRelativePath", "Public/Core/OperatingSystem.h" },
		{ "ToolTip", "List of devices this Operating System supports. If empty, it is assumed all devices are supported." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOperatingSystem_Statics::NewProp_SupportedDevices = { "SupportedDevices", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOperatingSystem, SupportedDevices), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystem_Statics::NewProp_SupportedDevices_MetaData), Z_Construct_UClass_UOperatingSystem_Statics::NewProp_SupportedDevices_MetaData) }; // 405371792
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystem_Statics::NewProp_MustHavePrograms_MetaData[] = {
		{ "Category", "OperatingSystem" },
		{ "Comment", "/** These are programs that *must* be installed with Operating System. For example: File explorer, terminal, web browser etc. */" },
		{ "ModuleRelativePath", "Public/Core/OperatingSystem.h" },
		{ "ToolTip", "These are programs that *must* be installed with Operating System. For example: File explorer, terminal, web browser etc." },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UOperatingSystem_Statics::NewProp_MustHavePrograms = { "MustHavePrograms", nullptr, (EPropertyFlags)0x0024080000010015, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOperatingSystem, MustHavePrograms), Z_Construct_UClass_UOperatingSystemProgramsCollection_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystem_Statics::NewProp_MustHavePrograms_MetaData), Z_Construct_UClass_UOperatingSystem_Statics::NewProp_MustHavePrograms_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystem_Statics::NewProp_PostInstallStartupPrograms_MetaData[] = {
		{ "Category", "OperatingSystem" },
		{ "Comment", "/** List of programs that can be optionally installed after installing the Operating System. */" },
		{ "ModuleRelativePath", "Public/Core/OperatingSystem.h" },
		{ "ToolTip", "List of programs that can be optionally installed after installing the Operating System." },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UOperatingSystem_Statics::NewProp_PostInstallStartupPrograms = { "PostInstallStartupPrograms", nullptr, (EPropertyFlags)0x0024080000010015, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOperatingSystem, PostInstallStartupPrograms), Z_Construct_UClass_UOperatingSystemProgramsCollection_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystem_Statics::NewProp_PostInstallStartupPrograms_MetaData), Z_Construct_UClass_UOperatingSystem_Statics::NewProp_PostInstallStartupPrograms_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystem_Statics::NewProp_DefaultDirectories_MetaData[] = {
		{ "Category", "OperatingSystem" },
		{ "Comment", "/** Default directories to automatically create when installing this Operating System. */" },
		{ "ModuleRelativePath", "Public/Core/OperatingSystem.h" },
		{ "ToolTip", "Default directories to automatically create when installing this Operating System." },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UOperatingSystem_Statics::NewProp_DefaultDirectories = { "DefaultDirectories", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOperatingSystem, DefaultDirectories), Z_Construct_UClass_UOperatingSystemDirectoriesCollection_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystem_Statics::NewProp_DefaultDirectories_MetaData), Z_Construct_UClass_UOperatingSystem_Statics::NewProp_DefaultDirectories_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystem_Statics::NewProp_WidgetClass_MetaData[] = {
		{ "Category", "OperatingSystemWidgets" },
		{ "Comment", "/** Operating System Widget class. */" },
		{ "ModuleRelativePath", "Public/Core/OperatingSystem.h" },
		{ "ToolTip", "Operating System Widget class." },
	};
#endif
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UOperatingSystem_Statics::NewProp_WidgetClass = { "WidgetClass", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOperatingSystem, WidgetClass), Z_Construct_UClass_UOperatingSystemWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystem_Statics::NewProp_WidgetClass_MetaData), Z_Construct_UClass_UOperatingSystem_Statics::NewProp_WidgetClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystem_Statics::NewProp_BsodWidgetClass_MetaData[] = {
		{ "Category", "OperatingSystemWidgets" },
		{ "Comment", "/** Operating System Widget class. */" },
		{ "ModuleRelativePath", "Public/Core/OperatingSystem.h" },
		{ "ToolTip", "Operating System Widget class." },
	};
#endif
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UOperatingSystem_Statics::NewProp_BsodWidgetClass = { "BsodWidgetClass", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOperatingSystem, BsodWidgetClass), Z_Construct_UClass_UOperatingSystemBsodWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystem_Statics::NewProp_BsodWidgetClass_MetaData), Z_Construct_UClass_UOperatingSystem_Statics::NewProp_BsodWidgetClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystem_Statics::NewProp_NotificationSettings_MetaData[] = {
		{ "Category", "OperatingSystem" },
		{ "Comment", "/** Notification settings. */" },
		{ "ModuleRelativePath", "Public/Core/OperatingSystem.h" },
		{ "ToolTip", "Notification settings." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOperatingSystem_Statics::NewProp_NotificationSettings = { "NotificationSettings", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOperatingSystem, NotificationSettings), Z_Construct_UScriptStruct_FOperatingSystemNotificationSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystem_Statics::NewProp_NotificationSettings_MetaData), Z_Construct_UClass_UOperatingSystem_Statics::NewProp_NotificationSettings_MetaData) }; // 4003417018
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystem_Statics::NewProp_InstallationTime_MetaData[] = {
		{ "Category", "OperatingSystem" },
		{ "Comment", "/** Installation time for installing this Operating System. */" },
		{ "ModuleRelativePath", "Public/Core/OperatingSystem.h" },
		{ "ToolTip", "Installation time for installing this Operating System." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOperatingSystem_Statics::NewProp_InstallationTime = { "InstallationTime", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOperatingSystem, InstallationTime), Z_Construct_UScriptStruct_FOperatingSystemRangeTime, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystem_Statics::NewProp_InstallationTime_MetaData), Z_Construct_UClass_UOperatingSystem_Statics::NewProp_InstallationTime_MetaData) }; // 1922178498
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystem_Statics::NewProp_LoadingTime_MetaData[] = {
		{ "Category", "OperatingSystem" },
		{ "Comment", "/** Time it takes for the Operating System to show loading screen and then change to logon screen. */" },
		{ "ModuleRelativePath", "Public/Core/OperatingSystem.h" },
		{ "ToolTip", "Time it takes for the Operating System to show loading screen and then change to logon screen." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOperatingSystem_Statics::NewProp_LoadingTime = { "LoadingTime", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOperatingSystem, LoadingTime), Z_Construct_UScriptStruct_FOperatingSystemRangeTime, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystem_Statics::NewProp_LoadingTime_MetaData), Z_Construct_UClass_UOperatingSystem_Statics::NewProp_LoadingTime_MetaData) }; // 1922178498
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystem_Statics::NewProp_LoadingTimeInitial_MetaData[] = {
		{ "Category", "OperatingSystem" },
		{ "Comment", "/** Time it takes for the Operating System to load for the first time after installation. Typically this will be set higher than Loading Time. */" },
		{ "ModuleRelativePath", "Public/Core/OperatingSystem.h" },
		{ "ToolTip", "Time it takes for the Operating System to load for the first time after installation. Typically this will be set higher than Loading Time." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOperatingSystem_Statics::NewProp_LoadingTimeInitial = { "LoadingTimeInitial", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOperatingSystem, LoadingTimeInitial), Z_Construct_UScriptStruct_FOperatingSystemRangeTime, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystem_Statics::NewProp_LoadingTimeInitial_MetaData), Z_Construct_UClass_UOperatingSystem_Statics::NewProp_LoadingTimeInitial_MetaData) }; // 1922178498
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystem_Statics::NewProp_LogonToDesktopTime_MetaData[] = {
		{ "Category", "OperatingSystem" },
		{ "Comment", "/** Time it takes to transition from Logon screen to Desktop. */" },
		{ "ModuleRelativePath", "Public/Core/OperatingSystem.h" },
		{ "ToolTip", "Time it takes to transition from Logon screen to Desktop." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOperatingSystem_Statics::NewProp_LogonToDesktopTime = { "LogonToDesktopTime", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOperatingSystem, LogonToDesktopTime), Z_Construct_UScriptStruct_FOperatingSystemRangeTime, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystem_Statics::NewProp_LogonToDesktopTime_MetaData), Z_Construct_UClass_UOperatingSystem_Statics::NewProp_LogonToDesktopTime_MetaData) }; // 1922178498
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystem_Statics::NewProp_BsodOnScreenTime_MetaData[] = {
		{ "Category", "OperatingSystem" },
		{ "ModuleRelativePath", "Public/Core/OperatingSystem.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOperatingSystem_Statics::NewProp_BsodOnScreenTime = { "BsodOnScreenTime", nullptr, (EPropertyFlags)0x00200c0000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOperatingSystem, BsodOnScreenTime), Z_Construct_UScriptStruct_FOperatingSystemRangeTime, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystem_Statics::NewProp_BsodOnScreenTime_MetaData), Z_Construct_UClass_UOperatingSystem_Statics::NewProp_BsodOnScreenTime_MetaData) }; // 1922178498
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystem_Statics::NewProp_OperatingSystemTag_MetaData[] = {
		{ "Category", "OperatingSystem" },
		{ "ModuleRelativePath", "Public/Core/OperatingSystem.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOperatingSystem_Statics::NewProp_OperatingSystemTag = { "OperatingSystemTag", nullptr, (EPropertyFlags)0x00200c0000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOperatingSystem, OperatingSystemTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystem_Statics::NewProp_OperatingSystemTag_MetaData), Z_Construct_UClass_UOperatingSystem_Statics::NewProp_OperatingSystemTag_MetaData) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystem_Statics::NewProp_ParentDevice_MetaData[] = {
		{ "Category", "Debug" },
		{ "Comment", "/** The device this Operating System is running on. */" },
		{ "ModuleRelativePath", "Public/Core/OperatingSystem.h" },
		{ "ToolTip", "The device this Operating System is running on." },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UOperatingSystem_Statics::NewProp_ParentDevice = { "ParentDevice", nullptr, (EPropertyFlags)0x0024080000022815, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOperatingSystem, ParentDevice), Z_Construct_UClass_UOperatingSystemBaseDevice_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystem_Statics::NewProp_ParentDevice_MetaData), Z_Construct_UClass_UOperatingSystem_Statics::NewProp_ParentDevice_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystem_Statics::NewProp_OperatingSystemWidget_MetaData[] = {
		{ "Category", "Debug" },
		{ "Comment", "/** Reference to the Operating System widget. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Core/OperatingSystem.h" },
		{ "ToolTip", "Reference to the Operating System widget." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UOperatingSystem_Statics::NewProp_OperatingSystemWidget = { "OperatingSystemWidget", nullptr, (EPropertyFlags)0x00240800000a281d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOperatingSystem, OperatingSystemWidget), Z_Construct_UClass_UOperatingSystemWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystem_Statics::NewProp_OperatingSystemWidget_MetaData), Z_Construct_UClass_UOperatingSystem_Statics::NewProp_OperatingSystemWidget_MetaData) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UOperatingSystem_Statics::NewProp_RunningPrograms_ValueProp = { "RunningPrograms", nullptr, (EPropertyFlags)0x0004000000020001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UOperatingSystemBaseProgram_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UOperatingSystem_Statics::NewProp_RunningPrograms_Key_KeyProp = { "RunningPrograms_Key", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystem_Statics::NewProp_RunningPrograms_MetaData[] = {
		{ "Category", "Debug" },
		{ "Comment", "/** All running programs in this Operating System. The key is the Process ID and value is the program. */" },
		{ "ModuleRelativePath", "Public/Core/OperatingSystem.h" },
		{ "ToolTip", "All running programs in this Operating System. The key is the Process ID and value is the program." },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UOperatingSystem_Statics::NewProp_RunningPrograms = { "RunningPrograms", nullptr, (EPropertyFlags)0x0024080000022815, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOperatingSystem, RunningPrograms), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystem_Statics::NewProp_RunningPrograms_MetaData), Z_Construct_UClass_UOperatingSystem_Statics::NewProp_RunningPrograms_MetaData) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UOperatingSystem_Statics::NewProp_InstalledPrograms_Inner = { "InstalledPrograms", nullptr, (EPropertyFlags)0x0004000000020000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UOperatingSystemBaseProgram_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystem_Statics::NewProp_InstalledPrograms_MetaData[] = {
		{ "Category", "Debug" },
		{ "Comment", "/** All the programs that are currently installed. */" },
		{ "ModuleRelativePath", "Public/Core/OperatingSystem.h" },
		{ "ToolTip", "All the programs that are currently installed." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UOperatingSystem_Statics::NewProp_InstalledPrograms = { "InstalledPrograms", nullptr, (EPropertyFlags)0x0024080000022801, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOperatingSystem, InstalledPrograms), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystem_Statics::NewProp_InstalledPrograms_MetaData), Z_Construct_UClass_UOperatingSystem_Statics::NewProp_InstalledPrograms_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystem_Statics::NewProp_CurrentUser_MetaData[] = {
		{ "Category", "Debug" },
		{ "Comment", "/** Active user. */" },
		{ "ModuleRelativePath", "Public/Core/OperatingSystem.h" },
		{ "ToolTip", "Active user." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOperatingSystem_Statics::NewProp_CurrentUser = { "CurrentUser", nullptr, (EPropertyFlags)0x0020080000022815, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOperatingSystem, CurrentUser), Z_Construct_UScriptStruct_FOperatingSystemUser, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystem_Statics::NewProp_CurrentUser_MetaData), Z_Construct_UClass_UOperatingSystem_Statics::NewProp_CurrentUser_MetaData) }; // 1295920940
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystem_Statics::NewProp_bIsPreInstalled_MetaData[] = {
		{ "Category", "Debug" },
		{ "Comment", "/** True if this Operating System was pre-installed with the device. */" },
		{ "ModuleRelativePath", "Public/Core/OperatingSystem.h" },
		{ "ToolTip", "True if this Operating System was pre-installed with the device." },
	};
#endif
	void Z_Construct_UClass_UOperatingSystem_Statics::NewProp_bIsPreInstalled_SetBit(void* Obj)
	{
		((UOperatingSystem*)Obj)->bIsPreInstalled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOperatingSystem_Statics::NewProp_bIsPreInstalled = { "bIsPreInstalled", nullptr, (EPropertyFlags)0x0020080000022801, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UOperatingSystem), &Z_Construct_UClass_UOperatingSystem_Statics::NewProp_bIsPreInstalled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystem_Statics::NewProp_bIsPreInstalled_MetaData), Z_Construct_UClass_UOperatingSystem_Statics::NewProp_bIsPreInstalled_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystem_Statics::NewProp_bIsStartingForTheTime_MetaData[] = {
		{ "Category", "Debug" },
		{ "Comment", "/** True if the Operating System is starting for the first time after installation. */" },
		{ "ModuleRelativePath", "Public/Core/OperatingSystem.h" },
		{ "ToolTip", "True if the Operating System is starting for the first time after installation." },
	};
#endif
	void Z_Construct_UClass_UOperatingSystem_Statics::NewProp_bIsStartingForTheTime_SetBit(void* Obj)
	{
		((UOperatingSystem*)Obj)->bIsStartingForTheTime = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOperatingSystem_Statics::NewProp_bIsStartingForTheTime = { "bIsStartingForTheTime", nullptr, (EPropertyFlags)0x0020080000022801, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UOperatingSystem), &Z_Construct_UClass_UOperatingSystem_Statics::NewProp_bIsStartingForTheTime_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystem_Statics::NewProp_bIsStartingForTheTime_MetaData), Z_Construct_UClass_UOperatingSystem_Statics::NewProp_bIsStartingForTheTime_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystem_Statics::NewProp_TotalNotifications_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/Core/OperatingSystem.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UOperatingSystem_Statics::NewProp_TotalNotifications = { "TotalNotifications", nullptr, (EPropertyFlags)0x0020080000022815, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOperatingSystem, TotalNotifications), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystem_Statics::NewProp_TotalNotifications_MetaData), Z_Construct_UClass_UOperatingSystem_Statics::NewProp_TotalNotifications_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystem_Statics::NewProp_TotalErrorNotifications_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/Core/OperatingSystem.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UOperatingSystem_Statics::NewProp_TotalErrorNotifications = { "TotalErrorNotifications", nullptr, (EPropertyFlags)0x0020080000022815, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOperatingSystem, TotalErrorNotifications), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystem_Statics::NewProp_TotalErrorNotifications_MetaData), Z_Construct_UClass_UOperatingSystem_Statics::NewProp_TotalErrorNotifications_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystem_Statics::NewProp_TotalWarningNotifications_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/Core/OperatingSystem.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UOperatingSystem_Statics::NewProp_TotalWarningNotifications = { "TotalWarningNotifications", nullptr, (EPropertyFlags)0x0020080000022815, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOperatingSystem, TotalWarningNotifications), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystem_Statics::NewProp_TotalWarningNotifications_MetaData), Z_Construct_UClass_UOperatingSystem_Statics::NewProp_TotalWarningNotifications_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystem_Statics::NewProp_BSODWidget_MetaData[] = {
		{ "Category", "Debug" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Core/OperatingSystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UOperatingSystem_Statics::NewProp_BSODWidget = { "BSODWidget", nullptr, (EPropertyFlags)0x00240800000a281d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOperatingSystem, BSODWidget), Z_Construct_UClass_UOperatingSystemBsodWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystem_Statics::NewProp_BSODWidget_MetaData), Z_Construct_UClass_UOperatingSystem_Statics::NewProp_BSODWidget_MetaData) };
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UOperatingSystem_Statics::NewProp_TaskbarButtons_ValueProp = { "TaskbarButtons", nullptr, (EPropertyFlags)0x0004000000080008, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UOperatingSystemTaskbarButton_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UOperatingSystem_Statics::NewProp_TaskbarButtons_Key_KeyProp = { "TaskbarButtons_Key", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystem_Statics::NewProp_TaskbarButtons_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/OperatingSystem.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UOperatingSystem_Statics::NewProp_TaskbarButtons = { "TaskbarButtons", nullptr, (EPropertyFlags)0x0024088000002008, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOperatingSystem, TaskbarButtons), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystem_Statics::NewProp_TaskbarButtons_MetaData), Z_Construct_UClass_UOperatingSystem_Statics::NewProp_TaskbarButtons_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystem_Statics::NewProp_TargetPartitionID_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/OperatingSystem.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOperatingSystem_Statics::NewProp_TargetPartitionID = { "TargetPartitionID", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOperatingSystem, TargetPartitionID), Z_Construct_UScriptStruct_FOperatingSystemUniqueId, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystem_Statics::NewProp_TargetPartitionID_MetaData), Z_Construct_UClass_UOperatingSystem_Statics::NewProp_TargetPartitionID_MetaData) }; // 2242450855
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystem_Statics::NewProp_LastBroughtToFrontWindow_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/OperatingSystem.h" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UOperatingSystem_Statics::NewProp_LastBroughtToFrontWindow = { "LastBroughtToFrontWindow", nullptr, (EPropertyFlags)0x0024080000082008, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOperatingSystem, LastBroughtToFrontWindow), Z_Construct_UClass_UDraggableWindow_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystem_Statics::NewProp_LastBroughtToFrontWindow_MetaData), Z_Construct_UClass_UOperatingSystem_Statics::NewProp_LastBroughtToFrontWindow_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystem_Statics::NewProp_bAutoLogin_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/OperatingSystem.h" },
	};
#endif
	void Z_Construct_UClass_UOperatingSystem_Statics::NewProp_bAutoLogin_SetBit(void* Obj)
	{
		((UOperatingSystem*)Obj)->bAutoLogin = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOperatingSystem_Statics::NewProp_bAutoLogin = { "bAutoLogin", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UOperatingSystem), &Z_Construct_UClass_UOperatingSystem_Statics::NewProp_bAutoLogin_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystem_Statics::NewProp_bAutoLogin_MetaData), Z_Construct_UClass_UOperatingSystem_Statics::NewProp_bAutoLogin_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystem_Statics::NewProp_bInstallStartupPrograms_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/OperatingSystem.h" },
	};
#endif
	void Z_Construct_UClass_UOperatingSystem_Statics::NewProp_bInstallStartupPrograms_SetBit(void* Obj)
	{
		((UOperatingSystem*)Obj)->bInstallStartupPrograms = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOperatingSystem_Statics::NewProp_bInstallStartupPrograms = { "bInstallStartupPrograms", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UOperatingSystem), &Z_Construct_UClass_UOperatingSystem_Statics::NewProp_bInstallStartupPrograms_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystem_Statics::NewProp_bInstallStartupPrograms_MetaData), Z_Construct_UClass_UOperatingSystem_Statics::NewProp_bInstallStartupPrograms_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystem_Statics::NewProp_bHasBlueprintCanStartOperatingSystem_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/OperatingSystem.h" },
	};
#endif
	void Z_Construct_UClass_UOperatingSystem_Statics::NewProp_bHasBlueprintCanStartOperatingSystem_SetBit(void* Obj)
	{
		((UOperatingSystem*)Obj)->bHasBlueprintCanStartOperatingSystem = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOperatingSystem_Statics::NewProp_bHasBlueprintCanStartOperatingSystem = { "bHasBlueprintCanStartOperatingSystem", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UOperatingSystem), &Z_Construct_UClass_UOperatingSystem_Statics::NewProp_bHasBlueprintCanStartOperatingSystem_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystem_Statics::NewProp_bHasBlueprintCanStartOperatingSystem_MetaData), Z_Construct_UClass_UOperatingSystem_Statics::NewProp_bHasBlueprintCanStartOperatingSystem_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystem_Statics::NewProp_OnProgramStarted_MetaData[] = {
		{ "Category", "OperatingSystem" },
		{ "ModuleRelativePath", "Public/Core/OperatingSystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOperatingSystem_Statics::NewProp_OnProgramStarted = { "OnProgramStarted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOperatingSystem, OnProgramStarted), Z_Construct_UDelegateFunction_OperatingSystemSimulator_OperatingSystemProgramDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystem_Statics::NewProp_OnProgramStarted_MetaData), Z_Construct_UClass_UOperatingSystem_Statics::NewProp_OnProgramStarted_MetaData) }; // 422784753
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystem_Statics::NewProp_OnProgramClosed_MetaData[] = {
		{ "Category", "OperatingSystem" },
		{ "ModuleRelativePath", "Public/Core/OperatingSystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOperatingSystem_Statics::NewProp_OnProgramClosed = { "OnProgramClosed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOperatingSystem, OnProgramClosed), Z_Construct_UDelegateFunction_OperatingSystemSimulator_OperatingSystemProgramDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystem_Statics::NewProp_OnProgramClosed_MetaData), Z_Construct_UClass_UOperatingSystem_Statics::NewProp_OnProgramClosed_MetaData) }; // 422784753
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystem_Statics::NewProp_OnProgramInstalled_MetaData[] = {
		{ "Category", "OperatingSystem" },
		{ "ModuleRelativePath", "Public/Core/OperatingSystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOperatingSystem_Statics::NewProp_OnProgramInstalled = { "OnProgramInstalled", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOperatingSystem, OnProgramInstalled), Z_Construct_UDelegateFunction_OperatingSystemSimulator_OperatingSystemProgramDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystem_Statics::NewProp_OnProgramInstalled_MetaData), Z_Construct_UClass_UOperatingSystem_Statics::NewProp_OnProgramInstalled_MetaData) }; // 422784753
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystem_Statics::NewProp_OnProgramUninstalled_MetaData[] = {
		{ "Category", "OperatingSystem" },
		{ "ModuleRelativePath", "Public/Core/OperatingSystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOperatingSystem_Statics::NewProp_OnProgramUninstalled = { "OnProgramUninstalled", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOperatingSystem, OnProgramUninstalled), Z_Construct_UDelegateFunction_OperatingSystemSimulator_OperatingSystemProgramDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystem_Statics::NewProp_OnProgramUninstalled_MetaData), Z_Construct_UClass_UOperatingSystem_Statics::NewProp_OnProgramUninstalled_MetaData) }; // 422784753
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOperatingSystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystem_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystem_Statics::NewProp_CompanyName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystem_Statics::NewProp_Version,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystem_Statics::NewProp_Icon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystem_Statics::NewProp_DirectoryIcons_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystem_Statics::NewProp_DirectoryIcons_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystem_Statics::NewProp_DirectoryIcons,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystem_Statics::NewProp_InstallationSpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystem_Statics::NewProp_SupportedDevices,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystem_Statics::NewProp_MustHavePrograms,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystem_Statics::NewProp_PostInstallStartupPrograms,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystem_Statics::NewProp_DefaultDirectories,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystem_Statics::NewProp_WidgetClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystem_Statics::NewProp_BsodWidgetClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystem_Statics::NewProp_NotificationSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystem_Statics::NewProp_InstallationTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystem_Statics::NewProp_LoadingTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystem_Statics::NewProp_LoadingTimeInitial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystem_Statics::NewProp_LogonToDesktopTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystem_Statics::NewProp_BsodOnScreenTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystem_Statics::NewProp_OperatingSystemTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystem_Statics::NewProp_ParentDevice,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystem_Statics::NewProp_OperatingSystemWidget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystem_Statics::NewProp_RunningPrograms_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystem_Statics::NewProp_RunningPrograms_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystem_Statics::NewProp_RunningPrograms,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystem_Statics::NewProp_InstalledPrograms_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystem_Statics::NewProp_InstalledPrograms,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystem_Statics::NewProp_CurrentUser,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystem_Statics::NewProp_bIsPreInstalled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystem_Statics::NewProp_bIsStartingForTheTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystem_Statics::NewProp_TotalNotifications,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystem_Statics::NewProp_TotalErrorNotifications,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystem_Statics::NewProp_TotalWarningNotifications,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystem_Statics::NewProp_BSODWidget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystem_Statics::NewProp_TaskbarButtons_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystem_Statics::NewProp_TaskbarButtons_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystem_Statics::NewProp_TaskbarButtons,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystem_Statics::NewProp_TargetPartitionID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystem_Statics::NewProp_LastBroughtToFrontWindow,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystem_Statics::NewProp_bAutoLogin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystem_Statics::NewProp_bInstallStartupPrograms,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystem_Statics::NewProp_bHasBlueprintCanStartOperatingSystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystem_Statics::NewProp_OnProgramStarted,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystem_Statics::NewProp_OnProgramClosed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystem_Statics::NewProp_OnProgramInstalled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystem_Statics::NewProp_OnProgramUninstalled,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOperatingSystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOperatingSystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOperatingSystem_Statics::ClassParams = {
		&UOperatingSystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UOperatingSystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystem_Statics::PropPointers),
		0,
		0x008000A1u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UOperatingSystem_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystem_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UOperatingSystem()
	{
		if (!Z_Registration_Info_UClass_UOperatingSystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOperatingSystem.OuterSingleton, Z_Construct_UClass_UOperatingSystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOperatingSystem.OuterSingleton;
	}
	template<> OPERATINGSYSTEMSIMULATOR_API UClass* StaticClass<UOperatingSystem>()
	{
		return UOperatingSystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOperatingSystem);
	UOperatingSystem::~UOperatingSystem() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Core_OperatingSystem_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Core_OperatingSystem_h_Statics::ScriptStructInfo[] = {
		{ FOperatingSystemNotificationSettings::StaticStruct, Z_Construct_UScriptStruct_FOperatingSystemNotificationSettings_Statics::NewStructOps, TEXT("OperatingSystemNotificationSettings"), &Z_Registration_Info_UScriptStruct_OperatingSystemNotificationSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOperatingSystemNotificationSettings), 4003417018U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Core_OperatingSystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOperatingSystem, UOperatingSystem::StaticClass, TEXT("UOperatingSystem"), &Z_Registration_Info_UClass_UOperatingSystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOperatingSystem), 760110580U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Core_OperatingSystem_h_4104934072(TEXT("/Script/OperatingSystemSimulator"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Core_OperatingSystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Core_OperatingSystem_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Core_OperatingSystem_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Core_OperatingSystem_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
