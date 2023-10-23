// Copyright 2023 - YetiTech Studios, Pvt Ltd. All Rights Reserved.

#include "Hardware/OperatingSystemBaseHardware.h"
#include "OperatingSystemMacros.h"
#include "OperatingSystemTags.h"
#include "Global/OperatingSystemStatics.h"

UOperatingSystemBaseHardware::UOperatingSystemBaseHardware()
	: Name(FText())
	, MadeBy(FText())
	, ModelNumber(FText())
	, HardwareTag(InvalidTag)
{
	auto ImplementedInBlueprint = [](const UFunction* Func) -> bool
	{
		return Func && ensure(Func->GetOuter()) && Func->GetOuter()->IsA(UBlueprintGeneratedClass::StaticClass());
	};
	
	static FName FunctionName = GET_FUNCTION_NAME_CHECKED(UOperatingSystemBaseHardware, K2_OnValidate);
	const UFunction* ValidateFunction = GetClass()->FindFunctionByName(FunctionName);
	bHasBlueprintValidateFunction = ImplementedInBlueprint(ValidateFunction);
}

bool UOperatingSystemBaseHardware::Validate(FGenericError& OutError) const
{
	if (Name.IsEmptyOrWhitespace())
	{
		OutError = MAKE_ERROR("ERR_HARDWARE", FString::Printf(TEXT("%s is missing a valid name."), *GetName()));
		return false;
	}

	if (!UOperatingSystemStatics::IsOperatingSystemTagValid(HardwareTag))
	{
		OutError = MAKE_ERROR("ERR_HARDWARE", FString::Printf(TEXT("%s has invalid or none tag."), *GetName()));
		return false;
	}

	if (bHasBlueprintValidateFunction)
	{
		return K2_OnValidate(OutError);
	}

	return OnValidate(OutError);
}

bool UOperatingSystemBaseHardware::OnValidate(FGenericError& OutError) const
{
	OutError = MAKE_ERROR("NOT_IMPLEMENTED", FString::Printf(TEXT("On Validate function not implemented in %s"), *GetName()));
	return false;
}

bool UOperatingSystemBaseHardware::K2_OnValidate_Implementation(FGenericError& OutError) const
{
	return OnValidate(OutError);
}
