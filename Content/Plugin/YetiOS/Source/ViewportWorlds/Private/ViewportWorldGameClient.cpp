// Copyright 2023 - YetiTech Studios, Pvt Ltd. All Rights Reserved.

#include "ViewportWorldGameClient.h"
#include "CanvasTypes.h"
#include "EngineModule.h"
#include "LegacyScreenPercentageDriver.h"
#include "Components/LineBatchComponent.h"
#include "Slate/SceneViewport.h"

UViewportWorldGameClient::UViewportWorldGameClient()
	: LocalPlayer(nullptr)
	, CurrentRenderingMode(EViewportWorldRenderingMode::Fast)
	, CurrentWorldViewMode(EViewportWorldViewMode::Lit)
	, bIsSecondaryWorld(false)
{
}

void UViewportWorldGameClient::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (!bIsSecondaryWorld)
	{
		return;
	}
	
	if (World && World->ShouldTick())
	{
		World->Tick(LEVELTICK_All, DeltaTime);
	}

	if (CurrentRenderingMode != EViewportWorldRenderingMode::Replace)
	{
		if (const auto SceneViewport = GetGameViewport())
		{
			SceneViewport->Draw();
		}
	}
}

void UViewportWorldGameClient::Draw(FViewport* InViewport, FCanvas* Canvas)
{
	if (bIsSecondaryWorld)
	{
		ApplyViewMode(GetCurrentViewMode(), true, EngineShowFlags);
		if (CurrentRenderingMode == EViewportWorldRenderingMode::Fast)
		{
			Internal_DrawFast(InViewport, Canvas);
			return;
		}
	}

	Super::Draw(Viewport, Canvas);
}

void UViewportWorldGameClient::SetLocalPlayer(ULocalPlayer* NewLocalPlayer)
{
	LocalPlayer = NewLocalPlayer;
}

void UViewportWorldGameClient::SetViewportWorldRenderingMode(const EViewportWorldRenderingMode& NewRenderingMode)
{
	CurrentRenderingMode = NewRenderingMode;
}

bool UViewportWorldGameClient::SetViewportWorldViewMode(const EViewportWorldViewMode& NewViewMode)
{
	if (CurrentWorldViewMode != NewViewMode)
	{
		CurrentWorldViewMode = NewViewMode;
		return true;
	}
	
	return false;
}

void UViewportWorldGameClient::SetFastPostProcess(const FPostProcessSettings& NewPostProcessSettings)
{
	FastRenderPostProcessSettings = NewPostProcessSettings;
}

void UViewportWorldGameClient::MarkAsSecondaryWorld()
{
	bIsSecondaryWorld = true;
}

TOptional<EViewportWorldRenderingMode> UViewportWorldGameClient::GetCurrentRenderingMode() const
{
	if (bIsSecondaryWorld)
	{
		return CurrentRenderingMode;
	}

	return TOptional<EViewportWorldRenderingMode>();
}

FSceneView* UViewportWorldGameClient::Internal_CalcSceneView(FSceneViewFamily* ViewFamily, FViewport* InViewport) const
{
	FSceneViewInitOptions ViewInitOptions;
	FSceneViewStateReference ViewState;

	const APlayerCameraManager* PCM = LocalPlayer->PlayerController->PlayerCameraManager;
	FMinimalViewInfo ViewInfo = PCM->GetCameraCacheView();

	const FVector& ViewLocation = PCM ? PCM->GetCameraLocation() : FVector::ZeroVector;
	const FRotator& ViewRotation = PCM ? PCM->GetCameraRotation() : FRotator::ZeroRotator;

	const FIntPoint ViewportSizeXY = Viewport->GetSizeXY();

	const FIntRect ViewRect = FIntRect(0, 0, ViewportSizeXY.X, ViewportSizeXY.Y);
	ViewInitOptions.SetViewRectangle(ViewRect);

	ViewInitOptions.ViewOrigin = ViewLocation;

	ViewInitOptions.ViewRotationMatrix = FInverseRotationMatrix(ViewRotation);
	ViewInitOptions.ViewRotationMatrix = ViewInitOptions.ViewRotationMatrix * FMatrix(
		FPlane(0, 0, 1, 0),
		FPlane(1, 0, 0, 0),
		FPlane(0, 1, 0, 0),
		FPlane(0, 0, 0, 1));

	const EAspectRatioAxisConstraint AspectRatioAxisConstraint = GetDefault<ULocalPlayer>()->AspectRatioAxisConstraint;

	FMinimalViewInfo::CalculateProjectionMatrixGivenView(ViewInfo, AspectRatioAxisConstraint, Viewport, /*inout*/ ViewInitOptions);

	ViewInitOptions.ViewFamily = ViewFamily;
	ViewInitOptions.SceneViewStateInterface = ViewState.GetReference();

	ViewInitOptions.BackgroundColor = FLinearColor::Transparent;
	FSceneView* View = new FSceneView(ViewInitOptions);
	View->AntiAliasingMethod = AAM_FXAA;
	ViewFamily->Views.Add(View);

	ViewInfo.PostProcessSettings = FastRenderPostProcessSettings;

	View->StartFinalPostprocessSettings(ViewInfo.Location);
	View->OverridePostProcessSettings(ViewInfo.PostProcessSettings, ViewInfo.PostProcessBlendWeight);
	View->EndFinalPostprocessSettings(ViewInitOptions);

	View->CameraConstrainedViewRect = View->UnscaledViewRect;

	return View;
}

void UViewportWorldGameClient::Internal_DrawFast(FViewport* InViewport, FCanvas* Canvas) const
{
	if (!FApp::CanEverRender())
	{
		return;
	}
	
	// Determine whether we should use world time or real time based on the scene.
	const auto TimeSeconds = GetWorld()->GetTimeSeconds();
	const auto DeltaTimeSeconds = FApp::GetDeltaTime();

	auto ConstructionValues = FSceneViewFamily::ConstructionValues(InViewport, GetWorld()->Scene, EngineShowFlags);
	ConstructionValues.SetTime(FGameTime::CreateUndilated(TimeSeconds, DeltaTimeSeconds));
	ConstructionValues.SetRealtimeUpdate(true);
	FSceneViewFamilyContext ViewFamilyContext(ConstructionValues);

	if (Internal_CalcSceneView(&ViewFamilyContext, InViewport) == nullptr)
	{
		return;
	}

	float ResolutionFraction = 1.f;
	if (ViewFamilyContext.EngineShowFlags.ScreenPercentage && ViewFamilyContext.Views.Num() > 0)
	{
#if OS_UNREAL_VERSION >= 503
		FStaticResolutionFractionHeuristic StaticHeuristic;
		StaticHeuristic.Settings.PullRunTimeRenderingSettings(GetViewStatusForScreenPercentage());
		StaticHeuristic.PullViewFamilyRenderingSettings(ViewFamilyContext);
		StaticHeuristic.DPIScale = GetDPIScale();

		ResolutionFraction = StaticHeuristic.ResolveResolutionFraction();
#else
		// Get global view fraction.
		FStaticResolutionFractionHeuristic StaticHeuristic(ViewFamilyContext.EngineShowFlags);

#if WITH_EDITOR
		if (FStaticResolutionFractionHeuristic::FUserSettings::EditorOverridePIESettings())
		{
			StaticHeuristic.Settings.PullEditorRenderingSettings(/* bIsRealTime = */ true, /* bIsPathTraced = */ ViewFamilyContext.EngineShowFlags.PathTracing);
		}
		else
#endif
		{
			StaticHeuristic.Settings.PullRunTimeRenderingSettings();
		}

		StaticHeuristic.PullViewFamilyRenderingSettings(ViewFamilyContext);
		StaticHeuristic.DPIScale = GetDPIScale();

		ResolutionFraction = StaticHeuristic.ResolveResolutionFraction();
#endif
	}
	
	ViewFamilyContext.SetScreenPercentageInterface(new FLegacyScreenPercentageDriver(ViewFamilyContext, ResolutionFraction));

	Canvas->Clear(FLinearColor::Black);

	ViewFamilyContext.ViewMode = GetCurrentViewMode();

	// workaround for hacky renderer code that uses GFrameNumber to decide whether to resize render targets
	--GFrameNumber;
	GetRendererModule().BeginRenderingViewFamily(Canvas, &ViewFamilyContext);

	// Remove temporary debug lines.
	// Possibly a hack. Lines may get added without the scene being rendered etc.
	if (GetWorld()->LineBatcher != nullptr)
	{
		GetWorld()->LineBatcher->Flush();
	}

	if (GetWorld()->ForegroundLineBatcher != nullptr)
	{
		GetWorld()->ForegroundLineBatcher->Flush();
	}
}
