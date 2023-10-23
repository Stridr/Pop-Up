// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OperatingSystemSimulator/Public/Files/OperatingSystemFile.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOperatingSystemFile() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	OPERATINGSYSTEMSIMULATOR_API UClass* Z_Construct_UClass_UOperatingSystemBaseProgram_NoRegister();
	OPERATINGSYSTEMSIMULATOR_API UClass* Z_Construct_UClass_UOperatingSystemExplorerInterface_NoRegister();
	OPERATINGSYSTEMSIMULATOR_API UClass* Z_Construct_UClass_UOperatingSystemFile();
	OPERATINGSYSTEMSIMULATOR_API UClass* Z_Construct_UClass_UOperatingSystemFile_NoRegister();
	OPERATINGSYSTEMSIMULATOR_API UClass* Z_Construct_UClass_UOperatingSystemFileIconWidget_NoRegister();
	OPERATINGSYSTEMSIMULATOR_API UClass* Z_Construct_UClass_UOperatingSystemFileWidget_NoRegister();
	UPackage* Z_Construct_UPackage__Script_OperatingSystemSimulator();
// End Cross Module References
	DEFINE_FUNCTION(UOperatingSystemFile::execIsSameFile)
	{
		P_GET_OBJECT(UOperatingSystemFile,Z_Param_OtherFile);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsSameFile(Z_Param_OtherFile);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOperatingSystemFile::execGetExtension)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->GetExtension();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOperatingSystemFile::execGetFileName)
	{
		P_GET_UBOOL(Z_Param_bWithExtension);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->GetFileName(Z_Param_bWithExtension);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOperatingSystemFile::execCreateIconWidget)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UOperatingSystemFileIconWidget**)Z_Param__Result=P_THIS->CreateIconWidget();
		P_NATIVE_END;
	}
	static FName NAME_UOperatingSystemFile_K2_OnOpen = FName(TEXT("K2_OnOpen"));
	void UOperatingSystemFile::K2_OnOpen()
	{
		ProcessEvent(FindFunctionChecked(NAME_UOperatingSystemFile_K2_OnOpen),NULL);
	}
	void UOperatingSystemFile::StaticRegisterNativesUOperatingSystemFile()
	{
		UClass* Class = UOperatingSystemFile::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateIconWidget", &UOperatingSystemFile::execCreateIconWidget },
			{ "GetExtension", &UOperatingSystemFile::execGetExtension },
			{ "GetFileName", &UOperatingSystemFile::execGetFileName },
			{ "IsSameFile", &UOperatingSystemFile::execIsSameFile },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOperatingSystemFile_CreateIconWidget_Statics
	{
		struct OperatingSystemFile_eventCreateIconWidget_Parms
		{
			UOperatingSystemFileIconWidget* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemFile_CreateIconWidget_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOperatingSystemFile_CreateIconWidget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemFile_eventCreateIconWidget_Parms, ReturnValue), Z_Construct_UClass_UOperatingSystemFileIconWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemFile_CreateIconWidget_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UOperatingSystemFile_CreateIconWidget_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperatingSystemFile_CreateIconWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemFile_CreateIconWidget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemFile_CreateIconWidget_Statics::Function_MetaDataParams[] = {
		{ "Category", "OperatingSystemFile" },
		{ "ModuleRelativePath", "Public/Files/OperatingSystemFile.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystemFile_CreateIconWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystemFile, nullptr, "CreateIconWidget", nullptr, nullptr, Z_Construct_UFunction_UOperatingSystemFile_CreateIconWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemFile_CreateIconWidget_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOperatingSystemFile_CreateIconWidget_Statics::OperatingSystemFile_eventCreateIconWidget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemFile_CreateIconWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystemFile_CreateIconWidget_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemFile_CreateIconWidget_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOperatingSystemFile_CreateIconWidget_Statics::OperatingSystemFile_eventCreateIconWidget_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOperatingSystemFile_CreateIconWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystemFile_CreateIconWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOperatingSystemFile_GetExtension_Statics
	{
		struct OperatingSystemFile_eventGetExtension_Parms
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
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UOperatingSystemFile_GetExtension_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemFile_eventGetExtension_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperatingSystemFile_GetExtension_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemFile_GetExtension_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemFile_GetExtension_Statics::Function_MetaDataParams[] = {
		{ "Category", "OperatingSystemFile" },
		{ "ModuleRelativePath", "Public/Files/OperatingSystemFile.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystemFile_GetExtension_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystemFile, nullptr, "GetExtension", nullptr, nullptr, Z_Construct_UFunction_UOperatingSystemFile_GetExtension_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemFile_GetExtension_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOperatingSystemFile_GetExtension_Statics::OperatingSystemFile_eventGetExtension_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemFile_GetExtension_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystemFile_GetExtension_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemFile_GetExtension_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOperatingSystemFile_GetExtension_Statics::OperatingSystemFile_eventGetExtension_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOperatingSystemFile_GetExtension()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystemFile_GetExtension_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOperatingSystemFile_GetFileName_Statics
	{
		struct OperatingSystemFile_eventGetFileName_Parms
		{
			bool bWithExtension;
			FText ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bWithExtension_MetaData[];
#endif
		static void NewProp_bWithExtension_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWithExtension;
		static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemFile_GetFileName_Statics::NewProp_bWithExtension_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UOperatingSystemFile_GetFileName_Statics::NewProp_bWithExtension_SetBit(void* Obj)
	{
		((OperatingSystemFile_eventGetFileName_Parms*)Obj)->bWithExtension = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOperatingSystemFile_GetFileName_Statics::NewProp_bWithExtension = { "bWithExtension", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OperatingSystemFile_eventGetFileName_Parms), &Z_Construct_UFunction_UOperatingSystemFile_GetFileName_Statics::NewProp_bWithExtension_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemFile_GetFileName_Statics::NewProp_bWithExtension_MetaData), Z_Construct_UFunction_UOperatingSystemFile_GetFileName_Statics::NewProp_bWithExtension_MetaData) };
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UOperatingSystemFile_GetFileName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemFile_eventGetFileName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperatingSystemFile_GetFileName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemFile_GetFileName_Statics::NewProp_bWithExtension,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemFile_GetFileName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemFile_GetFileName_Statics::Function_MetaDataParams[] = {
		{ "Category", "OperatingSystemFile" },
		{ "CPP_Default_bWithExtension", "true" },
		{ "ModuleRelativePath", "Public/Files/OperatingSystemFile.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystemFile_GetFileName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystemFile, nullptr, "GetFileName", nullptr, nullptr, Z_Construct_UFunction_UOperatingSystemFile_GetFileName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemFile_GetFileName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOperatingSystemFile_GetFileName_Statics::OperatingSystemFile_eventGetFileName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemFile_GetFileName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystemFile_GetFileName_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemFile_GetFileName_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOperatingSystemFile_GetFileName_Statics::OperatingSystemFile_eventGetFileName_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOperatingSystemFile_GetFileName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystemFile_GetFileName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOperatingSystemFile_IsSameFile_Statics
	{
		struct OperatingSystemFile_eventIsSameFile_Parms
		{
			const UOperatingSystemFile* OtherFile;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherFile_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherFile;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemFile_IsSameFile_Statics::NewProp_OtherFile_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOperatingSystemFile_IsSameFile_Statics::NewProp_OtherFile = { "OtherFile", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemFile_eventIsSameFile_Parms, OtherFile), Z_Construct_UClass_UOperatingSystemFile_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemFile_IsSameFile_Statics::NewProp_OtherFile_MetaData), Z_Construct_UFunction_UOperatingSystemFile_IsSameFile_Statics::NewProp_OtherFile_MetaData) };
	void Z_Construct_UFunction_UOperatingSystemFile_IsSameFile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OperatingSystemFile_eventIsSameFile_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOperatingSystemFile_IsSameFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OperatingSystemFile_eventIsSameFile_Parms), &Z_Construct_UFunction_UOperatingSystemFile_IsSameFile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperatingSystemFile_IsSameFile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemFile_IsSameFile_Statics::NewProp_OtherFile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemFile_IsSameFile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemFile_IsSameFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "OperatingSystemFile" },
		{ "ModuleRelativePath", "Public/Files/OperatingSystemFile.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystemFile_IsSameFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystemFile, nullptr, "IsSameFile", nullptr, nullptr, Z_Construct_UFunction_UOperatingSystemFile_IsSameFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemFile_IsSameFile_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOperatingSystemFile_IsSameFile_Statics::OperatingSystemFile_eventIsSameFile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemFile_IsSameFile_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystemFile_IsSameFile_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemFile_IsSameFile_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOperatingSystemFile_IsSameFile_Statics::OperatingSystemFile_eventIsSameFile_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOperatingSystemFile_IsSameFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystemFile_IsSameFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOperatingSystemFile_K2_OnOpen_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemFile_K2_OnOpen_Statics::Function_MetaDataParams[] = {
		{ "Category", "OperatingSystemFile" },
		{ "DisplayName", "OnOpen" },
		{ "ModuleRelativePath", "Public/Files/OperatingSystemFile.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystemFile_K2_OnOpen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystemFile, nullptr, "K2_OnOpen", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemFile_K2_OnOpen_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystemFile_K2_OnOpen_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UOperatingSystemFile_K2_OnOpen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystemFile_K2_OnOpen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOperatingSystemFile);
	UClass* Z_Construct_UClass_UOperatingSystemFile_NoRegister()
	{
		return UOperatingSystemFile::StaticClass();
	}
	struct Z_Construct_UClass_UOperatingSystemFile_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Extension_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Extension;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IconObject_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_IconObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpaceRequiredInMB_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SpaceRequiredInMB;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsDeletable_MetaData[];
#endif
		static void NewProp_bIsDeletable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsDeletable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsMovable_MetaData[];
#endif
		static void NewProp_bIsMovable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsMovable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetProgramClass_MetaData[];
#endif
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_TargetProgramClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IconWidgetClass_MetaData[];
#endif
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_IconWidgetClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WidgetClass_MetaData[];
#endif
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_WidgetClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParentProgram_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_ParentProgram;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FileWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_FileWidget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParentExplorerInterface_MetaData[];
#endif
		static const UECodeGen_Private::FInterfacePropertyParams NewProp_ParentExplorerInterface;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasBlueprintOnOpen_MetaData[];
#endif
		static void NewProp_bHasBlueprintOnOpen_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasBlueprintOnOpen;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOperatingSystemFile_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_OperatingSystemSimulator,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemFile_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UOperatingSystemFile_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOperatingSystemFile_CreateIconWidget, "CreateIconWidget" }, // 336356042
		{ &Z_Construct_UFunction_UOperatingSystemFile_GetExtension, "GetExtension" }, // 1661604937
		{ &Z_Construct_UFunction_UOperatingSystemFile_GetFileName, "GetFileName" }, // 3122074650
		{ &Z_Construct_UFunction_UOperatingSystemFile_IsSameFile, "IsSameFile" }, // 3757109125
		{ &Z_Construct_UFunction_UOperatingSystemFile_K2_OnOpen, "K2_OnOpen" }, // 246162842
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemFile_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystemFile_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Files/OperatingSystemFile.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Files/OperatingSystemFile.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystemFile_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "OperatingSystemFile" },
		{ "Comment", "/** Name of this file without extension. */" },
		{ "ModuleRelativePath", "Public/Files/OperatingSystemFile.h" },
		{ "ToolTip", "Name of this file without extension." },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UOperatingSystemFile_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOperatingSystemFile, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemFile_Statics::NewProp_Name_MetaData), Z_Construct_UClass_UOperatingSystemFile_Statics::NewProp_Name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystemFile_Statics::NewProp_Extension_MetaData[] = {
		{ "Category", "OperatingSystemFile" },
		{ "ModuleRelativePath", "Public/Files/OperatingSystemFile.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UOperatingSystemFile_Statics::NewProp_Extension = { "Extension", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOperatingSystemFile, Extension), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemFile_Statics::NewProp_Extension_MetaData), Z_Construct_UClass_UOperatingSystemFile_Statics::NewProp_Extension_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystemFile_Statics::NewProp_IconObject_MetaData[] = {
		{ "AllowedClasses", "Texture,MaterialInterface" },
		{ "Category", "OperatingSystemFile" },
		{ "Comment", "/** Obvious right? C'mon its just an Icon. What you need a tooltip for \xc2\xaf\\_(\xe3\x83\x84)_/\xc2\xaf */" },
		{ "DisplayThumbnail", "true" },
		{ "ModuleRelativePath", "Public/Files/OperatingSystemFile.h" },
		{ "ToolTip", "Obvious right? C'mon its just an Icon. What you need a tooltip for \xc2\xaf\\_(\xe3\x83\x84)_/\xc2\xaf" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UOperatingSystemFile_Statics::NewProp_IconObject = { "IconObject", nullptr, (EPropertyFlags)0x0024080000010015, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOperatingSystemFile, IconObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemFile_Statics::NewProp_IconObject_MetaData), Z_Construct_UClass_UOperatingSystemFile_Statics::NewProp_IconObject_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystemFile_Statics::NewProp_SpaceRequiredInMB_MetaData[] = {
		{ "Category", "OperatingSystemFile" },
		{ "Comment", "/** How much space does this file require on hard disk. */" },
		{ "ForceUnits", "MB" },
		{ "ModuleRelativePath", "Public/Files/OperatingSystemFile.h" },
		{ "ToolTip", "How much space does this file require on hard disk." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOperatingSystemFile_Statics::NewProp_SpaceRequiredInMB = { "SpaceRequiredInMB", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOperatingSystemFile, SpaceRequiredInMB), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemFile_Statics::NewProp_SpaceRequiredInMB_MetaData), Z_Construct_UClass_UOperatingSystemFile_Statics::NewProp_SpaceRequiredInMB_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystemFile_Statics::NewProp_bIsDeletable_MetaData[] = {
		{ "Category", "OperatingSystemFile" },
		{ "ModuleRelativePath", "Public/Files/OperatingSystemFile.h" },
	};
#endif
	void Z_Construct_UClass_UOperatingSystemFile_Statics::NewProp_bIsDeletable_SetBit(void* Obj)
	{
		((UOperatingSystemFile*)Obj)->bIsDeletable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOperatingSystemFile_Statics::NewProp_bIsDeletable = { "bIsDeletable", nullptr, (EPropertyFlags)0x00200c0000010001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UOperatingSystemFile), &Z_Construct_UClass_UOperatingSystemFile_Statics::NewProp_bIsDeletable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemFile_Statics::NewProp_bIsDeletable_MetaData), Z_Construct_UClass_UOperatingSystemFile_Statics::NewProp_bIsDeletable_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystemFile_Statics::NewProp_bIsMovable_MetaData[] = {
		{ "Category", "OperatingSystemFile" },
		{ "ModuleRelativePath", "Public/Files/OperatingSystemFile.h" },
	};
#endif
	void Z_Construct_UClass_UOperatingSystemFile_Statics::NewProp_bIsMovable_SetBit(void* Obj)
	{
		((UOperatingSystemFile*)Obj)->bIsMovable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOperatingSystemFile_Statics::NewProp_bIsMovable = { "bIsMovable", nullptr, (EPropertyFlags)0x00200c0000010001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UOperatingSystemFile), &Z_Construct_UClass_UOperatingSystemFile_Statics::NewProp_bIsMovable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemFile_Statics::NewProp_bIsMovable_MetaData), Z_Construct_UClass_UOperatingSystemFile_Statics::NewProp_bIsMovable_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystemFile_Statics::NewProp_TargetProgramClass_MetaData[] = {
		{ "Category", "OperatingSystemFile" },
		{ "ModuleRelativePath", "Public/Files/OperatingSystemFile.h" },
	};
#endif
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UOperatingSystemFile_Statics::NewProp_TargetProgramClass = { "TargetProgramClass", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOperatingSystemFile, TargetProgramClass), Z_Construct_UClass_UOperatingSystemBaseProgram_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemFile_Statics::NewProp_TargetProgramClass_MetaData), Z_Construct_UClass_UOperatingSystemFile_Statics::NewProp_TargetProgramClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystemFile_Statics::NewProp_IconWidgetClass_MetaData[] = {
		{ "Category", "OperatingSystemFileWidgets" },
		{ "ModuleRelativePath", "Public/Files/OperatingSystemFile.h" },
	};
#endif
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UOperatingSystemFile_Statics::NewProp_IconWidgetClass = { "IconWidgetClass", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOperatingSystemFile, IconWidgetClass), Z_Construct_UClass_UOperatingSystemFileIconWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemFile_Statics::NewProp_IconWidgetClass_MetaData), Z_Construct_UClass_UOperatingSystemFile_Statics::NewProp_IconWidgetClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystemFile_Statics::NewProp_WidgetClass_MetaData[] = {
		{ "Category", "OperatingSystemFileWidgets" },
		{ "ModuleRelativePath", "Public/Files/OperatingSystemFile.h" },
	};
#endif
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UOperatingSystemFile_Statics::NewProp_WidgetClass = { "WidgetClass", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOperatingSystemFile, WidgetClass), Z_Construct_UClass_UOperatingSystemFileWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemFile_Statics::NewProp_WidgetClass_MetaData), Z_Construct_UClass_UOperatingSystemFile_Statics::NewProp_WidgetClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystemFile_Statics::NewProp_ParentProgram_MetaData[] = {
		{ "Category", "OperatingSystemFileDebug" },
		{ "ModuleRelativePath", "Public/Files/OperatingSystemFile.h" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UOperatingSystemFile_Statics::NewProp_ParentProgram = { "ParentProgram", nullptr, (EPropertyFlags)0x0024080000020815, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOperatingSystemFile, ParentProgram), Z_Construct_UClass_UOperatingSystemBaseProgram_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemFile_Statics::NewProp_ParentProgram_MetaData), Z_Construct_UClass_UOperatingSystemFile_Statics::NewProp_ParentProgram_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystemFile_Statics::NewProp_FileWidget_MetaData[] = {
		{ "Category", "OperatingSystemFileDebug" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Files/OperatingSystemFile.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UOperatingSystemFile_Statics::NewProp_FileWidget = { "FileWidget", nullptr, (EPropertyFlags)0x00240800000a081d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOperatingSystemFile, FileWidget), Z_Construct_UClass_UOperatingSystemFileWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemFile_Statics::NewProp_FileWidget_MetaData), Z_Construct_UClass_UOperatingSystemFile_Statics::NewProp_FileWidget_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystemFile_Statics::NewProp_ParentExplorerInterface_MetaData[] = {
		{ "ModuleRelativePath", "Public/Files/OperatingSystemFile.h" },
	};
#endif
	const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_UOperatingSystemFile_Statics::NewProp_ParentExplorerInterface = { "ParentExplorerInterface", nullptr, (EPropertyFlags)0x0024080000002000, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOperatingSystemFile, ParentExplorerInterface), Z_Construct_UClass_UOperatingSystemExplorerInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemFile_Statics::NewProp_ParentExplorerInterface_MetaData), Z_Construct_UClass_UOperatingSystemFile_Statics::NewProp_ParentExplorerInterface_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystemFile_Statics::NewProp_bHasBlueprintOnOpen_MetaData[] = {
		{ "ModuleRelativePath", "Public/Files/OperatingSystemFile.h" },
	};
#endif
	void Z_Construct_UClass_UOperatingSystemFile_Statics::NewProp_bHasBlueprintOnOpen_SetBit(void* Obj)
	{
		((UOperatingSystemFile*)Obj)->bHasBlueprintOnOpen = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOperatingSystemFile_Statics::NewProp_bHasBlueprintOnOpen = { "bHasBlueprintOnOpen", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOperatingSystemFile), &Z_Construct_UClass_UOperatingSystemFile_Statics::NewProp_bHasBlueprintOnOpen_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemFile_Statics::NewProp_bHasBlueprintOnOpen_MetaData), Z_Construct_UClass_UOperatingSystemFile_Statics::NewProp_bHasBlueprintOnOpen_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOperatingSystemFile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystemFile_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystemFile_Statics::NewProp_Extension,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystemFile_Statics::NewProp_IconObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystemFile_Statics::NewProp_SpaceRequiredInMB,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystemFile_Statics::NewProp_bIsDeletable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystemFile_Statics::NewProp_bIsMovable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystemFile_Statics::NewProp_TargetProgramClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystemFile_Statics::NewProp_IconWidgetClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystemFile_Statics::NewProp_WidgetClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystemFile_Statics::NewProp_ParentProgram,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystemFile_Statics::NewProp_FileWidget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystemFile_Statics::NewProp_ParentExplorerInterface,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystemFile_Statics::NewProp_bHasBlueprintOnOpen,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOperatingSystemFile_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOperatingSystemFile>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOperatingSystemFile_Statics::ClassParams = {
		&UOperatingSystemFile::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UOperatingSystemFile_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemFile_Statics::PropPointers),
		0,
		0x008000A1u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemFile_Statics::Class_MetaDataParams), Z_Construct_UClass_UOperatingSystemFile_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemFile_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UOperatingSystemFile()
	{
		if (!Z_Registration_Info_UClass_UOperatingSystemFile.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOperatingSystemFile.OuterSingleton, Z_Construct_UClass_UOperatingSystemFile_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOperatingSystemFile.OuterSingleton;
	}
	template<> OPERATINGSYSTEMSIMULATOR_API UClass* StaticClass<UOperatingSystemFile>()
	{
		return UOperatingSystemFile::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOperatingSystemFile);
	UOperatingSystemFile::~UOperatingSystemFile() {}
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Files_OperatingSystemFile_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Files_OperatingSystemFile_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOperatingSystemFile, UOperatingSystemFile::StaticClass, TEXT("UOperatingSystemFile"), &Z_Registration_Info_UClass_UOperatingSystemFile, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOperatingSystemFile), 1321406238U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Files_OperatingSystemFile_h_2815333380(TEXT("/Script/OperatingSystemSimulator"),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Files_OperatingSystemFile_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Files_OperatingSystemFile_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
