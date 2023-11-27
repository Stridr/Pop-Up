// Copyright 2023 - YetiTech Studios, Pvt Ltd. All Rights Reserved.

#pragma once

#include "Containers/Ticker.h"
#include "OperatingSystemTypes.h"
#include "OperatingSystemDataObject.generated.h"

/**
 * 
 */
UCLASS(Abstract, Blueprintable, BlueprintType)
class UOperatingSystemDataObject : public UObject
{
	GENERATED_BODY()

protected:

	UPROPERTY(VisibleInstanceOnly, BlueprintReadOnly, Category = Debug, meta = (Keywords = "owner"))
	TWeakObjectPtr<UObject> ParentObject;

	UPROPERTY(EditDefaultsOnly, Category = OperatingSystemDataObject)
	uint8 bStartWithTickEnabled : 1;

private:

	uint8 bHasBlueprintShouldCreate : 1;
	uint8 bHasBlueprintOnCreate : 1;
	uint8 bHasBlueprintTick : 1;

	FTickerDelegate TickDelegate;
	FTSTicker::FDelegateHandle TickDelegateHandle;

public:

	UOperatingSystemDataObject();

	OPERATINGSYSTEMSIMULATOR_API static UOperatingSystemDataObject* CreateDataObj(UObject* OwningObject, const TSoftClassPtr<UOperatingSystemDataObject>& DataClassPtr);

	template<class T>
	OPERATINGSYSTEMSIMULATOR_API static T* CreateDataObj(UObject* OwningObject, TSoftClassPtr<UOperatingSystemDataObject> DataClassPtr)
	{
		return Cast<T>(CreateDataObj(OwningObject, DataClassPtr));
	}

private:

	bool Internal_NativeTick(float DeltaSeconds);
	bool Internal_CanCreate() const;
	void Internal_Validate(FGenericError& OutError);
	void Internal_PostCreate();

public:

	UFUNCTION(BlueprintCallable, Category = OperatingSystemDataObject)
	OPERATINGSYSTEMSIMULATOR_API void SetTickEnabled(const bool bEnable);

	UFUNCTION(BlueprintPure, Category = OperatingSystemDataObject)
	OPERATINGSYSTEMSIMULATOR_API bool IsTickEnabled() const;

protected:

	OPERATINGSYSTEMSIMULATOR_API virtual bool ShouldCreate() const { return true; }
	OPERATINGSYSTEMSIMULATOR_API virtual void Tick(const float& DeltaSeconds) {}

	OPERATINGSYSTEMSIMULATOR_API virtual void OnCreate() {}
	OPERATINGSYSTEMSIMULATOR_API virtual void OnValidate(FGenericError& OutError) {}

	UFUNCTION(BlueprintImplementableEvent, Category = OperatingSystemDataObject, DisplayName = OnCreated)
	void K2_OnCreate();

	UFUNCTION(BlueprintImplementableEvent, Category = OperatingSystemDataObject, DisplayName = Tick)
	void K2_Tick(const float& DeltaSeconds);

	UFUNCTION(BlueprintImplementableEvent, Category = OperatingSystemDataObject, DisplayName = ShouldCreate)
	bool K2_ShouldCreate() const;
};
