// Copyright 2023 - YetiTech Studios, Pvt Ltd. All Rights Reserved.

#pragma once

#include "OperatingSystemWidgetBase.h"
#include "OperatingSystemWindowWidgetBase.generated.h"

class UDraggableWindow;

/** Inherit from this if the widget requires a parent window
 * For example: File widget and Program widget.
 */
UCLASS(Abstract)
class OPERATINGSYSTEMSIMULATOR_API UOperatingSystemWindowWidgetBase : public UOperatingSystemWidgetBase
{
	GENERATED_BODY()

	uint8 bHasBlueprintOnSetWindow : 1;
	uint8 bHasBlueprintOnDestroyWidget : 1;

protected:

	UPROPERTY(BlueprintReadOnly, Category = OperatingSystemWindowWidgetBase, meta = (ExposeOnSpawn = true))
	TObjectPtr<UDraggableWindow> ParentWindow;

public:

	UOperatingSystemWindowWidgetBase();

protected:

	virtual FReply NativeOnMouseButtonDown(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent) override;
	virtual void NativeOnAddedToFocusPath(const FFocusEvent& InFocusEvent) override;

	virtual void OnDestroyWidget() override;

public:

	UFUNCTION(BlueprintCallable, Category = OperatingSystemWindowWidgetBase)
	void SetParentWindow(UDraggableWindow* NewWindow);

	UFUNCTION(BlueprintCallable, Category = OperatingSystemWindowWidgetBase)
	void BringWindowToFront() const;

protected:

	UFUNCTION(BlueprintImplementableEvent, Category = OperatingSystemWindowWidgetBase, DisplayName = OnSetWindow)
	void K2_OnSetWindow();

	/** This event is called before Event Destruct. */
	UFUNCTION(BlueprintImplementableEvent, Category = OperatingSystemWindowWidgetBase, DisplayName = OnDestroyWidget)
	void K2_OnDestroyWidget();
};
