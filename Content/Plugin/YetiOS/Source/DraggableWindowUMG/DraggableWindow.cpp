// Copyright 2020 YetiTech Studios, Pvt Ltd. All Rights Reserved.


#include "DraggableWindow.h"
#include "Blueprint/WidgetLayoutLibrary.h"
#include "Blueprint/SlateBlueprintLibrary.h"
#include "Blueprint/WidgetBlueprintLibrary.h"
#include "Components/Border.h"
#include "Components/CanvasPanelSlot.h"
#include "Components/CanvasPanel.h"
#include "Kismet/GameplayStatics.h"

DEFINE_LOG_CATEGORY_STATIC(LogDraggableWindow, All, All)

#ifdef PRINT_LOG
#undef PRINT_LOG
#endif

#ifdef PRINT_WARN
#undef PRINT_WARN
#endif

#ifdef PRINT_ERR
#undef PRINT_ERR
#endif

#define PRINT_LOG(Param1)		UE_LOG(LogDraggableWindow, Display, TEXT("%s"), *FString(Param1))
#define PRINT_WARN(Param1)		UE_LOG(LogDraggableWindow, Warning, TEXT("%s"), *FString(Param1))
#define PRINT_ERR(Param1)		UE_LOG(LogDraggableWindow, Error, TEXT("%s"), *FString(Param1))

UDraggableWindow::UDraggableWindow(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	ResizeMinWidth = 400.f;
	ResizeMaxWidth = 0.f;

	ResizeMinHeight = 400.f;
	ResizeMaxHeight = 0.f;

	bEnableDrag = bEnableResizing = true;
	bIsMouseButtonDown = bIsDragging = bIsResizing = bIsAlignmentAccountedFor = bStartInCenterScreen = false;
	LastMousePosition = PreResizeAlignment = PreResizeOffset = PreDragSize = StartSize = FVector2D::ZeroVector;

	DragKey = FKey(FName("LeftMouseButton"));

	CurrentZOrder = 1;
	
	SetIsFocusable(true);
}

UDraggableWindow* UDraggableWindow::CreateDraggableWindow(const UObject* WorldContextObject, TSubclassOf<UDraggableWindow> WindowClass, TSubclassOf<UUserWidget> ChildWidgetClass, 
	const FVector2D StartSize /*= FVector2D(640.f, 480.f)*/, const FVector2D ResizeWidth /*= FVector2D(640.f, 480.f)*/, const FVector2D ResizeHeight /*= FVector2D(0.f, 0.f)*/,
	const bool bCenterToScreen /*= true*/, const bool bCanDrag /*= true*/, const bool bCanResize /*= true*/)
{
	if (WindowClass)
	{
		UUserWidget* ProxyChild = nullptr;
		
		if (ChildWidgetClass)
		{
			APlayerController* MyPlayerController = UGameplayStatics::GetPlayerController(WorldContextObject, 0);
			ProxyChild = CreateWidget(MyPlayerController, ChildWidgetClass);
		}

		return CreateDraggableWindowFromWidget(WorldContextObject, WindowClass, ProxyChild, StartSize, ResizeWidth, ResizeHeight, bCenterToScreen, bCanDrag, bCanResize);
	}

	PRINT_ERR("No window class specified for 'Create Draggable Window' function. No window was created.");
	return nullptr;
}

UDraggableWindow* UDraggableWindow::CreateDraggableWindowFromWidget(const UObject* WorldContextObject, TSubclassOf<UDraggableWindow> WindowClass, UUserWidget* NewChildWidget, 
	const FVector2D StartSize /*= FVector2D(640.f, 480.f)*/, const FVector2D ResizeWidth /*= FVector2D(640.f, 480.f)*/, const FVector2D ResizeHeight /*= FVector2D(0.f, 0.f)*/,
	const bool bCenterToScreen /*= true*/, const bool bCanDrag /*= true*/, const bool bCanResize /*= true*/)
{
	if (WindowClass)
	{
		APlayerController* MyPlayerController = UGameplayStatics::GetPlayerController(WorldContextObject, 0);
		UDraggableWindow* ProxyWindow = Cast<UDraggableWindow>(CreateWidget(MyPlayerController, WindowClass));
		ProxyWindow->StartSize = StartSize;
		ProxyWindow->bStartInCenterScreen = bCenterToScreen;
		ProxyWindow->bEnableDrag = bCanDrag;
		ProxyWindow->bEnableResizing = bCanResize;
		ProxyWindow->ResizeMinWidth = ResizeWidth.X;
		ProxyWindow->ResizeMaxWidth = ResizeWidth.Y;
		ProxyWindow->ResizeMinHeight = ResizeHeight.X;
		ProxyWindow->ResizeMaxHeight = ResizeHeight.Y;
		if (NewChildWidget)
		{
			ProxyWindow->AddContentWidget(NewChildWidget);
		}
		return ProxyWindow;
	}

	PRINT_ERR("No window class specified for 'Create Draggable Window From Widget' function. No window was created.");
	return nullptr;
}

void UDraggableWindow::NativeConstruct()
{
	ParentSlot = UWidgetLayoutLibrary::SlotAsCanvasSlot(this);

	if (ParentSlot == nullptr)
	{
		if (Slot)
		{
			PRINT_ERR(FString::Printf(TEXT("Draggable window requires its parent to be Canvas Panel. Dragging and resizing will not work!. %s is child of %s "), *GetName(), *Slot->GetName()));
		}
		else
		{
			PRINT_ERR("Draggable window requires its parent to be Canvas Panel. Dragging and resizing will not work!");
		}
	}
	else
	{
		bool bLocal_Success = true;
		UpdateWindowSize(StartSize);

		if (bStartInCenterScreen)
		{
			CenterWindowToScreen();
		}

		if (WindowTitleBorderWidget)
		{
			WindowTitleBorderWidget->OnMouseButtonUpEvent.BindUFunction(this, FName("Internal_OnMouseButtonUp_WindowTitleBorder"));
			WindowTitleBorderWidget->OnMouseButtonDownEvent.BindUFunction(this, FName("Internal_OnMouseButtonDown_WindowTitleBorder"));
		}
		else
		{
			PRINT_ERR("Window Title Border was not found. Make sure you have a 'Border' widget with 'Is Variable' enabled and name set to 'WindowTitleBorderWidget'. This will act as the title bar where you can click and drag the window.");
			bLocal_Success = false;
		}

		if (bEnableResizing)
		{
			if (ResizeAreaWidget == nullptr)
			{
				PRINT_ERR("Resizing was enabled but Resize Area Widget was not found. Make sure you have a 'Border' widget with 'Is Variable' enabled and name set to 'ResizeAreaWidget'.");
				bLocal_Success = false;
			}
			else
			{
				//ResizeAreaWidget->OnMouseButtonDownEvent.BindUFunction(this, FName("Internal_OnMouseButtonDown_ResizeArea"));
				ResizeAreaWidget->OnMouseButtonDownEvent.BindDynamic(this, &UDraggableWindow::Internal_OnMouseButtonDown_ResizeArea);
			}
		}

		if (bLocal_Success)
		{
			PRINT_LOG(FString::Printf(TEXT("Draggable window [%s] initialized successfully."), *GetName()));
		}
		else
		{
			PRINT_WARN(FString::Printf(TEXT("Draggable window [%s] initialized with errors."), *GetName()));
		}
	}

	Super::NativeConstruct();
}

FReply UDraggableWindow::NativeOnMouseMove(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent)
{
	Super::NativeOnMouseMove(InGeometry, InMouseEvent);
	if (bIsMouseButtonDown && ParentSlot)
	{
		FVector2D OutPixelPosition, OutViewportPosition;
		USlateBlueprintLibrary::AbsoluteToViewport(this, InMouseEvent.GetScreenSpacePosition(), OutPixelPosition, OutViewportPosition);
		const FVector2D ViewportSize = UWidgetLayoutLibrary::GetViewportSize(this);
		const bool bIsMouseOffScreen = OutPixelPosition.X < 5.f || OutPixelPosition.Y < 5.f || OutPixelPosition.X >(ViewportSize.X - 5.f) || OutPixelPosition.Y >(ViewportSize.Y - 5.f);
		if (bIsMouseOffScreen)
		{
			Internal_OnMouseButtonUpEvent();
			return FReply::Handled();
		}

		USlateBlueprintLibrary::AbsoluteToViewport(this, InMouseEvent.GetScreenSpacePosition(), OutPixelPosition, OutViewportPosition);
		FVector2D MouseDelta = OutViewportPosition - LastMousePosition;
		FEventReply EventReply = UWidgetBlueprintLibrary::DetectDragIfPressed(InMouseEvent, this, DragKey);
		if (bIsDragging)
		{
			ParentSlot->SetPosition(ParentSlot->GetPosition() + MouseDelta);
		}
		else if (bIsResizing)
		{
			if (bIsAlignmentAccountedFor)
			{
				const FVector2D RequestedSize = Internal_DetermineNewSize(MouseDelta);
				ParentSlot->SetSize(RequestedSize);
			}
			else
			{
				ParentSlot->SetAlignment(FVector2D::ZeroVector);
				ParentSlot->SetPosition(ParentSlot->GetPosition() - PreResizeOffset);
				bIsAlignmentAccountedFor = true;
				return FReply::Handled();
			}
		}
		else
		{
			return UWidgetBlueprintLibrary::CaptureMouse(EventReply, this).NativeReply;
		}

		USlateBlueprintLibrary::AbsoluteToViewport(this, InMouseEvent.GetScreenSpacePosition(), OutPixelPosition, LastMousePosition);
		return UWidgetBlueprintLibrary::CaptureMouse(EventReply, this).NativeReply;
	}

	return FReply::Handled();
}

FReply UDraggableWindow::NativeOnMouseButtonUp(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent)
{
	Super::NativeOnMouseButtonUp(InGeometry, InMouseEvent);
	Internal_OnMouseButtonUpEvent();
	FEventReply EventReply = UWidgetBlueprintLibrary::DetectDragIfPressed(InMouseEvent, this, DragKey);
	return UWidgetBlueprintLibrary::ReleaseMouseCapture(EventReply).NativeReply;
}

void UDraggableWindow::Internal_OnMouseButtonUpEvent()
{
	if (bIsResizing && bIsAlignmentAccountedFor && ParentSlot)
	{
		const FVector2D SizeDifference = ParentSlot->GetSize() - PreDragSize;
		const FVector2D NewPosition = (SizeDifference * PreResizeAlignment) + PreResizeOffset + (ParentSlot->GetPosition());
		ParentSlot->SetPosition(NewPosition);
		ParentSlot->SetAlignment(PreResizeAlignment);
	}

	bIsAlignmentAccountedFor = false;
	bIsMouseButtonDown = false;
	bIsDragging = false;
	bIsResizing = false;
}

const FVector2D UDraggableWindow::Internal_DetermineNewSize(const FVector2D& InDelta) const
{
	if (ParentSlot)
	{
		const FVector2D Local_Original = ParentSlot->GetSize();
		const float Local_OriginalX = Local_Original.X;
		const float Local_OriginalY = Local_Original.Y;
		const float Local_DeltaX = InDelta.X;
		const float Local_DeltaY = InDelta.Y;

		float TempWidth = 0.f;
		float TempHeight = 0.f;

		if (ResizeMaxWidth > 0.f)
		{
			const float Local_ValueToClamp = Local_OriginalX + Local_DeltaX;
			TempWidth = FMath::Clamp(Local_ValueToClamp, ResizeMinWidth, ResizeMaxWidth);
		}
		else
		{
			TempWidth = FMath::Max<float>((Local_OriginalX + Local_DeltaX), ResizeMinWidth);
		}

		if (ResizeMaxHeight > 0.f)
		{
			const float Local_ValueToClamp = Local_OriginalY + Local_DeltaY;
			TempHeight = FMath::Clamp(Local_ValueToClamp, ResizeMinHeight, ResizeMaxHeight);
		}
		else
		{
			TempHeight = FMath::Max<float>((Local_OriginalY + Local_DeltaY), ResizeMinHeight);
		}

		return FVector2D(TempWidth, TempHeight);
	}

	return FVector2D::ZeroVector;
}

FEventReply UDraggableWindow::Internal_OnMouseButtonUp_WindowTitleBorder(FGeometry InGeometry, const FPointerEvent& InMouseEvent)
{
	FEventReply EventReply = FEventReply();
	EventReply.NativeReply = NativeOnMouseButtonUp(InGeometry, InMouseEvent);
	return EventReply;
}

FEventReply UDraggableWindow::Internal_OnMouseButtonDown_WindowTitleBorder(FGeometry InGeometry, const FPointerEvent& InMouseEvent)
{
	if (bEnableDrag)
	{
		Internal_OnMouseButtonUp_WindowTitleBorder(InGeometry, InMouseEvent);
		bIsMouseButtonDown = true;
		bIsDragging = true;

		FVector2D OutPixelPosition;
		USlateBlueprintLibrary::AbsoluteToViewport(this, InMouseEvent.GetScreenSpacePosition(), OutPixelPosition, LastMousePosition);
		FEventReply EventReply = UWidgetBlueprintLibrary::DetectDragIfPressed(InMouseEvent, this, DragKey);
		K2_OnDragStart(InMouseEvent);
		return UWidgetBlueprintLibrary::CaptureMouse(EventReply, this);
	}

	return FEventReply();
}

FEventReply UDraggableWindow::Internal_OnMouseButtonDown_ResizeArea(FGeometry InGeometry, const FPointerEvent& InMouseEvent)
{
	bIsMouseButtonDown = true;
	bIsResizing = true;

	FEventReply EventReply = FEventReply();
	if (ParentSlot)
	{
		FVector2D OutPixelPosition;
		USlateBlueprintLibrary::AbsoluteToViewport(this, InMouseEvent.GetScreenSpacePosition(), OutPixelPosition, LastMousePosition);
		PreResizeAlignment = ParentSlot->GetAlignment();
		PreDragSize = ParentSlot->GetSize();
		PreResizeOffset = PreDragSize * PreResizeAlignment;
		EventReply = UWidgetBlueprintLibrary::DetectDragIfPressed(InMouseEvent, this, DragKey);
		K2_OnResizeStart(InMouseEvent);
	}

	return UWidgetBlueprintLibrary::CaptureMouse(EventReply, this);
}

void UDraggableWindow::AddContentWidgetClass(TSubclassOf<class UUserWidget> InWidgetClass, const bool bClearPrevious /*= true*/)
{
	if (InWidgetClass)
	{
		APlayerController* MyPlayerController = UGameplayStatics::GetPlayerController(this, 0);		
		AddContentWidget(CreateWidget(MyPlayerController, InWidgetClass), bClearPrevious);
	}
}

void UDraggableWindow::AddContentWidget(class UUserWidget* InWidget, const bool bClearPrevious /*= true*/)
{
	if (ChildWidget && bClearPrevious)
	{
		ChildWidget->RemoveFromParent();
		ChildWidget = nullptr;
	}

	ChildWidget = InWidget;
	Internal_AddContentWidget(bClearPrevious);
}

void UDraggableWindow::CenterWindowToScreen()
{
	ParentSlot->SetAnchors(FAnchors(0.5));
	ParentSlot->SetAlignment(FVector2D(0.5));
	ParentSlot->SetPosition(FVector2D::ZeroVector);
}

bool UDraggableWindow::UpdateWindowSize(const FVector2D& InNewSize)
{
	if (InNewSize != FVector2D::ZeroVector)
	{
		ParentSlot->SetSize(InNewSize);
		return true;
	}

	return false;
}

bool UDraggableWindow::GetChildWidget(UUserWidget*& OutChildWidget) const
{
	OutChildWidget = ChildWidget;
	return OutChildWidget != nullptr;
}

void UDraggableWindow::CloseWindow()
{
	K2_OnCloseWindow();
	OnCloseWindow();

	if (IsValid(ChildWidgetCanvas))
	{
		ChildWidgetCanvas->ClearChildren();
	}

	RemoveFromParent();
}

void UDraggableWindow::Internal_AddContentWidget(const bool bClearPrevious)
{
	if (bClearPrevious)
	{
		ChildWidgetCanvas->ClearChildren();
	}

	if (ChildWidget)
	{
		ChildWidgetCanvas->AddChildToCanvas(ChildWidget);
		const auto ChildSlot = UWidgetLayoutLibrary::SlotAsCanvasSlot(ChildWidget);
		ChildSlot->SetAnchors(FAnchors(0.f, 0.f, 1.f, 1.f));
		ChildSlot->SetOffsets(FMargin(0.f));
		K2_OnContentWidgetAdded(ChildWidget);
	}
}

#undef PRINT_LOG
#undef PRINT_WARN
#undef PRINT_ERR
