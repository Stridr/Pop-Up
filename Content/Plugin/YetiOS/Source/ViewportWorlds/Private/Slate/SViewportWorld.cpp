// Copyright 2023 - YetiTech Studios, Pvt Ltd. All Rights Reserved.

#include "Slate/SViewportWorld.h"
#include "ViewportWorldGameClient.h"
#include "ViewportWorldWidget.h"
#include "Engine/GameEngine.h"
#include "Widgets/SOverlay.h"
#include "Widgets/Layout/SBorder.h"
#include "Widgets/Text/STextBlock.h"
#include "Framework/Application/SlateApplication.h"

DEFINE_LOG_CATEGORY_STATIC(LogViewportWorld, All, All);

SViewportWorld::~SViewportWorld()
{	
	OnReset();
}

void SViewportWorld::Construct(const FArguments& Args)
{
	SViewport::FArguments ParentArgs;
	ParentArgs.EnableGammaCorrection(Args._bEnableGammaCorrection);
	SViewport::Construct(ParentArgs);

	ChildSlot
	[
		SNew(SOverlay)
		+ SOverlay::Slot()
		.HAlign(HAlign_Fill)
		.VAlign(VAlign_Fill)
		[
			ParentArgs._Content.Widget
		]
		+ SOverlay::Slot()
		.HAlign(HAlign_Left)
		.VAlign(VAlign_Top)
		.Padding(5.f)
		[
			SNew(SBorder)
			.Visibility(this, &SViewportWorld::Internal_GetDebugTextVisibility)
			.BorderBackgroundColor(FSlateColor(FLinearColor(0.1, 0.1, 0.1, 0.25)))
			.BorderImage(FAppStyle::GetBrush("ToolPanel.GroupBorder"))
			.Padding(5.f)
			[
				SNew(SVerticalBox)
				+ SVerticalBox::Slot()
				[
					SNew(STextBlock)
					.Text(this, &SViewportWorld::Internal_GetElapsedTime)
				]
				+ SVerticalBox::Slot()
				[
					SNew(STextBlock)
					.Text(this, &SViewportWorld::Internal_MapPath)
				]
				+ SVerticalBox::Slot()
				[
					SNew(STextBlock)
					.Text(this, &SViewportWorld::Internal_GetRenderModeText)
				]
				+ SVerticalBox::Slot()
				[
					SNew(STextBlock)
					.Text(this, &SViewportWorld::Internal_GetViewModeText)
				]
			]
		]
		+ SOverlay::Slot()
		.HAlign(HAlign_Fill)
		.VAlign(VAlign_Fill)
		[
			SAssignNew(ViewportOverlay, SOverlay)
		]
	];
}

void SViewportWorld::Tick(const FGeometry& AllottedGeometry, const double InCurrentTime, const float InDeltaTime)
{
	if (!IsEnabled())
	{
		return;
	}
	
	if (!ViewportWorldGameClient.IsValid())
	{
		//UE_LOG(LogViewportWorld, Error, TEXT("Viewport World Client not valid."));
		return;
	}

	if (!SceneViewport.IsValid())
	{
		UE_LOG(LogViewportWorld, Error, TEXT("Scene viewport not valid"));
		return;
	}

	SViewport::Tick(AllottedGeometry, InCurrentTime, InDeltaTime);
	if (ParentViewportWidget->GetRenderingMode() != EViewportWorldRenderingMode::Replace)
	{
		ViewportWorldGameClient->Tick(InDeltaTime);
	}
}

void SViewportWorld::InitializeViewportWorld(const FViewportWorldHandle* WorldHandle, const TWeakObjectPtr<UViewportWorldWidget>& InViewportWorldWidget)
{
	check(InViewportWorldWidget.IsValid());

	LocalPlayer = WorldHandle->LocalPlayer;
	
	ViewportWorldGameClient = Cast<UViewportWorldGameClient>(WorldHandle->WorldContext->GameViewport);
	check(ViewportWorldGameClient.IsValid());

	ViewportWorldGameClient->SetViewportOverlayWidget(nullptr, ViewportOverlay.ToSharedRef());

	SceneViewport = MakeShareable(ViewportWorldGameClient->CreateGameViewport(SharedThis(this)));
	ViewportWorldGameClient->Viewport = SceneViewport.Get();
	SetViewportInterface(SceneViewport.ToSharedRef());
	
	ViewportWorldGameClient->SetViewportFrame(SceneViewport.Get());	
	ViewportWorldGameClient->SetLocalPlayer(WorldHandle->LocalPlayer.Get());

	FSlateApplication::Get().SetUserFocus(0, SharedThis(this), EFocusCause::SetDirectly);

	ParentViewportWidget = InViewportWorldWidget;
	StartTime = ParentViewportWidget->GetWorld()->GetTimeSeconds();

	MapPath = WorldHandle->BaseURL.Map;
}

void SViewportWorld::AddWidgetContent(const TSharedRef<SWidget>& WidgetContent, const int32& ZOrder) const
{
	ViewportOverlay->AddSlot(ZOrder)
	[
		WidgetContent
	];
}

bool SViewportWorld::RemoveWidgetContent(const TSharedRef<SWidget>& WidgetContent) const
{	
	return ViewportOverlay->RemoveSlot(WidgetContent);
}

void SViewportWorld::ClearAllWidgets() const
{
	ViewportOverlay->ClearChildren();
}

void SViewportWorld::OnReset()
{
	ViewportWorldGameClient.Reset();
	ParentViewportWidget.Reset();
	LocalPlayer.Reset();
	checkf(SceneViewport.IsUnique(), TEXT("Scene Viewport should be unique! You had %i shared references. If you are caching SceneViewport, make sure to use TWeakPtr instead of TSharedPtr or TSharedRef."), SceneViewport.GetSharedReferenceCount());
	SceneViewport.Reset();
	MapPath.Empty();
	StartTime = 0.0;

	UE_LOG(LogViewportWorld, VeryVerbose, TEXT("SViewportWorld destroyed"));
}

EVisibility SViewportWorld::Internal_GetDebugTextVisibility() const
{
	return ParentViewportWidget.IsValid() && ParentViewportWidget->ShowDebugSlateText() ? EVisibility::HitTestInvisible : EVisibility::Collapsed;
}

FText SViewportWorld::Internal_GetElapsedTime() const
{
	if (LocalPlayer.IsValid())
	{
		const auto TimeSeconds = LocalPlayer->GetWorld()->GetTimeSeconds() - StartTime;
		const int32 Hours = FMath::Floor(TimeSeconds / 3600.f);
		const int32 Minutes = FMath::Floor((TimeSeconds - (Hours * 3600.f)) / 60.f);
		const int32 Seconds = TimeSeconds - (Hours * 3600.f) - (Minutes * 60.f);
		
#define INT_STRING(TestInt)		(TestInt < 10 ? FString::Printf(TEXT("0%i"), TestInt) : FString::FromInt(TestInt))		
		const FString TimeString = FString::Printf(TEXT("Active for: %s:%s:%s"), *INT_STRING(Hours), *INT_STRING(Minutes), *INT_STRING(Seconds));
#undef INT_STRING
		
		return FText::FromString(TimeString);
	}

	return FText();
}

FText SViewportWorld::Internal_MapPath() const
{
	return FText::FromString(MapPath);
}

FText SViewportWorld::Internal_GetRenderModeText() const
{
	if (!ParentViewportWidget.IsValid())
	{
		return FText();
	}
	
	switch (ParentViewportWidget->GetRenderingMode())
	{
		case EViewportWorldRenderingMode::Fast:
			return INVTEXT("Render mode: Fast");
		case EViewportWorldRenderingMode::Partial:
			return INVTEXT("Render mode: Partial");
		case EViewportWorldRenderingMode::Replace:
			return INVTEXT("Render mode: Replace");
		default: ;
	}

	checkNoEntry();
	return FText();
}

FText SViewportWorld::Internal_GetViewModeText() const
{
	if (!ViewportWorldGameClient.IsValid())
	{
		return FText();
	}

	return FText::FromString(FString::Printf(TEXT("Current view mode: %s"), *UViewModeUtils::GetViewModeDisplayName(ViewportWorldGameClient->GetCurrentViewMode()).ToString()));
}
