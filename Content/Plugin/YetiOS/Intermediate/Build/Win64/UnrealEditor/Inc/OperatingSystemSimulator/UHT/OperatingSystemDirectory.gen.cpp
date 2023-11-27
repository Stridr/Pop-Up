// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OperatingSystemSimulator/Public/Core/OperatingSystemDirectory.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOperatingSystemDirectory() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	OPERATINGSYSTEMSIMULATOR_API UClass* Z_Construct_UClass_UOperatingSystem_NoRegister();
	OPERATINGSYSTEMSIMULATOR_API UClass* Z_Construct_UClass_UOperatingSystemDirectoriesCollection_NoRegister();
	OPERATINGSYSTEMSIMULATOR_API UClass* Z_Construct_UClass_UOperatingSystemDirectory();
	OPERATINGSYSTEMSIMULATOR_API UClass* Z_Construct_UClass_UOperatingSystemDirectory_NoRegister();
	OPERATINGSYSTEMSIMULATOR_API UClass* Z_Construct_UClass_UOperatingSystemExplorerInterface_NoRegister();
	OPERATINGSYSTEMSIMULATOR_API UClass* Z_Construct_UClass_UOperatingSystemFile_NoRegister();
	OPERATINGSYSTEMSIMULATOR_API UClass* Z_Construct_UClass_UOperatingSystemPartition_NoRegister();
	UPackage* Z_Construct_UPackage__Script_OperatingSystemSimulator();
// End Cross Module References
	DEFINE_FUNCTION(UOperatingSystemDirectory::execGetAllFiles)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_WithExtension);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UOperatingSystemFile*>*)Z_Param__Result=P_THIS->GetAllFiles(Z_Param_WithExtension);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOperatingSystemDirectory::execGetChildDirectory)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_TargetChildDirectoryName);
		P_GET_UBOOL(Z_Param_bRecursive);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TScriptInterface<IOperatingSystemExplorerInterface>*)Z_Param__Result=P_THIS->GetChildDirectory(Z_Param_TargetChildDirectoryName,Z_Param_bRecursive);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOperatingSystemDirectory::execFindDirectoryByTag)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_DirectoryTag);
		P_GET_UBOOL(Z_Param_bRecursive);
		P_GET_OBJECT_REF(UOperatingSystemDirectory,Z_Param_Out_OutDirectory);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->FindDirectoryByTag(Z_Param_DirectoryTag,Z_Param_bRecursive,Z_Param_Out_OutDirectory);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOperatingSystemDirectory::execGetInterfaceDisplayName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->GetInterfaceDisplayName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOperatingSystemDirectory::execIsPartition)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsPartition();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOperatingSystemDirectory::execGetParentExplorerInterface)
	{
		P_GET_TINTERFACE_REF(IOperatingSystemExplorerInterface,Z_Param_Out_OutInterface);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetParentExplorerInterface(Z_Param_Out_OutInterface);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOperatingSystemDirectory::execGetChildDirectories)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UOperatingSystemDirectory*>*)Z_Param__Result=P_THIS->GetChildDirectories();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOperatingSystemDirectory::execGetDirectoryIconObject)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UObject**)Z_Param__Result=P_THIS->GetDirectoryIconObject();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOperatingSystemDirectory::execIsSystemDirectory)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsSystemDirectory();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOperatingSystemDirectory::execGetDirectoryName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->GetDirectoryName();
		P_NATIVE_END;
	}
	void UOperatingSystemDirectory::StaticRegisterNativesUOperatingSystemDirectory()
	{
		UClass* Class = UOperatingSystemDirectory::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FindDirectoryByTag", &UOperatingSystemDirectory::execFindDirectoryByTag },
			{ "GetAllFiles", &UOperatingSystemDirectory::execGetAllFiles },
			{ "GetChildDirectories", &UOperatingSystemDirectory::execGetChildDirectories },
			{ "GetChildDirectory", &UOperatingSystemDirectory::execGetChildDirectory },
			{ "GetDirectoryIconObject", &UOperatingSystemDirectory::execGetDirectoryIconObject },
			{ "GetDirectoryName", &UOperatingSystemDirectory::execGetDirectoryName },
			{ "GetInterfaceDisplayName", &UOperatingSystemDirectory::execGetInterfaceDisplayName },
			{ "GetParentExplorerInterface", &UOperatingSystemDirectory::execGetParentExplorerInterface },
			{ "IsPartition", &UOperatingSystemDirectory::execIsPartition },
			{ "IsSystemDirectory", &UOperatingSystemDirectory::execIsSystemDirectory },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOperatingSystemDirectory_FindDirectoryByTag_Statics
	{
		struct OperatingSystemDirectory_eventFindDirectoryByTag_Parms
		{
			FGameplayTag DirectoryTag;
			bool bRecursive;
			UOperatingSystemDirectory* OutDirectory;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DirectoryTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DirectoryTag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRecursive_MetaData[];
#endif
		static void NewProp_bRecursive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRecursive;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OutDirectory;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemDirectory_FindDirectoryByTag_Statics::NewProp_DirectoryTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOperatingSystemDirectory_FindDirectoryByTag_Statics::NewProp_DirectoryTag = { "DirectoryTag", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemDirectory_eventFindDirectoryByTag_Parms, DirectoryTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemDirectory_FindDirectoryByTag_Statics::NewProp_DirectoryTag_MetaData), Z_Construct_UFunction_UOperatingSystemDirectory_FindDirectoryByTag_Statics::NewProp_DirectoryTag_MetaData) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemDirectory_FindDirectoryByTag_Statics::NewProp_bRecursive_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UOperatingSystemDirectory_FindDirectoryByTag_Statics::NewProp_bRecursive_SetBit(void* Obj)
	{
		((OperatingSystemDirectory_eventFindDirectoryByTag_Parms*)Obj)->bRecursive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOperatingSystemDirectory_FindDirectoryByTag_Statics::NewProp_bRecursive = { "bRecursive", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OperatingSystemDirectory_eventFindDirectoryByTag_Parms), &Z_Construct_UFunction_UOperatingSystemDirectory_FindDirectoryByTag_Statics::NewProp_bRecursive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemDirectory_FindDirectoryByTag_Statics::NewProp_bRecursive_MetaData), Z_Construct_UFunction_UOperatingSystemDirectory_FindDirectoryByTag_Statics::NewProp_bRecursive_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOperatingSystemDirectory_FindDirectoryByTag_Statics::NewProp_OutDirectory = { "OutDirectory", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemDirectory_eventFindDirectoryByTag_Parms, OutDirectory), Z_Construct_UClass_UOperatingSystemDirectory_NoRegister, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UOperatingSystemDirectory_FindDirectoryByTag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OperatingSystemDirectory_eventFindDirectoryByTag_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOperatingSystemDirectory_FindDirectoryByTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OperatingSystemDirectory_eventFindDirectoryByTag_Parms), &Z_Construct_UFunction_UOperatingSystemDirectory_FindDirectoryByTag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperatingSystemDirectory_FindDirectoryByTag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemDirectory_FindDirectoryByTag_Statics::NewProp_DirectoryTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemDirectory_FindDirectoryByTag_Statics::NewProp_bRecursive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemDirectory_FindDirectoryByTag_Statics::NewProp_OutDirectory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemDirectory_FindDirectoryByTag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemDirectory_FindDirectoryByTag_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/OperatingSystemDirectory.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystemDirectory_FindDirectoryByTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystemDirectory, nullptr, "FindDirectoryByTag", nullptr, nullptr, Z_Construct_UFunction_UOperatingSystemDirectory_FindDirectoryByTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemDirectory_FindDirectoryByTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOperatingSystemDirectory_FindDirectoryByTag_Statics::OperatingSystemDirectory_eventFindDirectoryByTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemDirectory_FindDirectoryByTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystemDirectory_FindDirectoryByTag_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemDirectory_FindDirectoryByTag_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOperatingSystemDirectory_FindDirectoryByTag_Statics::OperatingSystemDirectory_eventFindDirectoryByTag_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOperatingSystemDirectory_FindDirectoryByTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystemDirectory_FindDirectoryByTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOperatingSystemDirectory_GetAllFiles_Statics
	{
		struct OperatingSystemDirectory_eventGetAllFiles_Parms
		{
			FString WithExtension;
			TArray<UOperatingSystemFile*> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WithExtension_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_WithExtension;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemDirectory_GetAllFiles_Statics::NewProp_WithExtension_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOperatingSystemDirectory_GetAllFiles_Statics::NewProp_WithExtension = { "WithExtension", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemDirectory_eventGetAllFiles_Parms, WithExtension), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemDirectory_GetAllFiles_Statics::NewProp_WithExtension_MetaData), Z_Construct_UFunction_UOperatingSystemDirectory_GetAllFiles_Statics::NewProp_WithExtension_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOperatingSystemDirectory_GetAllFiles_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UOperatingSystemFile_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOperatingSystemDirectory_GetAllFiles_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemDirectory_eventGetAllFiles_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperatingSystemDirectory_GetAllFiles_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemDirectory_GetAllFiles_Statics::NewProp_WithExtension,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemDirectory_GetAllFiles_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemDirectory_GetAllFiles_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemDirectory_GetAllFiles_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/OperatingSystemDirectory.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystemDirectory_GetAllFiles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystemDirectory, nullptr, "GetAllFiles", nullptr, nullptr, Z_Construct_UFunction_UOperatingSystemDirectory_GetAllFiles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemDirectory_GetAllFiles_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOperatingSystemDirectory_GetAllFiles_Statics::OperatingSystemDirectory_eventGetAllFiles_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemDirectory_GetAllFiles_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystemDirectory_GetAllFiles_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemDirectory_GetAllFiles_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOperatingSystemDirectory_GetAllFiles_Statics::OperatingSystemDirectory_eventGetAllFiles_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOperatingSystemDirectory_GetAllFiles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystemDirectory_GetAllFiles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOperatingSystemDirectory_GetChildDirectories_Statics
	{
		struct OperatingSystemDirectory_eventGetChildDirectories_Parms
		{
			TArray<UOperatingSystemDirectory*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOperatingSystemDirectory_GetChildDirectories_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UOperatingSystemDirectory_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOperatingSystemDirectory_GetChildDirectories_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemDirectory_eventGetChildDirectories_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperatingSystemDirectory_GetChildDirectories_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemDirectory_GetChildDirectories_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemDirectory_GetChildDirectories_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemDirectory_GetChildDirectories_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// IOperatingSystemExplorerInterface functions\n" },
		{ "ModuleRelativePath", "Public/Core/OperatingSystemDirectory.h" },
		{ "ToolTip", "IOperatingSystemExplorerInterface functions" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystemDirectory_GetChildDirectories_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystemDirectory, nullptr, "GetChildDirectories", nullptr, nullptr, Z_Construct_UFunction_UOperatingSystemDirectory_GetChildDirectories_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemDirectory_GetChildDirectories_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOperatingSystemDirectory_GetChildDirectories_Statics::OperatingSystemDirectory_eventGetChildDirectories_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemDirectory_GetChildDirectories_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystemDirectory_GetChildDirectories_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemDirectory_GetChildDirectories_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOperatingSystemDirectory_GetChildDirectories_Statics::OperatingSystemDirectory_eventGetChildDirectories_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOperatingSystemDirectory_GetChildDirectories()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystemDirectory_GetChildDirectories_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOperatingSystemDirectory_GetChildDirectory_Statics
	{
		struct OperatingSystemDirectory_eventGetChildDirectory_Parms
		{
			FString TargetChildDirectoryName;
			bool bRecursive;
			TScriptInterface<IOperatingSystemExplorerInterface> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetChildDirectoryName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_TargetChildDirectoryName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRecursive_MetaData[];
#endif
		static void NewProp_bRecursive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRecursive;
		static const UECodeGen_Private::FInterfacePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemDirectory_GetChildDirectory_Statics::NewProp_TargetChildDirectoryName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOperatingSystemDirectory_GetChildDirectory_Statics::NewProp_TargetChildDirectoryName = { "TargetChildDirectoryName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemDirectory_eventGetChildDirectory_Parms, TargetChildDirectoryName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemDirectory_GetChildDirectory_Statics::NewProp_TargetChildDirectoryName_MetaData), Z_Construct_UFunction_UOperatingSystemDirectory_GetChildDirectory_Statics::NewProp_TargetChildDirectoryName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemDirectory_GetChildDirectory_Statics::NewProp_bRecursive_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UOperatingSystemDirectory_GetChildDirectory_Statics::NewProp_bRecursive_SetBit(void* Obj)
	{
		((OperatingSystemDirectory_eventGetChildDirectory_Parms*)Obj)->bRecursive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOperatingSystemDirectory_GetChildDirectory_Statics::NewProp_bRecursive = { "bRecursive", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OperatingSystemDirectory_eventGetChildDirectory_Parms), &Z_Construct_UFunction_UOperatingSystemDirectory_GetChildDirectory_Statics::NewProp_bRecursive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemDirectory_GetChildDirectory_Statics::NewProp_bRecursive_MetaData), Z_Construct_UFunction_UOperatingSystemDirectory_GetChildDirectory_Statics::NewProp_bRecursive_MetaData) };
	const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UOperatingSystemDirectory_GetChildDirectory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemDirectory_eventGetChildDirectory_Parms, ReturnValue), Z_Construct_UClass_UOperatingSystemExplorerInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperatingSystemDirectory_GetChildDirectory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemDirectory_GetChildDirectory_Statics::NewProp_TargetChildDirectoryName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemDirectory_GetChildDirectory_Statics::NewProp_bRecursive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemDirectory_GetChildDirectory_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemDirectory_GetChildDirectory_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/OperatingSystemDirectory.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystemDirectory_GetChildDirectory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystemDirectory, nullptr, "GetChildDirectory", nullptr, nullptr, Z_Construct_UFunction_UOperatingSystemDirectory_GetChildDirectory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemDirectory_GetChildDirectory_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOperatingSystemDirectory_GetChildDirectory_Statics::OperatingSystemDirectory_eventGetChildDirectory_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemDirectory_GetChildDirectory_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystemDirectory_GetChildDirectory_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemDirectory_GetChildDirectory_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOperatingSystemDirectory_GetChildDirectory_Statics::OperatingSystemDirectory_eventGetChildDirectory_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOperatingSystemDirectory_GetChildDirectory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystemDirectory_GetChildDirectory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOperatingSystemDirectory_GetDirectoryIconObject_Statics
	{
		struct OperatingSystemDirectory_eventGetDirectoryIconObject_Parms
		{
			UObject* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOperatingSystemDirectory_GetDirectoryIconObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemDirectory_eventGetDirectoryIconObject_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperatingSystemDirectory_GetDirectoryIconObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemDirectory_GetDirectoryIconObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemDirectory_GetDirectoryIconObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "OperatingSystemDirectory" },
		{ "ModuleRelativePath", "Public/Core/OperatingSystemDirectory.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystemDirectory_GetDirectoryIconObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystemDirectory, nullptr, "GetDirectoryIconObject", nullptr, nullptr, Z_Construct_UFunction_UOperatingSystemDirectory_GetDirectoryIconObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemDirectory_GetDirectoryIconObject_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOperatingSystemDirectory_GetDirectoryIconObject_Statics::OperatingSystemDirectory_eventGetDirectoryIconObject_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemDirectory_GetDirectoryIconObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystemDirectory_GetDirectoryIconObject_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemDirectory_GetDirectoryIconObject_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOperatingSystemDirectory_GetDirectoryIconObject_Statics::OperatingSystemDirectory_eventGetDirectoryIconObject_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOperatingSystemDirectory_GetDirectoryIconObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystemDirectory_GetDirectoryIconObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOperatingSystemDirectory_GetDirectoryName_Statics
	{
		struct OperatingSystemDirectory_eventGetDirectoryName_Parms
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
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UOperatingSystemDirectory_GetDirectoryName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemDirectory_eventGetDirectoryName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperatingSystemDirectory_GetDirectoryName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemDirectory_GetDirectoryName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemDirectory_GetDirectoryName_Statics::Function_MetaDataParams[] = {
		{ "Category", "OperatingSystemDirectory" },
		{ "ModuleRelativePath", "Public/Core/OperatingSystemDirectory.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystemDirectory_GetDirectoryName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystemDirectory, nullptr, "GetDirectoryName", nullptr, nullptr, Z_Construct_UFunction_UOperatingSystemDirectory_GetDirectoryName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemDirectory_GetDirectoryName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOperatingSystemDirectory_GetDirectoryName_Statics::OperatingSystemDirectory_eventGetDirectoryName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemDirectory_GetDirectoryName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystemDirectory_GetDirectoryName_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemDirectory_GetDirectoryName_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOperatingSystemDirectory_GetDirectoryName_Statics::OperatingSystemDirectory_eventGetDirectoryName_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOperatingSystemDirectory_GetDirectoryName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystemDirectory_GetDirectoryName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOperatingSystemDirectory_GetInterfaceDisplayName_Statics
	{
		struct OperatingSystemDirectory_eventGetInterfaceDisplayName_Parms
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
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UOperatingSystemDirectory_GetInterfaceDisplayName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemDirectory_eventGetInterfaceDisplayName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperatingSystemDirectory_GetInterfaceDisplayName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemDirectory_GetInterfaceDisplayName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemDirectory_GetInterfaceDisplayName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/OperatingSystemDirectory.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystemDirectory_GetInterfaceDisplayName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystemDirectory, nullptr, "GetInterfaceDisplayName", nullptr, nullptr, Z_Construct_UFunction_UOperatingSystemDirectory_GetInterfaceDisplayName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemDirectory_GetInterfaceDisplayName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOperatingSystemDirectory_GetInterfaceDisplayName_Statics::OperatingSystemDirectory_eventGetInterfaceDisplayName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemDirectory_GetInterfaceDisplayName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystemDirectory_GetInterfaceDisplayName_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemDirectory_GetInterfaceDisplayName_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOperatingSystemDirectory_GetInterfaceDisplayName_Statics::OperatingSystemDirectory_eventGetInterfaceDisplayName_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOperatingSystemDirectory_GetInterfaceDisplayName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystemDirectory_GetInterfaceDisplayName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOperatingSystemDirectory_GetParentExplorerInterface_Statics
	{
		struct OperatingSystemDirectory_eventGetParentExplorerInterface_Parms
		{
			TScriptInterface<IOperatingSystemExplorerInterface> OutInterface;
		};
		static const UECodeGen_Private::FInterfacePropertyParams NewProp_OutInterface;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UOperatingSystemDirectory_GetParentExplorerInterface_Statics::NewProp_OutInterface = { "OutInterface", nullptr, (EPropertyFlags)0x0014000000000180, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemDirectory_eventGetParentExplorerInterface_Parms, OutInterface), Z_Construct_UClass_UOperatingSystemExplorerInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperatingSystemDirectory_GetParentExplorerInterface_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemDirectory_GetParentExplorerInterface_Statics::NewProp_OutInterface,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemDirectory_GetParentExplorerInterface_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/OperatingSystemDirectory.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystemDirectory_GetParentExplorerInterface_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystemDirectory, nullptr, "GetParentExplorerInterface", nullptr, nullptr, Z_Construct_UFunction_UOperatingSystemDirectory_GetParentExplorerInterface_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemDirectory_GetParentExplorerInterface_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOperatingSystemDirectory_GetParentExplorerInterface_Statics::OperatingSystemDirectory_eventGetParentExplorerInterface_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemDirectory_GetParentExplorerInterface_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystemDirectory_GetParentExplorerInterface_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemDirectory_GetParentExplorerInterface_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOperatingSystemDirectory_GetParentExplorerInterface_Statics::OperatingSystemDirectory_eventGetParentExplorerInterface_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOperatingSystemDirectory_GetParentExplorerInterface()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystemDirectory_GetParentExplorerInterface_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOperatingSystemDirectory_IsPartition_Statics
	{
		struct OperatingSystemDirectory_eventIsPartition_Parms
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
	void Z_Construct_UFunction_UOperatingSystemDirectory_IsPartition_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OperatingSystemDirectory_eventIsPartition_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOperatingSystemDirectory_IsPartition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OperatingSystemDirectory_eventIsPartition_Parms), &Z_Construct_UFunction_UOperatingSystemDirectory_IsPartition_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperatingSystemDirectory_IsPartition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemDirectory_IsPartition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemDirectory_IsPartition_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/OperatingSystemDirectory.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystemDirectory_IsPartition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystemDirectory, nullptr, "IsPartition", nullptr, nullptr, Z_Construct_UFunction_UOperatingSystemDirectory_IsPartition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemDirectory_IsPartition_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOperatingSystemDirectory_IsPartition_Statics::OperatingSystemDirectory_eventIsPartition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemDirectory_IsPartition_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystemDirectory_IsPartition_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemDirectory_IsPartition_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOperatingSystemDirectory_IsPartition_Statics::OperatingSystemDirectory_eventIsPartition_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOperatingSystemDirectory_IsPartition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystemDirectory_IsPartition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOperatingSystemDirectory_IsSystemDirectory_Statics
	{
		struct OperatingSystemDirectory_eventIsSystemDirectory_Parms
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
	void Z_Construct_UFunction_UOperatingSystemDirectory_IsSystemDirectory_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OperatingSystemDirectory_eventIsSystemDirectory_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOperatingSystemDirectory_IsSystemDirectory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OperatingSystemDirectory_eventIsSystemDirectory_Parms), &Z_Construct_UFunction_UOperatingSystemDirectory_IsSystemDirectory_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperatingSystemDirectory_IsSystemDirectory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemDirectory_IsSystemDirectory_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemDirectory_IsSystemDirectory_Statics::Function_MetaDataParams[] = {
		{ "Category", "OperatingSystemDirectory" },
		{ "ModuleRelativePath", "Public/Core/OperatingSystemDirectory.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystemDirectory_IsSystemDirectory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystemDirectory, nullptr, "IsSystemDirectory", nullptr, nullptr, Z_Construct_UFunction_UOperatingSystemDirectory_IsSystemDirectory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemDirectory_IsSystemDirectory_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOperatingSystemDirectory_IsSystemDirectory_Statics::OperatingSystemDirectory_eventIsSystemDirectory_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemDirectory_IsSystemDirectory_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystemDirectory_IsSystemDirectory_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemDirectory_IsSystemDirectory_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOperatingSystemDirectory_IsSystemDirectory_Statics::OperatingSystemDirectory_eventIsSystemDirectory_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOperatingSystemDirectory_IsSystemDirectory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystemDirectory_IsSystemDirectory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOperatingSystemDirectory);
	UClass* Z_Construct_UClass_UOperatingSystemDirectory_NoRegister()
	{
		return UOperatingSystemDirectory::StaticClass();
	}
	struct Z_Construct_UClass_UOperatingSystemDirectory_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Tag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverrideIcon_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_OverrideIcon;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanCreateNewFolder_MetaData[];
#endif
		static void NewProp_bCanCreateNewFolder_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanCreateNewFolder;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanCreateNewFile_MetaData[];
#endif
		static void NewProp_bCanCreateNewFile_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanCreateNewFile;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsHidden_MetaData[];
#endif
		static void NewProp_bIsHidden_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsHidden;
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_FileClasses_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FileClasses_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_FileClasses;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChildDirectoryCollection_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_ChildDirectoryCollection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParentDirectory_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_ParentDirectory;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParentPartition_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_ParentPartition;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Files_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Files_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Files;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ChildDirectories_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChildDirectories_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ChildDirectories;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParentOS_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_ParentOS;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOperatingSystemDirectory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_OperatingSystemSimulator,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemDirectory_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UOperatingSystemDirectory_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOperatingSystemDirectory_FindDirectoryByTag, "FindDirectoryByTag" }, // 3610715163
		{ &Z_Construct_UFunction_UOperatingSystemDirectory_GetAllFiles, "GetAllFiles" }, // 747187918
		{ &Z_Construct_UFunction_UOperatingSystemDirectory_GetChildDirectories, "GetChildDirectories" }, // 588694320
		{ &Z_Construct_UFunction_UOperatingSystemDirectory_GetChildDirectory, "GetChildDirectory" }, // 2519097981
		{ &Z_Construct_UFunction_UOperatingSystemDirectory_GetDirectoryIconObject, "GetDirectoryIconObject" }, // 520294594
		{ &Z_Construct_UFunction_UOperatingSystemDirectory_GetDirectoryName, "GetDirectoryName" }, // 3511202544
		{ &Z_Construct_UFunction_UOperatingSystemDirectory_GetInterfaceDisplayName, "GetInterfaceDisplayName" }, // 52588027
		{ &Z_Construct_UFunction_UOperatingSystemDirectory_GetParentExplorerInterface, "GetParentExplorerInterface" }, // 8614551
		{ &Z_Construct_UFunction_UOperatingSystemDirectory_IsPartition, "IsPartition" }, // 1088012829
		{ &Z_Construct_UFunction_UOperatingSystemDirectory_IsSystemDirectory, "IsSystemDirectory" }, // 359958742
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemDirectory_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystemDirectory_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Core/OperatingSystemDirectory.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Core/OperatingSystemDirectory.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystemDirectory_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "OperatingSystemDirectory" },
		{ "ModuleRelativePath", "Public/Core/OperatingSystemDirectory.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UOperatingSystemDirectory_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOperatingSystemDirectory, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemDirectory_Statics::NewProp_Name_MetaData), Z_Construct_UClass_UOperatingSystemDirectory_Statics::NewProp_Name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystemDirectory_Statics::NewProp_Tag_MetaData[] = {
		{ "Categories", "OperatingSystem.Directory" },
		{ "Category", "OperatingSystemDirectory" },
		{ "ModuleRelativePath", "Public/Core/OperatingSystemDirectory.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOperatingSystemDirectory_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOperatingSystemDirectory, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemDirectory_Statics::NewProp_Tag_MetaData), Z_Construct_UClass_UOperatingSystemDirectory_Statics::NewProp_Tag_MetaData) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystemDirectory_Statics::NewProp_OverrideIcon_MetaData[] = {
		{ "AllowedClasses", "Texture, MaterialInterface" },
		{ "Category", "OperatingSystemDirectory" },
		{ "DisplayThumbnail", "TRUE" },
		{ "ModuleRelativePath", "Public/Core/OperatingSystemDirectory.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UOperatingSystemDirectory_Statics::NewProp_OverrideIcon = { "OverrideIcon", nullptr, (EPropertyFlags)0x00240c0000010001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOperatingSystemDirectory, OverrideIcon), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemDirectory_Statics::NewProp_OverrideIcon_MetaData), Z_Construct_UClass_UOperatingSystemDirectory_Statics::NewProp_OverrideIcon_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystemDirectory_Statics::NewProp_bCanCreateNewFolder_MetaData[] = {
		{ "Category", "OperatingSystemDirectory" },
		{ "ModuleRelativePath", "Public/Core/OperatingSystemDirectory.h" },
	};
#endif
	void Z_Construct_UClass_UOperatingSystemDirectory_Statics::NewProp_bCanCreateNewFolder_SetBit(void* Obj)
	{
		((UOperatingSystemDirectory*)Obj)->bCanCreateNewFolder = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOperatingSystemDirectory_Statics::NewProp_bCanCreateNewFolder = { "bCanCreateNewFolder", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UOperatingSystemDirectory), &Z_Construct_UClass_UOperatingSystemDirectory_Statics::NewProp_bCanCreateNewFolder_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemDirectory_Statics::NewProp_bCanCreateNewFolder_MetaData), Z_Construct_UClass_UOperatingSystemDirectory_Statics::NewProp_bCanCreateNewFolder_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystemDirectory_Statics::NewProp_bCanCreateNewFile_MetaData[] = {
		{ "Category", "OperatingSystemDirectory" },
		{ "ModuleRelativePath", "Public/Core/OperatingSystemDirectory.h" },
	};
#endif
	void Z_Construct_UClass_UOperatingSystemDirectory_Statics::NewProp_bCanCreateNewFile_SetBit(void* Obj)
	{
		((UOperatingSystemDirectory*)Obj)->bCanCreateNewFile = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOperatingSystemDirectory_Statics::NewProp_bCanCreateNewFile = { "bCanCreateNewFile", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UOperatingSystemDirectory), &Z_Construct_UClass_UOperatingSystemDirectory_Statics::NewProp_bCanCreateNewFile_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemDirectory_Statics::NewProp_bCanCreateNewFile_MetaData), Z_Construct_UClass_UOperatingSystemDirectory_Statics::NewProp_bCanCreateNewFile_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystemDirectory_Statics::NewProp_bIsHidden_MetaData[] = {
		{ "Category", "OperatingSystemDirectory" },
		{ "ModuleRelativePath", "Public/Core/OperatingSystemDirectory.h" },
	};
#endif
	void Z_Construct_UClass_UOperatingSystemDirectory_Statics::NewProp_bIsHidden_SetBit(void* Obj)
	{
		((UOperatingSystemDirectory*)Obj)->bIsHidden = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOperatingSystemDirectory_Statics::NewProp_bIsHidden = { "bIsHidden", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UOperatingSystemDirectory), &Z_Construct_UClass_UOperatingSystemDirectory_Statics::NewProp_bIsHidden_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemDirectory_Statics::NewProp_bIsHidden_MetaData), Z_Construct_UClass_UOperatingSystemDirectory_Statics::NewProp_bIsHidden_MetaData) };
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UOperatingSystemDirectory_Statics::NewProp_FileClasses_ElementProp = { "FileClasses", nullptr, (EPropertyFlags)0x0004000000000001, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UOperatingSystemFile_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystemDirectory_Statics::NewProp_FileClasses_MetaData[] = {
		{ "Category", "OperatingSystemDirectory" },
		{ "ModuleRelativePath", "Public/Core/OperatingSystemDirectory.h" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UOperatingSystemDirectory_Statics::NewProp_FileClasses = { "FileClasses", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOperatingSystemDirectory, FileClasses), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemDirectory_Statics::NewProp_FileClasses_MetaData), Z_Construct_UClass_UOperatingSystemDirectory_Statics::NewProp_FileClasses_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystemDirectory_Statics::NewProp_ChildDirectoryCollection_MetaData[] = {
		{ "Category", "OperatingSystemDirectory" },
		{ "ModuleRelativePath", "Public/Core/OperatingSystemDirectory.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UOperatingSystemDirectory_Statics::NewProp_ChildDirectoryCollection = { "ChildDirectoryCollection", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOperatingSystemDirectory, ChildDirectoryCollection), Z_Construct_UClass_UOperatingSystemDirectoriesCollection_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemDirectory_Statics::NewProp_ChildDirectoryCollection_MetaData), Z_Construct_UClass_UOperatingSystemDirectory_Statics::NewProp_ChildDirectoryCollection_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystemDirectory_Statics::NewProp_ParentDirectory_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/Core/OperatingSystemDirectory.h" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UOperatingSystemDirectory_Statics::NewProp_ParentDirectory = { "ParentDirectory", nullptr, (EPropertyFlags)0x0024080000020801, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOperatingSystemDirectory, ParentDirectory), Z_Construct_UClass_UOperatingSystemDirectory_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemDirectory_Statics::NewProp_ParentDirectory_MetaData), Z_Construct_UClass_UOperatingSystemDirectory_Statics::NewProp_ParentDirectory_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystemDirectory_Statics::NewProp_ParentPartition_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/Core/OperatingSystemDirectory.h" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UOperatingSystemDirectory_Statics::NewProp_ParentPartition = { "ParentPartition", nullptr, (EPropertyFlags)0x0024080000020815, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOperatingSystemDirectory, ParentPartition), Z_Construct_UClass_UOperatingSystemPartition_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemDirectory_Statics::NewProp_ParentPartition_MetaData), Z_Construct_UClass_UOperatingSystemDirectory_Statics::NewProp_ParentPartition_MetaData) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UOperatingSystemDirectory_Statics::NewProp_Files_Inner = { "Files", nullptr, (EPropertyFlags)0x0004000000020000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UOperatingSystemFile_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystemDirectory_Statics::NewProp_Files_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/Core/OperatingSystemDirectory.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UOperatingSystemDirectory_Statics::NewProp_Files = { "Files", nullptr, (EPropertyFlags)0x0024080000020815, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOperatingSystemDirectory, Files), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemDirectory_Statics::NewProp_Files_MetaData), Z_Construct_UClass_UOperatingSystemDirectory_Statics::NewProp_Files_MetaData) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UOperatingSystemDirectory_Statics::NewProp_ChildDirectories_Inner = { "ChildDirectories", nullptr, (EPropertyFlags)0x0004000000020000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UOperatingSystemDirectory_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystemDirectory_Statics::NewProp_ChildDirectories_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/Core/OperatingSystemDirectory.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UOperatingSystemDirectory_Statics::NewProp_ChildDirectories = { "ChildDirectories", nullptr, (EPropertyFlags)0x0024080000020801, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOperatingSystemDirectory, ChildDirectories), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemDirectory_Statics::NewProp_ChildDirectories_MetaData), Z_Construct_UClass_UOperatingSystemDirectory_Statics::NewProp_ChildDirectories_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystemDirectory_Statics::NewProp_ParentOS_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/Core/OperatingSystemDirectory.h" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UOperatingSystemDirectory_Statics::NewProp_ParentOS = { "ParentOS", nullptr, (EPropertyFlags)0x0024080000020801, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOperatingSystemDirectory, ParentOS), Z_Construct_UClass_UOperatingSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemDirectory_Statics::NewProp_ParentOS_MetaData), Z_Construct_UClass_UOperatingSystemDirectory_Statics::NewProp_ParentOS_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOperatingSystemDirectory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystemDirectory_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystemDirectory_Statics::NewProp_Tag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystemDirectory_Statics::NewProp_OverrideIcon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystemDirectory_Statics::NewProp_bCanCreateNewFolder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystemDirectory_Statics::NewProp_bCanCreateNewFile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystemDirectory_Statics::NewProp_bIsHidden,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystemDirectory_Statics::NewProp_FileClasses_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystemDirectory_Statics::NewProp_FileClasses,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystemDirectory_Statics::NewProp_ChildDirectoryCollection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystemDirectory_Statics::NewProp_ParentDirectory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystemDirectory_Statics::NewProp_ParentPartition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystemDirectory_Statics::NewProp_Files_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystemDirectory_Statics::NewProp_Files,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystemDirectory_Statics::NewProp_ChildDirectories_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystemDirectory_Statics::NewProp_ChildDirectories,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystemDirectory_Statics::NewProp_ParentOS,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UOperatingSystemDirectory_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UOperatingSystemExplorerInterface_NoRegister, (int32)VTABLE_OFFSET(UOperatingSystemDirectory, IOperatingSystemExplorerInterface), false },  // 4262244150
		};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemDirectory_Statics::InterfaceParams) < 64);
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOperatingSystemDirectory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOperatingSystemDirectory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOperatingSystemDirectory_Statics::ClassParams = {
		&UOperatingSystemDirectory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UOperatingSystemDirectory_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemDirectory_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x001000A1u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemDirectory_Statics::Class_MetaDataParams), Z_Construct_UClass_UOperatingSystemDirectory_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemDirectory_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UOperatingSystemDirectory()
	{
		if (!Z_Registration_Info_UClass_UOperatingSystemDirectory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOperatingSystemDirectory.OuterSingleton, Z_Construct_UClass_UOperatingSystemDirectory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOperatingSystemDirectory.OuterSingleton;
	}
	template<> OPERATINGSYSTEMSIMULATOR_API UClass* StaticClass<UOperatingSystemDirectory>()
	{
		return UOperatingSystemDirectory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOperatingSystemDirectory);
	UOperatingSystemDirectory::~UOperatingSystemDirectory() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Core_OperatingSystemDirectory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Core_OperatingSystemDirectory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOperatingSystemDirectory, UOperatingSystemDirectory::StaticClass, TEXT("UOperatingSystemDirectory"), &Z_Registration_Info_UClass_UOperatingSystemDirectory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOperatingSystemDirectory), 2443147403U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Core_OperatingSystemDirectory_h_4232103343(TEXT("/Script/OperatingSystemSimulator"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Core_OperatingSystemDirectory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Core_OperatingSystemDirectory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
