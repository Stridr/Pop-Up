// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DraggableWindowUMG/DraggableWindow.h"
#include "Components/SlateWrapperTypes.h"
#include "Input/Events.h"
#include "InputCoreTypes.h"
#include "Layout/Geometry.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDraggableWindow() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	DRAGGABLEWINDOWUMG_API UClass* Z_Construct_UClass_UDraggableWindow();
	DRAGGABLEWINDOWUMG_API UClass* Z_Construct_UClass_UDraggableWindow_NoRegister();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometry();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FPointerEvent();
	UMG_API UClass* Z_Construct_UClass_UBorder_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UCanvasPanel_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UCanvasPanelSlot_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	UMG_API UScriptStruct* Z_Construct_UScriptStruct_FEventReply();
	UPackage* Z_Construct_UPackage__Script_DraggableWindowUMG();
// End Cross Module References
	DEFINE_FUNCTION(UDraggableWindow::execGetChildWidget)
	{
		P_GET_OBJECT_REF(UUserWidget,Z_Param_Out_OutChildWidget);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetChildWidget(Z_Param_Out_OutChildWidget);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDraggableWindow::execUpdateWindowSize)
	{
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_InNewSize);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->UpdateWindowSize(Z_Param_Out_InNewSize);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDraggableWindow::execCenterWindowToScreen)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CenterWindowToScreen();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDraggableWindow::execAddContentWidget)
	{
		P_GET_OBJECT(UUserWidget,Z_Param_InWidget);
		P_GET_UBOOL(Z_Param_bClearPrevious);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddContentWidget(Z_Param_InWidget,Z_Param_bClearPrevious);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDraggableWindow::execAddContentWidgetClass)
	{
		P_GET_OBJECT(UClass,Z_Param_InWidgetClass);
		P_GET_UBOOL(Z_Param_bClearPrevious);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddContentWidgetClass(Z_Param_InWidgetClass,Z_Param_bClearPrevious);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDraggableWindow::execInternal_OnMouseButtonDown_ResizeArea)
	{
		P_GET_STRUCT(FGeometry,Z_Param_InGeometry);
		P_GET_STRUCT_REF(FPointerEvent,Z_Param_Out_InMouseEvent);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FEventReply*)Z_Param__Result=P_THIS->Internal_OnMouseButtonDown_ResizeArea(Z_Param_InGeometry,Z_Param_Out_InMouseEvent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDraggableWindow::execInternal_OnMouseButtonDown_WindowTitleBorder)
	{
		P_GET_STRUCT(FGeometry,Z_Param_InGeometry);
		P_GET_STRUCT_REF(FPointerEvent,Z_Param_Out_InMouseEvent);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FEventReply*)Z_Param__Result=P_THIS->Internal_OnMouseButtonDown_WindowTitleBorder(Z_Param_InGeometry,Z_Param_Out_InMouseEvent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDraggableWindow::execInternal_OnMouseButtonUp_WindowTitleBorder)
	{
		P_GET_STRUCT(FGeometry,Z_Param_InGeometry);
		P_GET_STRUCT_REF(FPointerEvent,Z_Param_Out_InMouseEvent);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FEventReply*)Z_Param__Result=P_THIS->Internal_OnMouseButtonUp_WindowTitleBorder(Z_Param_InGeometry,Z_Param_Out_InMouseEvent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDraggableWindow::execCreateDraggableWindowFromWidget)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(UClass,Z_Param_WindowClass);
		P_GET_OBJECT(UUserWidget,Z_Param_NewChildWidget);
		P_GET_STRUCT(FVector2D,Z_Param_StartSize);
		P_GET_STRUCT(FVector2D,Z_Param_ResizeWidth);
		P_GET_STRUCT(FVector2D,Z_Param_ResizeHeight);
		P_GET_UBOOL(Z_Param_bCenterToScreen);
		P_GET_UBOOL(Z_Param_bCanDrag);
		P_GET_UBOOL(Z_Param_bCanResize);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDraggableWindow**)Z_Param__Result=UDraggableWindow::CreateDraggableWindowFromWidget(Z_Param_WorldContextObject,Z_Param_WindowClass,Z_Param_NewChildWidget,Z_Param_StartSize,Z_Param_ResizeWidth,Z_Param_ResizeHeight,Z_Param_bCenterToScreen,Z_Param_bCanDrag,Z_Param_bCanResize);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDraggableWindow::execCreateDraggableWindow)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(UClass,Z_Param_WindowClass);
		P_GET_OBJECT(UClass,Z_Param_ChildWidgetClass);
		P_GET_STRUCT(FVector2D,Z_Param_StartSize);
		P_GET_STRUCT(FVector2D,Z_Param_ResizeWidth);
		P_GET_STRUCT(FVector2D,Z_Param_ResizeHeight);
		P_GET_UBOOL(Z_Param_bCenterToScreen);
		P_GET_UBOOL(Z_Param_bCanDrag);
		P_GET_UBOOL(Z_Param_bCanResize);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDraggableWindow**)Z_Param__Result=UDraggableWindow::CreateDraggableWindow(Z_Param_WorldContextObject,Z_Param_WindowClass,Z_Param_ChildWidgetClass,Z_Param_StartSize,Z_Param_ResizeWidth,Z_Param_ResizeHeight,Z_Param_bCenterToScreen,Z_Param_bCanDrag,Z_Param_bCanResize);
		P_NATIVE_END;
	}
	struct DraggableWindow_eventK2_OnContentWidgetAdded_Parms
	{
		const UUserWidget* AddedUserWidget;
	};
	struct DraggableWindow_eventK2_OnDragStart_Parms
	{
		FPointerEvent InMouseEvent;
	};
	struct DraggableWindow_eventK2_OnResizeStart_Parms
	{
		FPointerEvent InMouseEvent;
	};
	struct DraggableWindow_eventK2_OnSetWindowTitle_Parms
	{
		FText NewWindowTitle;
	};
	static FName NAME_UDraggableWindow_K2_OnCloseWindow = FName(TEXT("K2_OnCloseWindow"));
	void UDraggableWindow::K2_OnCloseWindow()
	{
		ProcessEvent(FindFunctionChecked(NAME_UDraggableWindow_K2_OnCloseWindow),NULL);
	}
	static FName NAME_UDraggableWindow_K2_OnContentWidgetAdded = FName(TEXT("K2_OnContentWidgetAdded"));
	void UDraggableWindow::K2_OnContentWidgetAdded(const UUserWidget* AddedUserWidget)
	{
		DraggableWindow_eventK2_OnContentWidgetAdded_Parms Parms;
		Parms.AddedUserWidget=AddedUserWidget;
		ProcessEvent(FindFunctionChecked(NAME_UDraggableWindow_K2_OnContentWidgetAdded),&Parms);
	}
	static FName NAME_UDraggableWindow_K2_OnDragStart = FName(TEXT("K2_OnDragStart"));
	void UDraggableWindow::K2_OnDragStart(FPointerEvent const& InMouseEvent)
	{
		DraggableWindow_eventK2_OnDragStart_Parms Parms;
		Parms.InMouseEvent=InMouseEvent;
		ProcessEvent(FindFunctionChecked(NAME_UDraggableWindow_K2_OnDragStart),&Parms);
	}
	static FName NAME_UDraggableWindow_K2_OnResizeStart = FName(TEXT("K2_OnResizeStart"));
	void UDraggableWindow::K2_OnResizeStart(FPointerEvent const& InMouseEvent)
	{
		DraggableWindow_eventK2_OnResizeStart_Parms Parms;
		Parms.InMouseEvent=InMouseEvent;
		ProcessEvent(FindFunctionChecked(NAME_UDraggableWindow_K2_OnResizeStart),&Parms);
	}
	static FName NAME_UDraggableWindow_K2_OnSetWindowTitle = FName(TEXT("K2_OnSetWindowTitle"));
	void UDraggableWindow::K2_OnSetWindowTitle(FText const& NewWindowTitle)
	{
		DraggableWindow_eventK2_OnSetWindowTitle_Parms Parms;
		Parms.NewWindowTitle=NewWindowTitle;
		ProcessEvent(FindFunctionChecked(NAME_UDraggableWindow_K2_OnSetWindowTitle),&Parms);
	}
	void UDraggableWindow::StaticRegisterNativesUDraggableWindow()
	{
		UClass* Class = UDraggableWindow::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddContentWidget", &UDraggableWindow::execAddContentWidget },
			{ "AddContentWidgetClass", &UDraggableWindow::execAddContentWidgetClass },
			{ "CenterWindowToScreen", &UDraggableWindow::execCenterWindowToScreen },
			{ "CreateDraggableWindow", &UDraggableWindow::execCreateDraggableWindow },
			{ "CreateDraggableWindowFromWidget", &UDraggableWindow::execCreateDraggableWindowFromWidget },
			{ "GetChildWidget", &UDraggableWindow::execGetChildWidget },
			{ "Internal_OnMouseButtonDown_ResizeArea", &UDraggableWindow::execInternal_OnMouseButtonDown_ResizeArea },
			{ "Internal_OnMouseButtonDown_WindowTitleBorder", &UDraggableWindow::execInternal_OnMouseButtonDown_WindowTitleBorder },
			{ "Internal_OnMouseButtonUp_WindowTitleBorder", &UDraggableWindow::execInternal_OnMouseButtonUp_WindowTitleBorder },
			{ "UpdateWindowSize", &UDraggableWindow::execUpdateWindowSize },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDraggableWindow_AddContentWidget_Statics
	{
		struct DraggableWindow_eventAddContentWidget_Parms
		{
			UUserWidget* InWidget;
			bool bClearPrevious;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InWidget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bClearPrevious_MetaData[];
#endif
		static void NewProp_bClearPrevious_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bClearPrevious;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDraggableWindow_AddContentWidget_Statics::NewProp_InWidget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDraggableWindow_AddContentWidget_Statics::NewProp_InWidget = { "InWidget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DraggableWindow_eventAddContentWidget_Parms, InWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDraggableWindow_AddContentWidget_Statics::NewProp_InWidget_MetaData), Z_Construct_UFunction_UDraggableWindow_AddContentWidget_Statics::NewProp_InWidget_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDraggableWindow_AddContentWidget_Statics::NewProp_bClearPrevious_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UDraggableWindow_AddContentWidget_Statics::NewProp_bClearPrevious_SetBit(void* Obj)
	{
		((DraggableWindow_eventAddContentWidget_Parms*)Obj)->bClearPrevious = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDraggableWindow_AddContentWidget_Statics::NewProp_bClearPrevious = { "bClearPrevious", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DraggableWindow_eventAddContentWidget_Parms), &Z_Construct_UFunction_UDraggableWindow_AddContentWidget_Statics::NewProp_bClearPrevious_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDraggableWindow_AddContentWidget_Statics::NewProp_bClearPrevious_MetaData), Z_Construct_UFunction_UDraggableWindow_AddContentWidget_Statics::NewProp_bClearPrevious_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDraggableWindow_AddContentWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDraggableWindow_AddContentWidget_Statics::NewProp_InWidget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDraggableWindow_AddContentWidget_Statics::NewProp_bClearPrevious,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDraggableWindow_AddContentWidget_Statics::Function_MetaDataParams[] = {
		{ "Category", "Draggable Window" },
		{ "Comment", "/**\n\x09* protected UDraggableWindow::AddContentWidget\n\x09* Adds a content to this window.\n\x09* @See AddContentWidgetClass().\n\x09* @param InWidget [class UUserWidget*] Reference to an existing content.\n\x09* @param bClearPrevious [const bool] Should we clear all existing children from Child Widget Canvas? Recommended to keep this on.\n\x09**/" },
		{ "CPP_Default_bClearPrevious", "true" },
		{ "ModuleRelativePath", "DraggableWindow.h" },
		{ "ToolTip", "protected UDraggableWindow::AddContentWidget\nAdds a content to this window.\n@See AddContentWidgetClass().\n@param InWidget [class UUserWidget*] Reference to an existing content.\n@param bClearPrevious [const bool] Should we clear all existing children from Child Widget Canvas? Recommended to keep this on." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDraggableWindow_AddContentWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDraggableWindow, nullptr, "AddContentWidget", nullptr, nullptr, Z_Construct_UFunction_UDraggableWindow_AddContentWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDraggableWindow_AddContentWidget_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDraggableWindow_AddContentWidget_Statics::DraggableWindow_eventAddContentWidget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080409, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDraggableWindow_AddContentWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDraggableWindow_AddContentWidget_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDraggableWindow_AddContentWidget_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDraggableWindow_AddContentWidget_Statics::DraggableWindow_eventAddContentWidget_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDraggableWindow_AddContentWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDraggableWindow_AddContentWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDraggableWindow_AddContentWidgetClass_Statics
	{
		struct DraggableWindow_eventAddContentWidgetClass_Parms
		{
			TSubclassOf<UUserWidget>  InWidgetClass;
			bool bClearPrevious;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_InWidgetClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bClearPrevious_MetaData[];
#endif
		static void NewProp_bClearPrevious_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bClearPrevious;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UDraggableWindow_AddContentWidgetClass_Statics::NewProp_InWidgetClass = { "InWidgetClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DraggableWindow_eventAddContentWidgetClass_Parms, InWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDraggableWindow_AddContentWidgetClass_Statics::NewProp_bClearPrevious_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UDraggableWindow_AddContentWidgetClass_Statics::NewProp_bClearPrevious_SetBit(void* Obj)
	{
		((DraggableWindow_eventAddContentWidgetClass_Parms*)Obj)->bClearPrevious = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDraggableWindow_AddContentWidgetClass_Statics::NewProp_bClearPrevious = { "bClearPrevious", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DraggableWindow_eventAddContentWidgetClass_Parms), &Z_Construct_UFunction_UDraggableWindow_AddContentWidgetClass_Statics::NewProp_bClearPrevious_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDraggableWindow_AddContentWidgetClass_Statics::NewProp_bClearPrevious_MetaData), Z_Construct_UFunction_UDraggableWindow_AddContentWidgetClass_Statics::NewProp_bClearPrevious_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDraggableWindow_AddContentWidgetClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDraggableWindow_AddContentWidgetClass_Statics::NewProp_InWidgetClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDraggableWindow_AddContentWidgetClass_Statics::NewProp_bClearPrevious,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDraggableWindow_AddContentWidgetClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Draggable Window" },
		{ "Comment", "/**\n\x09* protected UDraggableWindow::AddContentWidgetClass\n\x09* Adds a content to this window. A new widget is created from the given class.\n\x09* @See AddContentWidget().\n\x09* @param InWidgetClass [TSubclassOf<class UUserWidget>] Widget class to use as content for this window.\n\x09* @param bClearPrevious [const bool] Should we clear all existing children from Child Widget Canvas? Recommended to keep this on.\n\x09**/" },
		{ "CPP_Default_bClearPrevious", "true" },
		{ "ModuleRelativePath", "DraggableWindow.h" },
		{ "ToolTip", "protected UDraggableWindow::AddContentWidgetClass\nAdds a content to this window. A new widget is created from the given class.\n@See AddContentWidget().\n@param InWidgetClass [TSubclassOf<class UUserWidget>] Widget class to use as content for this window.\n@param bClearPrevious [const bool] Should we clear all existing children from Child Widget Canvas? Recommended to keep this on." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDraggableWindow_AddContentWidgetClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDraggableWindow, nullptr, "AddContentWidgetClass", nullptr, nullptr, Z_Construct_UFunction_UDraggableWindow_AddContentWidgetClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDraggableWindow_AddContentWidgetClass_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDraggableWindow_AddContentWidgetClass_Statics::DraggableWindow_eventAddContentWidgetClass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080409, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDraggableWindow_AddContentWidgetClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDraggableWindow_AddContentWidgetClass_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDraggableWindow_AddContentWidgetClass_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDraggableWindow_AddContentWidgetClass_Statics::DraggableWindow_eventAddContentWidgetClass_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDraggableWindow_AddContentWidgetClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDraggableWindow_AddContentWidgetClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDraggableWindow_CenterWindowToScreen_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDraggableWindow_CenterWindowToScreen_Statics::Function_MetaDataParams[] = {
		{ "Category", "Draggable Window" },
		{ "Comment", "/**\n\x09* protected UDraggableWindow::CenterWindowToScreen\n\x09* Center this window to screen.\n\x09**/" },
		{ "ModuleRelativePath", "DraggableWindow.h" },
		{ "ToolTip", "protected UDraggableWindow::CenterWindowToScreen\nCenter this window to screen." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDraggableWindow_CenterWindowToScreen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDraggableWindow, nullptr, "CenterWindowToScreen", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080409, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDraggableWindow_CenterWindowToScreen_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDraggableWindow_CenterWindowToScreen_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UDraggableWindow_CenterWindowToScreen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDraggableWindow_CenterWindowToScreen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDraggableWindow_CreateDraggableWindow_Statics
	{
		struct DraggableWindow_eventCreateDraggableWindow_Parms
		{
			const UObject* WorldContextObject;
			TSubclassOf<UDraggableWindow>  WindowClass;
			TSubclassOf<UUserWidget>  ChildWidgetClass;
			FVector2D StartSize;
			FVector2D ResizeWidth;
			FVector2D ResizeHeight;
			bool bCenterToScreen;
			bool bCanDrag;
			bool bCanResize;
			UDraggableWindow* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FClassPropertyParams NewProp_WindowClass;
		static const UECodeGen_Private::FClassPropertyParams NewProp_ChildWidgetClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartSize_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StartSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ResizeWidth_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ResizeWidth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ResizeHeight_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ResizeHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCenterToScreen_MetaData[];
#endif
		static void NewProp_bCenterToScreen_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCenterToScreen;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanDrag_MetaData[];
#endif
		static void NewProp_bCanDrag_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanDrag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanResize_MetaData[];
#endif
		static void NewProp_bCanResize_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanResize;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDraggableWindow_CreateDraggableWindow_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDraggableWindow_CreateDraggableWindow_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DraggableWindow_eventCreateDraggableWindow_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDraggableWindow_CreateDraggableWindow_Statics::NewProp_WorldContextObject_MetaData), Z_Construct_UFunction_UDraggableWindow_CreateDraggableWindow_Statics::NewProp_WorldContextObject_MetaData) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UDraggableWindow_CreateDraggableWindow_Statics::NewProp_WindowClass = { "WindowClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DraggableWindow_eventCreateDraggableWindow_Parms, WindowClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UDraggableWindow_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UDraggableWindow_CreateDraggableWindow_Statics::NewProp_ChildWidgetClass = { "ChildWidgetClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DraggableWindow_eventCreateDraggableWindow_Parms, ChildWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDraggableWindow_CreateDraggableWindow_Statics::NewProp_StartSize_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDraggableWindow_CreateDraggableWindow_Statics::NewProp_StartSize = { "StartSize", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DraggableWindow_eventCreateDraggableWindow_Parms, StartSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDraggableWindow_CreateDraggableWindow_Statics::NewProp_StartSize_MetaData), Z_Construct_UFunction_UDraggableWindow_CreateDraggableWindow_Statics::NewProp_StartSize_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDraggableWindow_CreateDraggableWindow_Statics::NewProp_ResizeWidth_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDraggableWindow_CreateDraggableWindow_Statics::NewProp_ResizeWidth = { "ResizeWidth", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DraggableWindow_eventCreateDraggableWindow_Parms, ResizeWidth), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDraggableWindow_CreateDraggableWindow_Statics::NewProp_ResizeWidth_MetaData), Z_Construct_UFunction_UDraggableWindow_CreateDraggableWindow_Statics::NewProp_ResizeWidth_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDraggableWindow_CreateDraggableWindow_Statics::NewProp_ResizeHeight_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDraggableWindow_CreateDraggableWindow_Statics::NewProp_ResizeHeight = { "ResizeHeight", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DraggableWindow_eventCreateDraggableWindow_Parms, ResizeHeight), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDraggableWindow_CreateDraggableWindow_Statics::NewProp_ResizeHeight_MetaData), Z_Construct_UFunction_UDraggableWindow_CreateDraggableWindow_Statics::NewProp_ResizeHeight_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDraggableWindow_CreateDraggableWindow_Statics::NewProp_bCenterToScreen_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UDraggableWindow_CreateDraggableWindow_Statics::NewProp_bCenterToScreen_SetBit(void* Obj)
	{
		((DraggableWindow_eventCreateDraggableWindow_Parms*)Obj)->bCenterToScreen = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDraggableWindow_CreateDraggableWindow_Statics::NewProp_bCenterToScreen = { "bCenterToScreen", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DraggableWindow_eventCreateDraggableWindow_Parms), &Z_Construct_UFunction_UDraggableWindow_CreateDraggableWindow_Statics::NewProp_bCenterToScreen_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDraggableWindow_CreateDraggableWindow_Statics::NewProp_bCenterToScreen_MetaData), Z_Construct_UFunction_UDraggableWindow_CreateDraggableWindow_Statics::NewProp_bCenterToScreen_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDraggableWindow_CreateDraggableWindow_Statics::NewProp_bCanDrag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UDraggableWindow_CreateDraggableWindow_Statics::NewProp_bCanDrag_SetBit(void* Obj)
	{
		((DraggableWindow_eventCreateDraggableWindow_Parms*)Obj)->bCanDrag = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDraggableWindow_CreateDraggableWindow_Statics::NewProp_bCanDrag = { "bCanDrag", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DraggableWindow_eventCreateDraggableWindow_Parms), &Z_Construct_UFunction_UDraggableWindow_CreateDraggableWindow_Statics::NewProp_bCanDrag_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDraggableWindow_CreateDraggableWindow_Statics::NewProp_bCanDrag_MetaData), Z_Construct_UFunction_UDraggableWindow_CreateDraggableWindow_Statics::NewProp_bCanDrag_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDraggableWindow_CreateDraggableWindow_Statics::NewProp_bCanResize_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UDraggableWindow_CreateDraggableWindow_Statics::NewProp_bCanResize_SetBit(void* Obj)
	{
		((DraggableWindow_eventCreateDraggableWindow_Parms*)Obj)->bCanResize = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDraggableWindow_CreateDraggableWindow_Statics::NewProp_bCanResize = { "bCanResize", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DraggableWindow_eventCreateDraggableWindow_Parms), &Z_Construct_UFunction_UDraggableWindow_CreateDraggableWindow_Statics::NewProp_bCanResize_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDraggableWindow_CreateDraggableWindow_Statics::NewProp_bCanResize_MetaData), Z_Construct_UFunction_UDraggableWindow_CreateDraggableWindow_Statics::NewProp_bCanResize_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDraggableWindow_CreateDraggableWindow_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDraggableWindow_CreateDraggableWindow_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DraggableWindow_eventCreateDraggableWindow_Parms, ReturnValue), Z_Construct_UClass_UDraggableWindow_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDraggableWindow_CreateDraggableWindow_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UDraggableWindow_CreateDraggableWindow_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDraggableWindow_CreateDraggableWindow_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDraggableWindow_CreateDraggableWindow_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDraggableWindow_CreateDraggableWindow_Statics::NewProp_WindowClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDraggableWindow_CreateDraggableWindow_Statics::NewProp_ChildWidgetClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDraggableWindow_CreateDraggableWindow_Statics::NewProp_StartSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDraggableWindow_CreateDraggableWindow_Statics::NewProp_ResizeWidth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDraggableWindow_CreateDraggableWindow_Statics::NewProp_ResizeHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDraggableWindow_CreateDraggableWindow_Statics::NewProp_bCenterToScreen,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDraggableWindow_CreateDraggableWindow_Statics::NewProp_bCanDrag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDraggableWindow_CreateDraggableWindow_Statics::NewProp_bCanResize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDraggableWindow_CreateDraggableWindow_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDraggableWindow_CreateDraggableWindow_Statics::Function_MetaDataParams[] = {
		{ "Category", "Draggable Window" },
		{ "Comment", "/**\n\x09* public static UDraggableWindow::CreateDraggableWindow\n\x09* Creates a draggable window widget instance from given widget class. You can optionally add a child widget also which will be the content for this window.\n\x09* @param WindowClass [TSubclassOf<UDraggableWindow>] Window widget class to create.\n\x09* @param ChildWidgetClass [TSubclassOf<UUserWidget>] [OPTIONAL] Child content class to add to the newly created window widget.\n\x09* @param StartSize [const FVector2D] What size should we start the window.\n\x09* @param bCenterToScreen [const bool] Should we center the window to the player screen.\n\x09* @param bCanDrag [const bool] Determines if the window can be dragged.\n\x09* @param bCanResize [const bool] Determines if the window can be resized (You must have a Border widget with Is Variable set to true and variable name set to ResizeAreaWidget).\n\x09* @return [UDraggableWindow*] Newly created window widget.\n\x09**/" },
		{ "CPP_Default_bCanDrag", "true" },
		{ "CPP_Default_bCanResize", "true" },
		{ "CPP_Default_bCenterToScreen", "true" },
		{ "CPP_Default_ResizeHeight", "(X=0.000,Y=0.000)" },
		{ "CPP_Default_ResizeWidth", "(X=640.000,Y=480.000)" },
		{ "CPP_Default_StartSize", "(X=640.000,Y=480.000)" },
		{ "DeterminesOutputType", "ChildWidgetClass" },
		{ "DisplayName", "Create Draggable Window (Child Widget Class)" },
		{ "ModuleRelativePath", "DraggableWindow.h" },
		{ "ToolTip", "public static UDraggableWindow::CreateDraggableWindow\nCreates a draggable window widget instance from given widget class. You can optionally add a child widget also which will be the content for this window.\n@param WindowClass [TSubclassOf<UDraggableWindow>] Window widget class to create.\n@param ChildWidgetClass [TSubclassOf<UUserWidget>] [OPTIONAL] Child content class to add to the newly created window widget.\n@param StartSize [const FVector2D] What size should we start the window.\n@param bCenterToScreen [const bool] Should we center the window to the player screen.\n@param bCanDrag [const bool] Determines if the window can be dragged.\n@param bCanResize [const bool] Determines if the window can be resized (You must have a Border widget with Is Variable set to true and variable name set to ResizeAreaWidget).\n@return [UDraggableWindow*] Newly created window widget." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDraggableWindow_CreateDraggableWindow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDraggableWindow, nullptr, "CreateDraggableWindow", nullptr, nullptr, Z_Construct_UFunction_UDraggableWindow_CreateDraggableWindow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDraggableWindow_CreateDraggableWindow_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDraggableWindow_CreateDraggableWindow_Statics::DraggableWindow_eventCreateDraggableWindow_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822409, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDraggableWindow_CreateDraggableWindow_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDraggableWindow_CreateDraggableWindow_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDraggableWindow_CreateDraggableWindow_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDraggableWindow_CreateDraggableWindow_Statics::DraggableWindow_eventCreateDraggableWindow_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDraggableWindow_CreateDraggableWindow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDraggableWindow_CreateDraggableWindow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDraggableWindow_CreateDraggableWindowFromWidget_Statics
	{
		struct DraggableWindow_eventCreateDraggableWindowFromWidget_Parms
		{
			const UObject* WorldContextObject;
			TSubclassOf<UDraggableWindow>  WindowClass;
			UUserWidget* NewChildWidget;
			FVector2D StartSize;
			FVector2D ResizeWidth;
			FVector2D ResizeHeight;
			bool bCenterToScreen;
			bool bCanDrag;
			bool bCanResize;
			UDraggableWindow* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FClassPropertyParams NewProp_WindowClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewChildWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewChildWidget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartSize_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StartSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ResizeWidth_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ResizeWidth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ResizeHeight_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ResizeHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCenterToScreen_MetaData[];
#endif
		static void NewProp_bCenterToScreen_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCenterToScreen;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanDrag_MetaData[];
#endif
		static void NewProp_bCanDrag_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanDrag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanResize_MetaData[];
#endif
		static void NewProp_bCanResize_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanResize;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDraggableWindow_CreateDraggableWindowFromWidget_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDraggableWindow_CreateDraggableWindowFromWidget_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DraggableWindow_eventCreateDraggableWindowFromWidget_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDraggableWindow_CreateDraggableWindowFromWidget_Statics::NewProp_WorldContextObject_MetaData), Z_Construct_UFunction_UDraggableWindow_CreateDraggableWindowFromWidget_Statics::NewProp_WorldContextObject_MetaData) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UDraggableWindow_CreateDraggableWindowFromWidget_Statics::NewProp_WindowClass = { "WindowClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DraggableWindow_eventCreateDraggableWindowFromWidget_Parms, WindowClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UDraggableWindow_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDraggableWindow_CreateDraggableWindowFromWidget_Statics::NewProp_NewChildWidget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDraggableWindow_CreateDraggableWindowFromWidget_Statics::NewProp_NewChildWidget = { "NewChildWidget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DraggableWindow_eventCreateDraggableWindowFromWidget_Parms, NewChildWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDraggableWindow_CreateDraggableWindowFromWidget_Statics::NewProp_NewChildWidget_MetaData), Z_Construct_UFunction_UDraggableWindow_CreateDraggableWindowFromWidget_Statics::NewProp_NewChildWidget_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDraggableWindow_CreateDraggableWindowFromWidget_Statics::NewProp_StartSize_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDraggableWindow_CreateDraggableWindowFromWidget_Statics::NewProp_StartSize = { "StartSize", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DraggableWindow_eventCreateDraggableWindowFromWidget_Parms, StartSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDraggableWindow_CreateDraggableWindowFromWidget_Statics::NewProp_StartSize_MetaData), Z_Construct_UFunction_UDraggableWindow_CreateDraggableWindowFromWidget_Statics::NewProp_StartSize_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDraggableWindow_CreateDraggableWindowFromWidget_Statics::NewProp_ResizeWidth_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDraggableWindow_CreateDraggableWindowFromWidget_Statics::NewProp_ResizeWidth = { "ResizeWidth", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DraggableWindow_eventCreateDraggableWindowFromWidget_Parms, ResizeWidth), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDraggableWindow_CreateDraggableWindowFromWidget_Statics::NewProp_ResizeWidth_MetaData), Z_Construct_UFunction_UDraggableWindow_CreateDraggableWindowFromWidget_Statics::NewProp_ResizeWidth_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDraggableWindow_CreateDraggableWindowFromWidget_Statics::NewProp_ResizeHeight_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDraggableWindow_CreateDraggableWindowFromWidget_Statics::NewProp_ResizeHeight = { "ResizeHeight", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DraggableWindow_eventCreateDraggableWindowFromWidget_Parms, ResizeHeight), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDraggableWindow_CreateDraggableWindowFromWidget_Statics::NewProp_ResizeHeight_MetaData), Z_Construct_UFunction_UDraggableWindow_CreateDraggableWindowFromWidget_Statics::NewProp_ResizeHeight_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDraggableWindow_CreateDraggableWindowFromWidget_Statics::NewProp_bCenterToScreen_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UDraggableWindow_CreateDraggableWindowFromWidget_Statics::NewProp_bCenterToScreen_SetBit(void* Obj)
	{
		((DraggableWindow_eventCreateDraggableWindowFromWidget_Parms*)Obj)->bCenterToScreen = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDraggableWindow_CreateDraggableWindowFromWidget_Statics::NewProp_bCenterToScreen = { "bCenterToScreen", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DraggableWindow_eventCreateDraggableWindowFromWidget_Parms), &Z_Construct_UFunction_UDraggableWindow_CreateDraggableWindowFromWidget_Statics::NewProp_bCenterToScreen_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDraggableWindow_CreateDraggableWindowFromWidget_Statics::NewProp_bCenterToScreen_MetaData), Z_Construct_UFunction_UDraggableWindow_CreateDraggableWindowFromWidget_Statics::NewProp_bCenterToScreen_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDraggableWindow_CreateDraggableWindowFromWidget_Statics::NewProp_bCanDrag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UDraggableWindow_CreateDraggableWindowFromWidget_Statics::NewProp_bCanDrag_SetBit(void* Obj)
	{
		((DraggableWindow_eventCreateDraggableWindowFromWidget_Parms*)Obj)->bCanDrag = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDraggableWindow_CreateDraggableWindowFromWidget_Statics::NewProp_bCanDrag = { "bCanDrag", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DraggableWindow_eventCreateDraggableWindowFromWidget_Parms), &Z_Construct_UFunction_UDraggableWindow_CreateDraggableWindowFromWidget_Statics::NewProp_bCanDrag_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDraggableWindow_CreateDraggableWindowFromWidget_Statics::NewProp_bCanDrag_MetaData), Z_Construct_UFunction_UDraggableWindow_CreateDraggableWindowFromWidget_Statics::NewProp_bCanDrag_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDraggableWindow_CreateDraggableWindowFromWidget_Statics::NewProp_bCanResize_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UDraggableWindow_CreateDraggableWindowFromWidget_Statics::NewProp_bCanResize_SetBit(void* Obj)
	{
		((DraggableWindow_eventCreateDraggableWindowFromWidget_Parms*)Obj)->bCanResize = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDraggableWindow_CreateDraggableWindowFromWidget_Statics::NewProp_bCanResize = { "bCanResize", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DraggableWindow_eventCreateDraggableWindowFromWidget_Parms), &Z_Construct_UFunction_UDraggableWindow_CreateDraggableWindowFromWidget_Statics::NewProp_bCanResize_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDraggableWindow_CreateDraggableWindowFromWidget_Statics::NewProp_bCanResize_MetaData), Z_Construct_UFunction_UDraggableWindow_CreateDraggableWindowFromWidget_Statics::NewProp_bCanResize_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDraggableWindow_CreateDraggableWindowFromWidget_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDraggableWindow_CreateDraggableWindowFromWidget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DraggableWindow_eventCreateDraggableWindowFromWidget_Parms, ReturnValue), Z_Construct_UClass_UDraggableWindow_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDraggableWindow_CreateDraggableWindowFromWidget_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UDraggableWindow_CreateDraggableWindowFromWidget_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDraggableWindow_CreateDraggableWindowFromWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDraggableWindow_CreateDraggableWindowFromWidget_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDraggableWindow_CreateDraggableWindowFromWidget_Statics::NewProp_WindowClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDraggableWindow_CreateDraggableWindowFromWidget_Statics::NewProp_NewChildWidget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDraggableWindow_CreateDraggableWindowFromWidget_Statics::NewProp_StartSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDraggableWindow_CreateDraggableWindowFromWidget_Statics::NewProp_ResizeWidth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDraggableWindow_CreateDraggableWindowFromWidget_Statics::NewProp_ResizeHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDraggableWindow_CreateDraggableWindowFromWidget_Statics::NewProp_bCenterToScreen,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDraggableWindow_CreateDraggableWindowFromWidget_Statics::NewProp_bCanDrag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDraggableWindow_CreateDraggableWindowFromWidget_Statics::NewProp_bCanResize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDraggableWindow_CreateDraggableWindowFromWidget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDraggableWindow_CreateDraggableWindowFromWidget_Statics::Function_MetaDataParams[] = {
		{ "Category", "Draggable Window" },
		{ "Comment", "/**\n\x09* public static UDraggableWindow::CreateDraggableWindowFromWidget\n\x09* Creates a draggable window widget instance from given widget class. You can optionally add a child widget also which will be the content for this window.\n\x09* @param WindowClass [TSubclassOf<UDraggableWindow>] Window widget class to create.\n\x09* @param ChildWidget [UUserWidget*] [OPTIONAL] Child content to add to the newly created window widget.\n\x09* @param StartSize [const FVector2D] What size should we start the window.\n\x09* @param bCenterToScreen [const bool] Should we center the window to the player screen.\n\x09* @param bCanDrag [const bool] Determines if the window can be dragged.\n\x09* @param bCanResize [const bool] Determines if the window can be resized (You must have a Border widget with Is Variable set to true and variable name set to ResizeAreaWidget).\n\x09* @return [UDraggableWindow*] Newly created window widget.\n\x09**/" },
		{ "CPP_Default_bCanDrag", "true" },
		{ "CPP_Default_bCanResize", "true" },
		{ "CPP_Default_bCenterToScreen", "true" },
		{ "CPP_Default_ResizeHeight", "(X=0.000,Y=0.000)" },
		{ "CPP_Default_ResizeWidth", "(X=640.000,Y=480.000)" },
		{ "CPP_Default_StartSize", "(X=640.000,Y=480.000)" },
		{ "DisplayName", "Create Draggable Window (Child Widget Reference)" },
		{ "ModuleRelativePath", "DraggableWindow.h" },
		{ "ToolTip", "public static UDraggableWindow::CreateDraggableWindowFromWidget\nCreates a draggable window widget instance from given widget class. You can optionally add a child widget also which will be the content for this window.\n@param WindowClass [TSubclassOf<UDraggableWindow>] Window widget class to create.\n@param ChildWidget [UUserWidget*] [OPTIONAL] Child content to add to the newly created window widget.\n@param StartSize [const FVector2D] What size should we start the window.\n@param bCenterToScreen [const bool] Should we center the window to the player screen.\n@param bCanDrag [const bool] Determines if the window can be dragged.\n@param bCanResize [const bool] Determines if the window can be resized (You must have a Border widget with Is Variable set to true and variable name set to ResizeAreaWidget).\n@return [UDraggableWindow*] Newly created window widget." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDraggableWindow_CreateDraggableWindowFromWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDraggableWindow, nullptr, "CreateDraggableWindowFromWidget", nullptr, nullptr, Z_Construct_UFunction_UDraggableWindow_CreateDraggableWindowFromWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDraggableWindow_CreateDraggableWindowFromWidget_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDraggableWindow_CreateDraggableWindowFromWidget_Statics::DraggableWindow_eventCreateDraggableWindowFromWidget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822409, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDraggableWindow_CreateDraggableWindowFromWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDraggableWindow_CreateDraggableWindowFromWidget_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDraggableWindow_CreateDraggableWindowFromWidget_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDraggableWindow_CreateDraggableWindowFromWidget_Statics::DraggableWindow_eventCreateDraggableWindowFromWidget_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDraggableWindow_CreateDraggableWindowFromWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDraggableWindow_CreateDraggableWindowFromWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDraggableWindow_GetChildWidget_Statics
	{
		struct DraggableWindow_eventGetChildWidget_Parms
		{
			UUserWidget* OutChildWidget;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutChildWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OutChildWidget;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDraggableWindow_GetChildWidget_Statics::NewProp_OutChildWidget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDraggableWindow_GetChildWidget_Statics::NewProp_OutChildWidget = { "OutChildWidget", nullptr, (EPropertyFlags)0x0010000000080180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DraggableWindow_eventGetChildWidget_Parms, OutChildWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDraggableWindow_GetChildWidget_Statics::NewProp_OutChildWidget_MetaData), Z_Construct_UFunction_UDraggableWindow_GetChildWidget_Statics::NewProp_OutChildWidget_MetaData) };
	void Z_Construct_UFunction_UDraggableWindow_GetChildWidget_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DraggableWindow_eventGetChildWidget_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDraggableWindow_GetChildWidget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DraggableWindow_eventGetChildWidget_Parms), &Z_Construct_UFunction_UDraggableWindow_GetChildWidget_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDraggableWindow_GetChildWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDraggableWindow_GetChildWidget_Statics::NewProp_OutChildWidget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDraggableWindow_GetChildWidget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDraggableWindow_GetChildWidget_Statics::Function_MetaDataParams[] = {
		{ "Category", "Draggable Window" },
		{ "Comment", "/**\n\x09* protected UDraggableWindow::GetChildWidget const\n\x09* Returns the child widget (if any) of this draggable window. If the Return Value is true, then OutChildWidget will be valid.\n\x09* @param OutChildWidget [UUserWidget*&] Reference to the child widget created by this window.\n\x09* @return [bool] True if a valid child widget is available.\n\x09**/" },
		{ "ModuleRelativePath", "DraggableWindow.h" },
		{ "ToolTip", "protected UDraggableWindow::GetChildWidget const\nReturns the child widget (if any) of this draggable window. If the Return Value is true, then OutChildWidget will be valid.\n@param OutChildWidget [UUserWidget*&] Reference to the child widget created by this window.\n@return [bool] True if a valid child widget is available." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDraggableWindow_GetChildWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDraggableWindow, nullptr, "GetChildWidget", nullptr, nullptr, Z_Construct_UFunction_UDraggableWindow_GetChildWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDraggableWindow_GetChildWidget_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDraggableWindow_GetChildWidget_Statics::DraggableWindow_eventGetChildWidget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54480409, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDraggableWindow_GetChildWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDraggableWindow_GetChildWidget_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDraggableWindow_GetChildWidget_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDraggableWindow_GetChildWidget_Statics::DraggableWindow_eventGetChildWidget_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDraggableWindow_GetChildWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDraggableWindow_GetChildWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDraggableWindow_Internal_OnMouseButtonDown_ResizeArea_Statics
	{
		struct DraggableWindow_eventInternal_OnMouseButtonDown_ResizeArea_Parms
		{
			FGeometry InGeometry;
			FPointerEvent InMouseEvent;
			FEventReply ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InGeometry;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InMouseEvent_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InMouseEvent;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDraggableWindow_Internal_OnMouseButtonDown_ResizeArea_Statics::NewProp_InGeometry = { "InGeometry", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DraggableWindow_eventInternal_OnMouseButtonDown_ResizeArea_Parms, InGeometry), Z_Construct_UScriptStruct_FGeometry, METADATA_PARAMS(0, nullptr) }; // 289838677
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDraggableWindow_Internal_OnMouseButtonDown_ResizeArea_Statics::NewProp_InMouseEvent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDraggableWindow_Internal_OnMouseButtonDown_ResizeArea_Statics::NewProp_InMouseEvent = { "InMouseEvent", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DraggableWindow_eventInternal_OnMouseButtonDown_ResizeArea_Parms, InMouseEvent), Z_Construct_UScriptStruct_FPointerEvent, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDraggableWindow_Internal_OnMouseButtonDown_ResizeArea_Statics::NewProp_InMouseEvent_MetaData), Z_Construct_UFunction_UDraggableWindow_Internal_OnMouseButtonDown_ResizeArea_Statics::NewProp_InMouseEvent_MetaData) }; // 1479010748
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDraggableWindow_Internal_OnMouseButtonDown_ResizeArea_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DraggableWindow_eventInternal_OnMouseButtonDown_ResizeArea_Parms, ReturnValue), Z_Construct_UScriptStruct_FEventReply, METADATA_PARAMS(0, nullptr) }; // 3608350304
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDraggableWindow_Internal_OnMouseButtonDown_ResizeArea_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDraggableWindow_Internal_OnMouseButtonDown_ResizeArea_Statics::NewProp_InGeometry,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDraggableWindow_Internal_OnMouseButtonDown_ResizeArea_Statics::NewProp_InMouseEvent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDraggableWindow_Internal_OnMouseButtonDown_ResizeArea_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDraggableWindow_Internal_OnMouseButtonDown_ResizeArea_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "DraggableWindow.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDraggableWindow_Internal_OnMouseButtonDown_ResizeArea_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDraggableWindow, nullptr, "Internal_OnMouseButtonDown_ResizeArea", nullptr, nullptr, Z_Construct_UFunction_UDraggableWindow_Internal_OnMouseButtonDown_ResizeArea_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDraggableWindow_Internal_OnMouseButtonDown_ResizeArea_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDraggableWindow_Internal_OnMouseButtonDown_ResizeArea_Statics::DraggableWindow_eventInternal_OnMouseButtonDown_ResizeArea_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDraggableWindow_Internal_OnMouseButtonDown_ResizeArea_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDraggableWindow_Internal_OnMouseButtonDown_ResizeArea_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDraggableWindow_Internal_OnMouseButtonDown_ResizeArea_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDraggableWindow_Internal_OnMouseButtonDown_ResizeArea_Statics::DraggableWindow_eventInternal_OnMouseButtonDown_ResizeArea_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDraggableWindow_Internal_OnMouseButtonDown_ResizeArea()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDraggableWindow_Internal_OnMouseButtonDown_ResizeArea_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDraggableWindow_Internal_OnMouseButtonDown_WindowTitleBorder_Statics
	{
		struct DraggableWindow_eventInternal_OnMouseButtonDown_WindowTitleBorder_Parms
		{
			FGeometry InGeometry;
			FPointerEvent InMouseEvent;
			FEventReply ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InGeometry;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InMouseEvent_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InMouseEvent;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDraggableWindow_Internal_OnMouseButtonDown_WindowTitleBorder_Statics::NewProp_InGeometry = { "InGeometry", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DraggableWindow_eventInternal_OnMouseButtonDown_WindowTitleBorder_Parms, InGeometry), Z_Construct_UScriptStruct_FGeometry, METADATA_PARAMS(0, nullptr) }; // 289838677
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDraggableWindow_Internal_OnMouseButtonDown_WindowTitleBorder_Statics::NewProp_InMouseEvent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDraggableWindow_Internal_OnMouseButtonDown_WindowTitleBorder_Statics::NewProp_InMouseEvent = { "InMouseEvent", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DraggableWindow_eventInternal_OnMouseButtonDown_WindowTitleBorder_Parms, InMouseEvent), Z_Construct_UScriptStruct_FPointerEvent, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDraggableWindow_Internal_OnMouseButtonDown_WindowTitleBorder_Statics::NewProp_InMouseEvent_MetaData), Z_Construct_UFunction_UDraggableWindow_Internal_OnMouseButtonDown_WindowTitleBorder_Statics::NewProp_InMouseEvent_MetaData) }; // 1479010748
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDraggableWindow_Internal_OnMouseButtonDown_WindowTitleBorder_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DraggableWindow_eventInternal_OnMouseButtonDown_WindowTitleBorder_Parms, ReturnValue), Z_Construct_UScriptStruct_FEventReply, METADATA_PARAMS(0, nullptr) }; // 3608350304
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDraggableWindow_Internal_OnMouseButtonDown_WindowTitleBorder_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDraggableWindow_Internal_OnMouseButtonDown_WindowTitleBorder_Statics::NewProp_InGeometry,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDraggableWindow_Internal_OnMouseButtonDown_WindowTitleBorder_Statics::NewProp_InMouseEvent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDraggableWindow_Internal_OnMouseButtonDown_WindowTitleBorder_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDraggableWindow_Internal_OnMouseButtonDown_WindowTitleBorder_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "DraggableWindow.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDraggableWindow_Internal_OnMouseButtonDown_WindowTitleBorder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDraggableWindow, nullptr, "Internal_OnMouseButtonDown_WindowTitleBorder", nullptr, nullptr, Z_Construct_UFunction_UDraggableWindow_Internal_OnMouseButtonDown_WindowTitleBorder_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDraggableWindow_Internal_OnMouseButtonDown_WindowTitleBorder_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDraggableWindow_Internal_OnMouseButtonDown_WindowTitleBorder_Statics::DraggableWindow_eventInternal_OnMouseButtonDown_WindowTitleBorder_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDraggableWindow_Internal_OnMouseButtonDown_WindowTitleBorder_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDraggableWindow_Internal_OnMouseButtonDown_WindowTitleBorder_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDraggableWindow_Internal_OnMouseButtonDown_WindowTitleBorder_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDraggableWindow_Internal_OnMouseButtonDown_WindowTitleBorder_Statics::DraggableWindow_eventInternal_OnMouseButtonDown_WindowTitleBorder_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDraggableWindow_Internal_OnMouseButtonDown_WindowTitleBorder()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDraggableWindow_Internal_OnMouseButtonDown_WindowTitleBorder_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDraggableWindow_Internal_OnMouseButtonUp_WindowTitleBorder_Statics
	{
		struct DraggableWindow_eventInternal_OnMouseButtonUp_WindowTitleBorder_Parms
		{
			FGeometry InGeometry;
			FPointerEvent InMouseEvent;
			FEventReply ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InGeometry;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InMouseEvent_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InMouseEvent;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDraggableWindow_Internal_OnMouseButtonUp_WindowTitleBorder_Statics::NewProp_InGeometry = { "InGeometry", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DraggableWindow_eventInternal_OnMouseButtonUp_WindowTitleBorder_Parms, InGeometry), Z_Construct_UScriptStruct_FGeometry, METADATA_PARAMS(0, nullptr) }; // 289838677
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDraggableWindow_Internal_OnMouseButtonUp_WindowTitleBorder_Statics::NewProp_InMouseEvent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDraggableWindow_Internal_OnMouseButtonUp_WindowTitleBorder_Statics::NewProp_InMouseEvent = { "InMouseEvent", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DraggableWindow_eventInternal_OnMouseButtonUp_WindowTitleBorder_Parms, InMouseEvent), Z_Construct_UScriptStruct_FPointerEvent, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDraggableWindow_Internal_OnMouseButtonUp_WindowTitleBorder_Statics::NewProp_InMouseEvent_MetaData), Z_Construct_UFunction_UDraggableWindow_Internal_OnMouseButtonUp_WindowTitleBorder_Statics::NewProp_InMouseEvent_MetaData) }; // 1479010748
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDraggableWindow_Internal_OnMouseButtonUp_WindowTitleBorder_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DraggableWindow_eventInternal_OnMouseButtonUp_WindowTitleBorder_Parms, ReturnValue), Z_Construct_UScriptStruct_FEventReply, METADATA_PARAMS(0, nullptr) }; // 3608350304
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDraggableWindow_Internal_OnMouseButtonUp_WindowTitleBorder_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDraggableWindow_Internal_OnMouseButtonUp_WindowTitleBorder_Statics::NewProp_InGeometry,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDraggableWindow_Internal_OnMouseButtonUp_WindowTitleBorder_Statics::NewProp_InMouseEvent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDraggableWindow_Internal_OnMouseButtonUp_WindowTitleBorder_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDraggableWindow_Internal_OnMouseButtonUp_WindowTitleBorder_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "DraggableWindow.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDraggableWindow_Internal_OnMouseButtonUp_WindowTitleBorder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDraggableWindow, nullptr, "Internal_OnMouseButtonUp_WindowTitleBorder", nullptr, nullptr, Z_Construct_UFunction_UDraggableWindow_Internal_OnMouseButtonUp_WindowTitleBorder_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDraggableWindow_Internal_OnMouseButtonUp_WindowTitleBorder_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDraggableWindow_Internal_OnMouseButtonUp_WindowTitleBorder_Statics::DraggableWindow_eventInternal_OnMouseButtonUp_WindowTitleBorder_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDraggableWindow_Internal_OnMouseButtonUp_WindowTitleBorder_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDraggableWindow_Internal_OnMouseButtonUp_WindowTitleBorder_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDraggableWindow_Internal_OnMouseButtonUp_WindowTitleBorder_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDraggableWindow_Internal_OnMouseButtonUp_WindowTitleBorder_Statics::DraggableWindow_eventInternal_OnMouseButtonUp_WindowTitleBorder_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDraggableWindow_Internal_OnMouseButtonUp_WindowTitleBorder()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDraggableWindow_Internal_OnMouseButtonUp_WindowTitleBorder_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDraggableWindow_K2_OnCloseWindow_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDraggableWindow_K2_OnCloseWindow_Statics::Function_MetaDataParams[] = {
		{ "Category", "Draggable Window" },
		{ "Comment", "/**\n\x09* protected UDraggableWindow::K2_OnCloseWindow\n\x09* Event called when this window is closed. C++ implementation calls RemoveFromParent automatically.\n\x09**/" },
		{ "DisplayName", "On Close Window" },
		{ "ModuleRelativePath", "DraggableWindow.h" },
		{ "ToolTip", "protected UDraggableWindow::K2_OnCloseWindow\nEvent called when this window is closed. C++ implementation calls RemoveFromParent automatically." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDraggableWindow_K2_OnCloseWindow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDraggableWindow, nullptr, "K2_OnCloseWindow", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080808, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDraggableWindow_K2_OnCloseWindow_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDraggableWindow_K2_OnCloseWindow_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UDraggableWindow_K2_OnCloseWindow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDraggableWindow_K2_OnCloseWindow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDraggableWindow_K2_OnContentWidgetAdded_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AddedUserWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AddedUserWidget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDraggableWindow_K2_OnContentWidgetAdded_Statics::NewProp_AddedUserWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDraggableWindow_K2_OnContentWidgetAdded_Statics::NewProp_AddedUserWidget = { "AddedUserWidget", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DraggableWindow_eventK2_OnContentWidgetAdded_Parms, AddedUserWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDraggableWindow_K2_OnContentWidgetAdded_Statics::NewProp_AddedUserWidget_MetaData), Z_Construct_UFunction_UDraggableWindow_K2_OnContentWidgetAdded_Statics::NewProp_AddedUserWidget_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDraggableWindow_K2_OnContentWidgetAdded_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDraggableWindow_K2_OnContentWidgetAdded_Statics::NewProp_AddedUserWidget,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDraggableWindow_K2_OnContentWidgetAdded_Statics::Function_MetaDataParams[] = {
		{ "Category", "Draggable Window" },
		{ "Comment", "/**\n\x09* protected UDraggableWindow::K2_OnContentWidgetAdded\n\x09* Event called when a new content is added to this window.\n\x09* @param AddedUserWidget [const UUserWidget*] Reference to the content that is being added.\n\x09**/" },
		{ "DisplayName", "On Content Widget Added" },
		{ "ModuleRelativePath", "DraggableWindow.h" },
		{ "ToolTip", "protected UDraggableWindow::K2_OnContentWidgetAdded\nEvent called when a new content is added to this window.\n@param AddedUserWidget [const UUserWidget*] Reference to the content that is being added." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDraggableWindow_K2_OnContentWidgetAdded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDraggableWindow, nullptr, "K2_OnContentWidgetAdded", nullptr, nullptr, Z_Construct_UFunction_UDraggableWindow_K2_OnContentWidgetAdded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDraggableWindow_K2_OnContentWidgetAdded_Statics::PropPointers), sizeof(DraggableWindow_eventK2_OnContentWidgetAdded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080808, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDraggableWindow_K2_OnContentWidgetAdded_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDraggableWindow_K2_OnContentWidgetAdded_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDraggableWindow_K2_OnContentWidgetAdded_Statics::PropPointers) < 2048);
	static_assert(sizeof(DraggableWindow_eventK2_OnContentWidgetAdded_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDraggableWindow_K2_OnContentWidgetAdded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDraggableWindow_K2_OnContentWidgetAdded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDraggableWindow_K2_OnDragStart_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InMouseEvent_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InMouseEvent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDraggableWindow_K2_OnDragStart_Statics::NewProp_InMouseEvent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDraggableWindow_K2_OnDragStart_Statics::NewProp_InMouseEvent = { "InMouseEvent", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DraggableWindow_eventK2_OnDragStart_Parms, InMouseEvent), Z_Construct_UScriptStruct_FPointerEvent, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDraggableWindow_K2_OnDragStart_Statics::NewProp_InMouseEvent_MetaData), Z_Construct_UFunction_UDraggableWindow_K2_OnDragStart_Statics::NewProp_InMouseEvent_MetaData) }; // 1479010748
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDraggableWindow_K2_OnDragStart_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDraggableWindow_K2_OnDragStart_Statics::NewProp_InMouseEvent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDraggableWindow_K2_OnDragStart_Statics::Function_MetaDataParams[] = {
		{ "Category", "Draggable Window" },
		{ "Comment", "/**\n\x09* protected UDraggableWindow::K2_OnDragStart\n\x09* Event called when resizing is started. Only called if Enable Drag is true.\n\x09* @param InMouseEvent [const FPointerEvent&] Mouse or touch action.\n\x09**/" },
		{ "DisplayName", "On Drag Start" },
		{ "ModuleRelativePath", "DraggableWindow.h" },
		{ "ToolTip", "protected UDraggableWindow::K2_OnDragStart\nEvent called when resizing is started. Only called if Enable Drag is true.\n@param InMouseEvent [const FPointerEvent&] Mouse or touch action." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDraggableWindow_K2_OnDragStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDraggableWindow, nullptr, "K2_OnDragStart", nullptr, nullptr, Z_Construct_UFunction_UDraggableWindow_K2_OnDragStart_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDraggableWindow_K2_OnDragStart_Statics::PropPointers), sizeof(DraggableWindow_eventK2_OnDragStart_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08480808, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDraggableWindow_K2_OnDragStart_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDraggableWindow_K2_OnDragStart_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDraggableWindow_K2_OnDragStart_Statics::PropPointers) < 2048);
	static_assert(sizeof(DraggableWindow_eventK2_OnDragStart_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDraggableWindow_K2_OnDragStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDraggableWindow_K2_OnDragStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDraggableWindow_K2_OnResizeStart_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InMouseEvent_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InMouseEvent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDraggableWindow_K2_OnResizeStart_Statics::NewProp_InMouseEvent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDraggableWindow_K2_OnResizeStart_Statics::NewProp_InMouseEvent = { "InMouseEvent", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DraggableWindow_eventK2_OnResizeStart_Parms, InMouseEvent), Z_Construct_UScriptStruct_FPointerEvent, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDraggableWindow_K2_OnResizeStart_Statics::NewProp_InMouseEvent_MetaData), Z_Construct_UFunction_UDraggableWindow_K2_OnResizeStart_Statics::NewProp_InMouseEvent_MetaData) }; // 1479010748
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDraggableWindow_K2_OnResizeStart_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDraggableWindow_K2_OnResizeStart_Statics::NewProp_InMouseEvent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDraggableWindow_K2_OnResizeStart_Statics::Function_MetaDataParams[] = {
		{ "Category", "Draggable Window" },
		{ "Comment", "/**\n\x09* protected UDraggableWindow::K2_OnResizeStart\n\x09* Event called when resizing is started. Only called if Enable Resizing is true.\n\x09* @param InMouseEvent [const FPointerEvent&] Mouse or touch action.\n\x09**/" },
		{ "DisplayName", "On Resize Start" },
		{ "ModuleRelativePath", "DraggableWindow.h" },
		{ "ToolTip", "protected UDraggableWindow::K2_OnResizeStart\nEvent called when resizing is started. Only called if Enable Resizing is true.\n@param InMouseEvent [const FPointerEvent&] Mouse or touch action." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDraggableWindow_K2_OnResizeStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDraggableWindow, nullptr, "K2_OnResizeStart", nullptr, nullptr, Z_Construct_UFunction_UDraggableWindow_K2_OnResizeStart_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDraggableWindow_K2_OnResizeStart_Statics::PropPointers), sizeof(DraggableWindow_eventK2_OnResizeStart_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08480808, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDraggableWindow_K2_OnResizeStart_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDraggableWindow_K2_OnResizeStart_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDraggableWindow_K2_OnResizeStart_Statics::PropPointers) < 2048);
	static_assert(sizeof(DraggableWindow_eventK2_OnResizeStart_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDraggableWindow_K2_OnResizeStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDraggableWindow_K2_OnResizeStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDraggableWindow_K2_OnSetWindowTitle_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewWindowTitle_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_NewWindowTitle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDraggableWindow_K2_OnSetWindowTitle_Statics::NewProp_NewWindowTitle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UDraggableWindow_K2_OnSetWindowTitle_Statics::NewProp_NewWindowTitle = { "NewWindowTitle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DraggableWindow_eventK2_OnSetWindowTitle_Parms, NewWindowTitle), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDraggableWindow_K2_OnSetWindowTitle_Statics::NewProp_NewWindowTitle_MetaData), Z_Construct_UFunction_UDraggableWindow_K2_OnSetWindowTitle_Statics::NewProp_NewWindowTitle_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDraggableWindow_K2_OnSetWindowTitle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDraggableWindow_K2_OnSetWindowTitle_Statics::NewProp_NewWindowTitle,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDraggableWindow_K2_OnSetWindowTitle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Draggable Window" },
		{ "Comment", "/**\n\x09* protected UDraggableWindow::K2_OnSetWindowTitle\n\x09* Event called when a new title is set for this window.\n\x09* @param NewWindowName [const FText &] New title.\n\x09**/" },
		{ "DisplayName", "On Set Window Title" },
		{ "ModuleRelativePath", "DraggableWindow.h" },
		{ "ToolTip", "protected UDraggableWindow::K2_OnSetWindowTitle\nEvent called when a new title is set for this window.\n@param NewWindowName [const FText &] New title." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDraggableWindow_K2_OnSetWindowTitle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDraggableWindow, nullptr, "K2_OnSetWindowTitle", nullptr, nullptr, Z_Construct_UFunction_UDraggableWindow_K2_OnSetWindowTitle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDraggableWindow_K2_OnSetWindowTitle_Statics::PropPointers), sizeof(DraggableWindow_eventK2_OnSetWindowTitle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C480808, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDraggableWindow_K2_OnSetWindowTitle_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDraggableWindow_K2_OnSetWindowTitle_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDraggableWindow_K2_OnSetWindowTitle_Statics::PropPointers) < 2048);
	static_assert(sizeof(DraggableWindow_eventK2_OnSetWindowTitle_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDraggableWindow_K2_OnSetWindowTitle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDraggableWindow_K2_OnSetWindowTitle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDraggableWindow_UpdateWindowSize_Statics
	{
		struct DraggableWindow_eventUpdateWindowSize_Parms
		{
			FVector2D InNewSize;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InNewSize_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InNewSize;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDraggableWindow_UpdateWindowSize_Statics::NewProp_InNewSize_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDraggableWindow_UpdateWindowSize_Statics::NewProp_InNewSize = { "InNewSize", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DraggableWindow_eventUpdateWindowSize_Parms, InNewSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDraggableWindow_UpdateWindowSize_Statics::NewProp_InNewSize_MetaData), Z_Construct_UFunction_UDraggableWindow_UpdateWindowSize_Statics::NewProp_InNewSize_MetaData) };
	void Z_Construct_UFunction_UDraggableWindow_UpdateWindowSize_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DraggableWindow_eventUpdateWindowSize_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDraggableWindow_UpdateWindowSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DraggableWindow_eventUpdateWindowSize_Parms), &Z_Construct_UFunction_UDraggableWindow_UpdateWindowSize_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDraggableWindow_UpdateWindowSize_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDraggableWindow_UpdateWindowSize_Statics::NewProp_InNewSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDraggableWindow_UpdateWindowSize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDraggableWindow_UpdateWindowSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "Draggable Window" },
		{ "Comment", "/**\n\x09* protected UDraggableWindow::UpdateWindowSize\n\x09* Updates the size of the draggable window.\n\x09* @param InNewSize [const FVector2D&] New size to change to.\n\x09* @return [bool] True if the size was changed successfully.\n\x09**/" },
		{ "ModuleRelativePath", "DraggableWindow.h" },
		{ "ToolTip", "protected UDraggableWindow::UpdateWindowSize\nUpdates the size of the draggable window.\n@param InNewSize [const FVector2D&] New size to change to.\n@return [bool] True if the size was changed successfully." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDraggableWindow_UpdateWindowSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDraggableWindow, nullptr, "UpdateWindowSize", nullptr, nullptr, Z_Construct_UFunction_UDraggableWindow_UpdateWindowSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDraggableWindow_UpdateWindowSize_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDraggableWindow_UpdateWindowSize_Statics::DraggableWindow_eventUpdateWindowSize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C80409, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDraggableWindow_UpdateWindowSize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDraggableWindow_UpdateWindowSize_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDraggableWindow_UpdateWindowSize_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDraggableWindow_UpdateWindowSize_Statics::DraggableWindow_eventUpdateWindowSize_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDraggableWindow_UpdateWindowSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDraggableWindow_UpdateWindowSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDraggableWindow);
	UClass* Z_Construct_UClass_UDraggableWindow_NoRegister()
	{
		return UDraggableWindow::StaticClass();
	}
	struct Z_Construct_UClass_UDraggableWindow_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableDrag_MetaData[];
#endif
		static void NewProp_bEnableDrag_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableDrag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableResizing_MetaData[];
#endif
		static void NewProp_bEnableResizing_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableResizing;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ResizeMinWidth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ResizeMinWidth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ResizeMaxWidth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ResizeMaxWidth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ResizeMinHeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ResizeMinHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ResizeMaxHeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ResizeMaxHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DragKey_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DragKey;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WindowTitleBorderWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WindowTitleBorderWidget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChildWidgetCanvas_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ChildWidgetCanvas;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ResizeAreaWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ResizeAreaWidget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParentSlot_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ParentSlot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChildWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ChildWidget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDraggableWindow_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DraggableWindowUMG,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDraggableWindow_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UDraggableWindow_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDraggableWindow_AddContentWidget, "AddContentWidget" }, // 1143368036
		{ &Z_Construct_UFunction_UDraggableWindow_AddContentWidgetClass, "AddContentWidgetClass" }, // 3350775799
		{ &Z_Construct_UFunction_UDraggableWindow_CenterWindowToScreen, "CenterWindowToScreen" }, // 2105498582
		{ &Z_Construct_UFunction_UDraggableWindow_CreateDraggableWindow, "CreateDraggableWindow" }, // 3676102816
		{ &Z_Construct_UFunction_UDraggableWindow_CreateDraggableWindowFromWidget, "CreateDraggableWindowFromWidget" }, // 811396284
		{ &Z_Construct_UFunction_UDraggableWindow_GetChildWidget, "GetChildWidget" }, // 1454497523
		{ &Z_Construct_UFunction_UDraggableWindow_Internal_OnMouseButtonDown_ResizeArea, "Internal_OnMouseButtonDown_ResizeArea" }, // 1343924800
		{ &Z_Construct_UFunction_UDraggableWindow_Internal_OnMouseButtonDown_WindowTitleBorder, "Internal_OnMouseButtonDown_WindowTitleBorder" }, // 3722360742
		{ &Z_Construct_UFunction_UDraggableWindow_Internal_OnMouseButtonUp_WindowTitleBorder, "Internal_OnMouseButtonUp_WindowTitleBorder" }, // 3746541551
		{ &Z_Construct_UFunction_UDraggableWindow_K2_OnCloseWindow, "K2_OnCloseWindow" }, // 3807952209
		{ &Z_Construct_UFunction_UDraggableWindow_K2_OnContentWidgetAdded, "K2_OnContentWidgetAdded" }, // 3527104792
		{ &Z_Construct_UFunction_UDraggableWindow_K2_OnDragStart, "K2_OnDragStart" }, // 1454651080
		{ &Z_Construct_UFunction_UDraggableWindow_K2_OnResizeStart, "K2_OnResizeStart" }, // 3420851715
		{ &Z_Construct_UFunction_UDraggableWindow_K2_OnSetWindowTitle, "K2_OnSetWindowTitle" }, // 4146847413
		{ &Z_Construct_UFunction_UDraggableWindow_UpdateWindowSize, "UpdateWindowSize" }, // 1005714926
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDraggableWindow_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDraggableWindow_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "DraggableWindow.h" },
		{ "ModuleRelativePath", "DraggableWindow.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDraggableWindow_Statics::NewProp_bEnableDrag_MetaData[] = {
		{ "Category", "Draggable Window Widget" },
		{ "Comment", "/* Allows you to drag this window. */" },
		{ "ModuleRelativePath", "DraggableWindow.h" },
		{ "ToolTip", "Allows you to drag this window." },
	};
#endif
	void Z_Construct_UClass_UDraggableWindow_Statics::NewProp_bEnableDrag_SetBit(void* Obj)
	{
		((UDraggableWindow*)Obj)->bEnableDrag = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDraggableWindow_Statics::NewProp_bEnableDrag = { "bEnableDrag", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UDraggableWindow), &Z_Construct_UClass_UDraggableWindow_Statics::NewProp_bEnableDrag_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDraggableWindow_Statics::NewProp_bEnableDrag_MetaData), Z_Construct_UClass_UDraggableWindow_Statics::NewProp_bEnableDrag_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDraggableWindow_Statics::NewProp_bEnableResizing_MetaData[] = {
		{ "Category", "Draggable Window Widget" },
		{ "Comment", "/* Allows you to resize this window. */" },
		{ "ModuleRelativePath", "DraggableWindow.h" },
		{ "ToolTip", "Allows you to resize this window." },
	};
#endif
	void Z_Construct_UClass_UDraggableWindow_Statics::NewProp_bEnableResizing_SetBit(void* Obj)
	{
		((UDraggableWindow*)Obj)->bEnableResizing = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDraggableWindow_Statics::NewProp_bEnableResizing = { "bEnableResizing", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UDraggableWindow), &Z_Construct_UClass_UDraggableWindow_Statics::NewProp_bEnableResizing_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDraggableWindow_Statics::NewProp_bEnableResizing_MetaData), Z_Construct_UClass_UDraggableWindow_Statics::NewProp_bEnableResizing_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDraggableWindow_Statics::NewProp_ResizeMinWidth_MetaData[] = {
		{ "Category", "Draggable Window Widget" },
		{ "Comment", "/* Minimum width (in pixels) you can resize to. */" },
		{ "EditCondition", "bEnableResizing" },
		{ "ModuleRelativePath", "DraggableWindow.h" },
		{ "ToolTip", "Minimum width (in pixels) you can resize to." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDraggableWindow_Statics::NewProp_ResizeMinWidth = { "ResizeMinWidth", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDraggableWindow, ResizeMinWidth), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDraggableWindow_Statics::NewProp_ResizeMinWidth_MetaData), Z_Construct_UClass_UDraggableWindow_Statics::NewProp_ResizeMinWidth_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDraggableWindow_Statics::NewProp_ResizeMaxWidth_MetaData[] = {
		{ "Category", "Draggable Window Widget" },
		{ "Comment", "/* Maximum width (in pixels) you can resize to. */" },
		{ "EditCondition", "bEnableResizing" },
		{ "ModuleRelativePath", "DraggableWindow.h" },
		{ "ToolTip", "Maximum width (in pixels) you can resize to." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDraggableWindow_Statics::NewProp_ResizeMaxWidth = { "ResizeMaxWidth", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDraggableWindow, ResizeMaxWidth), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDraggableWindow_Statics::NewProp_ResizeMaxWidth_MetaData), Z_Construct_UClass_UDraggableWindow_Statics::NewProp_ResizeMaxWidth_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDraggableWindow_Statics::NewProp_ResizeMinHeight_MetaData[] = {
		{ "Category", "Draggable Window Widget" },
		{ "Comment", "/* Minimum height (in pixels) you can resize to. */" },
		{ "EditCondition", "bEnableResizing" },
		{ "ModuleRelativePath", "DraggableWindow.h" },
		{ "ToolTip", "Minimum height (in pixels) you can resize to." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDraggableWindow_Statics::NewProp_ResizeMinHeight = { "ResizeMinHeight", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDraggableWindow, ResizeMinHeight), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDraggableWindow_Statics::NewProp_ResizeMinHeight_MetaData), Z_Construct_UClass_UDraggableWindow_Statics::NewProp_ResizeMinHeight_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDraggableWindow_Statics::NewProp_ResizeMaxHeight_MetaData[] = {
		{ "Category", "Draggable Window Widget" },
		{ "Comment", "/* Maximum height (in pixels) you can resize to. */" },
		{ "EditCondition", "bEnableResizing" },
		{ "ModuleRelativePath", "DraggableWindow.h" },
		{ "ToolTip", "Maximum height (in pixels) you can resize to." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDraggableWindow_Statics::NewProp_ResizeMaxHeight = { "ResizeMaxHeight", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDraggableWindow, ResizeMaxHeight), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDraggableWindow_Statics::NewProp_ResizeMaxHeight_MetaData), Z_Construct_UClass_UDraggableWindow_Statics::NewProp_ResizeMaxHeight_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDraggableWindow_Statics::NewProp_DragKey_MetaData[] = {
		{ "Category", "Draggable Window Widget" },
		{ "Comment", "/* Key used to drag or resize window. Defaults to Left Mouse Button (LMB) because it makes sense. */" },
		{ "EditCondition", "bEnableDrag" },
		{ "ModuleRelativePath", "DraggableWindow.h" },
		{ "ToolTip", "Key used to drag or resize window. Defaults to Left Mouse Button (LMB) because it makes sense." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDraggableWindow_Statics::NewProp_DragKey = { "DragKey", nullptr, (EPropertyFlags)0x00200c0000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDraggableWindow, DragKey), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDraggableWindow_Statics::NewProp_DragKey_MetaData), Z_Construct_UClass_UDraggableWindow_Statics::NewProp_DragKey_MetaData) }; // 46000949
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDraggableWindow_Statics::NewProp_WindowTitleBorderWidget_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "Category", "Draggable Window Widget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "DraggableWindow.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDraggableWindow_Statics::NewProp_WindowTitleBorderWidget = { "WindowTitleBorderWidget", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDraggableWindow, WindowTitleBorderWidget), Z_Construct_UClass_UBorder_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDraggableWindow_Statics::NewProp_WindowTitleBorderWidget_MetaData), Z_Construct_UClass_UDraggableWindow_Statics::NewProp_WindowTitleBorderWidget_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDraggableWindow_Statics::NewProp_ChildWidgetCanvas_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "Category", "Draggable Window Widget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "DraggableWindow.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDraggableWindow_Statics::NewProp_ChildWidgetCanvas = { "ChildWidgetCanvas", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDraggableWindow, ChildWidgetCanvas), Z_Construct_UClass_UCanvasPanel_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDraggableWindow_Statics::NewProp_ChildWidgetCanvas_MetaData), Z_Construct_UClass_UDraggableWindow_Statics::NewProp_ChildWidgetCanvas_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDraggableWindow_Statics::NewProp_ResizeAreaWidget_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "Category", "Draggable Window Widget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "DraggableWindow.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDraggableWindow_Statics::NewProp_ResizeAreaWidget = { "ResizeAreaWidget", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDraggableWindow, ResizeAreaWidget), Z_Construct_UClass_UBorder_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDraggableWindow_Statics::NewProp_ResizeAreaWidget_MetaData), Z_Construct_UClass_UDraggableWindow_Statics::NewProp_ResizeAreaWidget_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDraggableWindow_Statics::NewProp_ParentSlot_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "DraggableWindow.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDraggableWindow_Statics::NewProp_ParentSlot = { "ParentSlot", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDraggableWindow, ParentSlot), Z_Construct_UClass_UCanvasPanelSlot_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDraggableWindow_Statics::NewProp_ParentSlot_MetaData), Z_Construct_UClass_UDraggableWindow_Statics::NewProp_ParentSlot_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDraggableWindow_Statics::NewProp_ChildWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "DraggableWindow.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDraggableWindow_Statics::NewProp_ChildWidget = { "ChildWidget", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDraggableWindow, ChildWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDraggableWindow_Statics::NewProp_ChildWidget_MetaData), Z_Construct_UClass_UDraggableWindow_Statics::NewProp_ChildWidget_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDraggableWindow_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDraggableWindow_Statics::NewProp_bEnableDrag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDraggableWindow_Statics::NewProp_bEnableResizing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDraggableWindow_Statics::NewProp_ResizeMinWidth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDraggableWindow_Statics::NewProp_ResizeMaxWidth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDraggableWindow_Statics::NewProp_ResizeMinHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDraggableWindow_Statics::NewProp_ResizeMaxHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDraggableWindow_Statics::NewProp_DragKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDraggableWindow_Statics::NewProp_WindowTitleBorderWidget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDraggableWindow_Statics::NewProp_ChildWidgetCanvas,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDraggableWindow_Statics::NewProp_ResizeAreaWidget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDraggableWindow_Statics::NewProp_ParentSlot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDraggableWindow_Statics::NewProp_ChildWidget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDraggableWindow_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDraggableWindow>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDraggableWindow_Statics::ClassParams = {
		&UDraggableWindow::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDraggableWindow_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDraggableWindow_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDraggableWindow_Statics::Class_MetaDataParams), Z_Construct_UClass_UDraggableWindow_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDraggableWindow_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UDraggableWindow()
	{
		if (!Z_Registration_Info_UClass_UDraggableWindow.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDraggableWindow.OuterSingleton, Z_Construct_UClass_UDraggableWindow_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDraggableWindow.OuterSingleton;
	}
	template<> DRAGGABLEWINDOWUMG_API UClass* StaticClass<UDraggableWindow>()
	{
		return UDraggableWindow::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDraggableWindow);
	UDraggableWindow::~UDraggableWindow() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_DraggableWindowUMG_DraggableWindow_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_DraggableWindowUMG_DraggableWindow_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDraggableWindow, UDraggableWindow::StaticClass, TEXT("UDraggableWindow"), &Z_Registration_Info_UClass_UDraggableWindow, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDraggableWindow), 1264354388U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_DraggableWindowUMG_DraggableWindow_h_3607970744(TEXT("/Script/DraggableWindowUMG"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_DraggableWindowUMG_DraggableWindow_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_DraggableWindowUMG_DraggableWindow_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
