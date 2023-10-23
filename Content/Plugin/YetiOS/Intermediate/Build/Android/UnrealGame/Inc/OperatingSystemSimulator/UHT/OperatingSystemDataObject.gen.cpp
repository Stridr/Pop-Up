// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OperatingSystemSimulator/Public/Core/OperatingSystemDataObject.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOperatingSystemDataObject() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	OPERATINGSYSTEMSIMULATOR_API UClass* Z_Construct_UClass_UOperatingSystemDataObject();
	OPERATINGSYSTEMSIMULATOR_API UClass* Z_Construct_UClass_UOperatingSystemDataObject_NoRegister();
	UPackage* Z_Construct_UPackage__Script_OperatingSystemSimulator();
// End Cross Module References
	DEFINE_FUNCTION(UOperatingSystemDataObject::execIsTickEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsTickEnabled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOperatingSystemDataObject::execSetTickEnabled)
	{
		P_GET_UBOOL(Z_Param_bEnable);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTickEnabled(Z_Param_bEnable);
		P_NATIVE_END;
	}
	struct OperatingSystemDataObject_eventK2_ShouldCreate_Parms
	{
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		OperatingSystemDataObject_eventK2_ShouldCreate_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct OperatingSystemDataObject_eventK2_Tick_Parms
	{
		float DeltaSeconds;
	};
	static FName NAME_UOperatingSystemDataObject_K2_OnCreate = FName(TEXT("K2_OnCreate"));
	void UOperatingSystemDataObject::K2_OnCreate()
	{
		ProcessEvent(FindFunctionChecked(NAME_UOperatingSystemDataObject_K2_OnCreate),NULL);
	}
	static FName NAME_UOperatingSystemDataObject_K2_ShouldCreate = FName(TEXT("K2_ShouldCreate"));
	bool UOperatingSystemDataObject::K2_ShouldCreate() const
	{
		OperatingSystemDataObject_eventK2_ShouldCreate_Parms Parms;
		const_cast<UOperatingSystemDataObject*>(this)->ProcessEvent(FindFunctionChecked(NAME_UOperatingSystemDataObject_K2_ShouldCreate),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UOperatingSystemDataObject_K2_Tick = FName(TEXT("K2_Tick"));
	void UOperatingSystemDataObject::K2_Tick(float const& DeltaSeconds)
	{
		OperatingSystemDataObject_eventK2_Tick_Parms Parms;
		Parms.DeltaSeconds=DeltaSeconds;
		ProcessEvent(FindFunctionChecked(NAME_UOperatingSystemDataObject_K2_Tick),&Parms);
	}
	void UOperatingSystemDataObject::StaticRegisterNativesUOperatingSystemDataObject()
	{
		UClass* Class = UOperatingSystemDataObject::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsTickEnabled", &UOperatingSystemDataObject::execIsTickEnabled },
			{ "SetTickEnabled", &UOperatingSystemDataObject::execSetTickEnabled },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOperatingSystemDataObject_IsTickEnabled_Statics
	{
		struct OperatingSystemDataObject_eventIsTickEnabled_Parms
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
	void Z_Construct_UFunction_UOperatingSystemDataObject_IsTickEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OperatingSystemDataObject_eventIsTickEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOperatingSystemDataObject_IsTickEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OperatingSystemDataObject_eventIsTickEnabled_Parms), &Z_Construct_UFunction_UOperatingSystemDataObject_IsTickEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperatingSystemDataObject_IsTickEnabled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemDataObject_IsTickEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemDataObject_IsTickEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "OperatingSystemDataObject" },
		{ "ModuleRelativePath", "Public/Core/OperatingSystemDataObject.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystemDataObject_IsTickEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystemDataObject, nullptr, "IsTickEnabled", nullptr, nullptr, Z_Construct_UFunction_UOperatingSystemDataObject_IsTickEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemDataObject_IsTickEnabled_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOperatingSystemDataObject_IsTickEnabled_Statics::OperatingSystemDataObject_eventIsTickEnabled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemDataObject_IsTickEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystemDataObject_IsTickEnabled_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemDataObject_IsTickEnabled_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOperatingSystemDataObject_IsTickEnabled_Statics::OperatingSystemDataObject_eventIsTickEnabled_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOperatingSystemDataObject_IsTickEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystemDataObject_IsTickEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOperatingSystemDataObject_K2_OnCreate_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemDataObject_K2_OnCreate_Statics::Function_MetaDataParams[] = {
		{ "Category", "OperatingSystemDataObject" },
		{ "DisplayName", "OnCreated" },
		{ "ModuleRelativePath", "Public/Core/OperatingSystemDataObject.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystemDataObject_K2_OnCreate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystemDataObject, nullptr, "K2_OnCreate", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemDataObject_K2_OnCreate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystemDataObject_K2_OnCreate_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UOperatingSystemDataObject_K2_OnCreate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystemDataObject_K2_OnCreate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOperatingSystemDataObject_K2_ShouldCreate_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UOperatingSystemDataObject_K2_ShouldCreate_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OperatingSystemDataObject_eventK2_ShouldCreate_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOperatingSystemDataObject_K2_ShouldCreate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OperatingSystemDataObject_eventK2_ShouldCreate_Parms), &Z_Construct_UFunction_UOperatingSystemDataObject_K2_ShouldCreate_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperatingSystemDataObject_K2_ShouldCreate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemDataObject_K2_ShouldCreate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemDataObject_K2_ShouldCreate_Statics::Function_MetaDataParams[] = {
		{ "Category", "OperatingSystemDataObject" },
		{ "DisplayName", "ShouldCreate" },
		{ "ModuleRelativePath", "Public/Core/OperatingSystemDataObject.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystemDataObject_K2_ShouldCreate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystemDataObject, nullptr, "K2_ShouldCreate", nullptr, nullptr, Z_Construct_UFunction_UOperatingSystemDataObject_K2_ShouldCreate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemDataObject_K2_ShouldCreate_Statics::PropPointers), sizeof(OperatingSystemDataObject_eventK2_ShouldCreate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemDataObject_K2_ShouldCreate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystemDataObject_K2_ShouldCreate_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemDataObject_K2_ShouldCreate_Statics::PropPointers) < 2048);
	static_assert(sizeof(OperatingSystemDataObject_eventK2_ShouldCreate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOperatingSystemDataObject_K2_ShouldCreate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystemDataObject_K2_ShouldCreate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOperatingSystemDataObject_K2_Tick_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeltaSeconds_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaSeconds;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemDataObject_K2_Tick_Statics::NewProp_DeltaSeconds_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOperatingSystemDataObject_K2_Tick_Statics::NewProp_DeltaSeconds = { "DeltaSeconds", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemDataObject_eventK2_Tick_Parms, DeltaSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemDataObject_K2_Tick_Statics::NewProp_DeltaSeconds_MetaData), Z_Construct_UFunction_UOperatingSystemDataObject_K2_Tick_Statics::NewProp_DeltaSeconds_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperatingSystemDataObject_K2_Tick_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemDataObject_K2_Tick_Statics::NewProp_DeltaSeconds,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemDataObject_K2_Tick_Statics::Function_MetaDataParams[] = {
		{ "Category", "OperatingSystemDataObject" },
		{ "DisplayName", "Tick" },
		{ "ModuleRelativePath", "Public/Core/OperatingSystemDataObject.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystemDataObject_K2_Tick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystemDataObject, nullptr, "K2_Tick", nullptr, nullptr, Z_Construct_UFunction_UOperatingSystemDataObject_K2_Tick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemDataObject_K2_Tick_Statics::PropPointers), sizeof(OperatingSystemDataObject_eventK2_Tick_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08480800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemDataObject_K2_Tick_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystemDataObject_K2_Tick_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemDataObject_K2_Tick_Statics::PropPointers) < 2048);
	static_assert(sizeof(OperatingSystemDataObject_eventK2_Tick_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOperatingSystemDataObject_K2_Tick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystemDataObject_K2_Tick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOperatingSystemDataObject_SetTickEnabled_Statics
	{
		struct OperatingSystemDataObject_eventSetTickEnabled_Parms
		{
			bool bEnable;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnable_MetaData[];
#endif
		static void NewProp_bEnable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnable;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemDataObject_SetTickEnabled_Statics::NewProp_bEnable_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UOperatingSystemDataObject_SetTickEnabled_Statics::NewProp_bEnable_SetBit(void* Obj)
	{
		((OperatingSystemDataObject_eventSetTickEnabled_Parms*)Obj)->bEnable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOperatingSystemDataObject_SetTickEnabled_Statics::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OperatingSystemDataObject_eventSetTickEnabled_Parms), &Z_Construct_UFunction_UOperatingSystemDataObject_SetTickEnabled_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemDataObject_SetTickEnabled_Statics::NewProp_bEnable_MetaData), Z_Construct_UFunction_UOperatingSystemDataObject_SetTickEnabled_Statics::NewProp_bEnable_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperatingSystemDataObject_SetTickEnabled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemDataObject_SetTickEnabled_Statics::NewProp_bEnable,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemDataObject_SetTickEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "OperatingSystemDataObject" },
		{ "ModuleRelativePath", "Public/Core/OperatingSystemDataObject.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystemDataObject_SetTickEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystemDataObject, nullptr, "SetTickEnabled", nullptr, nullptr, Z_Construct_UFunction_UOperatingSystemDataObject_SetTickEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemDataObject_SetTickEnabled_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOperatingSystemDataObject_SetTickEnabled_Statics::OperatingSystemDataObject_eventSetTickEnabled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemDataObject_SetTickEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystemDataObject_SetTickEnabled_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemDataObject_SetTickEnabled_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOperatingSystemDataObject_SetTickEnabled_Statics::OperatingSystemDataObject_eventSetTickEnabled_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOperatingSystemDataObject_SetTickEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystemDataObject_SetTickEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOperatingSystemDataObject);
	UClass* Z_Construct_UClass_UOperatingSystemDataObject_NoRegister()
	{
		return UOperatingSystemDataObject::StaticClass();
	}
	struct Z_Construct_UClass_UOperatingSystemDataObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParentObject_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_ParentObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bStartWithTickEnabled_MetaData[];
#endif
		static void NewProp_bStartWithTickEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bStartWithTickEnabled;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOperatingSystemDataObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_OperatingSystemSimulator,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemDataObject_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UOperatingSystemDataObject_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOperatingSystemDataObject_IsTickEnabled, "IsTickEnabled" }, // 824582448
		{ &Z_Construct_UFunction_UOperatingSystemDataObject_K2_OnCreate, "K2_OnCreate" }, // 3743042108
		{ &Z_Construct_UFunction_UOperatingSystemDataObject_K2_ShouldCreate, "K2_ShouldCreate" }, // 1622053006
		{ &Z_Construct_UFunction_UOperatingSystemDataObject_K2_Tick, "K2_Tick" }, // 806236315
		{ &Z_Construct_UFunction_UOperatingSystemDataObject_SetTickEnabled, "SetTickEnabled" }, // 2642205731
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemDataObject_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystemDataObject_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Core/OperatingSystemDataObject.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Core/OperatingSystemDataObject.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystemDataObject_Statics::NewProp_ParentObject_MetaData[] = {
		{ "Category", "Debug" },
		{ "Keywords", "owner" },
		{ "ModuleRelativePath", "Public/Core/OperatingSystemDataObject.h" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UOperatingSystemDataObject_Statics::NewProp_ParentObject = { "ParentObject", nullptr, (EPropertyFlags)0x0024080000020815, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOperatingSystemDataObject, ParentObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemDataObject_Statics::NewProp_ParentObject_MetaData), Z_Construct_UClass_UOperatingSystemDataObject_Statics::NewProp_ParentObject_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystemDataObject_Statics::NewProp_bStartWithTickEnabled_MetaData[] = {
		{ "Category", "OperatingSystemDataObject" },
		{ "ModuleRelativePath", "Public/Core/OperatingSystemDataObject.h" },
	};
#endif
	void Z_Construct_UClass_UOperatingSystemDataObject_Statics::NewProp_bStartWithTickEnabled_SetBit(void* Obj)
	{
		((UOperatingSystemDataObject*)Obj)->bStartWithTickEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOperatingSystemDataObject_Statics::NewProp_bStartWithTickEnabled = { "bStartWithTickEnabled", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UOperatingSystemDataObject), &Z_Construct_UClass_UOperatingSystemDataObject_Statics::NewProp_bStartWithTickEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemDataObject_Statics::NewProp_bStartWithTickEnabled_MetaData), Z_Construct_UClass_UOperatingSystemDataObject_Statics::NewProp_bStartWithTickEnabled_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOperatingSystemDataObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystemDataObject_Statics::NewProp_ParentObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystemDataObject_Statics::NewProp_bStartWithTickEnabled,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOperatingSystemDataObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOperatingSystemDataObject>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOperatingSystemDataObject_Statics::ClassParams = {
		&UOperatingSystemDataObject::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UOperatingSystemDataObject_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemDataObject_Statics::PropPointers),
		0,
		0x000000A1u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemDataObject_Statics::Class_MetaDataParams), Z_Construct_UClass_UOperatingSystemDataObject_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemDataObject_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UOperatingSystemDataObject()
	{
		if (!Z_Registration_Info_UClass_UOperatingSystemDataObject.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOperatingSystemDataObject.OuterSingleton, Z_Construct_UClass_UOperatingSystemDataObject_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOperatingSystemDataObject.OuterSingleton;
	}
	template<> OPERATINGSYSTEMSIMULATOR_API UClass* StaticClass<UOperatingSystemDataObject>()
	{
		return UOperatingSystemDataObject::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOperatingSystemDataObject);
	UOperatingSystemDataObject::~UOperatingSystemDataObject() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Core_OperatingSystemDataObject_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Core_OperatingSystemDataObject_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOperatingSystemDataObject, UOperatingSystemDataObject::StaticClass, TEXT("UOperatingSystemDataObject"), &Z_Registration_Info_UClass_UOperatingSystemDataObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOperatingSystemDataObject), 238881933U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Core_OperatingSystemDataObject_h_3204302727(TEXT("/Script/OperatingSystemSimulator"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Core_OperatingSystemDataObject_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Core_OperatingSystemDataObject_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
