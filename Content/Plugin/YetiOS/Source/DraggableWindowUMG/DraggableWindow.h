// Copyright 2020 YetiTech Studios, Pvt Ltd. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "DraggableWindow.generated.h"

/**
 * 
 */
UCLASS()
class DRAGGABLEWINDOWUMG_API UDraggableWindow : public UUserWidget
{
	GENERATED_BODY()

protected:

	/* Allows you to drag this window. */
	UPROPERTY(EditAnywhere, Category = "Draggable Window Widget")
	uint8 bEnableDrag : 1;

	/* Allows you to resize this window. */
	UPROPERTY(EditAnywhere, Category = "Draggable Window Widget")
	uint8 bEnableResizing : 1;

	/* Minimum width (in pixels) you can resize to. */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Draggable Window Widget", meta = (EditCondition = "bEnableResizing"))
	float ResizeMinWidth;

	/* Maximum width (in pixels) you can resize to. */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Draggable Window Widget", meta = (EditCondition = "bEnableResizing"))
	float ResizeMaxWidth;

	/* Minimum height (in pixels) you can resize to. */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Draggable Window Widget", meta = (EditCondition = "bEnableResizing"))
	float ResizeMinHeight;

	/* Maximum height (in pixels) you can resize to. */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Draggable Window Widget", meta = (EditCondition = "bEnableResizing"))
	float ResizeMaxHeight;

	/* Key used to drag or resize window. Defaults to Left Mouse Button (LMB) because it makes sense. */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, AdvancedDisplay, Category = "Draggable Window Widget", meta = (EditCondition = "bEnableDrag"))
	FKey DragKey;

	UPROPERTY(BlueprintReadOnly, Category = "Draggable Window Widget", meta = (BindWidgetOptional))
	class UBorder* WindowTitleBorderWidget;

	UPROPERTY(BlueprintReadOnly, Category = "Draggable Window Widget", meta = (BindWidgetOptional))
	class UCanvasPanel* ChildWidgetCanvas;

	UPROPERTY(BlueprintReadOnly, Category = "Draggable Window Widget", meta = (BindWidgetOptional))
	class UBorder* ResizeAreaWidget;

	UPROPERTY()
	class UCanvasPanelSlot* ParentSlot;

	UPROPERTY()
	class UUserWidget* ChildWidget;

	uint8 bIsMouseButtonDown : 1;
	uint8 bIsDragging : 1;
	uint8 bIsResizing : 1;
	uint8 bIsAlignmentAccountedFor : 1;
	uint8 bStartInCenterScreen : 1;

	FVector2D LastMousePosition;
	FVector2D PreResizeAlignment;
	FVector2D PreResizeOffset;
	FVector2D PreDragSize;

	FVector2D StartSize;

	int32 CurrentZOrder;

public:

	UDraggableWindow(const FObjectInitializer& ObjectInitializer);

	/**
	* public static UDraggableWindow::CreateDraggableWindow
	* Creates a draggable window widget instance from given widget class. You can optionally add a child widget also which will be the content for this window.
	* @param WindowClass [TSubclassOf<UDraggableWindow>] Window widget class to create.
	* @param ChildWidgetClass [TSubclassOf<UUserWidget>] [OPTIONAL] Child content class to add to the newly created window widget.
	* @param StartSize [const FVector2D] What size should we start the window.
	* @param bCenterToScreen [const bool] Should we center the window to the player screen.
	* @param bCanDrag [const bool] Determines if the window can be dragged.
	* @param bCanResize [const bool] Determines if the window can be resized (You must have a Border widget with Is Variable set to true and variable name set to ResizeAreaWidget).
	* @return [UDraggableWindow*] Newly created window widget.
	**/
	UFUNCTION(BlueprintCallable, BlueprintCosmetic, Category = "Draggable Window", DisplayName = "Create Draggable Window (Child Widget Class)", meta = (WorldContext = "WorldContextObject", DeterminesOutputType = "ChildWidgetClass"))
	static UDraggableWindow* CreateDraggableWindow(const UObject* WorldContextObject, TSubclassOf<UDraggableWindow> WindowClass, TSubclassOf<UUserWidget> ChildWidgetClass, const FVector2D StartSize = FVector2D(640.f, 480.f), const FVector2D ResizeWidth = FVector2D(640.f, 480.f), const FVector2D ResizeHeight = FVector2D(0.f, 0.f), const bool bCenterToScreen = true, const bool bCanDrag = true, const bool bCanResize = true);

	/**
	* public static UDraggableWindow::CreateDraggableWindowFromWidget
	* Creates a draggable window widget instance from given widget class. You can optionally add a child widget also which will be the content for this window.
	* @param WindowClass [TSubclassOf<UDraggableWindow>] Window widget class to create.
	* @param ChildWidget [UUserWidget*] [OPTIONAL] Child content to add to the newly created window widget.
	* @param StartSize [const FVector2D] What size should we start the window.
	* @param bCenterToScreen [const bool] Should we center the window to the player screen.
	* @param bCanDrag [const bool] Determines if the window can be dragged.
	* @param bCanResize [const bool] Determines if the window can be resized (You must have a Border widget with Is Variable set to true and variable name set to ResizeAreaWidget).
	* @return [UDraggableWindow*] Newly created window widget.
	**/
	UFUNCTION(BlueprintCallable, BlueprintCosmetic, Category = "Draggable Window", DisplayName = "Create Draggable Window (Child Widget Reference)", meta = (WorldContext = "WorldContextObject"))	
	static UDraggableWindow* CreateDraggableWindowFromWidget(const UObject* WorldContextObject, TSubclassOf<UDraggableWindow> WindowClass, UUserWidget* NewChildWidget, const FVector2D StartSize = FVector2D(640.f, 480.f), const FVector2D ResizeWidth = FVector2D(640.f, 480.f), const FVector2D ResizeHeight = FVector2D(0.f, 0.f), const bool bCenterToScreen = true, const bool bCanDrag = true, const bool bCanResize = true);

protected:

	virtual void NativeConstruct() override;
	virtual FReply NativeOnMouseMove(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent) override;
	virtual FReply NativeOnMouseButtonUp(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent) override;

private:

	void Internal_OnMouseButtonUpEvent();
	const FVector2D Internal_DetermineNewSize(const FVector2D& InDelta) const;

	UFUNCTION()
	FEventReply Internal_OnMouseButtonUp_WindowTitleBorder(FGeometry InGeometry, const FPointerEvent& InMouseEvent);

	UFUNCTION()
	FEventReply Internal_OnMouseButtonDown_WindowTitleBorder(FGeometry InGeometry, const FPointerEvent& InMouseEvent);

	UFUNCTION()
	FEventReply Internal_OnMouseButtonDown_ResizeArea(FGeometry InGeometry, const FPointerEvent& InMouseEvent);

public:

	void CloseWindow();

protected:

	/**
	* protected UDraggableWindow::AddContentWidgetClass
	* Adds a content to this window. A new widget is created from the given class.
	* @See AddContentWidget().
	* @param InWidgetClass [TSubclassOf<class UUserWidget>] Widget class to use as content for this window.
	* @param bClearPrevious [const bool] Should we clear all existing children from Child Widget Canvas? Recommended to keep this on.
	**/
	UFUNCTION(BlueprintCallable, BlueprintCosmetic, Category = "Draggable Window")	
	void AddContentWidgetClass(TSubclassOf<class UUserWidget> InWidgetClass, const bool bClearPrevious = true);

	/**
	* protected UDraggableWindow::AddContentWidget
	* Adds a content to this window.
	* @See AddContentWidgetClass().
	* @param InWidget [class UUserWidget*] Reference to an existing content.
	* @param bClearPrevious [const bool] Should we clear all existing children from Child Widget Canvas? Recommended to keep this on.
	**/
	UFUNCTION(BlueprintCallable, BlueprintCosmetic, Category = "Draggable Window")	
	void AddContentWidget(class UUserWidget* InWidget, const bool bClearPrevious = true);

	/**
	* protected UDraggableWindow::CenterWindowToScreen
	* Center this window to screen.
	**/
	UFUNCTION(BlueprintCallable, BlueprintCosmetic, Category = "Draggable Window")	
	void CenterWindowToScreen();

	/**
	* protected UDraggableWindow::UpdateWindowSize
	* Updates the size of the draggable window.
	* @param InNewSize [const FVector2D&] New size to change to.
	* @return [bool] True if the size was changed successfully.
	**/
	UFUNCTION(BlueprintCallable, BlueprintCosmetic, Category = "Draggable Window")	
	bool UpdateWindowSize(const FVector2D& InNewSize);

	/**
	* protected UDraggableWindow::GetChildWidget const
	* Returns the child widget (if any) of this draggable window. If the Return Value is true, then OutChildWidget will be valid.
	* @param OutChildWidget [UUserWidget*&] Reference to the child widget created by this window.
	* @return [bool] True if a valid child widget is available.
	**/
	UFUNCTION(BlueprintPure, BlueprintCosmetic, Category = "Draggable Window")	
	bool GetChildWidget(UUserWidget*& OutChildWidget) const;

private:

	void Internal_AddContentWidget(const bool bClearPrevious);

protected:

	virtual void OnCloseWindow() {}

	/**
	* protected UDraggableWindow::K2_OnCloseWindow
	* Event called when this window is closed. C++ implementation calls RemoveFromParent automatically.
	**/
	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic, Category = "Draggable Window", DisplayName = "On Close Window")	
	void K2_OnCloseWindow();

	/**
	* protected UDraggableWindow::K2_OnSetWindowTitle
	* Event called when a new title is set for this window.
	* @param NewWindowName [const FText &] New title.
	**/
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, BlueprintCosmetic, Category = "Draggable Window", DisplayName = "On Set Window Title")	
	void K2_OnSetWindowTitle(const FText& NewWindowTitle);

	/**
	* protected UDraggableWindow::K2_OnContentWidgetAdded
	* Event called when a new content is added to this window.
	* @param AddedUserWidget [const UUserWidget*] Reference to the content that is being added.
	**/
	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic, Category = "Draggable Window", DisplayName = "On Content Widget Added")	
	void K2_OnContentWidgetAdded(const UUserWidget* AddedUserWidget);

	/**
	* protected UDraggableWindow::K2_OnDragStart
	* Event called when resizing is started. Only called if Enable Drag is true.
	* @param InMouseEvent [const FPointerEvent&] Mouse or touch action.
	**/
	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic, Category = "Draggable Window", DisplayName = "On Drag Start")	
	void K2_OnDragStart(const FPointerEvent& InMouseEvent);

	/**
	* protected UDraggableWindow::K2_OnResizeStart
	* Event called when resizing is started. Only called if Enable Resizing is true.
	* @param InMouseEvent [const FPointerEvent&] Mouse or touch action.
	**/
	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic, Category = "Draggable Window", DisplayName = "On Resize Start")	
	void K2_OnResizeStart(const FPointerEvent& InMouseEvent);
	
};
