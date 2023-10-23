// Copyright 2023 - YetiTech Studios, Pvt Ltd. All Rights Reserved.

#include "ViewportWorldTypes.h"
#include "GameFramework/GameModeBase.h"
#include "Logging/StructuredLog.h"

DEFINE_LOG_CATEGORY_STATIC(LogViewportWorldHandle, All, All);

void FViewportWorldHandle::InitializeActors()
{
	if (!bActorsInitialized && WorldContext != nullptr && IsValid(WorldContext->World()))
	{
		UE_LOGFMT(LogViewportWorldHandle, Verbose, "Initializing all actors for gameplay.");
		bActorsInitialized = true;
		WorldContext->World()->InitializeActorsForPlay(BaseURL);
	}
}

void FViewportWorldHandle::WorldBeginPlay()
{
	if (!bActorsInitialized)
	{
		UE_LOGFMT(LogViewportWorldHandle, Warning, "Unable to call begin play without initializing actors.");
		return;
	}
	
	if (!bWorldHasBegunPlay && WorldContext != nullptr && IsValid(WorldContext->World()))
	{
		bWorldHasBegunPlay = true;
		
		UE_LOGFMT(LogViewportWorldHandle, Verbose, "Calling begin play on world {World}", WorldContext->World()->GetName());
		
		const double StartTime = FPlatformTime::Seconds();		
		for(auto It = WorldContext->OwningGameInstance->GetLocalPlayerIterator(); It; ++It)
		{
			FString Error2;
			if(!(*It)->SpawnPlayActor(BaseURL.ToString(true), Error2, WorldContext->World()))
			{
				UE_LOG(LogViewportWorldHandle, Fatal, TEXT("Couldn't spawn player: %s"), *Error2);
			}
		}
		
		WorldContext->World()->BeginPlay();
		const double StopTime = FPlatformTime::Seconds();

		UE_LOGFMT(LogViewportWorldHandle, Verbose, "Took {Time} seconds to call Begin Play on world {World}", StopTime - StartTime, WorldContext->World()->GetName());
	}
}

void FViewportWorldHandle::Reset()
{
	WorldContext->GameViewport->DetachViewportClient();
	WorldContext->GameViewport = nullptr;
	WorldContext->SetCurrentWorld(nullptr);
	WorldContext = nullptr;
	
	ViewportWorldWidget.Reset();
	LocalPlayer.Reset();
	BaseURL = FURL();
	OnWorldUnloadedDelegate.Unbind();
	bActorsInitialized = bWorldHasBegunPlay = false;
}

FWorldInitializationValues FViewportWorldOptions::GetIVS() const
{
	FWorldInitializationValues IVS;
	IVS.InitializeScenes(bInitializeScenes)
		.AllowAudioPlayback(bAllowAudioPlayback)
		.RequiresHitProxies(bRequiresHitProxies)
		.CreatePhysicsScene(bCreatePhysicsScene)
		.CreateNavigation(bCreateNavigation)
		.CreateAISystem(bCreateAI_System)
		.ShouldSimulatePhysics(bCreatePhysicsScene)
		.EnableTraceCollision(bEnableTraceCollision)
		.SetTransactional(false)
		.CreateFXSystem(bCreateFX_System)
		.CreateWorldPartition(bCreateWorldPartition)
		.SetDefaultGameMode(OverrideGameMode.IsNull() ? nullptr : OverrideGameMode.LoadSynchronous());
	return IVS;
}
