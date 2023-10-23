// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OperatingSystemSimulator/Public/Hardware/OperatingSystemBaseHardware.h"
#include "GameplayTagContainer.h"
#include "OperatingSystemSimulator/Public/OperatingSystemTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOperatingSystemBaseHardware() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	OPERATINGSYSTEMSIMULATOR_API UClass* Z_Construct_UClass_UOperatingSystemBaseHardware();
	OPERATINGSYSTEMSIMULATOR_API UClass* Z_Construct_UClass_UOperatingSystemBaseHardware_NoRegister();
	OPERATINGSYSTEMSIMULATOR_API UScriptStruct* Z_Construct_UScriptStruct_FGenericError();
	UPackage* Z_Construct_UPackage__Script_OperatingSystemSimulator();
// End Cross Module References
	DEFINE_FUNCTION(UOperatingSystemBaseHardware::execGetModelNumber)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->GetModelNumber();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOperatingSystemBaseHardware::execGetHardwareMadeBy)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->GetHardwareMadeBy();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOperatingSystemBaseHardware::execGetHardwareName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->GetHardwareName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOperatingSystemBaseHardware::execK2_OnValidate)
	{
		P_GET_STRUCT_REF(FGenericError,Z_Param_Out_OutError);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->K2_OnValidate_Implementation(Z_Param_Out_OutError);
		P_NATIVE_END;
	}
	struct OperatingSystemBaseHardware_eventK2_OnValidate_Parms
	{
		FGenericError OutError;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		OperatingSystemBaseHardware_eventK2_OnValidate_Parms()
			: ReturnValue(false)
		{
		}
	};
	static FName NAME_UOperatingSystemBaseHardware_K2_OnValidate = FName(TEXT("K2_OnValidate"));
	bool UOperatingSystemBaseHardware::K2_OnValidate(FGenericError& OutError) const
	{
		OperatingSystemBaseHardware_eventK2_OnValidate_Parms Parms;
		Parms.OutError=OutError;
		const_cast<UOperatingSystemBaseHardware*>(this)->ProcessEvent(FindFunctionChecked(NAME_UOperatingSystemBaseHardware_K2_OnValidate),&Parms);
		OutError=Parms.OutError;
		return !!Parms.ReturnValue;
	}
	void UOperatingSystemBaseHardware::StaticRegisterNativesUOperatingSystemBaseHardware()
	{
		UClass* Class = UOperatingSystemBaseHardware::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetHardwareMadeBy", &UOperatingSystemBaseHardware::execGetHardwareMadeBy },
			{ "GetHardwareName", &UOperatingSystemBaseHardware::execGetHardwareName },
			{ "GetModelNumber", &UOperatingSystemBaseHardware::execGetModelNumber },
			{ "K2_OnValidate", &UOperatingSystemBaseHardware::execK2_OnValidate },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOperatingSystemBaseHardware_GetHardwareMadeBy_Statics
	{
		struct OperatingSystemBaseHardware_eventGetHardwareMadeBy_Parms
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
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UOperatingSystemBaseHardware_GetHardwareMadeBy_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemBaseHardware_eventGetHardwareMadeBy_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperatingSystemBaseHardware_GetHardwareMadeBy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemBaseHardware_GetHardwareMadeBy_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemBaseHardware_GetHardwareMadeBy_Statics::Function_MetaDataParams[] = {
		{ "Category", "OperatingSystemHardware" },
		{ "Keywords", "manufacture, created" },
		{ "ModuleRelativePath", "Public/Hardware/OperatingSystemBaseHardware.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystemBaseHardware_GetHardwareMadeBy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystemBaseHardware, nullptr, "GetHardwareMadeBy", nullptr, nullptr, Z_Construct_UFunction_UOperatingSystemBaseHardware_GetHardwareMadeBy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemBaseHardware_GetHardwareMadeBy_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOperatingSystemBaseHardware_GetHardwareMadeBy_Statics::OperatingSystemBaseHardware_eventGetHardwareMadeBy_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemBaseHardware_GetHardwareMadeBy_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystemBaseHardware_GetHardwareMadeBy_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemBaseHardware_GetHardwareMadeBy_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOperatingSystemBaseHardware_GetHardwareMadeBy_Statics::OperatingSystemBaseHardware_eventGetHardwareMadeBy_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOperatingSystemBaseHardware_GetHardwareMadeBy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystemBaseHardware_GetHardwareMadeBy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOperatingSystemBaseHardware_GetHardwareName_Statics
	{
		struct OperatingSystemBaseHardware_eventGetHardwareName_Parms
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
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UOperatingSystemBaseHardware_GetHardwareName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemBaseHardware_eventGetHardwareName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperatingSystemBaseHardware_GetHardwareName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemBaseHardware_GetHardwareName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemBaseHardware_GetHardwareName_Statics::Function_MetaDataParams[] = {
		{ "Category", "OperatingSystemHardware" },
		{ "Keywords", "display" },
		{ "ModuleRelativePath", "Public/Hardware/OperatingSystemBaseHardware.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystemBaseHardware_GetHardwareName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystemBaseHardware, nullptr, "GetHardwareName", nullptr, nullptr, Z_Construct_UFunction_UOperatingSystemBaseHardware_GetHardwareName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemBaseHardware_GetHardwareName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOperatingSystemBaseHardware_GetHardwareName_Statics::OperatingSystemBaseHardware_eventGetHardwareName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemBaseHardware_GetHardwareName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystemBaseHardware_GetHardwareName_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemBaseHardware_GetHardwareName_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOperatingSystemBaseHardware_GetHardwareName_Statics::OperatingSystemBaseHardware_eventGetHardwareName_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOperatingSystemBaseHardware_GetHardwareName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystemBaseHardware_GetHardwareName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOperatingSystemBaseHardware_GetModelNumber_Statics
	{
		struct OperatingSystemBaseHardware_eventGetModelNumber_Parms
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
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UOperatingSystemBaseHardware_GetModelNumber_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemBaseHardware_eventGetModelNumber_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperatingSystemBaseHardware_GetModelNumber_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemBaseHardware_GetModelNumber_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemBaseHardware_GetModelNumber_Statics::Function_MetaDataParams[] = {
		{ "Category", "OperatingSystemHardware" },
		{ "ModuleRelativePath", "Public/Hardware/OperatingSystemBaseHardware.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystemBaseHardware_GetModelNumber_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystemBaseHardware, nullptr, "GetModelNumber", nullptr, nullptr, Z_Construct_UFunction_UOperatingSystemBaseHardware_GetModelNumber_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemBaseHardware_GetModelNumber_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOperatingSystemBaseHardware_GetModelNumber_Statics::OperatingSystemBaseHardware_eventGetModelNumber_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemBaseHardware_GetModelNumber_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystemBaseHardware_GetModelNumber_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemBaseHardware_GetModelNumber_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOperatingSystemBaseHardware_GetModelNumber_Statics::OperatingSystemBaseHardware_eventGetModelNumber_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOperatingSystemBaseHardware_GetModelNumber()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystemBaseHardware_GetModelNumber_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOperatingSystemBaseHardware_K2_OnValidate_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutError;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOperatingSystemBaseHardware_K2_OnValidate_Statics::NewProp_OutError = { "OutError", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemBaseHardware_eventK2_OnValidate_Parms, OutError), Z_Construct_UScriptStruct_FGenericError, METADATA_PARAMS(0, nullptr) }; // 4286029882
	void Z_Construct_UFunction_UOperatingSystemBaseHardware_K2_OnValidate_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OperatingSystemBaseHardware_eventK2_OnValidate_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOperatingSystemBaseHardware_K2_OnValidate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OperatingSystemBaseHardware_eventK2_OnValidate_Parms), &Z_Construct_UFunction_UOperatingSystemBaseHardware_K2_OnValidate_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperatingSystemBaseHardware_K2_OnValidate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemBaseHardware_K2_OnValidate_Statics::NewProp_OutError,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemBaseHardware_K2_OnValidate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemBaseHardware_K2_OnValidate_Statics::Function_MetaDataParams[] = {
		{ "Category", "OperatingSystemHardware" },
		{ "DisplayName", "On Validate" },
		{ "ModuleRelativePath", "Public/Hardware/OperatingSystemBaseHardware.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystemBaseHardware_K2_OnValidate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystemBaseHardware, nullptr, "K2_OnValidate", nullptr, nullptr, Z_Construct_UFunction_UOperatingSystemBaseHardware_K2_OnValidate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemBaseHardware_K2_OnValidate_Statics::PropPointers), sizeof(OperatingSystemBaseHardware_eventK2_OnValidate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48480C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemBaseHardware_K2_OnValidate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystemBaseHardware_K2_OnValidate_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemBaseHardware_K2_OnValidate_Statics::PropPointers) < 2048);
	static_assert(sizeof(OperatingSystemBaseHardware_eventK2_OnValidate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOperatingSystemBaseHardware_K2_OnValidate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystemBaseHardware_K2_OnValidate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOperatingSystemBaseHardware);
	UClass* Z_Construct_UClass_UOperatingSystemBaseHardware_NoRegister()
	{
		return UOperatingSystemBaseHardware::StaticClass();
	}
	struct Z_Construct_UClass_UOperatingSystemBaseHardware_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MadeBy_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_MadeBy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ModelNumber_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_ModelNumber;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HardwareTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HardwareTag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasBlueprintValidateFunction_MetaData[];
#endif
		static void NewProp_bHasBlueprintValidateFunction_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasBlueprintValidateFunction;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOperatingSystemBaseHardware_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_OperatingSystemSimulator,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemBaseHardware_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UOperatingSystemBaseHardware_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOperatingSystemBaseHardware_GetHardwareMadeBy, "GetHardwareMadeBy" }, // 2644922977
		{ &Z_Construct_UFunction_UOperatingSystemBaseHardware_GetHardwareName, "GetHardwareName" }, // 735194122
		{ &Z_Construct_UFunction_UOperatingSystemBaseHardware_GetModelNumber, "GetModelNumber" }, // 1258745706
		{ &Z_Construct_UFunction_UOperatingSystemBaseHardware_K2_OnValidate, "K2_OnValidate" }, // 3772563628
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemBaseHardware_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystemBaseHardware_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Hardware/OperatingSystemBaseHardware.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Hardware/OperatingSystemBaseHardware.h" },
		{ "NotBlueprintType", "true" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystemBaseHardware_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "OperatingSystemHardware" },
		{ "Comment", "/** Name of this hardware. */" },
		{ "ModuleRelativePath", "Public/Hardware/OperatingSystemBaseHardware.h" },
		{ "ToolTip", "Name of this hardware." },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UOperatingSystemBaseHardware_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOperatingSystemBaseHardware, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemBaseHardware_Statics::NewProp_Name_MetaData), Z_Construct_UClass_UOperatingSystemBaseHardware_Statics::NewProp_Name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystemBaseHardware_Statics::NewProp_MadeBy_MetaData[] = {
		{ "Category", "OperatingSystemHardware" },
		{ "Comment", "/** Which company made this? */" },
		{ "ModuleRelativePath", "Public/Hardware/OperatingSystemBaseHardware.h" },
		{ "ToolTip", "Which company made this?" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UOperatingSystemBaseHardware_Statics::NewProp_MadeBy = { "MadeBy", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOperatingSystemBaseHardware, MadeBy), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemBaseHardware_Statics::NewProp_MadeBy_MetaData), Z_Construct_UClass_UOperatingSystemBaseHardware_Statics::NewProp_MadeBy_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystemBaseHardware_Statics::NewProp_ModelNumber_MetaData[] = {
		{ "Category", "OperatingSystemHardware" },
		{ "Comment", "/** A model number. */" },
		{ "ModuleRelativePath", "Public/Hardware/OperatingSystemBaseHardware.h" },
		{ "ToolTip", "A model number." },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UOperatingSystemBaseHardware_Statics::NewProp_ModelNumber = { "ModelNumber", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOperatingSystemBaseHardware, ModelNumber), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemBaseHardware_Statics::NewProp_ModelNumber_MetaData), Z_Construct_UClass_UOperatingSystemBaseHardware_Statics::NewProp_ModelNumber_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystemBaseHardware_Statics::NewProp_HardwareTag_MetaData[] = {
		{ "Categories", "OperatingSystem.Hardware.Type" },
		{ "Category", "OperatingSystemHardware" },
		{ "ModuleRelativePath", "Public/Hardware/OperatingSystemBaseHardware.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOperatingSystemBaseHardware_Statics::NewProp_HardwareTag = { "HardwareTag", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOperatingSystemBaseHardware, HardwareTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemBaseHardware_Statics::NewProp_HardwareTag_MetaData), Z_Construct_UClass_UOperatingSystemBaseHardware_Statics::NewProp_HardwareTag_MetaData) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystemBaseHardware_Statics::NewProp_bHasBlueprintValidateFunction_MetaData[] = {
		{ "ModuleRelativePath", "Public/Hardware/OperatingSystemBaseHardware.h" },
	};
#endif
	void Z_Construct_UClass_UOperatingSystemBaseHardware_Statics::NewProp_bHasBlueprintValidateFunction_SetBit(void* Obj)
	{
		((UOperatingSystemBaseHardware*)Obj)->bHasBlueprintValidateFunction = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOperatingSystemBaseHardware_Statics::NewProp_bHasBlueprintValidateFunction = { "bHasBlueprintValidateFunction", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOperatingSystemBaseHardware), &Z_Construct_UClass_UOperatingSystemBaseHardware_Statics::NewProp_bHasBlueprintValidateFunction_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemBaseHardware_Statics::NewProp_bHasBlueprintValidateFunction_MetaData), Z_Construct_UClass_UOperatingSystemBaseHardware_Statics::NewProp_bHasBlueprintValidateFunction_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOperatingSystemBaseHardware_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystemBaseHardware_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystemBaseHardware_Statics::NewProp_MadeBy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystemBaseHardware_Statics::NewProp_ModelNumber,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystemBaseHardware_Statics::NewProp_HardwareTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystemBaseHardware_Statics::NewProp_bHasBlueprintValidateFunction,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOperatingSystemBaseHardware_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOperatingSystemBaseHardware>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOperatingSystemBaseHardware_Statics::ClassParams = {
		&UOperatingSystemBaseHardware::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UOperatingSystemBaseHardware_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemBaseHardware_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemBaseHardware_Statics::Class_MetaDataParams), Z_Construct_UClass_UOperatingSystemBaseHardware_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemBaseHardware_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UOperatingSystemBaseHardware()
	{
		if (!Z_Registration_Info_UClass_UOperatingSystemBaseHardware.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOperatingSystemBaseHardware.OuterSingleton, Z_Construct_UClass_UOperatingSystemBaseHardware_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOperatingSystemBaseHardware.OuterSingleton;
	}
	template<> OPERATINGSYSTEMSIMULATOR_API UClass* StaticClass<UOperatingSystemBaseHardware>()
	{
		return UOperatingSystemBaseHardware::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOperatingSystemBaseHardware);
	UOperatingSystemBaseHardware::~UOperatingSystemBaseHardware() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Hardware_OperatingSystemBaseHardware_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Hardware_OperatingSystemBaseHardware_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOperatingSystemBaseHardware, UOperatingSystemBaseHardware::StaticClass, TEXT("UOperatingSystemBaseHardware"), &Z_Registration_Info_UClass_UOperatingSystemBaseHardware, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOperatingSystemBaseHardware), 2152684207U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Hardware_OperatingSystemBaseHardware_h_3921320452(TEXT("/Script/OperatingSystemSimulator"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Hardware_OperatingSystemBaseHardware_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Hardware_OperatingSystemBaseHardware_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
