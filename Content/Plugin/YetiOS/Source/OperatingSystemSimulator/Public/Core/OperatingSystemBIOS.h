// Copyright 2023 - YetiTech Studios, Pvt Ltd. All Rights Reserved.

#pragma once

#include "OperatingSystemTypes.h"
#include "Tickable.h"
#include "UObject/Object.h"
#include "OperatingSystemBIOS.generated.h"

class UOperatingSystemMBB;
class UOperatingSystemBiosWidget;

/**
 * BIOS Class.
 */
UCLASS(Abstract, Blueprintable, BlueprintType)
class OPERATINGSYSTEMSIMULATOR_API UOperatingSystemBIOS : public UObject, public FTickableGameObject
{
	GENERATED_BODY()

protected:

	UPROPERTY(EditDefaultsOnly, Category = OperatingSystemBios)
	TSoftClassPtr<UOperatingSystemBiosWidget> BiosWidgetClass;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = OperatingSystemBios)
	FText Name;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = OperatingSystemBios)
	FVersion Version;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = OperatingSystemBios)
	FText Copyright;

	UPROPERTY(VisibleInstanceOnly, Category = Debug)
	TWeakObjectPtr<UOperatingSystemMBB> ParentMotherboard;

	UPROPERTY(VisibleInstanceOnly, Transient, Category = Debug)
	bool bIsTickable;

	UPROPERTY(VisibleInstanceOnly, Transient, Category = Debug)
	TObjectPtr<UOperatingSystemBiosWidget> BiosWidget;

	UPROPERTY(VisibleInstanceOnly, Transient, Category = Debug)
	float TickElapsedTime;

public:

	UOperatingSystemBIOS();

	bool InitBIOS(TWeakObjectPtr<UOperatingSystemMBB> ForMotherboard, FGenericError& OutError);

	/** Opens the BIOS widget */
	void OpenBIOS() const;

	void ToggleClock(const bool bTick);

	// FTickableGameObject Interface
	virtual void Tick(float DeltaTime) override;
	virtual ETickableTickType GetTickableTickType() const override { return ETickableTickType::Conditional; }
	virtual bool IsTickable() const override { return bIsTickable; }
	virtual bool IsTickableWhenPaused() const override { return true; }
	virtual bool IsTickableInEditor() const override { return false; }
	virtual TStatId GetStatId() const override;
	// -----------------------------

	UOperatingSystemBiosWidget* GetBiosWidget() const;
};
