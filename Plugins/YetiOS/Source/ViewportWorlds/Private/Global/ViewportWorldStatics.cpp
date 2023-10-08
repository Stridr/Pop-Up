// Copyright 2023 - YetiTech Studios, Pvt Ltd. All Rights Reserved.

#include "Global/ViewportWorldStatics.h"
#include "ViewportWorldGameClient.h"
#include "ViewportWorldSettings.h"
#include "ViewportWorldSubsystem.h"
#include "Logging/StructuredLog.h"

DEFINE_LOG_CATEGORY_STATIC(LogViewportWorldStatics, All, All);

bool UViewportWorldStatics::FindViewportWorldHandle(const UObject* WorldContextObject,
	const TSoftObjectPtr<UWorld> TargetWorld, FViewportWorldHandle& OutHandle)
{
	if (const auto Handle = FindViewportWorldHandlePtr(WorldContextObject, TargetWorld))
	{
		OutHandle = *Handle;
	}

	return OutHandle.IsHandleValid();
}

AActor* UViewportWorldStatics::SpawnActorForWorldHandle(FViewportWorldHandle& WorldHandle,
	const TSubclassOf<AActor> ActorClass, const FTransform& SpawnTransform,
	const ESpawnActorCollisionHandlingMethod CollisionHandlingMethod, const ESpawnActorScaleMethod TransformScaleMethod,
	AActor* Owner)
{
	if (WorldHandle.WorldIsReady())
	{
		FActorSpawnParameters SpawnParameters;
		SpawnParameters.SpawnCollisionHandlingOverride = CollisionHandlingMethod;
		SpawnParameters.TransformScaleMethod = TransformScaleMethod;
		SpawnParameters.Owner = Owner;
		
		return WorldHandle.WorldContext->World()->SpawnActor<AActor>(ActorClass, SpawnTransform, SpawnParameters);
	}

	return nullptr;
}

void UViewportWorldStatics::OnWorldUnloaded(FViewportWorldHandle& WorldHandle, const FOnWorldUnloaded& OnWorldUnloaded)
{
	if (!UViewportWorldSettings::IsViewportWorldsEnabled())
	{
		UE_LOGFMT(LogViewportWorldStatics, Verbose, "{Function} cannot bind because viewport worlds is not enabled.", __FUNCTION__);
		return;
	}
	
	if (WorldHandle.OnWorldUnloadedDelegate.IsBound())
	{
		UE_LOGFMT(LogViewportWorldStatics, Warning, "Unload delegate for '{World}' is already bound. Cannot bind again.");
		return;
	}
	
	WorldHandle.OnWorldUnloadedDelegate = FOnWorldUnloadedDelegate::CreateLambda([OnWorldUnloaded]()
	{
		OnWorldUnloaded.Execute();
	});
}

void UViewportWorldStatics::AddWidgetToHandle(const UObject* WorldContextObject,
	const FViewportWorldHandle& WorldHandle, UUserWidget* Widget, const int32 ZOrder)
{
	if (const auto Subsystem = UViewportWorldSubsystem::Get(WorldContextObject))
	{
		Subsystem->AddWidgetToViewport(WorldHandle, Widget, ZOrder);
	}
}

bool UViewportWorldStatics::RemoveWidgetFromHandle(const FViewportWorldHandle& WorldHandle, UUserWidget* Widget)
{
	return UViewportWorldSubsystem::RemoveWidgetFromHandle(WorldHandle, Widget);
}

void UViewportWorldStatics::ClearAllWidgetsFromHandle(const FViewportWorldHandle& WorldHandle)
{
	UViewportWorldSubsystem::ClearAllWidgetsFromHandle(WorldHandle);
}

void UViewportWorldStatics::InitializeActorsForWorldHandle(FViewportWorldHandle& WorldHandle)
{
	WorldHandle.InitializeActors();
}

void UViewportWorldStatics::BeginPlayForWorldHandle(FViewportWorldHandle& WorldHandle)
{
	WorldHandle.WorldBeginPlay();
}

void UViewportWorldStatics::UnloadWorldHandle(const UObject* WorldContextObject, FViewportWorldHandle& WorldHandle)
{
	if (const auto Subsystem = UViewportWorldSubsystem::Get(WorldContextObject))
	{
		Subsystem->UnloadWorldHandle(WorldHandle);
	}
}

bool UViewportWorldStatics::UpdateViewMode(const FViewportWorldHandle& WorldHandle,
	const EViewportWorldViewMode NewViewMode)
{
	if (WorldHandle.IsHandleValid())
	{
		if (const auto ViewportWorldGameClient = Cast<UViewportWorldGameClient>(WorldHandle.WorldContext->GameViewport))
		{
			return ViewportWorldGameClient->SetViewportWorldViewMode(NewViewMode);
		}
	}

	return false;
}

void UViewportWorldStatics::SetWorldTickForHandle(const FViewportWorldHandle& WorldHandle, const bool bEnabled)
{
	if (WorldHandle.IsHandleValid())
	{
		WorldHandle.WorldContext->World()->SetShouldTick(bEnabled);
	}
}

bool UViewportWorldStatics::ExecuteCommandForHandle(const FViewportWorldHandle& WorldHandle, const FString Command)
{
#if UE_ALLOW_EXEC_COMMANDS
	if (WorldHandle.IsHandleValid())
	{
		return GEngine->Exec(WorldHandle.WorldContext->World(), *Command);
	}
#endif

	return false;
}

bool UViewportWorldStatics::IsViewportWorldHandleValid(const FViewportWorldHandle& TestHandle)
{
	return TestHandle.IsHandleValid();
}

bool UViewportWorldStatics::BelongsToSecondaryWorld(const UObject* Target)
{
	if (IsValid(Target))
	{
		if (const UWorld* TargetWorld = Target->GetWorld())
		{
			const auto ViewportWorldClient = Cast<UViewportWorldGameClient>(TargetWorld->GetGameViewport());
			return ViewportWorldClient && ViewportWorldClient->IsSecondaryViewport();
		}
	}

	return false;
}

AGameModeBase* UViewportWorldStatics::GetGameModeFromHandle(const FViewportWorldHandle& WorldHandle)
{
	if (WorldHandle.IsHandleValid())
	{
		return WorldHandle.WorldContext->World()->GetAuthGameMode();
	}

	return nullptr;
}

AGameStateBase* UViewportWorldStatics::GetGameStateFromHandle(const FViewportWorldHandle& WorldHandle)
{
	if (WorldHandle.IsHandleValid())
	{
		return WorldHandle.WorldContext->World()->GetGameState();
	}

	return nullptr;
}

const FViewportWorldHandle* UViewportWorldStatics::FindViewportWorldHandlePtr(const UObject* WorldContextObject,
	const TSoftObjectPtr<UWorld>& TargetWorld)
{
	if (const auto Subsystem = UViewportWorldSubsystem::Get(WorldContextObject))
	{
		return Subsystem->FindWorldHandle(TargetWorld);
	}

	return nullptr;
}

bool UViewportWorldStatics::AddSlateWidgetToHandle(const UObject* WorldContextObject,
	const FViewportWorldHandle& WorldHandle, const TSharedRef<SWidget>& WidgetContent, const int32& ZOrder)
{
	if (const auto Subsystem = UViewportWorldSubsystem::Get(WorldContextObject))
	{
		return Subsystem->AddSlateWidgetToViewport(WorldHandle, WidgetContent, ZOrder);
	}
	
	return false;
}

bool UViewportWorldStatics::RemoveSlateWidgetFromHandle(const FViewportWorldHandle& WorldHandle, const TSharedRef<SWidget>& SlateWidget)
{
	return UViewportWorldSubsystem::RemoveSlateWidgetFromHandle(WorldHandle, SlateWidget);
}
