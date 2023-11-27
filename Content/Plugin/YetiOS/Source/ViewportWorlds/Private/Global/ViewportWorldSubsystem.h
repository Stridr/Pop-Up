// Copyright 2023 - YetiTech Studios, Pvt Ltd. All Rights Reserved.

#pragma once

#include "ViewportWorldTypes.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "UObject/StrongObjectPtr.h"
#include "ViewportWorldSubsystem.generated.h"

UCLASS(NotBlueprintType)
class UViewportWorldSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()

	UPROPERTY()
	TMap<FString, FViewportWorldHandle> LoadedWorlds;

	TStrongObjectPtr<UGameViewportClient> MainGameViewportClient;
	TStrongObjectPtr<UWorld> MainWorld;

public:

	static UViewportWorldSubsystem* Get(const UObject* WorldContextObject);
	static FString GetWorldID(const TSoftObjectPtr<UWorld>& TargetWorld);

	virtual bool ShouldCreateSubsystem(UObject* Outer) const override;

	FViewportWorldHandle* LoadWorld(TSoftObjectPtr<UWorld> TargetWorld, const FViewportWorldOptions& Options,
		const bool bInitializeActors,
		const EViewportWorldRenderingMode& RenderMode,
		const EViewportWorldViewMode& ViewMode,
		const FPostProcessSettings& FastRenderPostProcess,
		const FString& AdditionalOptions);

	void AddWidgetToViewport(const FViewportWorldHandle& TestWorldHandle, UUserWidget* Widget, const int32 ZOrder);
	bool AddSlateWidgetToViewport(const FViewportWorldHandle& TestWorldHandle, const TSharedRef<SWidget>& SlateWidget, const int32& ZOrder);
	static bool RemoveWidgetFromHandle(const FViewportWorldHandle& TestWorldHandle, UUserWidget* Widget);
	static bool RemoveSlateWidgetFromHandle(const FViewportWorldHandle& TestWorldHandle, const TSharedRef<SWidget>& SlateWidget);
	static void ClearAllWidgetsFromHandle(const FViewportWorldHandle& TestWorldHandle);
	const FViewportWorldHandle* FindWorldHandle(const TSoftObjectPtr<UWorld>& TargetWorld) const;
	
	void UnloadWorldHandle(FViewportWorldHandle& WorldHandle);

private:
	static UWorld* Internal_LoadWorld(FViewportWorldHandle* WorldHandle,const FViewportWorldOptions& Options, const bool bInitializeActors);
};
