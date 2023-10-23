// Copyright 2023 - YetiTech Studios, Pvt Ltd. All Rights Reserved.

#include "ViewportWorldSubsystem.h"
#include "AudioDevice.h"
#include "EngineUtils.h"
#include "ViewportWorldGameClient.h"
#include "ViewportWorldSettings.h"
#include "Blueprint/UserWidget.h"
#include "Logging/StructuredLog.h"
#include "Slate/SViewportWorld.h"
#include "Engine/World.h"
#include "UObject/Package.h"

DEFINE_LOG_CATEGORY_STATIC(LogViewportWorldSubsystem, All, All);

static constexpr auto WorldType = EWorldType::Game;

UViewportWorldSubsystem* UViewportWorldSubsystem::Get(const UObject* WorldContextObject)
{
	return UGameInstance::GetSubsystem<UViewportWorldSubsystem>(WorldContextObject->GetWorld()->GetGameInstance());
}

FString UViewportWorldSubsystem::GetWorldID(const TSoftObjectPtr<UWorld>& TargetWorld)
{
	return FPackageName::ObjectPathToPackageName(TargetWorld.ToString());
}

bool UViewportWorldSubsystem::ShouldCreateSubsystem(UObject* Outer) const
{
	const auto bShouldCreate = UViewportWorldSettings::IsViewportWorldsEnabled();
	if (!bShouldCreate)
	{
		UE_LOGFMT(LogViewportWorldSubsystem, Log, "UViewportWorldSettings::bEnableViewportWorlds is false. UViewportWorldSubsystem will not be created!");
	}
	
	return bShouldCreate;
}

FViewportWorldHandle* UViewportWorldSubsystem::LoadWorld(TSoftObjectPtr<UWorld> TargetWorld, const FViewportWorldOptions& Options,
	const bool bInitializeActors,
	const EViewportWorldRenderingMode& RenderMode,
	const EViewportWorldViewMode& ViewMode,
	const FPostProcessSettings& FastRenderPostProcess,
	const FString& AdditionalOptions)
{
	if (RenderMode == EViewportWorldRenderingMode::Replace && (MainWorld.IsValid() || MainGameViewportClient.IsValid()))
	{
		UE_LOGFMT(LogViewportWorldSubsystem, Error, "Another secondary world is already loaded. Unload it first or change render mode to something other than EViewportWorldRenderingMode::Replace.");
		return nullptr;
	}
	
	if (!GEngine)
	{
		UE_LOGFMT(LogViewportWorldSubsystem, Error, "GEngine not valid. Exiting Load World...");
		return nullptr;
	}
	
	if (TargetWorld.IsNull())
	{
		UE_LOGFMT(LogViewportWorldSubsystem, Error, "Cannot load null world. ¯\\_(ツ)_/¯");
		return nullptr;
	}

	auto LocalPlayer = GetWorld()->GetGameInstance()->FindLocalPlayerFromControllerId(0);
	if (!IsValid(LocalPlayer))
	{
		UE_LOGFMT(LogViewportWorldSubsystem, Error, "Unable to load world '{World}'. Local Player from '{GetWorld}' not valid.", TargetWorld.GetAssetName(), GetWorld()->GetMapName());
		return nullptr;
	}
	
	const FString PackagePath = GetWorldID(TargetWorld);

	// First check if the world is already loaded. If it is, return it.
	if (auto Handle = LoadedWorlds.Find(PackagePath))
	{
		UE_LOGFMT(LogViewportWorldSubsystem, Verbose, "Found existing handle for World '{WorldName}'", TargetWorld.GetAssetName());
		return Handle;
	}

	const double StartTime = FPlatformTime::Seconds();
	UE_LOGFMT(LogViewportWorldSubsystem, Log, "Begin load secondary world: {World}", PackagePath);

	// Initialize world handle with new world context
	FViewportWorldHandle WorldHandle = FViewportWorldHandle(GEngine->CreateNewWorldContext(WorldType), RenderMode, LocalPlayer, FURL(*PackagePath));
	FWorldContext& WorldContext = *WorldHandle.WorldContext;

	if (!AdditionalOptions.IsEmpty())
	{
		TArray<FString> ParsedOptions;
		AdditionalOptions.ParseIntoArray(ParsedOptions, TEXT("?"));
		WorldHandle.BaseURL.Op.Append(ParsedOptions);
	}
	
	WorldContext.OwningGameInstance = GetWorld()->GetGameInstance();

	// Load our new world
	if (!Internal_LoadWorld(&WorldHandle, Options, bInitializeActors))
	{
		GEngine->DestroyWorldContext(nullptr);
		return nullptr;
	}

	// Create a new game viewport client
	const auto ViewportClientClass = UViewportWorldSettings::Get()->GetViewportClientClass();
	const auto ViewportName = FString::Printf(TEXT("ViewportGameClient_%s"), *TargetWorld.GetAssetName());
	auto WorldViewportClient = NewObject<UViewportWorldGameClient>(GEngine, ViewportClientClass, FName(*ViewportName));
	WorldViewportClient->MarkAsSecondaryWorld();
	WorldViewportClient->SetViewportWorldViewMode(ViewMode);
	WorldViewportClient->SetViewportWorldRenderingMode(RenderMode);
	WorldViewportClient->SetFastPostProcess(FastRenderPostProcess);
	WorldViewportClient->Init(WorldContext, WorldContext.OwningGameInstance);

	// Assign the new viewport client as the main one if replace is selected
	if (RenderMode == EViewportWorldRenderingMode::Replace)
	{
		// Save the main world and game viewport since we will be replacing them now
		MainWorld = TStrongObjectPtr(GetWorld());
		MainGameViewportClient = TStrongObjectPtr(MainWorld->GetGameViewport());

		check(GWorld == MainWorld.Get());
		UE_LOGFMT(LogViewportWorldSubsystem, Log, "Cached {GameViewport} and {World}", MainGameViewportClient->GetName(), MainWorld->GetName());
		
		WorldViewportClient->ViewportConsole = MainGameViewportClient->ViewportConsole;
		WorldContext.OwningGameInstance->GetWorldContext()->GameViewport = WorldViewportClient;
		GEngine->GameViewport = WorldViewportClient;
		GWorld = WorldContext.World();
	}

	WorldContext.GameViewport = WorldViewportClient;

	const double StopTime = FPlatformTime::Seconds();
	UE_LOGFMT(LogViewportWorldSubsystem, Log, "Took {Time} seconds to load secondary world {World}", StopTime - StartTime, PackagePath);
	
	return &LoadedWorlds.Emplace(PackagePath, WorldHandle);
}

void UViewportWorldSubsystem::AddWidgetToViewport(const FViewportWorldHandle& TestWorldHandle, UUserWidget* Widget, const int32 ZOrder)
{
	if (!IsValid(Widget))
	{
		UE_LOGFMT(LogViewportWorldSubsystem, Warning, "No need to add null widget. ¯\\_(ツ)_/¯");
		return;
	}

	if (AddSlateWidgetToViewport(TestWorldHandle, Widget->TakeWidget(), ZOrder))
	{
		return;
	}
	
	UE_LOGFMT(LogViewportWorldSubsystem, Warning, "Adding widget '{WidgetName}' to normal viewport.", Widget->GetName());
	Widget->AddToViewport(ZOrder);
}

bool UViewportWorldSubsystem::AddSlateWidgetToViewport(const FViewportWorldHandle& TestWorldHandle,
	const TSharedRef<SWidget>& SlateWidget, const int32& ZOrder)
{
	bool bSuccess = false;
	if (TestWorldHandle.IsHandleValid())
	{
		for (const auto& It : LoadedWorlds)
		{
			if (It.Value == TestWorldHandle)
			{
				if (It.Value.ViewportWorldWidget.IsValid())
				{
					It.Value.ViewportWorldWidget.Pin()->AddWidgetContent(SlateWidget, ZOrder);
					bSuccess = true;
				}
				else
				{
					UE_LOGFMT(LogViewportWorldSubsystem, Warning, "SViewportWorld slate widget is unset for handle.");
				}
			}
		}
	}

	return bSuccess;
}

bool UViewportWorldSubsystem::RemoveWidgetFromHandle(const FViewportWorldHandle& TestWorldHandle, UUserWidget* Widget)
{
	if (!IsValid(Widget))
	{
		return false;
	}
	
	return RemoveSlateWidgetFromHandle(TestWorldHandle, Widget->TakeWidget());
}

bool UViewportWorldSubsystem::RemoveSlateWidgetFromHandle(const FViewportWorldHandle& TestWorldHandle,
	const TSharedRef<SWidget>& SlateWidget)
{
	if (TestWorldHandle.ViewportWorldWidget.IsValid())
	{
		return TestWorldHandle.ViewportWorldWidget.Pin()->RemoveWidgetContent(SlateWidget);
	}
	
	return false;
}

void UViewportWorldSubsystem::ClearAllWidgetsFromHandle(const FViewportWorldHandle& TestWorldHandle)
{
	if (TestWorldHandle.ViewportWorldWidget.IsValid())
	{
		TestWorldHandle.ViewportWorldWidget.Pin()->ClearAllWidgets();
	}
}

const FViewportWorldHandle* UViewportWorldSubsystem::FindWorldHandle(const TSoftObjectPtr<UWorld>& TargetWorld) const
{
	const FString PackagePath = GetWorldID(TargetWorld);
	if (const auto Handle = LoadedWorlds.Find(PackagePath))
	{
		return Handle;
	}

	return nullptr;
}

void UViewportWorldSubsystem::UnloadWorldHandle(FViewportWorldHandle& WorldHandle)
{
	if (!GEngine)
	{
		UE_LOGFMT(LogViewportWorldSubsystem, Error, "Unable to unload world handle because GEngine is null.");
		return;
	}
	
	if (!WorldHandle.IsHandleValid())
	{
		UE_LOGFMT(LogViewportWorldSubsystem, Error, "Unable to unload invalid handle.");
		return;
	}

	UE_CLOG(WorldHandle.OnWorldUnloadedDelegate.ExecuteIfBound(), LogViewportWorldSubsystem, Log, TEXT("OnWorldUnloadedDelegate was executed for %s"), *WorldHandle.WorldContext->World()->GetName());

	for (TMap<FString, FViewportWorldHandle>::TIterator It = LoadedWorlds.CreateIterator(); It; ++It)
	{
		if (It.Value() == WorldHandle)
		{
			UE_LOGFMT(LogViewportWorldSubsystem, Verbose, "Cached world handle removed.");
			It.RemoveCurrent();
			break;
		}
	}

	if (WorldHandle.RenderingMode == EViewportWorldRenderingMode::Replace)
	{
		WorldHandle.WorldContext->OwningGameInstance->GetWorldContext()->GameViewport = MainGameViewportClient.Get();
		GEngine->GameViewport = MainGameViewportClient.Get();
		GWorld = MainWorld.Get();

		UE_LOGFMT(LogViewportWorldSubsystem, Log, "Restoring GameViewport to '{GameViewport}' and GWorld to {World}", MainGameViewportClient->GetName(), MainWorld->GetName());

		MainGameViewportClient.Reset();
		MainWorld.Reset();
	}

	GEngine->CancelAllPending();
	UWorld* MyWorld = WorldHandle.WorldContext->World();
	MyWorld->GetAudioDevice().GetAudioDevice()->StopAllSounds();
		
	MyWorld->BeginTearingDown();
	GEngine->CancelPending(MyWorld);
	GEngine->ShutdownWorldNetDriver(MyWorld);

	for (FActorIterator It(MyWorld); It; ++It)
	{
		It->RouteEndPlay(EEndPlayReason::Quit);
	}

	GEngine->DestroyWorldContext(MyWorld);
	MyWorld->DestroyWorld(true, nullptr);
	MyWorld->MarkObjectsPendingKill();
	WorldHandle.Reset();
	GEngine->ForceGarbageCollection(true);
}

UWorld* UViewportWorldSubsystem::Internal_LoadWorld(FViewportWorldHandle* WorldHandle, const FViewportWorldOptions& Options,
    const bool bInitializeActors)
{
	auto& BaseURL = WorldHandle->BaseURL;
	FWorldContext& WorldContext = *WorldHandle->WorldContext;
	
	const FName URLMapFName = FName(*BaseURL.Map);
	UWorld::WorldTypePreLoadMap.FindOrAdd( URLMapFName ) = WorldContext.WorldType;

	WorldContext.OwningGameInstance->PreloadContentForURL(BaseURL);

	auto WorldPackage = FindPackage(nullptr, *BaseURL.Map);
	const bool bPackageAlreadyLoaded = (WorldPackage != nullptr);

	if (!bPackageAlreadyLoaded)
	{
		UE_LOGFMT(LogViewportWorldSubsystem, Verbose, "Loading package {Package}", BaseURL.Map);
		WorldPackage = LoadPackage(nullptr, *BaseURL.Map, LOAD_None);
	}

	UWorld::WorldTypePreLoadMap.Remove( URLMapFName );

	if (WorldPackage == nullptr)
	{
		UE_LOGFMT(LogViewportWorldSubsystem, Error, "Failed to load package: {Package}", BaseURL.Map);
		return nullptr;
	}
	
	UWorld* NewWorld = UWorld::FindWorldInPackage(WorldPackage);
	
#if OS_UNREAL_VERSION >= 503
	NewWorld->SetFeatureLevel(GMaxRHIFeatureLevel);
#else
	NewWorld->FeatureLevel = GMaxRHIFeatureLevel;
#endif
	
	check(NewWorld);

	NewWorld->PersistentLevel->HandleLegacyMapBuildData();

	NewWorld->SetGameInstance(WorldContext.OwningGameInstance);
	WorldContext.SetCurrentWorld(NewWorld);
	WorldContext.World()->WorldType = WorldType;
	WorldContext.World()->AddToRoot();
	
	if (!Options.OverrideGameMode.IsNull())
	{
		UE_LOGFMT(LogViewportWorldSubsystem, Verbose, "Overriding game mode with '{NewGameMode}' for {World}.", Options.OverrideGameMode.ToString(), BaseURL.Map);
		BaseURL.Op.Emplace(FString::Printf(TEXT("game=%s"), *Options.OverrideGameMode.ToString()));
	}
	WorldContext.World()->SetGameMode(BaseURL);

	// The world should not have been initialized before this
	if (ensure(!WorldContext.World()->bIsWorldInitialized))
	{
		UE_LOGFMT(LogViewportWorldSubsystem, Verbose, "Initializing world...");
		WorldContext.World()->InitWorld(Options.GetIVS());
	}

	GEngine->LoadPackagesFully(WorldContext.World(), FULLYLOAD_Map, WorldContext.World()->PersistentLevel->GetOutermost()->GetName());
	{
		//FRegisterComponentContext Context(WorldContext.World());
		if (bInitializeActors)
		{
			WorldHandle->InitializeActors();
		}
		//Context.Process();
	}

	WorldContext.World()->bWorldWasLoadedThisTick = true;

	// We want to update streaming immediately so that there's no tick prior to processing any levels that should be initially visible
	// that requires calculating the scene, so redraw everything now to take care of it all though don't present the frame.
	GEngine->RedrawViewports(false);
	GEngine->WorldAdded(WorldContext.World());

	WorldContext.World()->SetShouldTick(Options.bTickWorld);
	
	return WorldContext.World();
}
