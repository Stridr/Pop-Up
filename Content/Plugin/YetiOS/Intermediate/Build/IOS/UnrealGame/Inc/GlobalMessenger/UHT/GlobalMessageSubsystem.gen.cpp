// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GlobalMessenger/Public/GlobalMessageSubsystem.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGlobalMessageSubsystem() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UWorldSubsystem();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	GLOBALMESSENGER_API UClass* Z_Construct_UClass_UGlobalMessageSubsystem();
	GLOBALMESSENGER_API UClass* Z_Construct_UClass_UGlobalMessageSubsystem_NoRegister();
	GLOBALMESSENGER_API UFunction* Z_Construct_UDelegateFunction_GlobalMessenger_GlobalMessageReceiveDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_GlobalMessenger();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_GlobalMessenger_GlobalMessageReceiveDelegate__DelegateSignature_Statics
	{
		struct _Script_GlobalMessenger_eventGlobalMessageReceiveDelegate_Parms
		{
			UObject* Payload;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Payload;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_GlobalMessenger_GlobalMessageReceiveDelegate__DelegateSignature_Statics::NewProp_Payload = { "Payload", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_GlobalMessenger_eventGlobalMessageReceiveDelegate_Parms, Payload), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_GlobalMessenger_GlobalMessageReceiveDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GlobalMessenger_GlobalMessageReceiveDelegate__DelegateSignature_Statics::NewProp_Payload,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GlobalMessenger_GlobalMessageReceiveDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GlobalMessageSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GlobalMessenger_GlobalMessageReceiveDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GlobalMessenger, nullptr, "GlobalMessageReceiveDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_GlobalMessenger_GlobalMessageReceiveDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GlobalMessenger_GlobalMessageReceiveDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_GlobalMessenger_GlobalMessageReceiveDelegate__DelegateSignature_Statics::_Script_GlobalMessenger_eventGlobalMessageReceiveDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GlobalMessenger_GlobalMessageReceiveDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_GlobalMessenger_GlobalMessageReceiveDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GlobalMessenger_GlobalMessageReceiveDelegate__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_GlobalMessenger_GlobalMessageReceiveDelegate__DelegateSignature_Statics::_Script_GlobalMessenger_eventGlobalMessageReceiveDelegate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_GlobalMessenger_GlobalMessageReceiveDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_GlobalMessenger_GlobalMessageReceiveDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FGlobalMessageReceiveDelegate_DelegateWrapper(const FScriptDelegate& GlobalMessageReceiveDelegate, UObject* Payload)
{
	struct _Script_GlobalMessenger_eventGlobalMessageReceiveDelegate_Parms
	{
		UObject* Payload;
	};
	_Script_GlobalMessenger_eventGlobalMessageReceiveDelegate_Parms Parms;
	Parms.Payload=Payload;
	GlobalMessageReceiveDelegate.ProcessDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UGlobalMessageSubsystem::execRemoveListener)
	{
		P_GET_OBJECT(UObject,Z_Param_ListenerObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemoveListener(Z_Param_ListenerObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGlobalMessageSubsystem::execListenToMessage)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FGameplayTag,Z_Param_FilterTag);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ListenToMessage(Z_Param_WorldContextObject,Z_Param_FilterTag,FGlobalMessageReceiveDelegate(Z_Param_Out_Callback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGlobalMessageSubsystem::execBroadcastMessage)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_FilterTag);
		P_GET_OBJECT(UObject,Z_Param_Payload);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BroadcastMessage(Z_Param_FilterTag,Z_Param_Payload);
		P_NATIVE_END;
	}
	void UGlobalMessageSubsystem::StaticRegisterNativesUGlobalMessageSubsystem()
	{
		UClass* Class = UGlobalMessageSubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BroadcastMessage", &UGlobalMessageSubsystem::execBroadcastMessage },
			{ "ListenToMessage", &UGlobalMessageSubsystem::execListenToMessage },
			{ "RemoveListener", &UGlobalMessageSubsystem::execRemoveListener },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGlobalMessageSubsystem_BroadcastMessage_Statics
	{
		struct GlobalMessageSubsystem_eventBroadcastMessage_Parms
		{
			FGameplayTag FilterTag;
			UObject* Payload;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FilterTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FilterTag;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Payload;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGlobalMessageSubsystem_BroadcastMessage_Statics::NewProp_FilterTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGlobalMessageSubsystem_BroadcastMessage_Statics::NewProp_FilterTag = { "FilterTag", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GlobalMessageSubsystem_eventBroadcastMessage_Parms, FilterTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGlobalMessageSubsystem_BroadcastMessage_Statics::NewProp_FilterTag_MetaData), Z_Construct_UFunction_UGlobalMessageSubsystem_BroadcastMessage_Statics::NewProp_FilterTag_MetaData) }; // 2083603574
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGlobalMessageSubsystem_BroadcastMessage_Statics::NewProp_Payload = { "Payload", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GlobalMessageSubsystem_eventBroadcastMessage_Parms, Payload), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGlobalMessageSubsystem_BroadcastMessage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGlobalMessageSubsystem_BroadcastMessage_Statics::NewProp_FilterTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGlobalMessageSubsystem_BroadcastMessage_Statics::NewProp_Payload,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGlobalMessageSubsystem_BroadcastMessage_Statics::Function_MetaDataParams[] = {
		{ "Category", "GlobalMessageSubsystem" },
		{ "ModuleRelativePath", "Public/GlobalMessageSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGlobalMessageSubsystem_BroadcastMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGlobalMessageSubsystem, nullptr, "BroadcastMessage", nullptr, nullptr, Z_Construct_UFunction_UGlobalMessageSubsystem_BroadcastMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGlobalMessageSubsystem_BroadcastMessage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGlobalMessageSubsystem_BroadcastMessage_Statics::GlobalMessageSubsystem_eventBroadcastMessage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGlobalMessageSubsystem_BroadcastMessage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGlobalMessageSubsystem_BroadcastMessage_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGlobalMessageSubsystem_BroadcastMessage_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGlobalMessageSubsystem_BroadcastMessage_Statics::GlobalMessageSubsystem_eventBroadcastMessage_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGlobalMessageSubsystem_BroadcastMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGlobalMessageSubsystem_BroadcastMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGlobalMessageSubsystem_ListenToMessage_Statics
	{
		struct GlobalMessageSubsystem_eventListenToMessage_Parms
		{
			const UObject* WorldContextObject;
			FGameplayTag FilterTag;
			FScriptDelegate Callback;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FilterTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FilterTag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGlobalMessageSubsystem_ListenToMessage_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGlobalMessageSubsystem_ListenToMessage_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GlobalMessageSubsystem_eventListenToMessage_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGlobalMessageSubsystem_ListenToMessage_Statics::NewProp_WorldContextObject_MetaData), Z_Construct_UFunction_UGlobalMessageSubsystem_ListenToMessage_Statics::NewProp_WorldContextObject_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGlobalMessageSubsystem_ListenToMessage_Statics::NewProp_FilterTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGlobalMessageSubsystem_ListenToMessage_Statics::NewProp_FilterTag = { "FilterTag", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GlobalMessageSubsystem_eventListenToMessage_Parms, FilterTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGlobalMessageSubsystem_ListenToMessage_Statics::NewProp_FilterTag_MetaData), Z_Construct_UFunction_UGlobalMessageSubsystem_ListenToMessage_Statics::NewProp_FilterTag_MetaData) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGlobalMessageSubsystem_ListenToMessage_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UGlobalMessageSubsystem_ListenToMessage_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GlobalMessageSubsystem_eventListenToMessage_Parms, Callback), Z_Construct_UDelegateFunction_GlobalMessenger_GlobalMessageReceiveDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGlobalMessageSubsystem_ListenToMessage_Statics::NewProp_Callback_MetaData), Z_Construct_UFunction_UGlobalMessageSubsystem_ListenToMessage_Statics::NewProp_Callback_MetaData) }; // 3519243088
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGlobalMessageSubsystem_ListenToMessage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGlobalMessageSubsystem_ListenToMessage_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGlobalMessageSubsystem_ListenToMessage_Statics::NewProp_FilterTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGlobalMessageSubsystem_ListenToMessage_Statics::NewProp_Callback,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGlobalMessageSubsystem_ListenToMessage_Statics::Function_MetaDataParams[] = {
		{ "Category", "GlobalMessageSubsystem" },
		{ "Keywords", "add, event, global" },
		{ "ModuleRelativePath", "Public/GlobalMessageSubsystem.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGlobalMessageSubsystem_ListenToMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGlobalMessageSubsystem, nullptr, "ListenToMessage", nullptr, nullptr, Z_Construct_UFunction_UGlobalMessageSubsystem_ListenToMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGlobalMessageSubsystem_ListenToMessage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGlobalMessageSubsystem_ListenToMessage_Statics::GlobalMessageSubsystem_eventListenToMessage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGlobalMessageSubsystem_ListenToMessage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGlobalMessageSubsystem_ListenToMessage_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGlobalMessageSubsystem_ListenToMessage_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGlobalMessageSubsystem_ListenToMessage_Statics::GlobalMessageSubsystem_eventListenToMessage_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGlobalMessageSubsystem_ListenToMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGlobalMessageSubsystem_ListenToMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGlobalMessageSubsystem_RemoveListener_Statics
	{
		struct GlobalMessageSubsystem_eventRemoveListener_Parms
		{
			const UObject* ListenerObject;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ListenerObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ListenerObject;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGlobalMessageSubsystem_RemoveListener_Statics::NewProp_ListenerObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGlobalMessageSubsystem_RemoveListener_Statics::NewProp_ListenerObject = { "ListenerObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GlobalMessageSubsystem_eventRemoveListener_Parms, ListenerObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGlobalMessageSubsystem_RemoveListener_Statics::NewProp_ListenerObject_MetaData), Z_Construct_UFunction_UGlobalMessageSubsystem_RemoveListener_Statics::NewProp_ListenerObject_MetaData) };
	void Z_Construct_UFunction_UGlobalMessageSubsystem_RemoveListener_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GlobalMessageSubsystem_eventRemoveListener_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGlobalMessageSubsystem_RemoveListener_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GlobalMessageSubsystem_eventRemoveListener_Parms), &Z_Construct_UFunction_UGlobalMessageSubsystem_RemoveListener_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGlobalMessageSubsystem_RemoveListener_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGlobalMessageSubsystem_RemoveListener_Statics::NewProp_ListenerObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGlobalMessageSubsystem_RemoveListener_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGlobalMessageSubsystem_RemoveListener_Statics::Function_MetaDataParams[] = {
		{ "Category", "GlobalMessageSubsystem" },
		{ "Keywords", "message, delete, object" },
		{ "ModuleRelativePath", "Public/GlobalMessageSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGlobalMessageSubsystem_RemoveListener_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGlobalMessageSubsystem, nullptr, "RemoveListener", nullptr, nullptr, Z_Construct_UFunction_UGlobalMessageSubsystem_RemoveListener_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGlobalMessageSubsystem_RemoveListener_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGlobalMessageSubsystem_RemoveListener_Statics::GlobalMessageSubsystem_eventRemoveListener_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGlobalMessageSubsystem_RemoveListener_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGlobalMessageSubsystem_RemoveListener_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGlobalMessageSubsystem_RemoveListener_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGlobalMessageSubsystem_RemoveListener_Statics::GlobalMessageSubsystem_eventRemoveListener_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGlobalMessageSubsystem_RemoveListener()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGlobalMessageSubsystem_RemoveListener_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGlobalMessageSubsystem);
	UClass* Z_Construct_UClass_UGlobalMessageSubsystem_NoRegister()
	{
		return UGlobalMessageSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UGlobalMessageSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGlobalMessageSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWorldSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_GlobalMessenger,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGlobalMessageSubsystem_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UGlobalMessageSubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGlobalMessageSubsystem_BroadcastMessage, "BroadcastMessage" }, // 2013414746
		{ &Z_Construct_UFunction_UGlobalMessageSubsystem_ListenToMessage, "ListenToMessage" }, // 1308758069
		{ &Z_Construct_UFunction_UGlobalMessageSubsystem_RemoveListener, "RemoveListener" }, // 409504492
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGlobalMessageSubsystem_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGlobalMessageSubsystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GlobalMessageSubsystem.h" },
		{ "ModuleRelativePath", "Public/GlobalMessageSubsystem.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGlobalMessageSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGlobalMessageSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGlobalMessageSubsystem_Statics::ClassParams = {
		&UGlobalMessageSubsystem::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGlobalMessageSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UGlobalMessageSubsystem_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UGlobalMessageSubsystem()
	{
		if (!Z_Registration_Info_UClass_UGlobalMessageSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGlobalMessageSubsystem.OuterSingleton, Z_Construct_UClass_UGlobalMessageSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGlobalMessageSubsystem.OuterSingleton;
	}
	template<> GLOBALMESSENGER_API UClass* StaticClass<UGlobalMessageSubsystem>()
	{
		return UGlobalMessageSubsystem::StaticClass();
	}
	UGlobalMessageSubsystem::UGlobalMessageSubsystem() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGlobalMessageSubsystem);
	UGlobalMessageSubsystem::~UGlobalMessageSubsystem() {}
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_GlobalMessenger_Public_GlobalMessageSubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_GlobalMessenger_Public_GlobalMessageSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGlobalMessageSubsystem, UGlobalMessageSubsystem::StaticClass, TEXT("UGlobalMessageSubsystem"), &Z_Registration_Info_UClass_UGlobalMessageSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGlobalMessageSubsystem), 1587108715U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_GlobalMessenger_Public_GlobalMessageSubsystem_h_2854642462(TEXT("/Script/GlobalMessenger"),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_GlobalMessenger_Public_GlobalMessageSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_GlobalMessenger_Public_GlobalMessageSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
