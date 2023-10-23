// Copyright 2023 - YetiTech Studios, Pvt Ltd. All Rights Reserved.

#pragma once

#include "ViewportWorldTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ViewportWorldStatics.generated.h"

UCLASS(NotBlueprintable)
class VIEWPORTWORLDS_API UViewportWorldStatics : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

protected:
	
	/**
	 * Returns a reference to the world handle if the world was loaded. If not, then returns an empty world.
	 * @see UViewportWorldStatics::IsViewportWorldHandleValid.
	 * @param WorldContextObject World object
	 * @param TargetWorld World to look for.
	 * @param OutHandle Reference to the handle or invalid empty handle if world is not loaded.
	 * @return True if OutHandle is valid. False otherwise.
	 */
	UFUNCTION(BlueprintPure, Category = ViewportWorldStatics, meta = (WorldContext = "WorldContextObject"))
	static bool FindViewportWorldHandle(const UObject* WorldContextObject, const TSoftObjectPtr<UWorld> TargetWorld, FViewportWorldHandle& OutHandle);

public:
	
	/**
	 * Spawns an actor for the given world handle.
	 * This function will ONLY return a valid actor if the following conditions are met:
	 *	1: ActorClass is valid.
	 *	2: Given world handle is valid.
	 *	3: Given world handle has actors initialized. If not initialized, call UViewportWorldStatics::InitializeActorsForWorldHandle
	 *	4: Given world handle has begun play.
	 * 
	 * @param WorldHandle Reference to the world handle.
	 * @param ActorClass Obvious right? This is the actor you want to spawn.
	 * @param SpawnTransform Location, rotation and scale for your target actor.
	 * @param CollisionHandlingMethod Defines available strategies for handling the case where an actor is spawned in such a way that it penetrates blocking collision
	 * @param TransformScaleMethod Determines how the transform being passed into actor spawning methods interact with the actor's default root component.
	 * @param Owner Set an owner for the newly spawned actor.
	 * @return Returns a valid actor if the spawning was successful.
	 */
	UFUNCTION(BlueprintCallable, Category = "Viewport World Statics|Game", meta = (DeterminesOutputType = ActorClass, AdvancedDisplay = 3))
	static AActor* SpawnActorForWorldHandle(UPARAM(ref) FViewportWorldHandle& WorldHandle,
		const TSubclassOf<AActor> ActorClass,
		const FTransform& SpawnTransform,
		const ESpawnActorCollisionHandlingMethod CollisionHandlingMethod = ESpawnActorCollisionHandlingMethod::Undefined,
		const ESpawnActorScaleMethod TransformScaleMethod = ESpawnActorScaleMethod::MultiplyWithRoot,
		AActor* Owner = nullptr);

	/**
	 * Triggers the given event when the world handle calls Unload World.
	 * @see UViewportWorldStatics::UnloadWorldHandle
	 * @param WorldHandle World handle to listen to.
	 * @param OnWorldUnloaded Event that should execute when the world unloads from given handle.
	 */
	UFUNCTION(BlueprintCallable, Category = ViewportWorldStatics)
	static void OnWorldUnloaded(UPARAM(ref) FViewportWorldHandle& WorldHandle, const FOnWorldUnloaded& OnWorldUnloaded);

	/**
	 * Adds the given widget to the viewport. If the given world handle is not valid this works the same as Widget->AddToViewport
	 * @param WorldContextObject World object.
	 * @param WorldHandle World to add widget to.
	 * @param Widget Target widget to add. Must not be null.
	 * @param ZOrder Larger ZOrder will draw above others with smaller ZOrder. Same ZOrder between different widget will simply draw in the order they were added.
	 */
	UFUNCTION(BlueprintCallable, Category = "Viewport World Statics|Widget", meta = (WorldContext = "WorldContextObject"))
	static void AddWidgetToHandle(const UObject* WorldContextObject, const FViewportWorldHandle& WorldHandle, UUserWidget* Widget, const int32 ZOrder = 0);

	/**
	 * Removes the given widget (if it was added before) from viewport.
	 * @param WorldHandle World to remove widget from.
	 * @param Widget Widget to remove.
	 * @return True if the widget was removed successfully.
	 */
	UFUNCTION(BlueprintCallable, Category = "Viewport World Statics|Widget")
	static bool RemoveWidgetFromHandle(const FViewportWorldHandle& WorldHandle, UUserWidget* Widget);

	/**
	 * Clears all widget from viewport.
	 * @param WorldHandle World to remove all widgets from.
	 */
	UFUNCTION(BlueprintCallable, Category = "Viewport World Statics|Widget")
	static void ClearAllWidgetsFromHandle(const FViewportWorldHandle& WorldHandle);

	/**
	 * Initializes actors for given world handle if not done while loading world. If they are initialized, this function does nothing.
	 * @see UViewportWorldWidget::LoadGameWorld
	 * @param WorldHandle World handle to initialize
	 */
	UFUNCTION(BlueprintCallable, Category = "Viewport World Statics|Init")
	static void InitializeActorsForWorldHandle(UPARAM(ref) FViewportWorldHandle& WorldHandle);

	/**
	 * Calls begin play for given world handle if not done while loading world. If begin play was already called, this function does nothing.
	 * @see UViewportWorldWidget::LoadGameWorld
	 * @param WorldHandle World handle to begin play
	 */
	UFUNCTION(BlueprintCallable, Category = "Viewport World Statics|Init")
	static void BeginPlayForWorldHandle(UPARAM(ref) FViewportWorldHandle& WorldHandle);

	/**
	 * Unloads the given world handle.
	 * @param WorldContextObject World object.
	 * @param WorldHandle World handle that should be unloaded
	 */
	UFUNCTION(BlueprintCallable, Category = ViewportWorldStatics, meta = (WorldContext = "WorldContextObject", Keywords = "remove, delete, destroy, viewport"))
	static void UnloadWorldHandle(const UObject* WorldContextObject, UPARAM(ref) FViewportWorldHandle& WorldHandle);

	/**
	 * Changes the world view mode to a new one.
	 * @param WorldHandle World handle to update view mode for.
	 * @param NewViewMode New view mode
	 * @return True if the view mode was changed.
	 */
	UFUNCTION(BlueprintCallable, Category = "Viewport World Statics|Render")
	static bool UpdateViewMode(const FViewportWorldHandle& WorldHandle, const EViewportWorldViewMode NewViewMode);

	/**
	 * Toggles ticking for the world. This affects the entire world (of the handle) including all actors, objects as well.
	 * @param WorldHandle Target world handle
	 * @param bEnabled True to enable ticking. False otherwise.
	 */
	UFUNCTION(BlueprintCallable, Category = "Viewport World Statics|Render")
	static void SetWorldTickForHandle(const FViewportWorldHandle& WorldHandle, const bool bEnabled);

	/**
	 * Runs command for the world in given handle. Not all commands are supported and returning true doesn't mean the command was success either.
	 * @param WorldHandle Target world handle
	 * @param Command Command to run. Not all commands are supported though.
	 * @return True if the command was executed. This doesn't mean the command actually worked.
	 */
	UFUNCTION(BlueprintCallable, Category = ViewportWorldStatics)
	static bool ExecuteCommandForHandle(const FViewportWorldHandle& WorldHandle, const FString Command);

	/**
	 * Returns true if the given handle is valid. This typically means that there is an actual world for the handle.
	 * @param TestHandle Handle to check
	 * @return True if the given handle is valid.
	 */
	UFUNCTION(BlueprintPure, Category = ViewportWorldStatics)
	static bool IsViewportWorldHandleValid(const FViewportWorldHandle& TestHandle);

	/**
	 * Returns true if the given object or actor exists in the viewport world instead of the main game world.
	 * @param Target Target Object/Actor to check
	 * @return True if the object/actor exists in secondary world.
	 */
	UFUNCTION(BlueprintPure, Category = "Viewport World Statics|Game")
	static bool BelongsToSecondaryWorld(const UObject* Target);

	/**
	 * Returns game mode from handle.
	 * @param WorldHandle Target handle.
	 * @return Returns the game mode from given handle.
	 */
	UFUNCTION(BlueprintPure, Category = "Viewport World Statics|Game")
	static AGameModeBase* GetGameModeFromHandle(const FViewportWorldHandle& WorldHandle);

	/**
	 * Returns game state from handle.
	 * @param WorldHandle Target handle.
	 * @return Returns game state from given handle.
	 */
	UFUNCTION(BlueprintPure, Category = "Viewport World Statics|Game")
	static AGameStateBase* GetGameStateFromHandle(const FViewportWorldHandle& WorldHandle);

	static const FViewportWorldHandle* FindViewportWorldHandlePtr(const UObject* WorldContextObject, const TSoftObjectPtr<UWorld>& TargetWorld);
	static bool AddSlateWidgetToHandle(const UObject* WorldContextObject, const FViewportWorldHandle& WorldHandle, const TSharedRef<SWidget>& WidgetContent, const int32& ZOrder);
	static bool RemoveSlateWidgetFromHandle(const FViewportWorldHandle& WorldHandle, const TSharedRef<SWidget>& SlateWidget);
};
