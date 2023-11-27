// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OperatingSystemSimulator/Public/Devices/OperatingSystemDeviceMessenger.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOperatingSystemDeviceMessenger() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	OPERATINGSYSTEMSIMULATOR_API UClass* Z_Construct_UClass_UOperatingSystemBaseDevice_NoRegister();
	OPERATINGSYSTEMSIMULATOR_API UClass* Z_Construct_UClass_UOperatingSystemDeviceMessenger();
	OPERATINGSYSTEMSIMULATOR_API UClass* Z_Construct_UClass_UOperatingSystemDeviceMessenger_NoRegister();
	OPERATINGSYSTEMSIMULATOR_API UFunction* Z_Construct_UDelegateFunction_OperatingSystemSimulator_OperatingSystemDeviceMessageDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_OperatingSystemSimulator();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_OperatingSystemSimulator_OperatingSystemDeviceMessageDelegate__DelegateSignature_Statics
	{
		struct _Script_OperatingSystemSimulator_eventOperatingSystemDeviceMessageDelegate_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_OperatingSystemSimulator_OperatingSystemDeviceMessageDelegate__DelegateSignature_Statics::NewProp_Payload = { "Payload", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OperatingSystemSimulator_eventOperatingSystemDeviceMessageDelegate_Parms, Payload), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OperatingSystemSimulator_OperatingSystemDeviceMessageDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OperatingSystemSimulator_OperatingSystemDeviceMessageDelegate__DelegateSignature_Statics::NewProp_Payload,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OperatingSystemSimulator_OperatingSystemDeviceMessageDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Devices/OperatingSystemDeviceMessenger.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OperatingSystemSimulator_OperatingSystemDeviceMessageDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OperatingSystemSimulator, nullptr, "OperatingSystemDeviceMessageDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_OperatingSystemSimulator_OperatingSystemDeviceMessageDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OperatingSystemSimulator_OperatingSystemDeviceMessageDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OperatingSystemSimulator_OperatingSystemDeviceMessageDelegate__DelegateSignature_Statics::_Script_OperatingSystemSimulator_eventOperatingSystemDeviceMessageDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OperatingSystemSimulator_OperatingSystemDeviceMessageDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OperatingSystemSimulator_OperatingSystemDeviceMessageDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OperatingSystemSimulator_OperatingSystemDeviceMessageDelegate__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_OperatingSystemSimulator_OperatingSystemDeviceMessageDelegate__DelegateSignature_Statics::_Script_OperatingSystemSimulator_eventOperatingSystemDeviceMessageDelegate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_OperatingSystemSimulator_OperatingSystemDeviceMessageDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OperatingSystemSimulator_OperatingSystemDeviceMessageDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOperatingSystemDeviceMessageDelegate_DelegateWrapper(const FScriptDelegate& OperatingSystemDeviceMessageDelegate, UObject* Payload)
{
	struct _Script_OperatingSystemSimulator_eventOperatingSystemDeviceMessageDelegate_Parms
	{
		UObject* Payload;
	};
	_Script_OperatingSystemSimulator_eventOperatingSystemDeviceMessageDelegate_Parms Parms;
	Parms.Payload=Payload;
	OperatingSystemDeviceMessageDelegate.ProcessDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UOperatingSystemDeviceMessenger::execStopListening)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_EventName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopListening(Z_Param_EventName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOperatingSystemDeviceMessenger::execBeginListening)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ListenToEventName);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BeginListening(Z_Param_ListenToEventName,FOperatingSystemDeviceMessageDelegate(Z_Param_Out_Callback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOperatingSystemDeviceMessenger::execBroadcast)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_EventName);
		P_GET_OBJECT(UObject,Z_Param_Payload);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Broadcast(Z_Param_EventName,Z_Param_Payload);
		P_NATIVE_END;
	}
	static FName NAME_UOperatingSystemDeviceMessenger_K2_OnConstructed = FName(TEXT("K2_OnConstructed"));
	void UOperatingSystemDeviceMessenger::K2_OnConstructed()
	{
		ProcessEvent(FindFunctionChecked(NAME_UOperatingSystemDeviceMessenger_K2_OnConstructed),NULL);
	}
	static FName NAME_UOperatingSystemDeviceMessenger_K2_OnMessengerBeginDestroy = FName(TEXT("K2_OnMessengerBeginDestroy"));
	void UOperatingSystemDeviceMessenger::K2_OnMessengerBeginDestroy()
	{
		ProcessEvent(FindFunctionChecked(NAME_UOperatingSystemDeviceMessenger_K2_OnMessengerBeginDestroy),NULL);
	}
	void UOperatingSystemDeviceMessenger::StaticRegisterNativesUOperatingSystemDeviceMessenger()
	{
		UClass* Class = UOperatingSystemDeviceMessenger::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BeginListening", &UOperatingSystemDeviceMessenger::execBeginListening },
			{ "Broadcast", &UOperatingSystemDeviceMessenger::execBroadcast },
			{ "StopListening", &UOperatingSystemDeviceMessenger::execStopListening },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOperatingSystemDeviceMessenger_BeginListening_Statics
	{
		struct OperatingSystemDeviceMessenger_eventBeginListening_Parms
		{
			FName ListenToEventName;
			FScriptDelegate Callback;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ListenToEventName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ListenToEventName;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemDeviceMessenger_BeginListening_Statics::NewProp_ListenToEventName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UOperatingSystemDeviceMessenger_BeginListening_Statics::NewProp_ListenToEventName = { "ListenToEventName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemDeviceMessenger_eventBeginListening_Parms, ListenToEventName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemDeviceMessenger_BeginListening_Statics::NewProp_ListenToEventName_MetaData), Z_Construct_UFunction_UOperatingSystemDeviceMessenger_BeginListening_Statics::NewProp_ListenToEventName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemDeviceMessenger_BeginListening_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UOperatingSystemDeviceMessenger_BeginListening_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemDeviceMessenger_eventBeginListening_Parms, Callback), Z_Construct_UDelegateFunction_OperatingSystemSimulator_OperatingSystemDeviceMessageDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemDeviceMessenger_BeginListening_Statics::NewProp_Callback_MetaData), Z_Construct_UFunction_UOperatingSystemDeviceMessenger_BeginListening_Statics::NewProp_Callback_MetaData) }; // 1577236298
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperatingSystemDeviceMessenger_BeginListening_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemDeviceMessenger_BeginListening_Statics::NewProp_ListenToEventName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemDeviceMessenger_BeginListening_Statics::NewProp_Callback,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemDeviceMessenger_BeginListening_Statics::Function_MetaDataParams[] = {
		{ "Category", "OperatingSystemDeviceMessenger" },
		{ "ModuleRelativePath", "Public/Devices/OperatingSystemDeviceMessenger.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystemDeviceMessenger_BeginListening_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystemDeviceMessenger, nullptr, "BeginListening", nullptr, nullptr, Z_Construct_UFunction_UOperatingSystemDeviceMessenger_BeginListening_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemDeviceMessenger_BeginListening_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOperatingSystemDeviceMessenger_BeginListening_Statics::OperatingSystemDeviceMessenger_eventBeginListening_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemDeviceMessenger_BeginListening_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystemDeviceMessenger_BeginListening_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemDeviceMessenger_BeginListening_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOperatingSystemDeviceMessenger_BeginListening_Statics::OperatingSystemDeviceMessenger_eventBeginListening_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOperatingSystemDeviceMessenger_BeginListening()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystemDeviceMessenger_BeginListening_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOperatingSystemDeviceMessenger_Broadcast_Statics
	{
		struct OperatingSystemDeviceMessenger_eventBroadcast_Parms
		{
			FName EventName;
			UObject* Payload;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EventName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_EventName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Payload;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemDeviceMessenger_Broadcast_Statics::NewProp_EventName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UOperatingSystemDeviceMessenger_Broadcast_Statics::NewProp_EventName = { "EventName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemDeviceMessenger_eventBroadcast_Parms, EventName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemDeviceMessenger_Broadcast_Statics::NewProp_EventName_MetaData), Z_Construct_UFunction_UOperatingSystemDeviceMessenger_Broadcast_Statics::NewProp_EventName_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOperatingSystemDeviceMessenger_Broadcast_Statics::NewProp_Payload = { "Payload", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemDeviceMessenger_eventBroadcast_Parms, Payload), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperatingSystemDeviceMessenger_Broadcast_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemDeviceMessenger_Broadcast_Statics::NewProp_EventName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemDeviceMessenger_Broadcast_Statics::NewProp_Payload,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemDeviceMessenger_Broadcast_Statics::Function_MetaDataParams[] = {
		{ "Category", "OperatingSystemDeviceMessenger" },
		{ "ModuleRelativePath", "Public/Devices/OperatingSystemDeviceMessenger.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystemDeviceMessenger_Broadcast_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystemDeviceMessenger, nullptr, "Broadcast", nullptr, nullptr, Z_Construct_UFunction_UOperatingSystemDeviceMessenger_Broadcast_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemDeviceMessenger_Broadcast_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOperatingSystemDeviceMessenger_Broadcast_Statics::OperatingSystemDeviceMessenger_eventBroadcast_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemDeviceMessenger_Broadcast_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystemDeviceMessenger_Broadcast_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemDeviceMessenger_Broadcast_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOperatingSystemDeviceMessenger_Broadcast_Statics::OperatingSystemDeviceMessenger_eventBroadcast_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOperatingSystemDeviceMessenger_Broadcast()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystemDeviceMessenger_Broadcast_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOperatingSystemDeviceMessenger_K2_OnConstructed_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemDeviceMessenger_K2_OnConstructed_Statics::Function_MetaDataParams[] = {
		{ "Category", "OperatingSystemDeviceMessenger" },
		{ "DisplayName", "On Constructed" },
		{ "ModuleRelativePath", "Public/Devices/OperatingSystemDeviceMessenger.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystemDeviceMessenger_K2_OnConstructed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystemDeviceMessenger, nullptr, "K2_OnConstructed", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemDeviceMessenger_K2_OnConstructed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystemDeviceMessenger_K2_OnConstructed_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UOperatingSystemDeviceMessenger_K2_OnConstructed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystemDeviceMessenger_K2_OnConstructed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOperatingSystemDeviceMessenger_K2_OnMessengerBeginDestroy_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemDeviceMessenger_K2_OnMessengerBeginDestroy_Statics::Function_MetaDataParams[] = {
		{ "Category", "OperatingSystemDeviceMessenger" },
		{ "DisplayName", "On Messenger Begin Destroy" },
		{ "ModuleRelativePath", "Public/Devices/OperatingSystemDeviceMessenger.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystemDeviceMessenger_K2_OnMessengerBeginDestroy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystemDeviceMessenger, nullptr, "K2_OnMessengerBeginDestroy", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemDeviceMessenger_K2_OnMessengerBeginDestroy_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystemDeviceMessenger_K2_OnMessengerBeginDestroy_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UOperatingSystemDeviceMessenger_K2_OnMessengerBeginDestroy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystemDeviceMessenger_K2_OnMessengerBeginDestroy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOperatingSystemDeviceMessenger_StopListening_Statics
	{
		struct OperatingSystemDeviceMessenger_eventStopListening_Parms
		{
			FName EventName;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EventName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_EventName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemDeviceMessenger_StopListening_Statics::NewProp_EventName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UOperatingSystemDeviceMessenger_StopListening_Statics::NewProp_EventName = { "EventName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemDeviceMessenger_eventStopListening_Parms, EventName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemDeviceMessenger_StopListening_Statics::NewProp_EventName_MetaData), Z_Construct_UFunction_UOperatingSystemDeviceMessenger_StopListening_Statics::NewProp_EventName_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperatingSystemDeviceMessenger_StopListening_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemDeviceMessenger_StopListening_Statics::NewProp_EventName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemDeviceMessenger_StopListening_Statics::Function_MetaDataParams[] = {
		{ "Category", "OperatingSystemDeviceMessenger" },
		{ "ModuleRelativePath", "Public/Devices/OperatingSystemDeviceMessenger.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystemDeviceMessenger_StopListening_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystemDeviceMessenger, nullptr, "StopListening", nullptr, nullptr, Z_Construct_UFunction_UOperatingSystemDeviceMessenger_StopListening_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemDeviceMessenger_StopListening_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOperatingSystemDeviceMessenger_StopListening_Statics::OperatingSystemDeviceMessenger_eventStopListening_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemDeviceMessenger_StopListening_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystemDeviceMessenger_StopListening_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemDeviceMessenger_StopListening_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOperatingSystemDeviceMessenger_StopListening_Statics::OperatingSystemDeviceMessenger_eventStopListening_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOperatingSystemDeviceMessenger_StopListening()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystemDeviceMessenger_StopListening_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOperatingSystemDeviceMessenger);
	UClass* Z_Construct_UClass_UOperatingSystemDeviceMessenger_NoRegister()
	{
		return UOperatingSystemDeviceMessenger::StaticClass();
	}
	struct Z_Construct_UClass_UOperatingSystemDeviceMessenger_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParentDevice_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_ParentDevice;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOperatingSystemDeviceMessenger_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_OperatingSystemSimulator,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemDeviceMessenger_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UOperatingSystemDeviceMessenger_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOperatingSystemDeviceMessenger_BeginListening, "BeginListening" }, // 378790963
		{ &Z_Construct_UFunction_UOperatingSystemDeviceMessenger_Broadcast, "Broadcast" }, // 2203422816
		{ &Z_Construct_UFunction_UOperatingSystemDeviceMessenger_K2_OnConstructed, "K2_OnConstructed" }, // 357474978
		{ &Z_Construct_UFunction_UOperatingSystemDeviceMessenger_K2_OnMessengerBeginDestroy, "K2_OnMessengerBeginDestroy" }, // 3186407399
		{ &Z_Construct_UFunction_UOperatingSystemDeviceMessenger_StopListening, "StopListening" }, // 2579534818
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemDeviceMessenger_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystemDeviceMessenger_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Devices/OperatingSystemDeviceMessenger.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Devices/OperatingSystemDeviceMessenger.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystemDeviceMessenger_Statics::NewProp_ParentDevice_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OperatingSystemDeviceMessenger" },
		{ "ModuleRelativePath", "Public/Devices/OperatingSystemDeviceMessenger.h" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UOperatingSystemDeviceMessenger_Statics::NewProp_ParentDevice = { "ParentDevice", nullptr, (EPropertyFlags)0x0044000000000014, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOperatingSystemDeviceMessenger, ParentDevice), Z_Construct_UClass_UOperatingSystemBaseDevice_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemDeviceMessenger_Statics::NewProp_ParentDevice_MetaData), Z_Construct_UClass_UOperatingSystemDeviceMessenger_Statics::NewProp_ParentDevice_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOperatingSystemDeviceMessenger_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystemDeviceMessenger_Statics::NewProp_ParentDevice,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOperatingSystemDeviceMessenger_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOperatingSystemDeviceMessenger>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOperatingSystemDeviceMessenger_Statics::ClassParams = {
		&UOperatingSystemDeviceMessenger::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UOperatingSystemDeviceMessenger_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemDeviceMessenger_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemDeviceMessenger_Statics::Class_MetaDataParams), Z_Construct_UClass_UOperatingSystemDeviceMessenger_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemDeviceMessenger_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UOperatingSystemDeviceMessenger()
	{
		if (!Z_Registration_Info_UClass_UOperatingSystemDeviceMessenger.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOperatingSystemDeviceMessenger.OuterSingleton, Z_Construct_UClass_UOperatingSystemDeviceMessenger_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOperatingSystemDeviceMessenger.OuterSingleton;
	}
	template<> OPERATINGSYSTEMSIMULATOR_API UClass* StaticClass<UOperatingSystemDeviceMessenger>()
	{
		return UOperatingSystemDeviceMessenger::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOperatingSystemDeviceMessenger);
	UOperatingSystemDeviceMessenger::~UOperatingSystemDeviceMessenger() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Devices_OperatingSystemDeviceMessenger_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Devices_OperatingSystemDeviceMessenger_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOperatingSystemDeviceMessenger, UOperatingSystemDeviceMessenger::StaticClass, TEXT("UOperatingSystemDeviceMessenger"), &Z_Registration_Info_UClass_UOperatingSystemDeviceMessenger, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOperatingSystemDeviceMessenger), 1359102872U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Devices_OperatingSystemDeviceMessenger_h_26549831(TEXT("/Script/OperatingSystemSimulator"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Devices_OperatingSystemDeviceMessenger_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Devices_OperatingSystemDeviceMessenger_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
