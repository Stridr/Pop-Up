// Copyright 2023 - YetiTech Studios, Pvt Ltd. All Rights Reserved.

#pragma once

#include "ViewportWorldTypes.h"
#include "Engine/GameViewportClient.h"
#include "Engine/Scene.h"
#include "ViewportWorldGameClient.generated.h"

UCLASS(MinimalAPI, Within = Engine, Transient, Config = Engine)
class UViewportWorldGameClient : public UGameViewportClient
{
	GENERATED_BODY()
	
	TWeakObjectPtr<ULocalPlayer> LocalPlayer;
	EViewportWorldRenderingMode CurrentRenderingMode;
	EViewportWorldViewMode CurrentWorldViewMode;
	FPostProcessSettings FastRenderPostProcessSettings;
	bool bIsSecondaryWorld;

public:

	UViewportWorldGameClient();

	virtual void Tick(float DeltaTime) override;
	virtual void Draw(FViewport* Viewport, FCanvas* Canvas) override;

	void SetLocalPlayer(ULocalPlayer* NewLocalPlayer);
	void SetViewportWorldRenderingMode(const EViewportWorldRenderingMode& NewRenderingMode);
	bool SetViewportWorldViewMode(const EViewportWorldViewMode& NewViewMode);
	void SetFastPostProcess(const FPostProcessSettings& NewPostProcessSettings);
	void MarkAsSecondaryWorld();

	VIEWPORTWORLDS_API bool IsSecondaryViewport() const { return bIsSecondaryWorld; }
	VIEWPORTWORLDS_API TOptional<EViewportWorldRenderingMode> GetCurrentRenderingMode() const;

private:

	FSceneView* Internal_CalcSceneView(FSceneViewFamily* ViewFamily, FViewport* InViewport) const;
	void Internal_DrawFast(FViewport* InViewport, FCanvas* Canvas) const;

public:
	
	FORCEINLINE EViewModeIndex GetCurrentViewMode() const
	{
		switch (CurrentWorldViewMode)
		{
			case EViewportWorldViewMode::BrushWireframe:
				return VMI_BrushWireframe;
			case EViewportWorldViewMode::Wireframe:
				return VMI_Wireframe;
			case EViewportWorldViewMode::LightComplexity:
				return VMI_LightComplexity;
			case EViewportWorldViewMode::LightmapDensity:
				return VMI_LightmapDensity;
			case EViewportWorldViewMode::LitLightmapDensity:
				return VMI_LitLightmapDensity;
			case EViewportWorldViewMode::StationaryLightOverlap:
				return VMI_StationaryLightOverlap;
			case EViewportWorldViewMode::CollisionPawn:
				return VMI_CollisionPawn;
			case EViewportWorldViewMode::CollisionVisibility:
				return VMI_CollisionVisibility;
			default: ;
		}

		return VMI_Lit;
	}
};
