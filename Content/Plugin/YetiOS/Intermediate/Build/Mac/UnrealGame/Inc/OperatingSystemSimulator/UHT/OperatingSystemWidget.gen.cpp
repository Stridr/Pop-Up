// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OperatingSystemSimulator/Public/Widgets/OperatingSystemWidget.h"
#include "GameplayTagContainer.h"
#include "OperatingSystemSimulator/Public/OperatingSystemTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOperatingSystemWidget() {}
// Cross Module References
	COMMONUI_API UClass* Z_Construct_UClass_UCommonUserWidget();
	DRAGGABLEWINDOWUMG_API UClass* Z_Construct_UClass_UDraggableWindow_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	OPERATINGSYSTEMSIMULATOR_API UClass* Z_Construct_UClass_UOperatingSystem_NoRegister();
	OPERATINGSYSTEMSIMULATOR_API UClass* Z_Construct_UClass_UOperatingSystemBaseProgram_NoRegister();
	OPERATINGSYSTEMSIMULATOR_API UClass* Z_Construct_UClass_UOperatingSystemWidget();
	OPERATINGSYSTEMSIMULATOR_API UClass* Z_Construct_UClass_UOperatingSystemWidget_NoRegister();
	OPERATINGSYSTEMSIMULATOR_API UScriptStruct* Z_Construct_UScriptStruct_FOperatingSystemNotification();
	UPackage* Z_Construct_UPackage__Script_OperatingSystemSimulator();
// End Cross Module References
	DEFINE_FUNCTION(UOperatingSystemWidget::execIsCurrentlyViewingDesktop)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsCurrentlyViewingDesktop();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOperatingSystemWidget::execSwitchTab)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_Tag);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SwitchTab(Z_Param_Tag);
		P_NATIVE_END;
	}
	struct OperatingSystemWidget_eventK2_BringWindowToFront_Parms
	{
		UDraggableWindow* Window;
		int32 NewZOrder;
	};
	struct OperatingSystemWidget_eventK2_CreateNewWindow_Parms
	{
		UOperatingSystemBaseProgram* Program;
		UDraggableWindow* ReturnValue;

		/** Constructor, initializes return property only **/
		OperatingSystemWidget_eventK2_CreateNewWindow_Parms()
			: ReturnValue(NULL)
		{
		}
	};
	struct OperatingSystemWidget_eventK2_OnBeginInstall_Parms
	{
		float InstallationTime;
	};
	struct OperatingSystemWidget_eventK2_OnShowNotification_Parms
	{
		FOperatingSystemNotification NewNotification;
	};
	struct OperatingSystemWidget_eventK2_OnStartOS_Parms
	{
		bool bIsInitialStartup;
	};
	struct OperatingSystemWidget_eventK2_OnSwitchTab_Parms
	{
		FGameplayTag WidgetTag;
	};
	static FName NAME_UOperatingSystemWidget_K2_BringWindowToFront = FName(TEXT("K2_BringWindowToFront"));
	void UOperatingSystemWidget::K2_BringWindowToFront(UDraggableWindow* Window, int32 const& NewZOrder)
	{
		OperatingSystemWidget_eventK2_BringWindowToFront_Parms Parms;
		Parms.Window=Window;
		Parms.NewZOrder=NewZOrder;
		ProcessEvent(FindFunctionChecked(NAME_UOperatingSystemWidget_K2_BringWindowToFront),&Parms);
	}
	static FName NAME_UOperatingSystemWidget_K2_CreateNewWindow = FName(TEXT("K2_CreateNewWindow"));
	UDraggableWindow* UOperatingSystemWidget::K2_CreateNewWindow(UOperatingSystemBaseProgram* Program)
	{
		OperatingSystemWidget_eventK2_CreateNewWindow_Parms Parms;
		Parms.Program=Program;
		ProcessEvent(FindFunctionChecked(NAME_UOperatingSystemWidget_K2_CreateNewWindow),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UOperatingSystemWidget_K2_OnBeginInstall = FName(TEXT("K2_OnBeginInstall"));
	void UOperatingSystemWidget::K2_OnBeginInstall(float const& InstallationTime)
	{
		OperatingSystemWidget_eventK2_OnBeginInstall_Parms Parms;
		Parms.InstallationTime=InstallationTime;
		ProcessEvent(FindFunctionChecked(NAME_UOperatingSystemWidget_K2_OnBeginInstall),&Parms);
	}
	static FName NAME_UOperatingSystemWidget_K2_OnBeginRestartOS = FName(TEXT("K2_OnBeginRestartOS"));
	void UOperatingSystemWidget::K2_OnBeginRestartOS()
	{
		ProcessEvent(FindFunctionChecked(NAME_UOperatingSystemWidget_K2_OnBeginRestartOS),NULL);
	}
	static FName NAME_UOperatingSystemWidget_K2_OnBeginShutdownOS = FName(TEXT("K2_OnBeginShutdownOS"));
	void UOperatingSystemWidget::K2_OnBeginShutdownOS()
	{
		ProcessEvent(FindFunctionChecked(NAME_UOperatingSystemWidget_K2_OnBeginShutdownOS),NULL);
	}
	static FName NAME_UOperatingSystemWidget_K2_OnClearAllNotification = FName(TEXT("K2_OnClearAllNotification"));
	void UOperatingSystemWidget::K2_OnClearAllNotification()
	{
		ProcessEvent(FindFunctionChecked(NAME_UOperatingSystemWidget_K2_OnClearAllNotification),NULL);
	}
	static FName NAME_UOperatingSystemWidget_K2_OnFinishInstall = FName(TEXT("K2_OnFinishInstall"));
	void UOperatingSystemWidget::K2_OnFinishInstall()
	{
		ProcessEvent(FindFunctionChecked(NAME_UOperatingSystemWidget_K2_OnFinishInstall),NULL);
	}
	static FName NAME_UOperatingSystemWidget_K2_OnInitialStartup = FName(TEXT("K2_OnInitialStartup"));
	void UOperatingSystemWidget::K2_OnInitialStartup()
	{
		ProcessEvent(FindFunctionChecked(NAME_UOperatingSystemWidget_K2_OnInitialStartup),NULL);
	}
	static FName NAME_UOperatingSystemWidget_K2_OnPrepareInstall = FName(TEXT("K2_OnPrepareInstall"));
	void UOperatingSystemWidget::K2_OnPrepareInstall()
	{
		ProcessEvent(FindFunctionChecked(NAME_UOperatingSystemWidget_K2_OnPrepareInstall),NULL);
	}
	static FName NAME_UOperatingSystemWidget_K2_OnShowDesktop = FName(TEXT("K2_OnShowDesktop"));
	void UOperatingSystemWidget::K2_OnShowDesktop()
	{
		ProcessEvent(FindFunctionChecked(NAME_UOperatingSystemWidget_K2_OnShowDesktop),NULL);
	}
	static FName NAME_UOperatingSystemWidget_K2_OnShowLogonScreen = FName(TEXT("K2_OnShowLogonScreen"));
	void UOperatingSystemWidget::K2_OnShowLogonScreen()
	{
		ProcessEvent(FindFunctionChecked(NAME_UOperatingSystemWidget_K2_OnShowLogonScreen),NULL);
	}
	static FName NAME_UOperatingSystemWidget_K2_OnShowNotification = FName(TEXT("K2_OnShowNotification"));
	void UOperatingSystemWidget::K2_OnShowNotification(FOperatingSystemNotification const& NewNotification)
	{
		OperatingSystemWidget_eventK2_OnShowNotification_Parms Parms;
		Parms.NewNotification=NewNotification;
		ProcessEvent(FindFunctionChecked(NAME_UOperatingSystemWidget_K2_OnShowNotification),&Parms);
	}
	static FName NAME_UOperatingSystemWidget_K2_OnStartOS = FName(TEXT("K2_OnStartOS"));
	void UOperatingSystemWidget::K2_OnStartOS(bool bIsInitialStartup)
	{
		OperatingSystemWidget_eventK2_OnStartOS_Parms Parms;
		Parms.bIsInitialStartup=bIsInitialStartup ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UOperatingSystemWidget_K2_OnStartOS),&Parms);
	}
	static FName NAME_UOperatingSystemWidget_K2_OnSwitchTab = FName(TEXT("K2_OnSwitchTab"));
	void UOperatingSystemWidget::K2_OnSwitchTab(FGameplayTag const& WidgetTag)
	{
		OperatingSystemWidget_eventK2_OnSwitchTab_Parms Parms;
		Parms.WidgetTag=WidgetTag;
		ProcessEvent(FindFunctionChecked(NAME_UOperatingSystemWidget_K2_OnSwitchTab),&Parms);
	}
	void UOperatingSystemWidget::StaticRegisterNativesUOperatingSystemWidget()
	{
		UClass* Class = UOperatingSystemWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsCurrentlyViewingDesktop", &UOperatingSystemWidget::execIsCurrentlyViewingDesktop },
			{ "SwitchTab", &UOperatingSystemWidget::execSwitchTab },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOperatingSystemWidget_IsCurrentlyViewingDesktop_Statics
	{
		struct OperatingSystemWidget_eventIsCurrentlyViewingDesktop_Parms
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
	void Z_Construct_UFunction_UOperatingSystemWidget_IsCurrentlyViewingDesktop_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OperatingSystemWidget_eventIsCurrentlyViewingDesktop_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOperatingSystemWidget_IsCurrentlyViewingDesktop_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OperatingSystemWidget_eventIsCurrentlyViewingDesktop_Parms), &Z_Construct_UFunction_UOperatingSystemWidget_IsCurrentlyViewingDesktop_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperatingSystemWidget_IsCurrentlyViewingDesktop_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemWidget_IsCurrentlyViewingDesktop_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemWidget_IsCurrentlyViewingDesktop_Statics::Function_MetaDataParams[] = {
		{ "Categories", "OperatingSystem.Widget.OS" },
		{ "Category", "OperatingSystemWidget" },
		{ "ModuleRelativePath", "Public/Widgets/OperatingSystemWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystemWidget_IsCurrentlyViewingDesktop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystemWidget, nullptr, "IsCurrentlyViewingDesktop", nullptr, nullptr, Z_Construct_UFunction_UOperatingSystemWidget_IsCurrentlyViewingDesktop_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemWidget_IsCurrentlyViewingDesktop_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOperatingSystemWidget_IsCurrentlyViewingDesktop_Statics::OperatingSystemWidget_eventIsCurrentlyViewingDesktop_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemWidget_IsCurrentlyViewingDesktop_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystemWidget_IsCurrentlyViewingDesktop_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemWidget_IsCurrentlyViewingDesktop_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOperatingSystemWidget_IsCurrentlyViewingDesktop_Statics::OperatingSystemWidget_eventIsCurrentlyViewingDesktop_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOperatingSystemWidget_IsCurrentlyViewingDesktop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystemWidget_IsCurrentlyViewingDesktop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOperatingSystemWidget_K2_BringWindowToFront_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Window_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Window;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewZOrder_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NewZOrder;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemWidget_K2_BringWindowToFront_Statics::NewProp_Window_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOperatingSystemWidget_K2_BringWindowToFront_Statics::NewProp_Window = { "Window", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemWidget_eventK2_BringWindowToFront_Parms, Window), Z_Construct_UClass_UDraggableWindow_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemWidget_K2_BringWindowToFront_Statics::NewProp_Window_MetaData), Z_Construct_UFunction_UOperatingSystemWidget_K2_BringWindowToFront_Statics::NewProp_Window_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemWidget_K2_BringWindowToFront_Statics::NewProp_NewZOrder_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOperatingSystemWidget_K2_BringWindowToFront_Statics::NewProp_NewZOrder = { "NewZOrder", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemWidget_eventK2_BringWindowToFront_Parms, NewZOrder), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemWidget_K2_BringWindowToFront_Statics::NewProp_NewZOrder_MetaData), Z_Construct_UFunction_UOperatingSystemWidget_K2_BringWindowToFront_Statics::NewProp_NewZOrder_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperatingSystemWidget_K2_BringWindowToFront_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemWidget_K2_BringWindowToFront_Statics::NewProp_Window,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemWidget_K2_BringWindowToFront_Statics::NewProp_NewZOrder,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemWidget_K2_BringWindowToFront_Statics::Function_MetaDataParams[] = {
		{ "Category", "OperatingSystemWidget" },
		{ "DisplayName", "OnBringWindowToFront" },
		{ "ModuleRelativePath", "Public/Widgets/OperatingSystemWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystemWidget_K2_BringWindowToFront_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystemWidget, nullptr, "K2_BringWindowToFront", nullptr, nullptr, Z_Construct_UFunction_UOperatingSystemWidget_K2_BringWindowToFront_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemWidget_K2_BringWindowToFront_Statics::PropPointers), sizeof(OperatingSystemWidget_eventK2_BringWindowToFront_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08480800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemWidget_K2_BringWindowToFront_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystemWidget_K2_BringWindowToFront_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemWidget_K2_BringWindowToFront_Statics::PropPointers) < 2048);
	static_assert(sizeof(OperatingSystemWidget_eventK2_BringWindowToFront_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOperatingSystemWidget_K2_BringWindowToFront()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystemWidget_K2_BringWindowToFront_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOperatingSystemWidget_K2_CreateNewWindow_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Program;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOperatingSystemWidget_K2_CreateNewWindow_Statics::NewProp_Program = { "Program", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemWidget_eventK2_CreateNewWindow_Parms, Program), Z_Construct_UClass_UOperatingSystemBaseProgram_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemWidget_K2_CreateNewWindow_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOperatingSystemWidget_K2_CreateNewWindow_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemWidget_eventK2_CreateNewWindow_Parms, ReturnValue), Z_Construct_UClass_UDraggableWindow_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemWidget_K2_CreateNewWindow_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UOperatingSystemWidget_K2_CreateNewWindow_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperatingSystemWidget_K2_CreateNewWindow_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemWidget_K2_CreateNewWindow_Statics::NewProp_Program,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemWidget_K2_CreateNewWindow_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemWidget_K2_CreateNewWindow_Statics::Function_MetaDataParams[] = {
		{ "Category", "OperatingSystemWidget" },
		{ "DisplayName", "OnCreateNewWindow" },
		{ "ModuleRelativePath", "Public/Widgets/OperatingSystemWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystemWidget_K2_CreateNewWindow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystemWidget, nullptr, "K2_CreateNewWindow", nullptr, nullptr, Z_Construct_UFunction_UOperatingSystemWidget_K2_CreateNewWindow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemWidget_K2_CreateNewWindow_Statics::PropPointers), sizeof(OperatingSystemWidget_eventK2_CreateNewWindow_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemWidget_K2_CreateNewWindow_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystemWidget_K2_CreateNewWindow_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemWidget_K2_CreateNewWindow_Statics::PropPointers) < 2048);
	static_assert(sizeof(OperatingSystemWidget_eventK2_CreateNewWindow_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOperatingSystemWidget_K2_CreateNewWindow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystemWidget_K2_CreateNewWindow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOperatingSystemWidget_K2_OnBeginInstall_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InstallationTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InstallationTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemWidget_K2_OnBeginInstall_Statics::NewProp_InstallationTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOperatingSystemWidget_K2_OnBeginInstall_Statics::NewProp_InstallationTime = { "InstallationTime", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemWidget_eventK2_OnBeginInstall_Parms, InstallationTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemWidget_K2_OnBeginInstall_Statics::NewProp_InstallationTime_MetaData), Z_Construct_UFunction_UOperatingSystemWidget_K2_OnBeginInstall_Statics::NewProp_InstallationTime_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperatingSystemWidget_K2_OnBeginInstall_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemWidget_K2_OnBeginInstall_Statics::NewProp_InstallationTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemWidget_K2_OnBeginInstall_Statics::Function_MetaDataParams[] = {
		{ "Category", "OperatingSystemWidget" },
		{ "DisplayName", "OnBeginInstallation" },
		{ "ModuleRelativePath", "Public/Widgets/OperatingSystemWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystemWidget_K2_OnBeginInstall_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystemWidget, nullptr, "K2_OnBeginInstall", nullptr, nullptr, Z_Construct_UFunction_UOperatingSystemWidget_K2_OnBeginInstall_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemWidget_K2_OnBeginInstall_Statics::PropPointers), sizeof(OperatingSystemWidget_eventK2_OnBeginInstall_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08480800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemWidget_K2_OnBeginInstall_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystemWidget_K2_OnBeginInstall_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemWidget_K2_OnBeginInstall_Statics::PropPointers) < 2048);
	static_assert(sizeof(OperatingSystemWidget_eventK2_OnBeginInstall_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOperatingSystemWidget_K2_OnBeginInstall()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystemWidget_K2_OnBeginInstall_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOperatingSystemWidget_K2_OnBeginRestartOS_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemWidget_K2_OnBeginRestartOS_Statics::Function_MetaDataParams[] = {
		{ "Category", "OperatingSystemWidget" },
		{ "DisplayName", "OnBeginRestartOS" },
		{ "ModuleRelativePath", "Public/Widgets/OperatingSystemWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystemWidget_K2_OnBeginRestartOS_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystemWidget, nullptr, "K2_OnBeginRestartOS", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemWidget_K2_OnBeginRestartOS_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystemWidget_K2_OnBeginRestartOS_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UOperatingSystemWidget_K2_OnBeginRestartOS()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystemWidget_K2_OnBeginRestartOS_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOperatingSystemWidget_K2_OnBeginShutdownOS_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemWidget_K2_OnBeginShutdownOS_Statics::Function_MetaDataParams[] = {
		{ "Category", "OperatingSystemWidget" },
		{ "DisplayName", "OnBeginShutdownOS" },
		{ "ModuleRelativePath", "Public/Widgets/OperatingSystemWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystemWidget_K2_OnBeginShutdownOS_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystemWidget, nullptr, "K2_OnBeginShutdownOS", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemWidget_K2_OnBeginShutdownOS_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystemWidget_K2_OnBeginShutdownOS_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UOperatingSystemWidget_K2_OnBeginShutdownOS()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystemWidget_K2_OnBeginShutdownOS_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOperatingSystemWidget_K2_OnClearAllNotification_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemWidget_K2_OnClearAllNotification_Statics::Function_MetaDataParams[] = {
		{ "Category", "OperatingSystemWidget" },
		{ "DisplayName", "OnClearAllNotification" },
		{ "ModuleRelativePath", "Public/Widgets/OperatingSystemWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystemWidget_K2_OnClearAllNotification_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystemWidget, nullptr, "K2_OnClearAllNotification", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemWidget_K2_OnClearAllNotification_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystemWidget_K2_OnClearAllNotification_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UOperatingSystemWidget_K2_OnClearAllNotification()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystemWidget_K2_OnClearAllNotification_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOperatingSystemWidget_K2_OnFinishInstall_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemWidget_K2_OnFinishInstall_Statics::Function_MetaDataParams[] = {
		{ "Category", "OperatingSystemWidget" },
		{ "DisplayName", "OnFinishInstallation" },
		{ "ModuleRelativePath", "Public/Widgets/OperatingSystemWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystemWidget_K2_OnFinishInstall_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystemWidget, nullptr, "K2_OnFinishInstall", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemWidget_K2_OnFinishInstall_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystemWidget_K2_OnFinishInstall_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UOperatingSystemWidget_K2_OnFinishInstall()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystemWidget_K2_OnFinishInstall_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOperatingSystemWidget_K2_OnInitialStartup_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemWidget_K2_OnInitialStartup_Statics::Function_MetaDataParams[] = {
		{ "Category", "OperatingSystemWidget" },
		{ "DisplayName", "OnInitialStartup" },
		{ "ModuleRelativePath", "Public/Widgets/OperatingSystemWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystemWidget_K2_OnInitialStartup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystemWidget, nullptr, "K2_OnInitialStartup", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemWidget_K2_OnInitialStartup_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystemWidget_K2_OnInitialStartup_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UOperatingSystemWidget_K2_OnInitialStartup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystemWidget_K2_OnInitialStartup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOperatingSystemWidget_K2_OnPrepareInstall_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemWidget_K2_OnPrepareInstall_Statics::Function_MetaDataParams[] = {
		{ "Category", "OperatingSystemWidget" },
		{ "DisplayName", "OnPrepareInstallation" },
		{ "ModuleRelativePath", "Public/Widgets/OperatingSystemWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystemWidget_K2_OnPrepareInstall_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystemWidget, nullptr, "K2_OnPrepareInstall", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemWidget_K2_OnPrepareInstall_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystemWidget_K2_OnPrepareInstall_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UOperatingSystemWidget_K2_OnPrepareInstall()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystemWidget_K2_OnPrepareInstall_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOperatingSystemWidget_K2_OnShowDesktop_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemWidget_K2_OnShowDesktop_Statics::Function_MetaDataParams[] = {
		{ "Category", "OperatingSystemWidget" },
		{ "DisplayName", "OnShowDesktop" },
		{ "ModuleRelativePath", "Public/Widgets/OperatingSystemWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystemWidget_K2_OnShowDesktop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystemWidget, nullptr, "K2_OnShowDesktop", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemWidget_K2_OnShowDesktop_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystemWidget_K2_OnShowDesktop_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UOperatingSystemWidget_K2_OnShowDesktop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystemWidget_K2_OnShowDesktop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOperatingSystemWidget_K2_OnShowLogonScreen_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemWidget_K2_OnShowLogonScreen_Statics::Function_MetaDataParams[] = {
		{ "Category", "OperatingSystemWidget" },
		{ "DisplayName", "OnShowLogonScreen" },
		{ "ModuleRelativePath", "Public/Widgets/OperatingSystemWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystemWidget_K2_OnShowLogonScreen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystemWidget, nullptr, "K2_OnShowLogonScreen", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemWidget_K2_OnShowLogonScreen_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystemWidget_K2_OnShowLogonScreen_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UOperatingSystemWidget_K2_OnShowLogonScreen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystemWidget_K2_OnShowLogonScreen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOperatingSystemWidget_K2_OnShowNotification_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewNotification_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewNotification;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemWidget_K2_OnShowNotification_Statics::NewProp_NewNotification_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOperatingSystemWidget_K2_OnShowNotification_Statics::NewProp_NewNotification = { "NewNotification", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemWidget_eventK2_OnShowNotification_Parms, NewNotification), Z_Construct_UScriptStruct_FOperatingSystemNotification, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemWidget_K2_OnShowNotification_Statics::NewProp_NewNotification_MetaData), Z_Construct_UFunction_UOperatingSystemWidget_K2_OnShowNotification_Statics::NewProp_NewNotification_MetaData) }; // 2023410135
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperatingSystemWidget_K2_OnShowNotification_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemWidget_K2_OnShowNotification_Statics::NewProp_NewNotification,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemWidget_K2_OnShowNotification_Statics::Function_MetaDataParams[] = {
		{ "Category", "OperatingSystemWidget" },
		{ "DisplayName", "OnShowNotification" },
		{ "ModuleRelativePath", "Public/Widgets/OperatingSystemWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystemWidget_K2_OnShowNotification_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystemWidget, nullptr, "K2_OnShowNotification", nullptr, nullptr, Z_Construct_UFunction_UOperatingSystemWidget_K2_OnShowNotification_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemWidget_K2_OnShowNotification_Statics::PropPointers), sizeof(OperatingSystemWidget_eventK2_OnShowNotification_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08480800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemWidget_K2_OnShowNotification_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystemWidget_K2_OnShowNotification_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemWidget_K2_OnShowNotification_Statics::PropPointers) < 2048);
	static_assert(sizeof(OperatingSystemWidget_eventK2_OnShowNotification_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOperatingSystemWidget_K2_OnShowNotification()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystemWidget_K2_OnShowNotification_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOperatingSystemWidget_K2_OnStartOS_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsInitialStartup_MetaData[];
#endif
		static void NewProp_bIsInitialStartup_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsInitialStartup;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemWidget_K2_OnStartOS_Statics::NewProp_bIsInitialStartup_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UOperatingSystemWidget_K2_OnStartOS_Statics::NewProp_bIsInitialStartup_SetBit(void* Obj)
	{
		((OperatingSystemWidget_eventK2_OnStartOS_Parms*)Obj)->bIsInitialStartup = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOperatingSystemWidget_K2_OnStartOS_Statics::NewProp_bIsInitialStartup = { "bIsInitialStartup", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OperatingSystemWidget_eventK2_OnStartOS_Parms), &Z_Construct_UFunction_UOperatingSystemWidget_K2_OnStartOS_Statics::NewProp_bIsInitialStartup_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemWidget_K2_OnStartOS_Statics::NewProp_bIsInitialStartup_MetaData), Z_Construct_UFunction_UOperatingSystemWidget_K2_OnStartOS_Statics::NewProp_bIsInitialStartup_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperatingSystemWidget_K2_OnStartOS_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemWidget_K2_OnStartOS_Statics::NewProp_bIsInitialStartup,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemWidget_K2_OnStartOS_Statics::Function_MetaDataParams[] = {
		{ "Category", "OperatingSystemWidget" },
		{ "DisplayName", "OnStartOS" },
		{ "ModuleRelativePath", "Public/Widgets/OperatingSystemWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystemWidget_K2_OnStartOS_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystemWidget, nullptr, "K2_OnStartOS", nullptr, nullptr, Z_Construct_UFunction_UOperatingSystemWidget_K2_OnStartOS_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemWidget_K2_OnStartOS_Statics::PropPointers), sizeof(OperatingSystemWidget_eventK2_OnStartOS_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemWidget_K2_OnStartOS_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystemWidget_K2_OnStartOS_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemWidget_K2_OnStartOS_Statics::PropPointers) < 2048);
	static_assert(sizeof(OperatingSystemWidget_eventK2_OnStartOS_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOperatingSystemWidget_K2_OnStartOS()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystemWidget_K2_OnStartOS_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOperatingSystemWidget_K2_OnSwitchTab_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WidgetTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WidgetTag;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemWidget_K2_OnSwitchTab_Statics::NewProp_WidgetTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOperatingSystemWidget_K2_OnSwitchTab_Statics::NewProp_WidgetTag = { "WidgetTag", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemWidget_eventK2_OnSwitchTab_Parms, WidgetTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemWidget_K2_OnSwitchTab_Statics::NewProp_WidgetTag_MetaData), Z_Construct_UFunction_UOperatingSystemWidget_K2_OnSwitchTab_Statics::NewProp_WidgetTag_MetaData) }; // 2083603574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperatingSystemWidget_K2_OnSwitchTab_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemWidget_K2_OnSwitchTab_Statics::NewProp_WidgetTag,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemWidget_K2_OnSwitchTab_Statics::Function_MetaDataParams[] = {
		{ "Category", "OperatingSystemWidget" },
		{ "DisplayName", "OnSwitchTab" },
		{ "ModuleRelativePath", "Public/Widgets/OperatingSystemWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystemWidget_K2_OnSwitchTab_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystemWidget, nullptr, "K2_OnSwitchTab", nullptr, nullptr, Z_Construct_UFunction_UOperatingSystemWidget_K2_OnSwitchTab_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemWidget_K2_OnSwitchTab_Statics::PropPointers), sizeof(OperatingSystemWidget_eventK2_OnSwitchTab_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08480800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemWidget_K2_OnSwitchTab_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystemWidget_K2_OnSwitchTab_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemWidget_K2_OnSwitchTab_Statics::PropPointers) < 2048);
	static_assert(sizeof(OperatingSystemWidget_eventK2_OnSwitchTab_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOperatingSystemWidget_K2_OnSwitchTab()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystemWidget_K2_OnSwitchTab_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOperatingSystemWidget_SwitchTab_Statics
	{
		struct OperatingSystemWidget_eventSwitchTab_Parms
		{
			FGameplayTag Tag;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Tag;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemWidget_SwitchTab_Statics::NewProp_Tag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOperatingSystemWidget_SwitchTab_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemWidget_eventSwitchTab_Parms, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemWidget_SwitchTab_Statics::NewProp_Tag_MetaData), Z_Construct_UFunction_UOperatingSystemWidget_SwitchTab_Statics::NewProp_Tag_MetaData) }; // 2083603574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperatingSystemWidget_SwitchTab_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemWidget_SwitchTab_Statics::NewProp_Tag,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemWidget_SwitchTab_Statics::Function_MetaDataParams[] = {
		{ "Categories", "OperatingSystem.Widget.OS" },
		{ "Category", "OperatingSystemWidget" },
		{ "ModuleRelativePath", "Public/Widgets/OperatingSystemWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystemWidget_SwitchTab_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystemWidget, nullptr, "SwitchTab", nullptr, nullptr, Z_Construct_UFunction_UOperatingSystemWidget_SwitchTab_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemWidget_SwitchTab_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOperatingSystemWidget_SwitchTab_Statics::OperatingSystemWidget_eventSwitchTab_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemWidget_SwitchTab_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystemWidget_SwitchTab_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemWidget_SwitchTab_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOperatingSystemWidget_SwitchTab_Statics::OperatingSystemWidget_eventSwitchTab_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOperatingSystemWidget_SwitchTab()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystemWidget_SwitchTab_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOperatingSystemWidget);
	UClass* Z_Construct_UClass_UOperatingSystemWidget_NoRegister()
	{
		return UOperatingSystemWidget::StaticClass();
	}
	struct Z_Construct_UClass_UOperatingSystemWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParentOS_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ParentOS;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentTabTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentTabTag;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOperatingSystemWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCommonUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_OperatingSystemSimulator,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemWidget_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UOperatingSystemWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOperatingSystemWidget_IsCurrentlyViewingDesktop, "IsCurrentlyViewingDesktop" }, // 3375386502
		{ &Z_Construct_UFunction_UOperatingSystemWidget_K2_BringWindowToFront, "K2_BringWindowToFront" }, // 516492721
		{ &Z_Construct_UFunction_UOperatingSystemWidget_K2_CreateNewWindow, "K2_CreateNewWindow" }, // 954996305
		{ &Z_Construct_UFunction_UOperatingSystemWidget_K2_OnBeginInstall, "K2_OnBeginInstall" }, // 1503919362
		{ &Z_Construct_UFunction_UOperatingSystemWidget_K2_OnBeginRestartOS, "K2_OnBeginRestartOS" }, // 1333054353
		{ &Z_Construct_UFunction_UOperatingSystemWidget_K2_OnBeginShutdownOS, "K2_OnBeginShutdownOS" }, // 2613131460
		{ &Z_Construct_UFunction_UOperatingSystemWidget_K2_OnClearAllNotification, "K2_OnClearAllNotification" }, // 958321676
		{ &Z_Construct_UFunction_UOperatingSystemWidget_K2_OnFinishInstall, "K2_OnFinishInstall" }, // 2904528930
		{ &Z_Construct_UFunction_UOperatingSystemWidget_K2_OnInitialStartup, "K2_OnInitialStartup" }, // 755304426
		{ &Z_Construct_UFunction_UOperatingSystemWidget_K2_OnPrepareInstall, "K2_OnPrepareInstall" }, // 2566348242
		{ &Z_Construct_UFunction_UOperatingSystemWidget_K2_OnShowDesktop, "K2_OnShowDesktop" }, // 3056561560
		{ &Z_Construct_UFunction_UOperatingSystemWidget_K2_OnShowLogonScreen, "K2_OnShowLogonScreen" }, // 3764316586
		{ &Z_Construct_UFunction_UOperatingSystemWidget_K2_OnShowNotification, "K2_OnShowNotification" }, // 1770752660
		{ &Z_Construct_UFunction_UOperatingSystemWidget_K2_OnStartOS, "K2_OnStartOS" }, // 1762095623
		{ &Z_Construct_UFunction_UOperatingSystemWidget_K2_OnSwitchTab, "K2_OnSwitchTab" }, // 1165294709
		{ &Z_Construct_UFunction_UOperatingSystemWidget_SwitchTab, "SwitchTab" }, // 812746506
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemWidget_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystemWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Widgets/OperatingSystemWidget.h" },
		{ "ModuleRelativePath", "Public/Widgets/OperatingSystemWidget.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystemWidget_Statics::NewProp_ParentOS_MetaData[] = {
		{ "Category", "OperatingSystemWidget" },
		{ "ModuleRelativePath", "Public/Widgets/OperatingSystemWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UOperatingSystemWidget_Statics::NewProp_ParentOS = { "ParentOS", nullptr, (EPropertyFlags)0x0024080000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOperatingSystemWidget, ParentOS), Z_Construct_UClass_UOperatingSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemWidget_Statics::NewProp_ParentOS_MetaData), Z_Construct_UClass_UOperatingSystemWidget_Statics::NewProp_ParentOS_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystemWidget_Statics::NewProp_CurrentTabTag_MetaData[] = {
		{ "ModuleRelativePath", "Public/Widgets/OperatingSystemWidget.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOperatingSystemWidget_Statics::NewProp_CurrentTabTag = { "CurrentTabTag", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOperatingSystemWidget, CurrentTabTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemWidget_Statics::NewProp_CurrentTabTag_MetaData), Z_Construct_UClass_UOperatingSystemWidget_Statics::NewProp_CurrentTabTag_MetaData) }; // 2083603574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOperatingSystemWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystemWidget_Statics::NewProp_ParentOS,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystemWidget_Statics::NewProp_CurrentTabTag,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOperatingSystemWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOperatingSystemWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOperatingSystemWidget_Statics::ClassParams = {
		&UOperatingSystemWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UOperatingSystemWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemWidget_Statics::PropPointers),
		0,
		0x00B010A1u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UOperatingSystemWidget_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemWidget_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UOperatingSystemWidget()
	{
		if (!Z_Registration_Info_UClass_UOperatingSystemWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOperatingSystemWidget.OuterSingleton, Z_Construct_UClass_UOperatingSystemWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOperatingSystemWidget.OuterSingleton;
	}
	template<> OPERATINGSYSTEMSIMULATOR_API UClass* StaticClass<UOperatingSystemWidget>()
	{
		return UOperatingSystemWidget::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOperatingSystemWidget);
	UOperatingSystemWidget::~UOperatingSystemWidget() {}
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Widgets_OperatingSystemWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Widgets_OperatingSystemWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOperatingSystemWidget, UOperatingSystemWidget::StaticClass, TEXT("UOperatingSystemWidget"), &Z_Registration_Info_UClass_UOperatingSystemWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOperatingSystemWidget), 3522810559U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Widgets_OperatingSystemWidget_h_2272071247(TEXT("/Script/OperatingSystemSimulator"),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Widgets_OperatingSystemWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Widgets_OperatingSystemWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
