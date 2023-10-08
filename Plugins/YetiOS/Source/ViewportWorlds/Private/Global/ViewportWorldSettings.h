// Copyright 2023 - YetiTech Studios, Pvt Ltd. All Rights Reserved.

#pragma once

#include "Engine/DeveloperSettings.h"
#include "ViewportWorldSettings.generated.h"

class UViewportWorldGameClient;

UCLASS(Config=Game, DefaultConfig)
class UViewportWorldSettings : public UDeveloperSettings
{
	GENERATED_BODY()

	UPROPERTY(Config, EditAnywhere, Category = ViewportWorldSettings, DisplayName = "Enable Viewport Worlds (Experimental)")
	bool bEnableViewportWorlds;

	UPROPERTY(Config, NoClear, EditAnywhere, Category = ViewportWorldSettings, meta = (EditCondition = bEnableViewportWorlds))
	TSoftClassPtr<UViewportWorldGameClient> ViewportGameClientClass;

public:

	UViewportWorldSettings();

	static const UViewportWorldSettings* Get() { return GetDefault<UViewportWorldSettings>(); }

	UFUNCTION(BlueprintPure, Category = ViewportWorldSettings)
	static bool IsViewportWorldsEnabled() { return Get()->bEnableViewportWorlds; }

#if WITH_EDITOR
	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
	virtual FName GetCategoryName() const override { return FName("Viewport World"); }
	virtual FText GetSectionText() const override { return INVTEXT("Settings"); }
#endif

	UClass* GetViewportClientClass() const;
};
