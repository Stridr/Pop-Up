// Copyright 2023 - YetiTech Studios, Pvt Ltd. All Rights Reserved.

#pragma once

#include "Engine/World.h"
#include "Engine/Engine.h"
#include "Engine/LocalPlayer.h"
#include "ViewportWorldTypes.generated.h"

class SViewportWorld;
class AGameModeBase;

DECLARE_DYNAMIC_DELEGATE(FOnWorldUnloaded);
using FOnWorldUnloadedDelegate = TDelegate<void()>;

UENUM()
enum class EViewportWorldViewMode : uint8
{
	Lit,
	BrushWireframe,
	Wireframe,
	LightComplexity,
	LightmapDensity,
	LitLightmapDensity,
	StationaryLightOverlap,
	CollisionPawn,
	CollisionVisibility
};

UENUM()
enum class EViewportWorldRenderingMode : uint8
{
	/** Low quality render and offers fastest performance. Dynamic GI not supported. */
	Fast,

	/** Somewhat good quality but might cause flickering issues. */
	Partial,

	/** Offers the best quality but can impact performance. Dynamic GI and all post processing effects is fully supported. */
	Replace
};

USTRUCT(BlueprintType)
struct FViewportWorldHandle
{
	GENERATED_BODY()

	TWeakPtr<SViewportWorld> ViewportWorldWidget;
	TWeakObjectPtr<ULocalPlayer> LocalPlayer;
	FWorldContext* WorldContext;
	FURL BaseURL;
	EViewportWorldRenderingMode RenderingMode;
	FOnWorldUnloadedDelegate OnWorldUnloadedDelegate;

private:
	uint8 bActorsInitialized : 1;
	uint8 bWorldHasBegunPlay : 1;

public:

	void InitializeActors();
	void WorldBeginPlay();
	void Reset();
	
	FORCEINLINE bool IsHandleValid() const { return WorldContext != nullptr && IsValid(WorldContext->World()); }
	FORCEINLINE bool WorldIsReady() const { return IsHandleValid() && bActorsInitialized && bWorldHasBegunPlay; }
	FORCEINLINE bool operator==(const FViewportWorldHandle& Other) const
	{
		if (WorldContext == nullptr || Other.WorldContext == nullptr)
		{
			return false;
		}
		
		return WorldContext->ContextHandle == Other.WorldContext->ContextHandle;
	}

	FViewportWorldHandle()
		: ViewportWorldWidget(nullptr)
		, LocalPlayer(nullptr)
		, WorldContext(nullptr)
		, RenderingMode(EViewportWorldRenderingMode::Fast)
		, bActorsInitialized(false)
		, bWorldHasBegunPlay(false)
	{
	}
	
	FViewportWorldHandle(FWorldContext& WorldContext, const EViewportWorldRenderingMode& RenderingMode, ULocalPlayer* LocalPlayer, const FURL& BaseURL)
		: ViewportWorldWidget(nullptr)
		, LocalPlayer(LocalPlayer)
		, WorldContext(&WorldContext)
		, BaseURL(BaseURL)
		, RenderingMode(RenderingMode)
		, bActorsInitialized(false)
		, bWorldHasBegunPlay(false)
	{
	}
};

USTRUCT(BlueprintType)
struct FViewportWorldOptions
{
	GENERATED_BODY()

protected:

	/** Should the scenes (physics, rendering) be created. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = ViewportWorldOptions)
	bool bInitializeScenes;

	/** Are sounds allowed to be generated from this world. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = ViewportWorldOptions)
	bool bAllowAudioPlayback;

	/** Should the render scene create hit proxies. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = ViewportWorldOptions)
	bool bRequiresHitProxies;

	/** Should the physics scene be created. bInitializeScenes must be true for this to be considered. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = ViewportWorldOptions)
	bool bCreatePhysicsScene;

	/** Should the navigation system be created for this world. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = ViewportWorldOptions)
	bool bCreateNavigation;

	/** Should the AI system be created for this world. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = ViewportWorldOptions)
	bool bCreateAI_System;

	/** Are collision trace calls valid within this world. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = ViewportWorldOptions)
	bool bEnableTraceCollision;

	/** Should the FX system be created for this world. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = ViewportWorldOptions)
	bool bCreateFX_System;

	/** Should the world be partitioned */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = ViewportWorldOptions)
	bool bCreateWorldPartition;

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = ViewportWorldOptions)
	TSoftClassPtr<AGameModeBase> OverrideGameMode;

	/** Should the world be ticked? */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = ViewportWorldOptions)
	bool bTickWorld;

	FWorldInitializationValues GetIVS() const;

	FViewportWorldOptions()
		: bInitializeScenes(true)
		, bAllowAudioPlayback(true)
		, bRequiresHitProxies(true)
		, bCreatePhysicsScene(true)
		, bCreateNavigation(true)
		, bCreateAI_System(true)
		, bEnableTraceCollision(true)
		, bCreateFX_System(true)
		, bCreateWorldPartition(true)
		, OverrideGameMode(nullptr)
		, bTickWorld(true)
	{
	}
};
