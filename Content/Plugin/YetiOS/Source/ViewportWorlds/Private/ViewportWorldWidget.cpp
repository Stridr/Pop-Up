// Copyright 2023 - YetiTech Studios, Pvt Ltd. All Rights Reserved.

#include "ViewportWorldWidget.h"
#include "Global/ViewportWorldSubsystem.h"
#include "Slate/SViewportWorld.h"
#include "Widgets/Layout/SBox.h"
#include "Widgets/Text/STextBlock.h"
#include "Engine/GameViewportClient.h"
#include "Components/ActorComponent.h"
#include "Global/ViewportWorldSettings.h"
#include "Logging/StructuredLog.h"

DEFINE_LOG_CATEGORY_STATIC(LogViewportWorldWidget, All, All);

UViewportWorldWidget::UViewportWorldWidget()
	: bShowDebugSlateText(true)
	, RenderingMode(EViewportWorldRenderingMode::Fast)
	, ViewMode(EViewportWorldViewMode::Lit)
	, ViewportWidget(nullptr)
{
}

TSharedRef<SWidget> UViewportWorldWidget::RebuildWidget()
{
	const auto bIsViewportWorldsEnabled = UViewportWorldSettings::IsViewportWorldsEnabled();
	
#if WITH_EDITORONLY_DATA
	if (IsDesignTime())
	{
		if (!bIsViewportWorldsEnabled)
		{
			return SNew(SBorder)
			.HAlign(HAlign_Fill)
			.VAlign(VAlign_Fill)
			.BorderImage(FAppStyle::Get().GetBrush("RoundedWarning"))
			.Padding(2.f)
			[
				SNew(SBorder)
				.HAlign(HAlign_Center)
				.VAlign(VAlign_Center)
				.BorderImage(FAppStyle::Get().GetBrush("PopupText.Background"))
				[
					SNew(STextBlock)
					.Text(FText::FromString("Viewport Worlds not enabled.\nEnable it in Project Settings and re-compile this graph."))
					.Justification(ETextJustify::Center)
				]
			];
		}
		
		return SNew(SBox)
		.HAlign(HAlign_Center)
		.VAlign(VAlign_Center)
		[
			SNew(STextBlock).Text(FText::FromString("Viewport World"))
		];
	}
#endif

	if (!bIsViewportWorldsEnabled)
	{
		SNew(SBorder)
		.HAlign(HAlign_Center)
		.VAlign(VAlign_Center)
		.BorderImage(FAppStyle::Get().GetBrush("PopupText.Background"))
		[
			SNew(STextBlock)
			.Text(FText::FromString("Viewport Worlds not enabled."))
		];
	}

	ViewportWidget = SNew(SViewportWorld).bEnableGammaCorrection(RenderingMode != EViewportWorldRenderingMode::Replace);
	return ViewportWidget.ToSharedRef();
}

void UViewportWorldWidget::ReleaseSlateResources(bool bReleaseChildren)
{
	ViewportWidget.Reset();
	Super::ReleaseSlateResources(bReleaseChildren);
}

#if WITH_EDITOR
const FText UViewportWorldWidget::GetPaletteCategory()
{
	return INVTEXT("YetiTech Studios");
}
#endif

bool UViewportWorldWidget::LoadGameWorld(TSoftObjectPtr<UWorld> TargetWorld,
	const FViewportWorldOptions WorldOptions, const bool bInitializeActors, const bool bBeginPlay, const FString GameOptions)
{
	const auto ViewportWorldSubsystem = UViewportWorldSubsystem::Get(this);
	if (!IsValid(ViewportWorldSubsystem))
	{
		UE_LOGFMT(LogViewportWorldWidget, Error, "{Function} failed. Viewport world is not enabled.", __FUNCTION__);
		return false;
	}
	
	FViewportWorldHandle* WorldHandle = ViewportWorldSubsystem->LoadWorld(TargetWorld, WorldOptions, bInitializeActors, RenderingMode, ViewMode, FastRenderPostProcess, GameOptions);
	if (WorldHandle == nullptr)
	{
		return false;
	}

	WorldHandle->ViewportWorldWidget = ViewportWidget;

	if (!ViewportWidget.IsValid())
	{
		ViewportWidget = SNew(SViewportWorld).bEnableGammaCorrection(RenderingMode != EViewportWorldRenderingMode::Replace);
	}
	
	ViewportWidget->InitializeViewportWorld(WorldHandle, this);
	if (bBeginPlay)
	{
		WorldHandle->WorldBeginPlay();
	}
	
	return WorldHandle->IsHandleValid();
}

void UViewportWorldWidget::SetShowInfoText(const bool bShow)
{
	bShowDebugSlateText = bShow;
}
