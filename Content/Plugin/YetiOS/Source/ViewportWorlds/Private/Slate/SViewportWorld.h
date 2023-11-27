// Copyright 2023 - YetiTech Studios, Pvt Ltd. All Rights Reserved.

#pragma once

#include "ViewportWorldTypes.h"
#include "Widgets/SViewport.h"
#include "Slate/SceneViewport.h"
#include "Engine/World.h"

class UViewportWorldWidget;
class UViewportWorldGameClient;

class SViewportWorld final : public SViewport
{
public:
	
	SLATE_BEGIN_ARGS(SViewportWorld)
		: _bEnableGammaCorrection(true)
	{}
	SLATE_ARGUMENT( bool, bEnableGammaCorrection )
	SLATE_END_ARGS()

	TWeakObjectPtr<UViewportWorldGameClient> ViewportWorldGameClient = nullptr;
	TWeakObjectPtr<UViewportWorldWidget> ParentViewportWidget = nullptr;
	TWeakObjectPtr<ULocalPlayer> LocalPlayer = nullptr;
	TSharedPtr<FSceneViewport> SceneViewport = nullptr;
	TSharedPtr<SOverlay> ViewportOverlay = nullptr;
	FString MapPath = "";
	double StartTime = 0.0;

	SViewportWorld()
	{
	}

	virtual ~SViewportWorld() override;

	void Construct(const FArguments& Args);
	virtual void Tick(const FGeometry& AllottedGeometry, const double InCurrentTime, const float InDeltaTime) override;

	void InitializeViewportWorld(const FViewportWorldHandle* WorldHandle, const TWeakObjectPtr<UViewportWorldWidget>& InViewportWorldWidget);
	void AddWidgetContent(const TSharedRef<SWidget>& WidgetContent, const int32& ZOrder) const;
	bool RemoveWidgetContent(const TSharedRef<SWidget>& WidgetContent) const;
	void ClearAllWidgets() const;

	void OnReset();

private:

	EVisibility Internal_GetDebugTextVisibility() const;
	FText Internal_GetElapsedTime() const;
	FText Internal_MapPath() const;
	FText Internal_GetRenderModeText() const;
	FText Internal_GetViewModeText() const;
};
