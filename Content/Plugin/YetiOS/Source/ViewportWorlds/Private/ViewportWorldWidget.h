// Copyright 2023 - YetiTech Studios, Pvt Ltd. All Rights Reserved.

#pragma once

#include "ViewportWorldTypes.h"
#include "Components/ContentWidget.h"
#include "ViewportWorldWidget.generated.h"

struct FWorldInitializationValues;
class SViewportWorld;
class UInputMappingContext;
class AGameModeBase;

UCLASS()
class UViewportWorldWidget : public UContentWidget
{
	GENERATED_BODY()

protected:

	UPROPERTY(EditAnywhere, Category = ViewportWorldWidget)
	bool bShowDebugSlateText;

	UPROPERTY(EditAnywhere, Category = ViewportWorldWidget)
	EViewportWorldRenderingMode RenderingMode;

	UPROPERTY(EditAnywhere, Category = ViewportWorldWidget)
	EViewportWorldViewMode ViewMode;

	UPROPERTY(EditAnywhere, Category = ViewportWorldWidget, meta = (EditCondition = "RenderingMode == EViewportWorldRenderingMode::Fast"))
	FPostProcessSettings FastRenderPostProcess;
	
	TSharedPtr<SViewportWorld> ViewportWidget;

public:

	UViewportWorldWidget();

	virtual TSharedRef<SWidget> RebuildWidget() override;
	virtual void ReleaseSlateResources(bool bReleaseChildren) override;

#if WITH_EDITOR
	virtual const FText GetPaletteCategory() override;
#endif

	UFUNCTION(BlueprintCallable, Category = ViewportWorldWidget, meta=(AdvancedDisplay = 1))
	bool LoadGameWorld(TSoftObjectPtr<UWorld> TargetWorld, const FViewportWorldOptions WorldOptions = FViewportWorldOptions(),
		const bool bInitializeActors = true,
		const bool bBeginPlay = true,
		const FString GameOptions = "");

	UFUNCTION(BlueprintCallable, Category = ViewportWorldWidget)
	void SetShowInfoText(const bool bShow);

	FORCEINLINE EViewportWorldRenderingMode GetRenderingMode() const { return RenderingMode; }
	FORCEINLINE EViewportWorldViewMode GetViewMode() const { return ViewMode; }
	FORCEINLINE bool ShowDebugSlateText() const { return bShowDebugSlateText; }
};
