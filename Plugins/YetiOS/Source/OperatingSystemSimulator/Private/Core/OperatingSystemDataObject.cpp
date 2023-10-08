// Copyright 2023 - YetiTech Studios, Pvt Ltd. All Rights Reserved.

#include "Core/OperatingSystemDataObject.h"
#include "OperatingSystemLogs.h"
#include "OperatingSystemMacros.h"
#include "TimerManager.h"

DEFINE_OS_LOG(DataObject);

UOperatingSystemDataObject::UOperatingSystemDataObject()
	: bStartWithTickEnabled(false)
{
	IMPLEMENTED_IN_BP_LAMBDA();

	CHECK_IN_BP(UOperatingSystemDataObject, ShouldCreate);
	CHECK_IN_BP(UOperatingSystemDataObject, OnCreate);
	CHECK_IN_BP(UOperatingSystemDataObject, Tick);
}

UOperatingSystemDataObject* UOperatingSystemDataObject::CreateDataObj(UObject* OwningObject, const TSoftClassPtr<UOperatingSystemDataObject>& DataClassPtr)
{
	if (!IsValid(OwningObject))
	{
		return nullptr;
	}

	if (DataClassPtr.IsNull())
	{
		return nullptr;
	}

	auto ProxyData = NEW_SOFT_OBJ(UOperatingSystemDataObject, OwningObject, DataClassPtr, DataObj);
	ProxyData->ParentObject = OwningObject;
	if (!ProxyData->Internal_CanCreate())
	{
		ProxyData->MarkAsGarbage();
		ProxyData = nullptr;
		return nullptr;
	}

	FGenericError OutError;
	ProxyData->Internal_Validate(OutError);
	if (OutError.IsValid())
	{
		ProxyData->MarkAsGarbage();
		ProxyData = nullptr;
		return nullptr;
	}

	ProxyData->Internal_PostCreate();
	return ProxyData;
}

bool UOperatingSystemDataObject::Internal_NativeTick(float DeltaSeconds)
{
	Tick(DeltaSeconds);
	if (bHasBlueprintTick)
	{
		K2_Tick(DeltaSeconds);
	}
	return true;
}

bool UOperatingSystemDataObject::Internal_CanCreate() const
{
	if (bHasBlueprintShouldCreate)
	{
		if (K2_ShouldCreate())
		{
			return true;
		}

		OS_LOG_WARN(DataObject, FString::Printf(TEXT("Data object %s will not be created because K2_ShouldCreate returned false in Blueprint."), *GetName()));
		return false;
	}

	return ShouldCreate();
}

void UOperatingSystemDataObject::Internal_Validate(FGenericError& OutError)
{
	OnValidate(OutError);
}

void UOperatingSystemDataObject::Internal_PostCreate()
{
	GetWorld()->GetTimerManager().SetTimerForNextTick(this, &ThisClass::Internal_PostCreateImpl);
}

void UOperatingSystemDataObject::Internal_PostCreateImpl()
{
	OnCreate();
	if (bHasBlueprintOnCreate)
	{
		K2_OnCreate();
	}

	if (bStartWithTickEnabled)
	{
		SetTickEnabled(true);
	}
}

void UOperatingSystemDataObject::SetTickEnabled(const bool bEnable)
{
	if (bEnable && !TickDelegateHandle.IsValid())
	{
		TickDelegate = FTickerDelegate::CreateUObject(this, &ThisClass::Internal_NativeTick);
		TickDelegateHandle = FTSTicker::GetCoreTicker().AddTicker(TickDelegate);
	}
	else if (!bEnable && TickDelegateHandle.IsValid())
	{
		FTSTicker::GetCoreTicker().RemoveTicker(TickDelegateHandle);
		TickDelegate.Unbind();
		TickDelegateHandle.Reset();
	}
}

bool UOperatingSystemDataObject::IsTickEnabled() const
{
	return TickDelegateHandle.IsValid();
}
