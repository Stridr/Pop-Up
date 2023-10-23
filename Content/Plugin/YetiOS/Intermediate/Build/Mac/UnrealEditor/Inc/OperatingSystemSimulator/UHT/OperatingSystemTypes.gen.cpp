// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OperatingSystemSimulator/Public/OperatingSystemTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOperatingSystemTypes() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	OPERATINGSYSTEMSIMULATOR_API UClass* Z_Construct_UClass_UOperatingSystemBaseProgram_NoRegister();
	OPERATINGSYSTEMSIMULATOR_API UEnum* Z_Construct_UEnum_OperatingSystemSimulator_EOperatingSystemCommonSizes();
	OPERATINGSYSTEMSIMULATOR_API UEnum* Z_Construct_UEnum_OperatingSystemSimulator_EOperatingSystemDateSeparator();
	OPERATINGSYSTEMSIMULATOR_API UEnum* Z_Construct_UEnum_OperatingSystemSimulator_EOperatingSystemDeviceState();
	OPERATINGSYSTEMSIMULATOR_API UEnum* Z_Construct_UEnum_OperatingSystemSimulator_EOperatingSystemNotificationCategory();
	OPERATINGSYSTEMSIMULATOR_API UEnum* Z_Construct_UEnum_OperatingSystemSimulator_EOperatingSystemNotificationType();
	OPERATINGSYSTEMSIMULATOR_API UEnum* Z_Construct_UEnum_OperatingSystemSimulator_EOperatingSystemPasswordStrength();
	OPERATINGSYSTEMSIMULATOR_API UEnum* Z_Construct_UEnum_OperatingSystemSimulator_EOperatingSystemProgramViewState();
	OPERATINGSYSTEMSIMULATOR_API UEnum* Z_Construct_UEnum_OperatingSystemSimulator_EOperatingSystemSizeMethod();
	OPERATINGSYSTEMSIMULATOR_API UEnum* Z_Construct_UEnum_OperatingSystemSimulator_EOperatingSystemTerminalMessageType();
	OPERATINGSYSTEMSIMULATOR_API UEnum* Z_Construct_UEnum_OperatingSystemSimulator_EOperatingSystemTimeSeparator();
	OPERATINGSYSTEMSIMULATOR_API UScriptStruct* Z_Construct_UScriptStruct_FGenericError();
	OPERATINGSYSTEMSIMULATOR_API UScriptStruct* Z_Construct_UScriptStruct_FOperatingSystemDeviceSaveLoad();
	OPERATINGSYSTEMSIMULATOR_API UScriptStruct* Z_Construct_UScriptStruct_FOperatingSystemDirectoriesSaveLoad();
	OPERATINGSYSTEMSIMULATOR_API UScriptStruct* Z_Construct_UScriptStruct_FOperatingSystemFilesSaveLoad();
	OPERATINGSYSTEMSIMULATOR_API UScriptStruct* Z_Construct_UScriptStruct_FOperatingSystemNotification();
	OPERATINGSYSTEMSIMULATOR_API UScriptStruct* Z_Construct_UScriptStruct_FOperatingSystemPartitionSaveLoad();
	OPERATINGSYSTEMSIMULATOR_API UScriptStruct* Z_Construct_UScriptStruct_FOperatingSystemProgramSaveLoad();
	OPERATINGSYSTEMSIMULATOR_API UScriptStruct* Z_Construct_UScriptStruct_FOperatingSystemRangeTime();
	OPERATINGSYSTEMSIMULATOR_API UScriptStruct* Z_Construct_UScriptStruct_FOperatingSystemSaveLoad();
	OPERATINGSYSTEMSIMULATOR_API UScriptStruct* Z_Construct_UScriptStruct_FOperatingSystemStoreApps();
	OPERATINGSYSTEMSIMULATOR_API UScriptStruct* Z_Construct_UScriptStruct_FOperatingSystemStoreProgramData();
	OPERATINGSYSTEMSIMULATOR_API UScriptStruct* Z_Construct_UScriptStruct_FOperatingSystemStoreReviewUser();
	OPERATINGSYSTEMSIMULATOR_API UScriptStruct* Z_Construct_UScriptStruct_FOperatingSystemUniqueId();
	OPERATINGSYSTEMSIMULATOR_API UScriptStruct* Z_Construct_UScriptStruct_FOperatingSystemUser();
	OPERATINGSYSTEMSIMULATOR_API UScriptStruct* Z_Construct_UScriptStruct_FVersion();
	UPackage* Z_Construct_UPackage__Script_OperatingSystemSimulator();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOperatingSystemProgramViewState;
	static UEnum* EOperatingSystemProgramViewState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EOperatingSystemProgramViewState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EOperatingSystemProgramViewState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OperatingSystemSimulator_EOperatingSystemProgramViewState, (UObject*)Z_Construct_UPackage__Script_OperatingSystemSimulator(), TEXT("EOperatingSystemProgramViewState"));
		}
		return Z_Registration_Info_UEnum_EOperatingSystemProgramViewState.OuterSingleton;
	}
	template<> OPERATINGSYSTEMSIMULATOR_API UEnum* StaticEnum<EOperatingSystemProgramViewState>()
	{
		return EOperatingSystemProgramViewState_StaticEnum();
	}
	struct Z_Construct_UEnum_OperatingSystemSimulator_EOperatingSystemProgramViewState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_OperatingSystemSimulator_EOperatingSystemProgramViewState_Statics::Enumerators[] = {
		{ "EOperatingSystemProgramViewState::Focused", (int64)EOperatingSystemProgramViewState::Focused },
		{ "EOperatingSystemProgramViewState::NotFocused", (int64)EOperatingSystemProgramViewState::NotFocused },
		{ "EOperatingSystemProgramViewState::Minimized", (int64)EOperatingSystemProgramViewState::Minimized },
		{ "EOperatingSystemProgramViewState::MinimizedAndNotFocused", (int64)EOperatingSystemProgramViewState::MinimizedAndNotFocused },
		{ "EOperatingSystemProgramViewState::None", (int64)EOperatingSystemProgramViewState::None },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_OperatingSystemSimulator_EOperatingSystemProgramViewState_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Focused.Name", "EOperatingSystemProgramViewState::Focused" },
		{ "Minimized.Name", "EOperatingSystemProgramViewState::Minimized" },
		{ "MinimizedAndNotFocused.Name", "EOperatingSystemProgramViewState::MinimizedAndNotFocused" },
		{ "ModuleRelativePath", "Public/OperatingSystemTypes.h" },
		{ "None.Name", "EOperatingSystemProgramViewState::None" },
		{ "NotFocused.Name", "EOperatingSystemProgramViewState::NotFocused" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OperatingSystemSimulator_EOperatingSystemProgramViewState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_OperatingSystemSimulator,
		nullptr,
		"EOperatingSystemProgramViewState",
		"EOperatingSystemProgramViewState",
		Z_Construct_UEnum_OperatingSystemSimulator_EOperatingSystemProgramViewState_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_OperatingSystemSimulator_EOperatingSystemProgramViewState_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OperatingSystemSimulator_EOperatingSystemProgramViewState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OperatingSystemSimulator_EOperatingSystemProgramViewState_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_OperatingSystemSimulator_EOperatingSystemProgramViewState()
	{
		if (!Z_Registration_Info_UEnum_EOperatingSystemProgramViewState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOperatingSystemProgramViewState.InnerSingleton, Z_Construct_UEnum_OperatingSystemSimulator_EOperatingSystemProgramViewState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EOperatingSystemProgramViewState.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOperatingSystemPasswordStrength;
	static UEnum* EOperatingSystemPasswordStrength_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EOperatingSystemPasswordStrength.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EOperatingSystemPasswordStrength.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OperatingSystemSimulator_EOperatingSystemPasswordStrength, (UObject*)Z_Construct_UPackage__Script_OperatingSystemSimulator(), TEXT("EOperatingSystemPasswordStrength"));
		}
		return Z_Registration_Info_UEnum_EOperatingSystemPasswordStrength.OuterSingleton;
	}
	template<> OPERATINGSYSTEMSIMULATOR_API UEnum* StaticEnum<EOperatingSystemPasswordStrength>()
	{
		return EOperatingSystemPasswordStrength_StaticEnum();
	}
	struct Z_Construct_UEnum_OperatingSystemSimulator_EOperatingSystemPasswordStrength_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_OperatingSystemSimulator_EOperatingSystemPasswordStrength_Statics::Enumerators[] = {
		{ "EOperatingSystemPasswordStrength::Strong", (int64)EOperatingSystemPasswordStrength::Strong },
		{ "EOperatingSystemPasswordStrength::Moderate", (int64)EOperatingSystemPasswordStrength::Moderate },
		{ "EOperatingSystemPasswordStrength::Weak", (int64)EOperatingSystemPasswordStrength::Weak },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_OperatingSystemSimulator_EOperatingSystemPasswordStrength_Statics::Enum_MetaDataParams[] = {
		{ "Moderate.Name", "EOperatingSystemPasswordStrength::Moderate" },
		{ "ModuleRelativePath", "Public/OperatingSystemTypes.h" },
		{ "Strong.Name", "EOperatingSystemPasswordStrength::Strong" },
		{ "Weak.Name", "EOperatingSystemPasswordStrength::Weak" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OperatingSystemSimulator_EOperatingSystemPasswordStrength_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_OperatingSystemSimulator,
		nullptr,
		"EOperatingSystemPasswordStrength",
		"EOperatingSystemPasswordStrength",
		Z_Construct_UEnum_OperatingSystemSimulator_EOperatingSystemPasswordStrength_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_OperatingSystemSimulator_EOperatingSystemPasswordStrength_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OperatingSystemSimulator_EOperatingSystemPasswordStrength_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OperatingSystemSimulator_EOperatingSystemPasswordStrength_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_OperatingSystemSimulator_EOperatingSystemPasswordStrength()
	{
		if (!Z_Registration_Info_UEnum_EOperatingSystemPasswordStrength.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOperatingSystemPasswordStrength.InnerSingleton, Z_Construct_UEnum_OperatingSystemSimulator_EOperatingSystemPasswordStrength_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EOperatingSystemPasswordStrength.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOperatingSystemSizeMethod;
	static UEnum* EOperatingSystemSizeMethod_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EOperatingSystemSizeMethod.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EOperatingSystemSizeMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OperatingSystemSimulator_EOperatingSystemSizeMethod, (UObject*)Z_Construct_UPackage__Script_OperatingSystemSimulator(), TEXT("EOperatingSystemSizeMethod"));
		}
		return Z_Registration_Info_UEnum_EOperatingSystemSizeMethod.OuterSingleton;
	}
	template<> OPERATINGSYSTEMSIMULATOR_API UEnum* StaticEnum<EOperatingSystemSizeMethod>()
	{
		return EOperatingSystemSizeMethod_StaticEnum();
	}
	struct Z_Construct_UEnum_OperatingSystemSimulator_EOperatingSystemSizeMethod_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_OperatingSystemSimulator_EOperatingSystemSizeMethod_Statics::Enumerators[] = {
		{ "EOperatingSystemSizeMethod::Bytes", (int64)EOperatingSystemSizeMethod::Bytes },
		{ "EOperatingSystemSizeMethod::MB", (int64)EOperatingSystemSizeMethod::MB },
		{ "EOperatingSystemSizeMethod::GB", (int64)EOperatingSystemSizeMethod::GB },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_OperatingSystemSimulator_EOperatingSystemSizeMethod_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Bytes.Name", "EOperatingSystemSizeMethod::Bytes" },
		{ "GB.Name", "EOperatingSystemSizeMethod::GB" },
		{ "MB.Name", "EOperatingSystemSizeMethod::MB" },
		{ "ModuleRelativePath", "Public/OperatingSystemTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OperatingSystemSimulator_EOperatingSystemSizeMethod_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_OperatingSystemSimulator,
		nullptr,
		"EOperatingSystemSizeMethod",
		"EOperatingSystemSizeMethod",
		Z_Construct_UEnum_OperatingSystemSimulator_EOperatingSystemSizeMethod_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_OperatingSystemSimulator_EOperatingSystemSizeMethod_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OperatingSystemSimulator_EOperatingSystemSizeMethod_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OperatingSystemSimulator_EOperatingSystemSizeMethod_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_OperatingSystemSimulator_EOperatingSystemSizeMethod()
	{
		if (!Z_Registration_Info_UEnum_EOperatingSystemSizeMethod.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOperatingSystemSizeMethod.InnerSingleton, Z_Construct_UEnum_OperatingSystemSimulator_EOperatingSystemSizeMethod_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EOperatingSystemSizeMethod.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOperatingSystemNotificationType;
	static UEnum* EOperatingSystemNotificationType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EOperatingSystemNotificationType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EOperatingSystemNotificationType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OperatingSystemSimulator_EOperatingSystemNotificationType, (UObject*)Z_Construct_UPackage__Script_OperatingSystemSimulator(), TEXT("EOperatingSystemNotificationType"));
		}
		return Z_Registration_Info_UEnum_EOperatingSystemNotificationType.OuterSingleton;
	}
	template<> OPERATINGSYSTEMSIMULATOR_API UEnum* StaticEnum<EOperatingSystemNotificationType>()
	{
		return EOperatingSystemNotificationType_StaticEnum();
	}
	struct Z_Construct_UEnum_OperatingSystemSimulator_EOperatingSystemNotificationType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_OperatingSystemSimulator_EOperatingSystemNotificationType_Statics::Enumerators[] = {
		{ "EOperatingSystemNotificationType::None", (int64)EOperatingSystemNotificationType::None },
		{ "EOperatingSystemNotificationType::Info", (int64)EOperatingSystemNotificationType::Info },
		{ "EOperatingSystemNotificationType::Warning", (int64)EOperatingSystemNotificationType::Warning },
		{ "EOperatingSystemNotificationType::Error", (int64)EOperatingSystemNotificationType::Error },
		{ "EOperatingSystemNotificationType::Verbose", (int64)EOperatingSystemNotificationType::Verbose },
		{ "EOperatingSystemNotificationType::VeryVerbose", (int64)EOperatingSystemNotificationType::VeryVerbose },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_OperatingSystemSimulator_EOperatingSystemNotificationType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Error.Name", "EOperatingSystemNotificationType::Error" },
		{ "Info.Name", "EOperatingSystemNotificationType::Info" },
		{ "ModuleRelativePath", "Public/OperatingSystemTypes.h" },
		{ "None.Name", "EOperatingSystemNotificationType::None" },
		{ "Verbose.Name", "EOperatingSystemNotificationType::Verbose" },
		{ "VeryVerbose.Name", "EOperatingSystemNotificationType::VeryVerbose" },
		{ "Warning.Name", "EOperatingSystemNotificationType::Warning" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OperatingSystemSimulator_EOperatingSystemNotificationType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_OperatingSystemSimulator,
		nullptr,
		"EOperatingSystemNotificationType",
		"EOperatingSystemNotificationType",
		Z_Construct_UEnum_OperatingSystemSimulator_EOperatingSystemNotificationType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_OperatingSystemSimulator_EOperatingSystemNotificationType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OperatingSystemSimulator_EOperatingSystemNotificationType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OperatingSystemSimulator_EOperatingSystemNotificationType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_OperatingSystemSimulator_EOperatingSystemNotificationType()
	{
		if (!Z_Registration_Info_UEnum_EOperatingSystemNotificationType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOperatingSystemNotificationType.InnerSingleton, Z_Construct_UEnum_OperatingSystemSimulator_EOperatingSystemNotificationType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EOperatingSystemNotificationType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOperatingSystemTerminalMessageType;
	static UEnum* EOperatingSystemTerminalMessageType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EOperatingSystemTerminalMessageType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EOperatingSystemTerminalMessageType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OperatingSystemSimulator_EOperatingSystemTerminalMessageType, (UObject*)Z_Construct_UPackage__Script_OperatingSystemSimulator(), TEXT("EOperatingSystemTerminalMessageType"));
		}
		return Z_Registration_Info_UEnum_EOperatingSystemTerminalMessageType.OuterSingleton;
	}
	template<> OPERATINGSYSTEMSIMULATOR_API UEnum* StaticEnum<EOperatingSystemTerminalMessageType>()
	{
		return EOperatingSystemTerminalMessageType_StaticEnum();
	}
	struct Z_Construct_UEnum_OperatingSystemSimulator_EOperatingSystemTerminalMessageType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_OperatingSystemSimulator_EOperatingSystemTerminalMessageType_Statics::Enumerators[] = {
		{ "EOperatingSystemTerminalMessageType::Normal", (int64)EOperatingSystemTerminalMessageType::Normal },
		{ "EOperatingSystemTerminalMessageType::Warning", (int64)EOperatingSystemTerminalMessageType::Warning },
		{ "EOperatingSystemTerminalMessageType::Error", (int64)EOperatingSystemTerminalMessageType::Error },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_OperatingSystemSimulator_EOperatingSystemTerminalMessageType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Error.Name", "EOperatingSystemTerminalMessageType::Error" },
		{ "ModuleRelativePath", "Public/OperatingSystemTypes.h" },
		{ "Normal.Name", "EOperatingSystemTerminalMessageType::Normal" },
		{ "Warning.Name", "EOperatingSystemTerminalMessageType::Warning" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OperatingSystemSimulator_EOperatingSystemTerminalMessageType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_OperatingSystemSimulator,
		nullptr,
		"EOperatingSystemTerminalMessageType",
		"EOperatingSystemTerminalMessageType",
		Z_Construct_UEnum_OperatingSystemSimulator_EOperatingSystemTerminalMessageType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_OperatingSystemSimulator_EOperatingSystemTerminalMessageType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OperatingSystemSimulator_EOperatingSystemTerminalMessageType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OperatingSystemSimulator_EOperatingSystemTerminalMessageType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_OperatingSystemSimulator_EOperatingSystemTerminalMessageType()
	{
		if (!Z_Registration_Info_UEnum_EOperatingSystemTerminalMessageType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOperatingSystemTerminalMessageType.InnerSingleton, Z_Construct_UEnum_OperatingSystemSimulator_EOperatingSystemTerminalMessageType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EOperatingSystemTerminalMessageType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOperatingSystemNotificationCategory;
	static UEnum* EOperatingSystemNotificationCategory_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EOperatingSystemNotificationCategory.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EOperatingSystemNotificationCategory.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OperatingSystemSimulator_EOperatingSystemNotificationCategory, (UObject*)Z_Construct_UPackage__Script_OperatingSystemSimulator(), TEXT("EOperatingSystemNotificationCategory"));
		}
		return Z_Registration_Info_UEnum_EOperatingSystemNotificationCategory.OuterSingleton;
	}
	template<> OPERATINGSYSTEMSIMULATOR_API UEnum* StaticEnum<EOperatingSystemNotificationCategory>()
	{
		return EOperatingSystemNotificationCategory_StaticEnum();
	}
	struct Z_Construct_UEnum_OperatingSystemSimulator_EOperatingSystemNotificationCategory_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_OperatingSystemSimulator_EOperatingSystemNotificationCategory_Statics::Enumerators[] = {
		{ "EOperatingSystemNotificationCategory::None", (int64)EOperatingSystemNotificationCategory::None },
		{ "EOperatingSystemNotificationCategory::Device", (int64)EOperatingSystemNotificationCategory::Device },
		{ "EOperatingSystemNotificationCategory::OperatingSystem", (int64)EOperatingSystemNotificationCategory::OperatingSystem },
		{ "EOperatingSystemNotificationCategory::Application", (int64)EOperatingSystemNotificationCategory::Application },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_OperatingSystemSimulator_EOperatingSystemNotificationCategory_Statics::Enum_MetaDataParams[] = {
		{ "Application.Name", "EOperatingSystemNotificationCategory::Application" },
		{ "BlueprintType", "true" },
		{ "Device.Name", "EOperatingSystemNotificationCategory::Device" },
		{ "ModuleRelativePath", "Public/OperatingSystemTypes.h" },
		{ "None.Name", "EOperatingSystemNotificationCategory::None" },
		{ "OperatingSystem.Name", "EOperatingSystemNotificationCategory::OperatingSystem" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OperatingSystemSimulator_EOperatingSystemNotificationCategory_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_OperatingSystemSimulator,
		nullptr,
		"EOperatingSystemNotificationCategory",
		"EOperatingSystemNotificationCategory",
		Z_Construct_UEnum_OperatingSystemSimulator_EOperatingSystemNotificationCategory_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_OperatingSystemSimulator_EOperatingSystemNotificationCategory_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OperatingSystemSimulator_EOperatingSystemNotificationCategory_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OperatingSystemSimulator_EOperatingSystemNotificationCategory_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_OperatingSystemSimulator_EOperatingSystemNotificationCategory()
	{
		if (!Z_Registration_Info_UEnum_EOperatingSystemNotificationCategory.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOperatingSystemNotificationCategory.InnerSingleton, Z_Construct_UEnum_OperatingSystemSimulator_EOperatingSystemNotificationCategory_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EOperatingSystemNotificationCategory.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOperatingSystemDeviceState;
	static UEnum* EOperatingSystemDeviceState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EOperatingSystemDeviceState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EOperatingSystemDeviceState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OperatingSystemSimulator_EOperatingSystemDeviceState, (UObject*)Z_Construct_UPackage__Script_OperatingSystemSimulator(), TEXT("EOperatingSystemDeviceState"));
		}
		return Z_Registration_Info_UEnum_EOperatingSystemDeviceState.OuterSingleton;
	}
	template<> OPERATINGSYSTEMSIMULATOR_API UEnum* StaticEnum<EOperatingSystemDeviceState>()
	{
		return EOperatingSystemDeviceState_StaticEnum();
	}
	struct Z_Construct_UEnum_OperatingSystemSimulator_EOperatingSystemDeviceState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_OperatingSystemSimulator_EOperatingSystemDeviceState_Statics::Enumerators[] = {
		{ "EOperatingSystemDeviceState::None", (int64)EOperatingSystemDeviceState::None },
		{ "EOperatingSystemDeviceState::Starting", (int64)EOperatingSystemDeviceState::Starting },
		{ "EOperatingSystemDeviceState::BIOS", (int64)EOperatingSystemDeviceState::BIOS },
		{ "EOperatingSystemDeviceState::Running", (int64)EOperatingSystemDeviceState::Running },
		{ "EOperatingSystemDeviceState::Restarting", (int64)EOperatingSystemDeviceState::Restarting },
		{ "EOperatingSystemDeviceState::ShuttingDown", (int64)EOperatingSystemDeviceState::ShuttingDown },
		{ "EOperatingSystemDeviceState::BSOD", (int64)EOperatingSystemDeviceState::BSOD },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_OperatingSystemSimulator_EOperatingSystemDeviceState_Statics::Enum_MetaDataParams[] = {
		{ "BIOS.Comment", "/** Powering up BIOS. Checks for hardware's, compatibility etc. */" },
		{ "BIOS.Name", "EOperatingSystemDeviceState::BIOS" },
		{ "BIOS.ToolTip", "Powering up BIOS. Checks for hardware's, compatibility etc." },
		{ "BlueprintType", "true" },
		{ "BSOD.Comment", "/** Device is in Blue Screen state. No interaction should be allowed at this stage. */" },
		{ "BSOD.Name", "EOperatingSystemDeviceState::BSOD" },
		{ "BSOD.ToolTip", "Device is in Blue Screen state. No interaction should be allowed at this stage." },
		{ "ModuleRelativePath", "Public/OperatingSystemTypes.h" },
		{ "None.Comment", "/** No state */" },
		{ "None.Name", "EOperatingSystemDeviceState::None" },
		{ "None.ToolTip", "No state" },
		{ "Restarting.Comment", "/** Device is restarting. */" },
		{ "Restarting.Name", "EOperatingSystemDeviceState::Restarting" },
		{ "Restarting.ToolTip", "Device is restarting." },
		{ "Running.Comment", "/** Device running state. Can be Operating System installation, loading, desktop, programs etc. */" },
		{ "Running.Name", "EOperatingSystemDeviceState::Running" },
		{ "Running.ToolTip", "Device running state. Can be Operating System installation, loading, desktop, programs etc." },
		{ "ShuttingDown.Comment", "/** Device is shutting down. */" },
		{ "ShuttingDown.Name", "EOperatingSystemDeviceState::ShuttingDown" },
		{ "ShuttingDown.ToolTip", "Device is shutting down." },
		{ "Starting.Comment", "/** Very first stage. Think of this as powering on. */" },
		{ "Starting.Name", "EOperatingSystemDeviceState::Starting" },
		{ "Starting.ToolTip", "Very first stage. Think of this as powering on." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OperatingSystemSimulator_EOperatingSystemDeviceState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_OperatingSystemSimulator,
		nullptr,
		"EOperatingSystemDeviceState",
		"EOperatingSystemDeviceState",
		Z_Construct_UEnum_OperatingSystemSimulator_EOperatingSystemDeviceState_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_OperatingSystemSimulator_EOperatingSystemDeviceState_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OperatingSystemSimulator_EOperatingSystemDeviceState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OperatingSystemSimulator_EOperatingSystemDeviceState_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_OperatingSystemSimulator_EOperatingSystemDeviceState()
	{
		if (!Z_Registration_Info_UEnum_EOperatingSystemDeviceState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOperatingSystemDeviceState.InnerSingleton, Z_Construct_UEnum_OperatingSystemSimulator_EOperatingSystemDeviceState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EOperatingSystemDeviceState.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOperatingSystemCommonSizes;
	static UEnum* EOperatingSystemCommonSizes_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EOperatingSystemCommonSizes.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EOperatingSystemCommonSizes.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OperatingSystemSimulator_EOperatingSystemCommonSizes, (UObject*)Z_Construct_UPackage__Script_OperatingSystemSimulator(), TEXT("EOperatingSystemCommonSizes"));
		}
		return Z_Registration_Info_UEnum_EOperatingSystemCommonSizes.OuterSingleton;
	}
	template<> OPERATINGSYSTEMSIMULATOR_API UEnum* StaticEnum<EOperatingSystemCommonSizes>()
	{
		return EOperatingSystemCommonSizes_StaticEnum();
	}
	struct Z_Construct_UEnum_OperatingSystemSimulator_EOperatingSystemCommonSizes_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_OperatingSystemSimulator_EOperatingSystemCommonSizes_Statics::Enumerators[] = {
		{ "EOperatingSystemCommonSizes::None", (int64)EOperatingSystemCommonSizes::None },
		{ "EOperatingSystemCommonSizes::Size64", (int64)EOperatingSystemCommonSizes::Size64 },
		{ "EOperatingSystemCommonSizes::Size128", (int64)EOperatingSystemCommonSizes::Size128 },
		{ "EOperatingSystemCommonSizes::Size256", (int64)EOperatingSystemCommonSizes::Size256 },
		{ "EOperatingSystemCommonSizes::Size512", (int64)EOperatingSystemCommonSizes::Size512 },
		{ "EOperatingSystemCommonSizes::Size1024", (int64)EOperatingSystemCommonSizes::Size1024 },
		{ "EOperatingSystemCommonSizes::Size2048", (int64)EOperatingSystemCommonSizes::Size2048 },
		{ "EOperatingSystemCommonSizes::Size4096", (int64)EOperatingSystemCommonSizes::Size4096 },
		{ "EOperatingSystemCommonSizes::Size8192", (int64)EOperatingSystemCommonSizes::Size8192 },
		{ "EOperatingSystemCommonSizes::Size16384", (int64)EOperatingSystemCommonSizes::Size16384 },
		{ "EOperatingSystemCommonSizes::Size32768", (int64)EOperatingSystemCommonSizes::Size32768 },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_OperatingSystemSimulator_EOperatingSystemCommonSizes_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OperatingSystemTypes.h" },
		{ "None.Name", "EOperatingSystemCommonSizes::None" },
		{ "Size1024.Name", "EOperatingSystemCommonSizes::Size1024" },
		{ "Size128.Name", "EOperatingSystemCommonSizes::Size128" },
		{ "Size16384.Name", "EOperatingSystemCommonSizes::Size16384" },
		{ "Size2048.Name", "EOperatingSystemCommonSizes::Size2048" },
		{ "Size256.Name", "EOperatingSystemCommonSizes::Size256" },
		{ "Size32768.Name", "EOperatingSystemCommonSizes::Size32768" },
		{ "Size4096.Name", "EOperatingSystemCommonSizes::Size4096" },
		{ "Size512.Name", "EOperatingSystemCommonSizes::Size512" },
		{ "Size64.Name", "EOperatingSystemCommonSizes::Size64" },
		{ "Size8192.Name", "EOperatingSystemCommonSizes::Size8192" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OperatingSystemSimulator_EOperatingSystemCommonSizes_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_OperatingSystemSimulator,
		nullptr,
		"EOperatingSystemCommonSizes",
		"EOperatingSystemCommonSizes",
		Z_Construct_UEnum_OperatingSystemSimulator_EOperatingSystemCommonSizes_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_OperatingSystemSimulator_EOperatingSystemCommonSizes_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OperatingSystemSimulator_EOperatingSystemCommonSizes_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OperatingSystemSimulator_EOperatingSystemCommonSizes_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_OperatingSystemSimulator_EOperatingSystemCommonSizes()
	{
		if (!Z_Registration_Info_UEnum_EOperatingSystemCommonSizes.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOperatingSystemCommonSizes.InnerSingleton, Z_Construct_UEnum_OperatingSystemSimulator_EOperatingSystemCommonSizes_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EOperatingSystemCommonSizes.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOperatingSystemDateSeparator;
	static UEnum* EOperatingSystemDateSeparator_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EOperatingSystemDateSeparator.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EOperatingSystemDateSeparator.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OperatingSystemSimulator_EOperatingSystemDateSeparator, (UObject*)Z_Construct_UPackage__Script_OperatingSystemSimulator(), TEXT("EOperatingSystemDateSeparator"));
		}
		return Z_Registration_Info_UEnum_EOperatingSystemDateSeparator.OuterSingleton;
	}
	template<> OPERATINGSYSTEMSIMULATOR_API UEnum* StaticEnum<EOperatingSystemDateSeparator>()
	{
		return EOperatingSystemDateSeparator_StaticEnum();
	}
	struct Z_Construct_UEnum_OperatingSystemSimulator_EOperatingSystemDateSeparator_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_OperatingSystemSimulator_EOperatingSystemDateSeparator_Statics::Enumerators[] = {
		{ "EOperatingSystemDateSeparator::Slash", (int64)EOperatingSystemDateSeparator::Slash },
		{ "EOperatingSystemDateSeparator::Dash", (int64)EOperatingSystemDateSeparator::Dash },
		{ "EOperatingSystemDateSeparator::Period", (int64)EOperatingSystemDateSeparator::Period },
		{ "EOperatingSystemDateSeparator::Comma", (int64)EOperatingSystemDateSeparator::Comma },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_OperatingSystemSimulator_EOperatingSystemDateSeparator_Statics::Enum_MetaDataParams[] = {
		{ "Comma.DisplayName", "," },
		{ "Comma.Name", "EOperatingSystemDateSeparator::Comma" },
		{ "Dash.DisplayName", "-" },
		{ "Dash.Name", "EOperatingSystemDateSeparator::Dash" },
		{ "ModuleRelativePath", "Public/OperatingSystemTypes.h" },
		{ "Period.DisplayName", "." },
		{ "Period.Name", "EOperatingSystemDateSeparator::Period" },
		{ "Slash.DisplayName", "/" },
		{ "Slash.Name", "EOperatingSystemDateSeparator::Slash" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OperatingSystemSimulator_EOperatingSystemDateSeparator_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_OperatingSystemSimulator,
		nullptr,
		"EOperatingSystemDateSeparator",
		"EOperatingSystemDateSeparator",
		Z_Construct_UEnum_OperatingSystemSimulator_EOperatingSystemDateSeparator_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_OperatingSystemSimulator_EOperatingSystemDateSeparator_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OperatingSystemSimulator_EOperatingSystemDateSeparator_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OperatingSystemSimulator_EOperatingSystemDateSeparator_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_OperatingSystemSimulator_EOperatingSystemDateSeparator()
	{
		if (!Z_Registration_Info_UEnum_EOperatingSystemDateSeparator.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOperatingSystemDateSeparator.InnerSingleton, Z_Construct_UEnum_OperatingSystemSimulator_EOperatingSystemDateSeparator_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EOperatingSystemDateSeparator.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOperatingSystemTimeSeparator;
	static UEnum* EOperatingSystemTimeSeparator_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EOperatingSystemTimeSeparator.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EOperatingSystemTimeSeparator.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OperatingSystemSimulator_EOperatingSystemTimeSeparator, (UObject*)Z_Construct_UPackage__Script_OperatingSystemSimulator(), TEXT("EOperatingSystemTimeSeparator"));
		}
		return Z_Registration_Info_UEnum_EOperatingSystemTimeSeparator.OuterSingleton;
	}
	template<> OPERATINGSYSTEMSIMULATOR_API UEnum* StaticEnum<EOperatingSystemTimeSeparator>()
	{
		return EOperatingSystemTimeSeparator_StaticEnum();
	}
	struct Z_Construct_UEnum_OperatingSystemSimulator_EOperatingSystemTimeSeparator_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_OperatingSystemSimulator_EOperatingSystemTimeSeparator_Statics::Enumerators[] = {
		{ "EOperatingSystemTimeSeparator::Colon", (int64)EOperatingSystemTimeSeparator::Colon },
		{ "EOperatingSystemTimeSeparator::Period", (int64)EOperatingSystemTimeSeparator::Period },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_OperatingSystemSimulator_EOperatingSystemTimeSeparator_Statics::Enum_MetaDataParams[] = {
		{ "Colon.DisplayName", ":" },
		{ "Colon.Name", "EOperatingSystemTimeSeparator::Colon" },
		{ "ModuleRelativePath", "Public/OperatingSystemTypes.h" },
		{ "Period.DisplayName", "." },
		{ "Period.Name", "EOperatingSystemTimeSeparator::Period" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OperatingSystemSimulator_EOperatingSystemTimeSeparator_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_OperatingSystemSimulator,
		nullptr,
		"EOperatingSystemTimeSeparator",
		"EOperatingSystemTimeSeparator",
		Z_Construct_UEnum_OperatingSystemSimulator_EOperatingSystemTimeSeparator_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_OperatingSystemSimulator_EOperatingSystemTimeSeparator_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OperatingSystemSimulator_EOperatingSystemTimeSeparator_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OperatingSystemSimulator_EOperatingSystemTimeSeparator_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_OperatingSystemSimulator_EOperatingSystemTimeSeparator()
	{
		if (!Z_Registration_Info_UEnum_EOperatingSystemTimeSeparator.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOperatingSystemTimeSeparator.InnerSingleton, Z_Construct_UEnum_OperatingSystemSimulator_EOperatingSystemTimeSeparator_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EOperatingSystemTimeSeparator.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GenericError;
class UScriptStruct* FGenericError::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GenericError.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GenericError.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGenericError, (UObject*)Z_Construct_UPackage__Script_OperatingSystemSimulator(), TEXT("GenericError"));
	}
	return Z_Registration_Info_UScriptStruct_GenericError.OuterSingleton;
}
template<> OPERATINGSYSTEMSIMULATOR_API UScriptStruct* StaticStruct<FGenericError>()
{
	return FGenericError::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGenericError_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ErrorCode_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_ErrorCode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ErrorExceptionDescription_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_ErrorExceptionDescription;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsValid_MetaData[];
#endif
		static void NewProp_bIsValid_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsValid;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGenericError_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/OperatingSystemTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGenericError_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGenericError>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGenericError_Statics::NewProp_ErrorCode_MetaData[] = {
		{ "Category", "GenericError" },
		{ "Comment", "/** Typically an error code like ERR_SOMETHING_HAPPENED or 0x77000111 etc. */" },
		{ "ModuleRelativePath", "Public/OperatingSystemTypes.h" },
		{ "ToolTip", "Typically an error code like ERR_SOMETHING_HAPPENED or 0x77000111 etc." },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FGenericError_Statics::NewProp_ErrorCode = { "ErrorCode", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGenericError, ErrorCode), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenericError_Statics::NewProp_ErrorCode_MetaData), Z_Construct_UScriptStruct_FGenericError_Statics::NewProp_ErrorCode_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGenericError_Statics::NewProp_ErrorExceptionDescription_MetaData[] = {
		{ "Category", "GenericError" },
		{ "Comment", "/** Optional exception description. */" },
		{ "ModuleRelativePath", "Public/OperatingSystemTypes.h" },
		{ "ToolTip", "Optional exception description." },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FGenericError_Statics::NewProp_ErrorExceptionDescription = { "ErrorExceptionDescription", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGenericError, ErrorExceptionDescription), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenericError_Statics::NewProp_ErrorExceptionDescription_MetaData), Z_Construct_UScriptStruct_FGenericError_Statics::NewProp_ErrorExceptionDescription_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGenericError_Statics::NewProp_bIsValid_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GenericError" },
		{ "ModuleRelativePath", "Public/OperatingSystemTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGenericError_Statics::NewProp_bIsValid_SetBit(void* Obj)
	{
		((FGenericError*)Obj)->bIsValid = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGenericError_Statics::NewProp_bIsValid = { "bIsValid", nullptr, (EPropertyFlags)0x0040000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGenericError), &Z_Construct_UScriptStruct_FGenericError_Statics::NewProp_bIsValid_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenericError_Statics::NewProp_bIsValid_MetaData), Z_Construct_UScriptStruct_FGenericError_Statics::NewProp_bIsValid_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGenericError_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenericError_Statics::NewProp_ErrorCode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenericError_Statics::NewProp_ErrorExceptionDescription,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenericError_Statics::NewProp_bIsValid,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGenericError_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OperatingSystemSimulator,
		nullptr,
		&NewStructOps,
		"GenericError",
		Z_Construct_UScriptStruct_FGenericError_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenericError_Statics::PropPointers),
		sizeof(FGenericError),
		alignof(FGenericError),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenericError_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGenericError_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenericError_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FGenericError()
	{
		if (!Z_Registration_Info_UScriptStruct_GenericError.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GenericError.InnerSingleton, Z_Construct_UScriptStruct_FGenericError_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GenericError.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OperatingSystemUser;
class UScriptStruct* FOperatingSystemUser::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OperatingSystemUser.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OperatingSystemUser.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOperatingSystemUser, (UObject*)Z_Construct_UPackage__Script_OperatingSystemSimulator(), TEXT("OperatingSystemUser"));
	}
	return Z_Registration_Info_UScriptStruct_OperatingSystemUser.OuterSingleton;
}
template<> OPERATINGSYSTEMSIMULATOR_API UScriptStruct* StaticStruct<FOperatingSystemUser>()
{
	return FOperatingSystemUser::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FOperatingSystemUser_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Username_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Username;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Password_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Password;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Email_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Email;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FirstName_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_FirstName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastName_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_LastName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Icon_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Icon;
		static const UECodeGen_Private::FNamePropertyParams NewProp_OwnedProgramIdentifiers_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwnedProgramIdentifiers_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_OwnedProgramIdentifiers;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOperatingSystemUser_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/OperatingSystemTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOperatingSystemUser_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOperatingSystemUser>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOperatingSystemUser_Statics::NewProp_Username_MetaData[] = {
		{ "Category", "User" },
		{ "ModuleRelativePath", "Public/OperatingSystemTypes.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FOperatingSystemUser_Statics::NewProp_Username = { "Username", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOperatingSystemUser, Username), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOperatingSystemUser_Statics::NewProp_Username_MetaData), Z_Construct_UScriptStruct_FOperatingSystemUser_Statics::NewProp_Username_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOperatingSystemUser_Statics::NewProp_Password_MetaData[] = {
		{ "Category", "User" },
		{ "ModuleRelativePath", "Public/OperatingSystemTypes.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FOperatingSystemUser_Statics::NewProp_Password = { "Password", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOperatingSystemUser, Password), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOperatingSystemUser_Statics::NewProp_Password_MetaData), Z_Construct_UScriptStruct_FOperatingSystemUser_Statics::NewProp_Password_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOperatingSystemUser_Statics::NewProp_Email_MetaData[] = {
		{ "Category", "User" },
		{ "ModuleRelativePath", "Public/OperatingSystemTypes.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FOperatingSystemUser_Statics::NewProp_Email = { "Email", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOperatingSystemUser, Email), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOperatingSystemUser_Statics::NewProp_Email_MetaData), Z_Construct_UScriptStruct_FOperatingSystemUser_Statics::NewProp_Email_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOperatingSystemUser_Statics::NewProp_FirstName_MetaData[] = {
		{ "Category", "User" },
		{ "ModuleRelativePath", "Public/OperatingSystemTypes.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FOperatingSystemUser_Statics::NewProp_FirstName = { "FirstName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOperatingSystemUser, FirstName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOperatingSystemUser_Statics::NewProp_FirstName_MetaData), Z_Construct_UScriptStruct_FOperatingSystemUser_Statics::NewProp_FirstName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOperatingSystemUser_Statics::NewProp_LastName_MetaData[] = {
		{ "Category", "User" },
		{ "ModuleRelativePath", "Public/OperatingSystemTypes.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FOperatingSystemUser_Statics::NewProp_LastName = { "LastName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOperatingSystemUser, LastName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOperatingSystemUser_Statics::NewProp_LastName_MetaData), Z_Construct_UScriptStruct_FOperatingSystemUser_Statics::NewProp_LastName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOperatingSystemUser_Statics::NewProp_Icon_MetaData[] = {
		{ "AllowedClasses", "Texture, MaterialInterface" },
		{ "Category", "User" },
		{ "DisplayThumbnail", "TRUE" },
		{ "ModuleRelativePath", "Public/OperatingSystemTypes.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FOperatingSystemUser_Statics::NewProp_Icon = { "Icon", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOperatingSystemUser, Icon), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOperatingSystemUser_Statics::NewProp_Icon_MetaData), Z_Construct_UScriptStruct_FOperatingSystemUser_Statics::NewProp_Icon_MetaData) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FOperatingSystemUser_Statics::NewProp_OwnedProgramIdentifiers_ElementProp = { "OwnedProgramIdentifiers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOperatingSystemUser_Statics::NewProp_OwnedProgramIdentifiers_MetaData[] = {
		{ "Category", "User" },
		{ "ModuleRelativePath", "Public/OperatingSystemTypes.h" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FOperatingSystemUser_Statics::NewProp_OwnedProgramIdentifiers = { "OwnedProgramIdentifiers", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOperatingSystemUser, OwnedProgramIdentifiers), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOperatingSystemUser_Statics::NewProp_OwnedProgramIdentifiers_MetaData), Z_Construct_UScriptStruct_FOperatingSystemUser_Statics::NewProp_OwnedProgramIdentifiers_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOperatingSystemUser_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOperatingSystemUser_Statics::NewProp_Username,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOperatingSystemUser_Statics::NewProp_Password,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOperatingSystemUser_Statics::NewProp_Email,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOperatingSystemUser_Statics::NewProp_FirstName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOperatingSystemUser_Statics::NewProp_LastName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOperatingSystemUser_Statics::NewProp_Icon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOperatingSystemUser_Statics::NewProp_OwnedProgramIdentifiers_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOperatingSystemUser_Statics::NewProp_OwnedProgramIdentifiers,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOperatingSystemUser_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OperatingSystemSimulator,
		nullptr,
		&NewStructOps,
		"OperatingSystemUser",
		Z_Construct_UScriptStruct_FOperatingSystemUser_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOperatingSystemUser_Statics::PropPointers),
		sizeof(FOperatingSystemUser),
		alignof(FOperatingSystemUser),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOperatingSystemUser_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOperatingSystemUser_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOperatingSystemUser_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FOperatingSystemUser()
	{
		if (!Z_Registration_Info_UScriptStruct_OperatingSystemUser.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OperatingSystemUser.InnerSingleton, Z_Construct_UScriptStruct_FOperatingSystemUser_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_OperatingSystemUser.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OperatingSystemRangeTime;
class UScriptStruct* FOperatingSystemRangeTime::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OperatingSystemRangeTime.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OperatingSystemRangeTime.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOperatingSystemRangeTime, (UObject*)Z_Construct_UPackage__Script_OperatingSystemSimulator(), TEXT("OperatingSystemRangeTime"));
	}
	return Z_Registration_Info_UScriptStruct_OperatingSystemRangeTime.OuterSingleton;
}
template<> OPERATINGSYSTEMSIMULATOR_API UScriptStruct* StaticStruct<FOperatingSystemRangeTime>()
{
	return FOperatingSystemRangeTime::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FOperatingSystemRangeTime_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOperatingSystemRangeTime_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/OperatingSystemTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOperatingSystemRangeTime_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOperatingSystemRangeTime>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOperatingSystemRangeTime_Statics::NewProp_MinTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "InstallationTime" },
		{ "Comment", "/** Min time (in seconds) to calculate time. Must be >= 0 and <= MaxTime */" },
		{ "ForceUnits", "Seconds" },
		{ "ModuleRelativePath", "Public/OperatingSystemTypes.h" },
		{ "ToolTip", "Min time (in seconds) to calculate time. Must be >= 0 and <= MaxTime" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FOperatingSystemRangeTime_Statics::NewProp_MinTime = { "MinTime", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOperatingSystemRangeTime, MinTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOperatingSystemRangeTime_Statics::NewProp_MinTime_MetaData), Z_Construct_UScriptStruct_FOperatingSystemRangeTime_Statics::NewProp_MinTime_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOperatingSystemRangeTime_Statics::NewProp_MaxTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "InstallationTime" },
		{ "Comment", "/** Max time (in seconds) to calculate time. Must be > 0 and >= MinTime */" },
		{ "ForceUnits", "Seconds" },
		{ "ModuleRelativePath", "Public/OperatingSystemTypes.h" },
		{ "ToolTip", "Max time (in seconds) to calculate time. Must be > 0 and >= MinTime" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FOperatingSystemRangeTime_Statics::NewProp_MaxTime = { "MaxTime", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOperatingSystemRangeTime, MaxTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOperatingSystemRangeTime_Statics::NewProp_MaxTime_MetaData), Z_Construct_UScriptStruct_FOperatingSystemRangeTime_Statics::NewProp_MaxTime_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOperatingSystemRangeTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOperatingSystemRangeTime_Statics::NewProp_MinTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOperatingSystemRangeTime_Statics::NewProp_MaxTime,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOperatingSystemRangeTime_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OperatingSystemSimulator,
		nullptr,
		&NewStructOps,
		"OperatingSystemRangeTime",
		Z_Construct_UScriptStruct_FOperatingSystemRangeTime_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOperatingSystemRangeTime_Statics::PropPointers),
		sizeof(FOperatingSystemRangeTime),
		alignof(FOperatingSystemRangeTime),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOperatingSystemRangeTime_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOperatingSystemRangeTime_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOperatingSystemRangeTime_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FOperatingSystemRangeTime()
	{
		if (!Z_Registration_Info_UScriptStruct_OperatingSystemRangeTime.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OperatingSystemRangeTime.InnerSingleton, Z_Construct_UScriptStruct_FOperatingSystemRangeTime_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_OperatingSystemRangeTime.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Version;
class UScriptStruct* FVersion::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Version.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Version.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVersion, (UObject*)Z_Construct_UPackage__Script_OperatingSystemSimulator(), TEXT("Version"));
	}
	return Z_Registration_Info_UScriptStruct_Version.OuterSingleton;
}
template<> OPERATINGSYSTEMSIMULATOR_API UScriptStruct* StaticStruct<FVersion>()
{
	return FVersion::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVersion_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Major_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Major;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Minor_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Minor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Patch_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Patch;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVersion_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/OperatingSystemTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVersion_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVersion>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVersion_Statics::NewProp_Major_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Version" },
		{ "ModuleRelativePath", "Public/OperatingSystemTypes.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVersion_Statics::NewProp_Major = { "Major", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVersion, Major), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVersion_Statics::NewProp_Major_MetaData), Z_Construct_UScriptStruct_FVersion_Statics::NewProp_Major_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVersion_Statics::NewProp_Minor_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Version" },
		{ "ModuleRelativePath", "Public/OperatingSystemTypes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVersion_Statics::NewProp_Minor = { "Minor", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVersion, Minor), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVersion_Statics::NewProp_Minor_MetaData), Z_Construct_UScriptStruct_FVersion_Statics::NewProp_Minor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVersion_Statics::NewProp_Patch_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Version" },
		{ "ModuleRelativePath", "Public/OperatingSystemTypes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVersion_Statics::NewProp_Patch = { "Patch", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVersion, Patch), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVersion_Statics::NewProp_Patch_MetaData), Z_Construct_UScriptStruct_FVersion_Statics::NewProp_Patch_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVersion_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVersion_Statics::NewProp_Major,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVersion_Statics::NewProp_Minor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVersion_Statics::NewProp_Patch,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVersion_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OperatingSystemSimulator,
		nullptr,
		&NewStructOps,
		"Version",
		Z_Construct_UScriptStruct_FVersion_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVersion_Statics::PropPointers),
		sizeof(FVersion),
		alignof(FVersion),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVersion_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVersion_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVersion_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FVersion()
	{
		if (!Z_Registration_Info_UScriptStruct_Version.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Version.InnerSingleton, Z_Construct_UScriptStruct_FVersion_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_Version.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OperatingSystemNotification;
class UScriptStruct* FOperatingSystemNotification::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OperatingSystemNotification.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OperatingSystemNotification.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOperatingSystemNotification, (UObject*)Z_Construct_UPackage__Script_OperatingSystemSimulator(), TEXT("OperatingSystemNotification"));
	}
	return Z_Registration_Info_UScriptStruct_OperatingSystemNotification.OuterSingleton;
}
template<> OPERATINGSYSTEMSIMULATOR_API UScriptStruct* StaticStruct<FOperatingSystemNotification>()
{
	return FOperatingSystemNotification::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FOperatingSystemNotification_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Title_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Title;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Description;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Code_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Code;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimeStamp_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_TimeStamp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Icon_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Icon;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Level_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Level_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Level;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Category_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Category_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Category;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOperatingSystemNotification_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/OperatingSystemTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOperatingSystemNotification_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOperatingSystemNotification>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOperatingSystemNotification_Statics::NewProp_Title_MetaData[] = {
		{ "Category", "OperatingSystemNotification" },
		{ "Comment", "/** A title for the notification. Something that makes sense. */" },
		{ "ModuleRelativePath", "Public/OperatingSystemTypes.h" },
		{ "ToolTip", "A title for the notification. Something that makes sense." },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FOperatingSystemNotification_Statics::NewProp_Title = { "Title", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOperatingSystemNotification, Title), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOperatingSystemNotification_Statics::NewProp_Title_MetaData), Z_Construct_UScriptStruct_FOperatingSystemNotification_Statics::NewProp_Title_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOperatingSystemNotification_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "OperatingSystemNotification" },
		{ "Comment", "/** A short description of this notification. Typically less than 255 characters but recommended to keep it under 100 characters.. */" },
		{ "ModuleRelativePath", "Public/OperatingSystemTypes.h" },
		{ "ToolTip", "A short description of this notification. Typically less than 255 characters but recommended to keep it under 100 characters.." },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FOperatingSystemNotification_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOperatingSystemNotification, Description), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOperatingSystemNotification_Statics::NewProp_Description_MetaData), Z_Construct_UScriptStruct_FOperatingSystemNotification_Statics::NewProp_Description_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOperatingSystemNotification_Statics::NewProp_Code_MetaData[] = {
		{ "Category", "OperatingSystemNotification" },
		{ "Comment", "/** A code like ERR_SOMETHING, ACCESS_DENIED, 0x000FFFD456D or anything like that. */" },
		{ "ModuleRelativePath", "Public/OperatingSystemTypes.h" },
		{ "ToolTip", "A code like ERR_SOMETHING, ACCESS_DENIED, 0x000FFFD456D or anything like that." },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FOperatingSystemNotification_Statics::NewProp_Code = { "Code", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOperatingSystemNotification, Code), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOperatingSystemNotification_Statics::NewProp_Code_MetaData), Z_Construct_UScriptStruct_FOperatingSystemNotification_Statics::NewProp_Code_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOperatingSystemNotification_Statics::NewProp_TimeStamp_MetaData[] = {
		{ "Category", "OperatingSystemNotification" },
		{ "Comment", "/** Local date and time on this computer. This will be according to your computer's time zone and daylight saving settings. */" },
		{ "ModuleRelativePath", "Public/OperatingSystemTypes.h" },
		{ "ToolTip", "Local date and time on this computer. This will be according to your computer's time zone and daylight saving settings." },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FOperatingSystemNotification_Statics::NewProp_TimeStamp = { "TimeStamp", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOperatingSystemNotification, TimeStamp), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOperatingSystemNotification_Statics::NewProp_TimeStamp_MetaData), Z_Construct_UScriptStruct_FOperatingSystemNotification_Statics::NewProp_TimeStamp_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOperatingSystemNotification_Statics::NewProp_Icon_MetaData[] = {
		{ "Category", "OperatingSystemNotification" },
		{ "Comment", "/** An optional icon. */" },
		{ "ModuleRelativePath", "Public/OperatingSystemTypes.h" },
		{ "ToolTip", "An optional icon." },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FOperatingSystemNotification_Statics::NewProp_Icon = { "Icon", nullptr, (EPropertyFlags)0x0014000000000014, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOperatingSystemNotification, Icon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOperatingSystemNotification_Statics::NewProp_Icon_MetaData), Z_Construct_UScriptStruct_FOperatingSystemNotification_Statics::NewProp_Icon_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FOperatingSystemNotification_Statics::NewProp_Level_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOperatingSystemNotification_Statics::NewProp_Level_MetaData[] = {
		{ "Category", "OperatingSystemNotification" },
		{ "Comment", "/** What type of notification is this? */" },
		{ "ModuleRelativePath", "Public/OperatingSystemTypes.h" },
		{ "ToolTip", "What type of notification is this?" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FOperatingSystemNotification_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOperatingSystemNotification, Level), Z_Construct_UEnum_OperatingSystemSimulator_EOperatingSystemNotificationType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOperatingSystemNotification_Statics::NewProp_Level_MetaData), Z_Construct_UScriptStruct_FOperatingSystemNotification_Statics::NewProp_Level_MetaData) }; // 3889312608
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FOperatingSystemNotification_Statics::NewProp_Category_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOperatingSystemNotification_Statics::NewProp_Category_MetaData[] = {
		{ "Category", "OperatingSystemNotification" },
		{ "Comment", "/** What generated this notification? */" },
		{ "ModuleRelativePath", "Public/OperatingSystemTypes.h" },
		{ "ToolTip", "What generated this notification?" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FOperatingSystemNotification_Statics::NewProp_Category = { "Category", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOperatingSystemNotification, Category), Z_Construct_UEnum_OperatingSystemSimulator_EOperatingSystemNotificationCategory, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOperatingSystemNotification_Statics::NewProp_Category_MetaData), Z_Construct_UScriptStruct_FOperatingSystemNotification_Statics::NewProp_Category_MetaData) }; // 1998519099
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOperatingSystemNotification_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOperatingSystemNotification_Statics::NewProp_Title,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOperatingSystemNotification_Statics::NewProp_Description,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOperatingSystemNotification_Statics::NewProp_Code,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOperatingSystemNotification_Statics::NewProp_TimeStamp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOperatingSystemNotification_Statics::NewProp_Icon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOperatingSystemNotification_Statics::NewProp_Level_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOperatingSystemNotification_Statics::NewProp_Level,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOperatingSystemNotification_Statics::NewProp_Category_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOperatingSystemNotification_Statics::NewProp_Category,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOperatingSystemNotification_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OperatingSystemSimulator,
		nullptr,
		&NewStructOps,
		"OperatingSystemNotification",
		Z_Construct_UScriptStruct_FOperatingSystemNotification_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOperatingSystemNotification_Statics::PropPointers),
		sizeof(FOperatingSystemNotification),
		alignof(FOperatingSystemNotification),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOperatingSystemNotification_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOperatingSystemNotification_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOperatingSystemNotification_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FOperatingSystemNotification()
	{
		if (!Z_Registration_Info_UScriptStruct_OperatingSystemNotification.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OperatingSystemNotification.InnerSingleton, Z_Construct_UScriptStruct_FOperatingSystemNotification_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_OperatingSystemNotification.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OperatingSystemUniqueId;
class UScriptStruct* FOperatingSystemUniqueId::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OperatingSystemUniqueId.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OperatingSystemUniqueId.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOperatingSystemUniqueId, (UObject*)Z_Construct_UPackage__Script_OperatingSystemSimulator(), TEXT("OperatingSystemUniqueId"));
	}
	return Z_Registration_Info_UScriptStruct_OperatingSystemUniqueId.OuterSingleton;
}
template<> OPERATINGSYSTEMSIMULATOR_API UScriptStruct* StaticStruct<FOperatingSystemUniqueId>()
{
	return FOperatingSystemUniqueId::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FOperatingSystemUniqueId_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOperatingSystemUniqueId_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/OperatingSystemTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOperatingSystemUniqueId_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOperatingSystemUniqueId>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOperatingSystemUniqueId_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OperatingSystemSimulator,
		nullptr,
		&NewStructOps,
		"OperatingSystemUniqueId",
		nullptr,
		0,
		sizeof(FOperatingSystemUniqueId),
		alignof(FOperatingSystemUniqueId),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOperatingSystemUniqueId_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOperatingSystemUniqueId_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOperatingSystemUniqueId()
	{
		if (!Z_Registration_Info_UScriptStruct_OperatingSystemUniqueId.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OperatingSystemUniqueId.InnerSingleton, Z_Construct_UScriptStruct_FOperatingSystemUniqueId_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_OperatingSystemUniqueId.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OperatingSystemFilesSaveLoad;
class UScriptStruct* FOperatingSystemFilesSaveLoad::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OperatingSystemFilesSaveLoad.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OperatingSystemFilesSaveLoad.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOperatingSystemFilesSaveLoad, (UObject*)Z_Construct_UPackage__Script_OperatingSystemSimulator(), TEXT("OperatingSystemFilesSaveLoad"));
	}
	return Z_Registration_Info_UScriptStruct_OperatingSystemFilesSaveLoad.OuterSingleton;
}
template<> OPERATINGSYSTEMSIMULATOR_API UScriptStruct* StaticStruct<FOperatingSystemFilesSaveLoad>()
{
	return FOperatingSystemFilesSaveLoad::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FOperatingSystemFilesSaveLoad_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClassPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ClassPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Extension_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Extension;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOperatingSystemFilesSaveLoad_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OperatingSystemTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOperatingSystemFilesSaveLoad_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOperatingSystemFilesSaveLoad>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOperatingSystemFilesSaveLoad_Statics::NewProp_ClassPath_MetaData[] = {
		{ "ModuleRelativePath", "Public/OperatingSystemTypes.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOperatingSystemFilesSaveLoad_Statics::NewProp_ClassPath = { "ClassPath", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOperatingSystemFilesSaveLoad, ClassPath), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOperatingSystemFilesSaveLoad_Statics::NewProp_ClassPath_MetaData), Z_Construct_UScriptStruct_FOperatingSystemFilesSaveLoad_Statics::NewProp_ClassPath_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOperatingSystemFilesSaveLoad_Statics::NewProp_Name_MetaData[] = {
		{ "ModuleRelativePath", "Public/OperatingSystemTypes.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOperatingSystemFilesSaveLoad_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOperatingSystemFilesSaveLoad, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOperatingSystemFilesSaveLoad_Statics::NewProp_Name_MetaData), Z_Construct_UScriptStruct_FOperatingSystemFilesSaveLoad_Statics::NewProp_Name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOperatingSystemFilesSaveLoad_Statics::NewProp_Extension_MetaData[] = {
		{ "ModuleRelativePath", "Public/OperatingSystemTypes.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOperatingSystemFilesSaveLoad_Statics::NewProp_Extension = { "Extension", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOperatingSystemFilesSaveLoad, Extension), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOperatingSystemFilesSaveLoad_Statics::NewProp_Extension_MetaData), Z_Construct_UScriptStruct_FOperatingSystemFilesSaveLoad_Statics::NewProp_Extension_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOperatingSystemFilesSaveLoad_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOperatingSystemFilesSaveLoad_Statics::NewProp_ClassPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOperatingSystemFilesSaveLoad_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOperatingSystemFilesSaveLoad_Statics::NewProp_Extension,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOperatingSystemFilesSaveLoad_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OperatingSystemSimulator,
		nullptr,
		&NewStructOps,
		"OperatingSystemFilesSaveLoad",
		Z_Construct_UScriptStruct_FOperatingSystemFilesSaveLoad_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOperatingSystemFilesSaveLoad_Statics::PropPointers),
		sizeof(FOperatingSystemFilesSaveLoad),
		alignof(FOperatingSystemFilesSaveLoad),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOperatingSystemFilesSaveLoad_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOperatingSystemFilesSaveLoad_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOperatingSystemFilesSaveLoad_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FOperatingSystemFilesSaveLoad()
	{
		if (!Z_Registration_Info_UScriptStruct_OperatingSystemFilesSaveLoad.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OperatingSystemFilesSaveLoad.InnerSingleton, Z_Construct_UScriptStruct_FOperatingSystemFilesSaveLoad_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_OperatingSystemFilesSaveLoad.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OperatingSystemDirectoriesSaveLoad;
class UScriptStruct* FOperatingSystemDirectoriesSaveLoad::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OperatingSystemDirectoriesSaveLoad.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OperatingSystemDirectoriesSaveLoad.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOperatingSystemDirectoriesSaveLoad, (UObject*)Z_Construct_UPackage__Script_OperatingSystemSimulator(), TEXT("OperatingSystemDirectoriesSaveLoad"));
	}
	return Z_Registration_Info_UScriptStruct_OperatingSystemDirectoriesSaveLoad.OuterSingleton;
}
template<> OPERATINGSYSTEMSIMULATOR_API UScriptStruct* StaticStruct<FOperatingSystemDirectoriesSaveLoad>()
{
	return FOperatingSystemDirectoriesSaveLoad::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FOperatingSystemDirectoriesSaveLoad_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SaveLoad_Path_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SaveLoad_Path;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SaveLoad_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SaveLoad_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SaveLoad_DirectoryClass_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SaveLoad_DirectoryClass;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SaveLoad_Files_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SaveLoad_Files_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SaveLoad_Files;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOperatingSystemDirectoriesSaveLoad_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OperatingSystemTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOperatingSystemDirectoriesSaveLoad_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOperatingSystemDirectoriesSaveLoad>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOperatingSystemDirectoriesSaveLoad_Statics::NewProp_SaveLoad_Path_MetaData[] = {
		{ "ModuleRelativePath", "Public/OperatingSystemTypes.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOperatingSystemDirectoriesSaveLoad_Statics::NewProp_SaveLoad_Path = { "SaveLoad_Path", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOperatingSystemDirectoriesSaveLoad, SaveLoad_Path), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOperatingSystemDirectoriesSaveLoad_Statics::NewProp_SaveLoad_Path_MetaData), Z_Construct_UScriptStruct_FOperatingSystemDirectoriesSaveLoad_Statics::NewProp_SaveLoad_Path_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOperatingSystemDirectoriesSaveLoad_Statics::NewProp_SaveLoad_Name_MetaData[] = {
		{ "ModuleRelativePath", "Public/OperatingSystemTypes.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOperatingSystemDirectoriesSaveLoad_Statics::NewProp_SaveLoad_Name = { "SaveLoad_Name", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOperatingSystemDirectoriesSaveLoad, SaveLoad_Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOperatingSystemDirectoriesSaveLoad_Statics::NewProp_SaveLoad_Name_MetaData), Z_Construct_UScriptStruct_FOperatingSystemDirectoriesSaveLoad_Statics::NewProp_SaveLoad_Name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOperatingSystemDirectoriesSaveLoad_Statics::NewProp_SaveLoad_DirectoryClass_MetaData[] = {
		{ "ModuleRelativePath", "Public/OperatingSystemTypes.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOperatingSystemDirectoriesSaveLoad_Statics::NewProp_SaveLoad_DirectoryClass = { "SaveLoad_DirectoryClass", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOperatingSystemDirectoriesSaveLoad, SaveLoad_DirectoryClass), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOperatingSystemDirectoriesSaveLoad_Statics::NewProp_SaveLoad_DirectoryClass_MetaData), Z_Construct_UScriptStruct_FOperatingSystemDirectoriesSaveLoad_Statics::NewProp_SaveLoad_DirectoryClass_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOperatingSystemDirectoriesSaveLoad_Statics::NewProp_SaveLoad_Files_Inner = { "SaveLoad_Files", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FOperatingSystemFilesSaveLoad, METADATA_PARAMS(0, nullptr) }; // 2342915480
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOperatingSystemDirectoriesSaveLoad_Statics::NewProp_SaveLoad_Files_MetaData[] = {
		{ "ModuleRelativePath", "Public/OperatingSystemTypes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FOperatingSystemDirectoriesSaveLoad_Statics::NewProp_SaveLoad_Files = { "SaveLoad_Files", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOperatingSystemDirectoriesSaveLoad, SaveLoad_Files), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOperatingSystemDirectoriesSaveLoad_Statics::NewProp_SaveLoad_Files_MetaData), Z_Construct_UScriptStruct_FOperatingSystemDirectoriesSaveLoad_Statics::NewProp_SaveLoad_Files_MetaData) }; // 2342915480
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOperatingSystemDirectoriesSaveLoad_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOperatingSystemDirectoriesSaveLoad_Statics::NewProp_SaveLoad_Path,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOperatingSystemDirectoriesSaveLoad_Statics::NewProp_SaveLoad_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOperatingSystemDirectoriesSaveLoad_Statics::NewProp_SaveLoad_DirectoryClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOperatingSystemDirectoriesSaveLoad_Statics::NewProp_SaveLoad_Files_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOperatingSystemDirectoriesSaveLoad_Statics::NewProp_SaveLoad_Files,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOperatingSystemDirectoriesSaveLoad_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OperatingSystemSimulator,
		nullptr,
		&NewStructOps,
		"OperatingSystemDirectoriesSaveLoad",
		Z_Construct_UScriptStruct_FOperatingSystemDirectoriesSaveLoad_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOperatingSystemDirectoriesSaveLoad_Statics::PropPointers),
		sizeof(FOperatingSystemDirectoriesSaveLoad),
		alignof(FOperatingSystemDirectoriesSaveLoad),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOperatingSystemDirectoriesSaveLoad_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOperatingSystemDirectoriesSaveLoad_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOperatingSystemDirectoriesSaveLoad_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FOperatingSystemDirectoriesSaveLoad()
	{
		if (!Z_Registration_Info_UScriptStruct_OperatingSystemDirectoriesSaveLoad.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OperatingSystemDirectoriesSaveLoad.InnerSingleton, Z_Construct_UScriptStruct_FOperatingSystemDirectoriesSaveLoad_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_OperatingSystemDirectoriesSaveLoad.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OperatingSystemPartitionSaveLoad;
class UScriptStruct* FOperatingSystemPartitionSaveLoad::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OperatingSystemPartitionSaveLoad.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OperatingSystemPartitionSaveLoad.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOperatingSystemPartitionSaveLoad, (UObject*)Z_Construct_UPackage__Script_OperatingSystemSimulator(), TEXT("OperatingSystemPartitionSaveLoad"));
	}
	return Z_Registration_Info_UScriptStruct_OperatingSystemPartitionSaveLoad.OuterSingleton;
}
template<> OPERATINGSYSTEMSIMULATOR_API UScriptStruct* StaticStruct<FOperatingSystemPartitionSaveLoad>()
{
	return FOperatingSystemPartitionSaveLoad::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FOperatingSystemPartitionSaveLoad_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SaveLoad_DiskName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SaveLoad_DiskName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SaveLoad_DiskLetter_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SaveLoad_DiskLetter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SaveLoad_TotalSizeInBytes_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_SaveLoad_TotalSizeInBytes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SaveLoad_FreeSpaceInBytes_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_SaveLoad_FreeSpaceInBytes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSaveLoad_IsSystemPartition_MetaData[];
#endif
		static void NewProp_bSaveLoad_IsSystemPartition_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSaveLoad_IsSystemPartition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SaveLoad_PartitionID_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SaveLoad_PartitionID;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SaveLoad_Directories_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SaveLoad_Directories_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SaveLoad_Directories;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOperatingSystemPartitionSaveLoad_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OperatingSystemTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOperatingSystemPartitionSaveLoad_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOperatingSystemPartitionSaveLoad>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOperatingSystemPartitionSaveLoad_Statics::NewProp_SaveLoad_DiskName_MetaData[] = {
		{ "ModuleRelativePath", "Public/OperatingSystemTypes.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOperatingSystemPartitionSaveLoad_Statics::NewProp_SaveLoad_DiskName = { "SaveLoad_DiskName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOperatingSystemPartitionSaveLoad, SaveLoad_DiskName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOperatingSystemPartitionSaveLoad_Statics::NewProp_SaveLoad_DiskName_MetaData), Z_Construct_UScriptStruct_FOperatingSystemPartitionSaveLoad_Statics::NewProp_SaveLoad_DiskName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOperatingSystemPartitionSaveLoad_Statics::NewProp_SaveLoad_DiskLetter_MetaData[] = {
		{ "ModuleRelativePath", "Public/OperatingSystemTypes.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOperatingSystemPartitionSaveLoad_Statics::NewProp_SaveLoad_DiskLetter = { "SaveLoad_DiskLetter", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOperatingSystemPartitionSaveLoad, SaveLoad_DiskLetter), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOperatingSystemPartitionSaveLoad_Statics::NewProp_SaveLoad_DiskLetter_MetaData), Z_Construct_UScriptStruct_FOperatingSystemPartitionSaveLoad_Statics::NewProp_SaveLoad_DiskLetter_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOperatingSystemPartitionSaveLoad_Statics::NewProp_SaveLoad_TotalSizeInBytes_MetaData[] = {
		{ "ModuleRelativePath", "Public/OperatingSystemTypes.h" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FOperatingSystemPartitionSaveLoad_Statics::NewProp_SaveLoad_TotalSizeInBytes = { "SaveLoad_TotalSizeInBytes", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOperatingSystemPartitionSaveLoad, SaveLoad_TotalSizeInBytes), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOperatingSystemPartitionSaveLoad_Statics::NewProp_SaveLoad_TotalSizeInBytes_MetaData), Z_Construct_UScriptStruct_FOperatingSystemPartitionSaveLoad_Statics::NewProp_SaveLoad_TotalSizeInBytes_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOperatingSystemPartitionSaveLoad_Statics::NewProp_SaveLoad_FreeSpaceInBytes_MetaData[] = {
		{ "ModuleRelativePath", "Public/OperatingSystemTypes.h" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FOperatingSystemPartitionSaveLoad_Statics::NewProp_SaveLoad_FreeSpaceInBytes = { "SaveLoad_FreeSpaceInBytes", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOperatingSystemPartitionSaveLoad, SaveLoad_FreeSpaceInBytes), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOperatingSystemPartitionSaveLoad_Statics::NewProp_SaveLoad_FreeSpaceInBytes_MetaData), Z_Construct_UScriptStruct_FOperatingSystemPartitionSaveLoad_Statics::NewProp_SaveLoad_FreeSpaceInBytes_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOperatingSystemPartitionSaveLoad_Statics::NewProp_bSaveLoad_IsSystemPartition_MetaData[] = {
		{ "ModuleRelativePath", "Public/OperatingSystemTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FOperatingSystemPartitionSaveLoad_Statics::NewProp_bSaveLoad_IsSystemPartition_SetBit(void* Obj)
	{
		((FOperatingSystemPartitionSaveLoad*)Obj)->bSaveLoad_IsSystemPartition = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOperatingSystemPartitionSaveLoad_Statics::NewProp_bSaveLoad_IsSystemPartition = { "bSaveLoad_IsSystemPartition", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FOperatingSystemPartitionSaveLoad), &Z_Construct_UScriptStruct_FOperatingSystemPartitionSaveLoad_Statics::NewProp_bSaveLoad_IsSystemPartition_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOperatingSystemPartitionSaveLoad_Statics::NewProp_bSaveLoad_IsSystemPartition_MetaData), Z_Construct_UScriptStruct_FOperatingSystemPartitionSaveLoad_Statics::NewProp_bSaveLoad_IsSystemPartition_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOperatingSystemPartitionSaveLoad_Statics::NewProp_SaveLoad_PartitionID_MetaData[] = {
		{ "ModuleRelativePath", "Public/OperatingSystemTypes.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOperatingSystemPartitionSaveLoad_Statics::NewProp_SaveLoad_PartitionID = { "SaveLoad_PartitionID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOperatingSystemPartitionSaveLoad, SaveLoad_PartitionID), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOperatingSystemPartitionSaveLoad_Statics::NewProp_SaveLoad_PartitionID_MetaData), Z_Construct_UScriptStruct_FOperatingSystemPartitionSaveLoad_Statics::NewProp_SaveLoad_PartitionID_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOperatingSystemPartitionSaveLoad_Statics::NewProp_SaveLoad_Directories_Inner = { "SaveLoad_Directories", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FOperatingSystemDirectoriesSaveLoad, METADATA_PARAMS(0, nullptr) }; // 4126174878
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOperatingSystemPartitionSaveLoad_Statics::NewProp_SaveLoad_Directories_MetaData[] = {
		{ "ModuleRelativePath", "Public/OperatingSystemTypes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FOperatingSystemPartitionSaveLoad_Statics::NewProp_SaveLoad_Directories = { "SaveLoad_Directories", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOperatingSystemPartitionSaveLoad, SaveLoad_Directories), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOperatingSystemPartitionSaveLoad_Statics::NewProp_SaveLoad_Directories_MetaData), Z_Construct_UScriptStruct_FOperatingSystemPartitionSaveLoad_Statics::NewProp_SaveLoad_Directories_MetaData) }; // 4126174878
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOperatingSystemPartitionSaveLoad_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOperatingSystemPartitionSaveLoad_Statics::NewProp_SaveLoad_DiskName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOperatingSystemPartitionSaveLoad_Statics::NewProp_SaveLoad_DiskLetter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOperatingSystemPartitionSaveLoad_Statics::NewProp_SaveLoad_TotalSizeInBytes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOperatingSystemPartitionSaveLoad_Statics::NewProp_SaveLoad_FreeSpaceInBytes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOperatingSystemPartitionSaveLoad_Statics::NewProp_bSaveLoad_IsSystemPartition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOperatingSystemPartitionSaveLoad_Statics::NewProp_SaveLoad_PartitionID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOperatingSystemPartitionSaveLoad_Statics::NewProp_SaveLoad_Directories_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOperatingSystemPartitionSaveLoad_Statics::NewProp_SaveLoad_Directories,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOperatingSystemPartitionSaveLoad_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OperatingSystemSimulator,
		nullptr,
		&NewStructOps,
		"OperatingSystemPartitionSaveLoad",
		Z_Construct_UScriptStruct_FOperatingSystemPartitionSaveLoad_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOperatingSystemPartitionSaveLoad_Statics::PropPointers),
		sizeof(FOperatingSystemPartitionSaveLoad),
		alignof(FOperatingSystemPartitionSaveLoad),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOperatingSystemPartitionSaveLoad_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOperatingSystemPartitionSaveLoad_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOperatingSystemPartitionSaveLoad_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FOperatingSystemPartitionSaveLoad()
	{
		if (!Z_Registration_Info_UScriptStruct_OperatingSystemPartitionSaveLoad.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OperatingSystemPartitionSaveLoad.InnerSingleton, Z_Construct_UScriptStruct_FOperatingSystemPartitionSaveLoad_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_OperatingSystemPartitionSaveLoad.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OperatingSystemProgramSaveLoad;
class UScriptStruct* FOperatingSystemProgramSaveLoad::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OperatingSystemProgramSaveLoad.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OperatingSystemProgramSaveLoad.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOperatingSystemProgramSaveLoad, (UObject*)Z_Construct_UPackage__Script_OperatingSystemSimulator(), TEXT("OperatingSystemProgramSaveLoad"));
	}
	return Z_Registration_Info_UScriptStruct_OperatingSystemProgramSaveLoad.OuterSingleton;
}
template<> OPERATINGSYSTEMSIMULATOR_API UScriptStruct* StaticStruct<FOperatingSystemProgramSaveLoad>()
{
	return FOperatingSystemProgramSaveLoad::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FOperatingSystemProgramSaveLoad_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClassPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ClassPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PartitionID_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PartitionID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOperatingSystemProgramSaveLoad_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OperatingSystemTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOperatingSystemProgramSaveLoad_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOperatingSystemProgramSaveLoad>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOperatingSystemProgramSaveLoad_Statics::NewProp_ClassPath_MetaData[] = {
		{ "ModuleRelativePath", "Public/OperatingSystemTypes.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOperatingSystemProgramSaveLoad_Statics::NewProp_ClassPath = { "ClassPath", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOperatingSystemProgramSaveLoad, ClassPath), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOperatingSystemProgramSaveLoad_Statics::NewProp_ClassPath_MetaData), Z_Construct_UScriptStruct_FOperatingSystemProgramSaveLoad_Statics::NewProp_ClassPath_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOperatingSystemProgramSaveLoad_Statics::NewProp_PartitionID_MetaData[] = {
		{ "ModuleRelativePath", "Public/OperatingSystemTypes.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOperatingSystemProgramSaveLoad_Statics::NewProp_PartitionID = { "PartitionID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOperatingSystemProgramSaveLoad, PartitionID), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOperatingSystemProgramSaveLoad_Statics::NewProp_PartitionID_MetaData), Z_Construct_UScriptStruct_FOperatingSystemProgramSaveLoad_Statics::NewProp_PartitionID_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOperatingSystemProgramSaveLoad_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOperatingSystemProgramSaveLoad_Statics::NewProp_ClassPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOperatingSystemProgramSaveLoad_Statics::NewProp_PartitionID,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOperatingSystemProgramSaveLoad_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OperatingSystemSimulator,
		nullptr,
		&NewStructOps,
		"OperatingSystemProgramSaveLoad",
		Z_Construct_UScriptStruct_FOperatingSystemProgramSaveLoad_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOperatingSystemProgramSaveLoad_Statics::PropPointers),
		sizeof(FOperatingSystemProgramSaveLoad),
		alignof(FOperatingSystemProgramSaveLoad),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOperatingSystemProgramSaveLoad_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOperatingSystemProgramSaveLoad_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOperatingSystemProgramSaveLoad_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FOperatingSystemProgramSaveLoad()
	{
		if (!Z_Registration_Info_UScriptStruct_OperatingSystemProgramSaveLoad.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OperatingSystemProgramSaveLoad.InnerSingleton, Z_Construct_UScriptStruct_FOperatingSystemProgramSaveLoad_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_OperatingSystemProgramSaveLoad.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OperatingSystemSaveLoad;
class UScriptStruct* FOperatingSystemSaveLoad::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OperatingSystemSaveLoad.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OperatingSystemSaveLoad.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOperatingSystemSaveLoad, (UObject*)Z_Construct_UPackage__Script_OperatingSystemSimulator(), TEXT("OperatingSystemSaveLoad"));
	}
	return Z_Registration_Info_UScriptStruct_OperatingSystemSaveLoad.OuterSingleton;
}
template<> OPERATINGSYSTEMSIMULATOR_API UScriptStruct* StaticStruct<FOperatingSystemSaveLoad>()
{
	return FOperatingSystemSaveLoad::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FOperatingSystemSaveLoad_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SaveLoad_Version_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SaveLoad_Version;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsStartingForTheFirstTime_MetaData[];
#endif
		static void NewProp_bIsStartingForTheFirstTime_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsStartingForTheFirstTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoLogin_MetaData[];
#endif
		static void NewProp_bAutoLogin_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoLogin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SaveLoad_PartitionID_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SaveLoad_PartitionID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SaveLoad_OperatingSystemName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SaveLoad_OperatingSystemName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SaveLoad_OperatingSystemID_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SaveLoad_OperatingSystemID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SaveLoad_DeviceName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SaveLoad_DeviceName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InstalledPrograms_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InstalledPrograms_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InstalledPrograms;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOperatingSystemSaveLoad_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OperatingSystemTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOperatingSystemSaveLoad_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOperatingSystemSaveLoad>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOperatingSystemSaveLoad_Statics::NewProp_SaveLoad_Version_MetaData[] = {
		{ "ModuleRelativePath", "Public/OperatingSystemTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOperatingSystemSaveLoad_Statics::NewProp_SaveLoad_Version = { "SaveLoad_Version", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOperatingSystemSaveLoad, SaveLoad_Version), Z_Construct_UScriptStruct_FVersion, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOperatingSystemSaveLoad_Statics::NewProp_SaveLoad_Version_MetaData), Z_Construct_UScriptStruct_FOperatingSystemSaveLoad_Statics::NewProp_SaveLoad_Version_MetaData) }; // 2963316928
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOperatingSystemSaveLoad_Statics::NewProp_bIsStartingForTheFirstTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/OperatingSystemTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FOperatingSystemSaveLoad_Statics::NewProp_bIsStartingForTheFirstTime_SetBit(void* Obj)
	{
		((FOperatingSystemSaveLoad*)Obj)->bIsStartingForTheFirstTime = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOperatingSystemSaveLoad_Statics::NewProp_bIsStartingForTheFirstTime = { "bIsStartingForTheFirstTime", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FOperatingSystemSaveLoad), &Z_Construct_UScriptStruct_FOperatingSystemSaveLoad_Statics::NewProp_bIsStartingForTheFirstTime_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOperatingSystemSaveLoad_Statics::NewProp_bIsStartingForTheFirstTime_MetaData), Z_Construct_UScriptStruct_FOperatingSystemSaveLoad_Statics::NewProp_bIsStartingForTheFirstTime_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOperatingSystemSaveLoad_Statics::NewProp_bAutoLogin_MetaData[] = {
		{ "ModuleRelativePath", "Public/OperatingSystemTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FOperatingSystemSaveLoad_Statics::NewProp_bAutoLogin_SetBit(void* Obj)
	{
		((FOperatingSystemSaveLoad*)Obj)->bAutoLogin = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOperatingSystemSaveLoad_Statics::NewProp_bAutoLogin = { "bAutoLogin", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FOperatingSystemSaveLoad), &Z_Construct_UScriptStruct_FOperatingSystemSaveLoad_Statics::NewProp_bAutoLogin_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOperatingSystemSaveLoad_Statics::NewProp_bAutoLogin_MetaData), Z_Construct_UScriptStruct_FOperatingSystemSaveLoad_Statics::NewProp_bAutoLogin_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOperatingSystemSaveLoad_Statics::NewProp_SaveLoad_PartitionID_MetaData[] = {
		{ "ModuleRelativePath", "Public/OperatingSystemTypes.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOperatingSystemSaveLoad_Statics::NewProp_SaveLoad_PartitionID = { "SaveLoad_PartitionID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOperatingSystemSaveLoad, SaveLoad_PartitionID), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOperatingSystemSaveLoad_Statics::NewProp_SaveLoad_PartitionID_MetaData), Z_Construct_UScriptStruct_FOperatingSystemSaveLoad_Statics::NewProp_SaveLoad_PartitionID_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOperatingSystemSaveLoad_Statics::NewProp_SaveLoad_OperatingSystemName_MetaData[] = {
		{ "ModuleRelativePath", "Public/OperatingSystemTypes.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOperatingSystemSaveLoad_Statics::NewProp_SaveLoad_OperatingSystemName = { "SaveLoad_OperatingSystemName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOperatingSystemSaveLoad, SaveLoad_OperatingSystemName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOperatingSystemSaveLoad_Statics::NewProp_SaveLoad_OperatingSystemName_MetaData), Z_Construct_UScriptStruct_FOperatingSystemSaveLoad_Statics::NewProp_SaveLoad_OperatingSystemName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOperatingSystemSaveLoad_Statics::NewProp_SaveLoad_OperatingSystemID_MetaData[] = {
		{ "ModuleRelativePath", "Public/OperatingSystemTypes.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOperatingSystemSaveLoad_Statics::NewProp_SaveLoad_OperatingSystemID = { "SaveLoad_OperatingSystemID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOperatingSystemSaveLoad, SaveLoad_OperatingSystemID), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOperatingSystemSaveLoad_Statics::NewProp_SaveLoad_OperatingSystemID_MetaData), Z_Construct_UScriptStruct_FOperatingSystemSaveLoad_Statics::NewProp_SaveLoad_OperatingSystemID_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOperatingSystemSaveLoad_Statics::NewProp_SaveLoad_DeviceName_MetaData[] = {
		{ "ModuleRelativePath", "Public/OperatingSystemTypes.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOperatingSystemSaveLoad_Statics::NewProp_SaveLoad_DeviceName = { "SaveLoad_DeviceName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOperatingSystemSaveLoad, SaveLoad_DeviceName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOperatingSystemSaveLoad_Statics::NewProp_SaveLoad_DeviceName_MetaData), Z_Construct_UScriptStruct_FOperatingSystemSaveLoad_Statics::NewProp_SaveLoad_DeviceName_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOperatingSystemSaveLoad_Statics::NewProp_InstalledPrograms_Inner = { "InstalledPrograms", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FOperatingSystemProgramSaveLoad, METADATA_PARAMS(0, nullptr) }; // 3534543172
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOperatingSystemSaveLoad_Statics::NewProp_InstalledPrograms_MetaData[] = {
		{ "ModuleRelativePath", "Public/OperatingSystemTypes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FOperatingSystemSaveLoad_Statics::NewProp_InstalledPrograms = { "InstalledPrograms", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOperatingSystemSaveLoad, InstalledPrograms), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOperatingSystemSaveLoad_Statics::NewProp_InstalledPrograms_MetaData), Z_Construct_UScriptStruct_FOperatingSystemSaveLoad_Statics::NewProp_InstalledPrograms_MetaData) }; // 3534543172
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOperatingSystemSaveLoad_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOperatingSystemSaveLoad_Statics::NewProp_SaveLoad_Version,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOperatingSystemSaveLoad_Statics::NewProp_bIsStartingForTheFirstTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOperatingSystemSaveLoad_Statics::NewProp_bAutoLogin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOperatingSystemSaveLoad_Statics::NewProp_SaveLoad_PartitionID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOperatingSystemSaveLoad_Statics::NewProp_SaveLoad_OperatingSystemName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOperatingSystemSaveLoad_Statics::NewProp_SaveLoad_OperatingSystemID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOperatingSystemSaveLoad_Statics::NewProp_SaveLoad_DeviceName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOperatingSystemSaveLoad_Statics::NewProp_InstalledPrograms_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOperatingSystemSaveLoad_Statics::NewProp_InstalledPrograms,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOperatingSystemSaveLoad_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OperatingSystemSimulator,
		nullptr,
		&NewStructOps,
		"OperatingSystemSaveLoad",
		Z_Construct_UScriptStruct_FOperatingSystemSaveLoad_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOperatingSystemSaveLoad_Statics::PropPointers),
		sizeof(FOperatingSystemSaveLoad),
		alignof(FOperatingSystemSaveLoad),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOperatingSystemSaveLoad_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOperatingSystemSaveLoad_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOperatingSystemSaveLoad_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FOperatingSystemSaveLoad()
	{
		if (!Z_Registration_Info_UScriptStruct_OperatingSystemSaveLoad.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OperatingSystemSaveLoad.InnerSingleton, Z_Construct_UScriptStruct_FOperatingSystemSaveLoad_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_OperatingSystemSaveLoad.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OperatingSystemDeviceSaveLoad;
class UScriptStruct* FOperatingSystemDeviceSaveLoad::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OperatingSystemDeviceSaveLoad.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OperatingSystemDeviceSaveLoad.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOperatingSystemDeviceSaveLoad, (UObject*)Z_Construct_UPackage__Script_OperatingSystemSimulator(), TEXT("OperatingSystemDeviceSaveLoad"));
	}
	return Z_Registration_Info_UScriptStruct_OperatingSystemDeviceSaveLoad.OuterSingleton;
}
template<> OPERATINGSYSTEMSIMULATOR_API UScriptStruct* StaticStruct<FOperatingSystemDeviceSaveLoad>()
{
	return FOperatingSystemDeviceSaveLoad::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FOperatingSystemDeviceSaveLoad_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSaveLoad_OperatingSystemInstalled_MetaData[];
#endif
		static void NewProp_bSaveLoad_OperatingSystemInstalled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSaveLoad_OperatingSystemInstalled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SaveLoad_OperatingSystem_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SaveLoad_OperatingSystem;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SaveLoad_Partitions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SaveLoad_Partitions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SaveLoad_Partitions;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOperatingSystemDeviceSaveLoad_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OperatingSystemTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOperatingSystemDeviceSaveLoad_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOperatingSystemDeviceSaveLoad>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOperatingSystemDeviceSaveLoad_Statics::NewProp_bSaveLoad_OperatingSystemInstalled_MetaData[] = {
		{ "ModuleRelativePath", "Public/OperatingSystemTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FOperatingSystemDeviceSaveLoad_Statics::NewProp_bSaveLoad_OperatingSystemInstalled_SetBit(void* Obj)
	{
		((FOperatingSystemDeviceSaveLoad*)Obj)->bSaveLoad_OperatingSystemInstalled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOperatingSystemDeviceSaveLoad_Statics::NewProp_bSaveLoad_OperatingSystemInstalled = { "bSaveLoad_OperatingSystemInstalled", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FOperatingSystemDeviceSaveLoad), &Z_Construct_UScriptStruct_FOperatingSystemDeviceSaveLoad_Statics::NewProp_bSaveLoad_OperatingSystemInstalled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOperatingSystemDeviceSaveLoad_Statics::NewProp_bSaveLoad_OperatingSystemInstalled_MetaData), Z_Construct_UScriptStruct_FOperatingSystemDeviceSaveLoad_Statics::NewProp_bSaveLoad_OperatingSystemInstalled_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOperatingSystemDeviceSaveLoad_Statics::NewProp_SaveLoad_OperatingSystem_MetaData[] = {
		{ "ModuleRelativePath", "Public/OperatingSystemTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOperatingSystemDeviceSaveLoad_Statics::NewProp_SaveLoad_OperatingSystem = { "SaveLoad_OperatingSystem", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOperatingSystemDeviceSaveLoad, SaveLoad_OperatingSystem), Z_Construct_UScriptStruct_FOperatingSystemSaveLoad, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOperatingSystemDeviceSaveLoad_Statics::NewProp_SaveLoad_OperatingSystem_MetaData), Z_Construct_UScriptStruct_FOperatingSystemDeviceSaveLoad_Statics::NewProp_SaveLoad_OperatingSystem_MetaData) }; // 2390808023
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOperatingSystemDeviceSaveLoad_Statics::NewProp_SaveLoad_Partitions_Inner = { "SaveLoad_Partitions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FOperatingSystemPartitionSaveLoad, METADATA_PARAMS(0, nullptr) }; // 983143284
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOperatingSystemDeviceSaveLoad_Statics::NewProp_SaveLoad_Partitions_MetaData[] = {
		{ "ModuleRelativePath", "Public/OperatingSystemTypes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FOperatingSystemDeviceSaveLoad_Statics::NewProp_SaveLoad_Partitions = { "SaveLoad_Partitions", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOperatingSystemDeviceSaveLoad, SaveLoad_Partitions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOperatingSystemDeviceSaveLoad_Statics::NewProp_SaveLoad_Partitions_MetaData), Z_Construct_UScriptStruct_FOperatingSystemDeviceSaveLoad_Statics::NewProp_SaveLoad_Partitions_MetaData) }; // 983143284
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOperatingSystemDeviceSaveLoad_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOperatingSystemDeviceSaveLoad_Statics::NewProp_bSaveLoad_OperatingSystemInstalled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOperatingSystemDeviceSaveLoad_Statics::NewProp_SaveLoad_OperatingSystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOperatingSystemDeviceSaveLoad_Statics::NewProp_SaveLoad_Partitions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOperatingSystemDeviceSaveLoad_Statics::NewProp_SaveLoad_Partitions,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOperatingSystemDeviceSaveLoad_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OperatingSystemSimulator,
		nullptr,
		&NewStructOps,
		"OperatingSystemDeviceSaveLoad",
		Z_Construct_UScriptStruct_FOperatingSystemDeviceSaveLoad_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOperatingSystemDeviceSaveLoad_Statics::PropPointers),
		sizeof(FOperatingSystemDeviceSaveLoad),
		alignof(FOperatingSystemDeviceSaveLoad),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOperatingSystemDeviceSaveLoad_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOperatingSystemDeviceSaveLoad_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOperatingSystemDeviceSaveLoad_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FOperatingSystemDeviceSaveLoad()
	{
		if (!Z_Registration_Info_UScriptStruct_OperatingSystemDeviceSaveLoad.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OperatingSystemDeviceSaveLoad.InnerSingleton, Z_Construct_UScriptStruct_FOperatingSystemDeviceSaveLoad_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_OperatingSystemDeviceSaveLoad.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OperatingSystemStoreReviewUser;
class UScriptStruct* FOperatingSystemStoreReviewUser::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OperatingSystemStoreReviewUser.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OperatingSystemStoreReviewUser.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOperatingSystemStoreReviewUser, (UObject*)Z_Construct_UPackage__Script_OperatingSystemSimulator(), TEXT("OperatingSystemStoreReviewUser"));
	}
	return Z_Registration_Info_UScriptStruct_OperatingSystemStoreReviewUser.OuterSingleton;
}
template<> OPERATINGSYSTEMSIMULATOR_API UScriptStruct* StaticStruct<FOperatingSystemStoreReviewUser>()
{
	return FOperatingSystemStoreReviewUser::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FOperatingSystemStoreReviewUser_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Username_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Username;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReviewDescription_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_ReviewDescription;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SubmittedRating_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SubmittedRating;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOperatingSystemStoreReviewUser_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/OperatingSystemTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOperatingSystemStoreReviewUser_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOperatingSystemStoreReviewUser>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOperatingSystemStoreReviewUser_Statics::NewProp_Username_MetaData[] = {
		{ "Category", "OperatingSystemStoreReviewUser" },
		{ "ModuleRelativePath", "Public/OperatingSystemTypes.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FOperatingSystemStoreReviewUser_Statics::NewProp_Username = { "Username", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOperatingSystemStoreReviewUser, Username), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOperatingSystemStoreReviewUser_Statics::NewProp_Username_MetaData), Z_Construct_UScriptStruct_FOperatingSystemStoreReviewUser_Statics::NewProp_Username_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOperatingSystemStoreReviewUser_Statics::NewProp_ReviewDescription_MetaData[] = {
		{ "Category", "OperatingSystemStoreReviewUser" },
		{ "ModuleRelativePath", "Public/OperatingSystemTypes.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FOperatingSystemStoreReviewUser_Statics::NewProp_ReviewDescription = { "ReviewDescription", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOperatingSystemStoreReviewUser, ReviewDescription), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOperatingSystemStoreReviewUser_Statics::NewProp_ReviewDescription_MetaData), Z_Construct_UScriptStruct_FOperatingSystemStoreReviewUser_Statics::NewProp_ReviewDescription_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOperatingSystemStoreReviewUser_Statics::NewProp_SubmittedRating_MetaData[] = {
		{ "Category", "OperatingSystemStoreReviewUser" },
		{ "ClampMax", "5" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Public/OperatingSystemTypes.h" },
		{ "UIMax", "5" },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FOperatingSystemStoreReviewUser_Statics::NewProp_SubmittedRating = { "SubmittedRating", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOperatingSystemStoreReviewUser, SubmittedRating), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOperatingSystemStoreReviewUser_Statics::NewProp_SubmittedRating_MetaData), Z_Construct_UScriptStruct_FOperatingSystemStoreReviewUser_Statics::NewProp_SubmittedRating_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOperatingSystemStoreReviewUser_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOperatingSystemStoreReviewUser_Statics::NewProp_Username,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOperatingSystemStoreReviewUser_Statics::NewProp_ReviewDescription,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOperatingSystemStoreReviewUser_Statics::NewProp_SubmittedRating,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOperatingSystemStoreReviewUser_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OperatingSystemSimulator,
		nullptr,
		&NewStructOps,
		"OperatingSystemStoreReviewUser",
		Z_Construct_UScriptStruct_FOperatingSystemStoreReviewUser_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOperatingSystemStoreReviewUser_Statics::PropPointers),
		sizeof(FOperatingSystemStoreReviewUser),
		alignof(FOperatingSystemStoreReviewUser),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOperatingSystemStoreReviewUser_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOperatingSystemStoreReviewUser_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOperatingSystemStoreReviewUser_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FOperatingSystemStoreReviewUser()
	{
		if (!Z_Registration_Info_UScriptStruct_OperatingSystemStoreReviewUser.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OperatingSystemStoreReviewUser.InnerSingleton, Z_Construct_UScriptStruct_FOperatingSystemStoreReviewUser_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_OperatingSystemStoreReviewUser.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OperatingSystemStoreProgramData;
class UScriptStruct* FOperatingSystemStoreProgramData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OperatingSystemStoreProgramData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OperatingSystemStoreProgramData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOperatingSystemStoreProgramData, (UObject*)Z_Construct_UPackage__Script_OperatingSystemSimulator(), TEXT("OperatingSystemStoreProgramData"));
	}
	return Z_Registration_Info_UScriptStruct_OperatingSystemStoreProgramData.OuterSingleton;
}
template<> OPERATINGSYSTEMSIMULATOR_API UScriptStruct* StaticStruct<FOperatingSystemStoreProgramData>()
{
	return FOperatingSystemStoreProgramData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FOperatingSystemStoreProgramData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Program_MetaData[];
#endif
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_Program;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReviewUsers_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReviewUsers_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_ReviewUsers;
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Media_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Media_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Media;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOperatingSystemStoreProgramData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/OperatingSystemTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOperatingSystemStoreProgramData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOperatingSystemStoreProgramData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOperatingSystemStoreProgramData_Statics::NewProp_Program_MetaData[] = {
		{ "Category", "OperatingSystemStoreProgramData" },
		{ "ModuleRelativePath", "Public/OperatingSystemTypes.h" },
	};
#endif
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UScriptStruct_FOperatingSystemStoreProgramData_Statics::NewProp_Program = { "Program", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOperatingSystemStoreProgramData, Program), Z_Construct_UClass_UOperatingSystemBaseProgram_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOperatingSystemStoreProgramData_Statics::NewProp_Program_MetaData), Z_Construct_UScriptStruct_FOperatingSystemStoreProgramData_Statics::NewProp_Program_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOperatingSystemStoreProgramData_Statics::NewProp_ReviewUsers_ElementProp = { "ReviewUsers", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FOperatingSystemStoreReviewUser, METADATA_PARAMS(0, nullptr) }; // 1050742907
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOperatingSystemStoreProgramData_Statics::NewProp_ReviewUsers_MetaData[] = {
		{ "Category", "OperatingSystemStoreProgramData" },
		{ "ModuleRelativePath", "Public/OperatingSystemTypes.h" },
	};
#endif
	static_assert(TModels_V<CGetTypeHashable, FOperatingSystemStoreReviewUser>, "The structure 'FOperatingSystemStoreReviewUser' is used in a TSet but does not have a GetValueTypeHash defined");
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FOperatingSystemStoreProgramData_Statics::NewProp_ReviewUsers = { "ReviewUsers", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOperatingSystemStoreProgramData, ReviewUsers), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOperatingSystemStoreProgramData_Statics::NewProp_ReviewUsers_MetaData), Z_Construct_UScriptStruct_FOperatingSystemStoreProgramData_Statics::NewProp_ReviewUsers_MetaData) }; // 1050742907
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FOperatingSystemStoreProgramData_Statics::NewProp_Media_Inner = { "Media", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOperatingSystemStoreProgramData_Statics::NewProp_Media_MetaData[] = {
		{ "AllowedClasses", "Texture,MaterialInterface" },
		{ "Category", "OperatingSystemStoreProgramData" },
		{ "DisplayThumbnail", "true" },
		{ "ModuleRelativePath", "Public/OperatingSystemTypes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FOperatingSystemStoreProgramData_Statics::NewProp_Media = { "Media", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOperatingSystemStoreProgramData, Media), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOperatingSystemStoreProgramData_Statics::NewProp_Media_MetaData), Z_Construct_UScriptStruct_FOperatingSystemStoreProgramData_Statics::NewProp_Media_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOperatingSystemStoreProgramData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOperatingSystemStoreProgramData_Statics::NewProp_Program,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOperatingSystemStoreProgramData_Statics::NewProp_ReviewUsers_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOperatingSystemStoreProgramData_Statics::NewProp_ReviewUsers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOperatingSystemStoreProgramData_Statics::NewProp_Media_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOperatingSystemStoreProgramData_Statics::NewProp_Media,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOperatingSystemStoreProgramData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OperatingSystemSimulator,
		nullptr,
		&NewStructOps,
		"OperatingSystemStoreProgramData",
		Z_Construct_UScriptStruct_FOperatingSystemStoreProgramData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOperatingSystemStoreProgramData_Statics::PropPointers),
		sizeof(FOperatingSystemStoreProgramData),
		alignof(FOperatingSystemStoreProgramData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOperatingSystemStoreProgramData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOperatingSystemStoreProgramData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOperatingSystemStoreProgramData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FOperatingSystemStoreProgramData()
	{
		if (!Z_Registration_Info_UScriptStruct_OperatingSystemStoreProgramData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OperatingSystemStoreProgramData.InnerSingleton, Z_Construct_UScriptStruct_FOperatingSystemStoreProgramData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_OperatingSystemStoreProgramData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OperatingSystemStoreApps;
class UScriptStruct* FOperatingSystemStoreApps::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OperatingSystemStoreApps.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OperatingSystemStoreApps.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOperatingSystemStoreApps, (UObject*)Z_Construct_UPackage__Script_OperatingSystemSimulator(), TEXT("OperatingSystemStoreApps"));
	}
	return Z_Registration_Info_UScriptStruct_OperatingSystemStoreApps.OuterSingleton;
}
template<> OPERATINGSYSTEMSIMULATOR_API UScriptStruct* StaticStruct<FOperatingSystemStoreApps>()
{
	return FOperatingSystemStoreApps::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FOperatingSystemStoreApps_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_StoreProgram_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StoreProgram_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_StoreProgram;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AverageRatings_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AverageRatings_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AverageRatings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOperatingSystemStoreApps_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/OperatingSystemTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOperatingSystemStoreApps_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOperatingSystemStoreApps>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOperatingSystemStoreApps_Statics::NewProp_StoreProgram_Inner = { "StoreProgram", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FOperatingSystemStoreProgramData, METADATA_PARAMS(0, nullptr) }; // 3112091046
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOperatingSystemStoreApps_Statics::NewProp_StoreProgram_MetaData[] = {
		{ "Category", "OperatingSystemStoreApps" },
		{ "ModuleRelativePath", "Public/OperatingSystemTypes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FOperatingSystemStoreApps_Statics::NewProp_StoreProgram = { "StoreProgram", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOperatingSystemStoreApps, StoreProgram), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOperatingSystemStoreApps_Statics::NewProp_StoreProgram_MetaData), Z_Construct_UScriptStruct_FOperatingSystemStoreApps_Statics::NewProp_StoreProgram_MetaData) }; // 3112091046
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FOperatingSystemStoreApps_Statics::NewProp_AverageRatings_Inner = { "AverageRatings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOperatingSystemStoreApps_Statics::NewProp_AverageRatings_MetaData[] = {
		{ "Category", "OperatingSystemStoreApps" },
		{ "ModuleRelativePath", "Public/OperatingSystemTypes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FOperatingSystemStoreApps_Statics::NewProp_AverageRatings = { "AverageRatings", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOperatingSystemStoreApps, AverageRatings), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOperatingSystemStoreApps_Statics::NewProp_AverageRatings_MetaData), Z_Construct_UScriptStruct_FOperatingSystemStoreApps_Statics::NewProp_AverageRatings_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOperatingSystemStoreApps_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOperatingSystemStoreApps_Statics::NewProp_StoreProgram_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOperatingSystemStoreApps_Statics::NewProp_StoreProgram,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOperatingSystemStoreApps_Statics::NewProp_AverageRatings_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOperatingSystemStoreApps_Statics::NewProp_AverageRatings,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOperatingSystemStoreApps_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OperatingSystemSimulator,
		nullptr,
		&NewStructOps,
		"OperatingSystemStoreApps",
		Z_Construct_UScriptStruct_FOperatingSystemStoreApps_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOperatingSystemStoreApps_Statics::PropPointers),
		sizeof(FOperatingSystemStoreApps),
		alignof(FOperatingSystemStoreApps),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOperatingSystemStoreApps_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOperatingSystemStoreApps_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOperatingSystemStoreApps_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FOperatingSystemStoreApps()
	{
		if (!Z_Registration_Info_UScriptStruct_OperatingSystemStoreApps.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OperatingSystemStoreApps.InnerSingleton, Z_Construct_UScriptStruct_FOperatingSystemStoreApps_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_OperatingSystemStoreApps.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_OperatingSystemTypes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_OperatingSystemTypes_h_Statics::EnumInfo[] = {
		{ EOperatingSystemProgramViewState_StaticEnum, TEXT("EOperatingSystemProgramViewState"), &Z_Registration_Info_UEnum_EOperatingSystemProgramViewState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3957317527U) },
		{ EOperatingSystemPasswordStrength_StaticEnum, TEXT("EOperatingSystemPasswordStrength"), &Z_Registration_Info_UEnum_EOperatingSystemPasswordStrength, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1152089991U) },
		{ EOperatingSystemSizeMethod_StaticEnum, TEXT("EOperatingSystemSizeMethod"), &Z_Registration_Info_UEnum_EOperatingSystemSizeMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1509746507U) },
		{ EOperatingSystemNotificationType_StaticEnum, TEXT("EOperatingSystemNotificationType"), &Z_Registration_Info_UEnum_EOperatingSystemNotificationType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3889312608U) },
		{ EOperatingSystemTerminalMessageType_StaticEnum, TEXT("EOperatingSystemTerminalMessageType"), &Z_Registration_Info_UEnum_EOperatingSystemTerminalMessageType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 88661471U) },
		{ EOperatingSystemNotificationCategory_StaticEnum, TEXT("EOperatingSystemNotificationCategory"), &Z_Registration_Info_UEnum_EOperatingSystemNotificationCategory, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1998519099U) },
		{ EOperatingSystemDeviceState_StaticEnum, TEXT("EOperatingSystemDeviceState"), &Z_Registration_Info_UEnum_EOperatingSystemDeviceState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2402969494U) },
		{ EOperatingSystemCommonSizes_StaticEnum, TEXT("EOperatingSystemCommonSizes"), &Z_Registration_Info_UEnum_EOperatingSystemCommonSizes, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 167520951U) },
		{ EOperatingSystemDateSeparator_StaticEnum, TEXT("EOperatingSystemDateSeparator"), &Z_Registration_Info_UEnum_EOperatingSystemDateSeparator, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3286433650U) },
		{ EOperatingSystemTimeSeparator_StaticEnum, TEXT("EOperatingSystemTimeSeparator"), &Z_Registration_Info_UEnum_EOperatingSystemTimeSeparator, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2485156736U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_OperatingSystemTypes_h_Statics::ScriptStructInfo[] = {
		{ FGenericError::StaticStruct, Z_Construct_UScriptStruct_FGenericError_Statics::NewStructOps, TEXT("GenericError"), &Z_Registration_Info_UScriptStruct_GenericError, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGenericError), 4286029882U) },
		{ FOperatingSystemUser::StaticStruct, Z_Construct_UScriptStruct_FOperatingSystemUser_Statics::NewStructOps, TEXT("OperatingSystemUser"), &Z_Registration_Info_UScriptStruct_OperatingSystemUser, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOperatingSystemUser), 1295920940U) },
		{ FOperatingSystemRangeTime::StaticStruct, Z_Construct_UScriptStruct_FOperatingSystemRangeTime_Statics::NewStructOps, TEXT("OperatingSystemRangeTime"), &Z_Registration_Info_UScriptStruct_OperatingSystemRangeTime, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOperatingSystemRangeTime), 1922178498U) },
		{ FVersion::StaticStruct, Z_Construct_UScriptStruct_FVersion_Statics::NewStructOps, TEXT("Version"), &Z_Registration_Info_UScriptStruct_Version, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVersion), 2963316928U) },
		{ FOperatingSystemNotification::StaticStruct, Z_Construct_UScriptStruct_FOperatingSystemNotification_Statics::NewStructOps, TEXT("OperatingSystemNotification"), &Z_Registration_Info_UScriptStruct_OperatingSystemNotification, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOperatingSystemNotification), 2023410135U) },
		{ FOperatingSystemUniqueId::StaticStruct, Z_Construct_UScriptStruct_FOperatingSystemUniqueId_Statics::NewStructOps, TEXT("OperatingSystemUniqueId"), &Z_Registration_Info_UScriptStruct_OperatingSystemUniqueId, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOperatingSystemUniqueId), 2242450855U) },
		{ FOperatingSystemFilesSaveLoad::StaticStruct, Z_Construct_UScriptStruct_FOperatingSystemFilesSaveLoad_Statics::NewStructOps, TEXT("OperatingSystemFilesSaveLoad"), &Z_Registration_Info_UScriptStruct_OperatingSystemFilesSaveLoad, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOperatingSystemFilesSaveLoad), 2342915480U) },
		{ FOperatingSystemDirectoriesSaveLoad::StaticStruct, Z_Construct_UScriptStruct_FOperatingSystemDirectoriesSaveLoad_Statics::NewStructOps, TEXT("OperatingSystemDirectoriesSaveLoad"), &Z_Registration_Info_UScriptStruct_OperatingSystemDirectoriesSaveLoad, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOperatingSystemDirectoriesSaveLoad), 4126174878U) },
		{ FOperatingSystemPartitionSaveLoad::StaticStruct, Z_Construct_UScriptStruct_FOperatingSystemPartitionSaveLoad_Statics::NewStructOps, TEXT("OperatingSystemPartitionSaveLoad"), &Z_Registration_Info_UScriptStruct_OperatingSystemPartitionSaveLoad, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOperatingSystemPartitionSaveLoad), 983143284U) },
		{ FOperatingSystemProgramSaveLoad::StaticStruct, Z_Construct_UScriptStruct_FOperatingSystemProgramSaveLoad_Statics::NewStructOps, TEXT("OperatingSystemProgramSaveLoad"), &Z_Registration_Info_UScriptStruct_OperatingSystemProgramSaveLoad, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOperatingSystemProgramSaveLoad), 3534543172U) },
		{ FOperatingSystemSaveLoad::StaticStruct, Z_Construct_UScriptStruct_FOperatingSystemSaveLoad_Statics::NewStructOps, TEXT("OperatingSystemSaveLoad"), &Z_Registration_Info_UScriptStruct_OperatingSystemSaveLoad, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOperatingSystemSaveLoad), 2390808023U) },
		{ FOperatingSystemDeviceSaveLoad::StaticStruct, Z_Construct_UScriptStruct_FOperatingSystemDeviceSaveLoad_Statics::NewStructOps, TEXT("OperatingSystemDeviceSaveLoad"), &Z_Registration_Info_UScriptStruct_OperatingSystemDeviceSaveLoad, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOperatingSystemDeviceSaveLoad), 507218749U) },
		{ FOperatingSystemStoreReviewUser::StaticStruct, Z_Construct_UScriptStruct_FOperatingSystemStoreReviewUser_Statics::NewStructOps, TEXT("OperatingSystemStoreReviewUser"), &Z_Registration_Info_UScriptStruct_OperatingSystemStoreReviewUser, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOperatingSystemStoreReviewUser), 1050742907U) },
		{ FOperatingSystemStoreProgramData::StaticStruct, Z_Construct_UScriptStruct_FOperatingSystemStoreProgramData_Statics::NewStructOps, TEXT("OperatingSystemStoreProgramData"), &Z_Registration_Info_UScriptStruct_OperatingSystemStoreProgramData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOperatingSystemStoreProgramData), 3112091046U) },
		{ FOperatingSystemStoreApps::StaticStruct, Z_Construct_UScriptStruct_FOperatingSystemStoreApps_Statics::NewStructOps, TEXT("OperatingSystemStoreApps"), &Z_Registration_Info_UScriptStruct_OperatingSystemStoreApps, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOperatingSystemStoreApps), 1512060431U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_OperatingSystemTypes_h_3909104041(TEXT("/Script/OperatingSystemSimulator"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_OperatingSystemTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_OperatingSystemTypes_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_OperatingSystemTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_OperatingSystemTypes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
