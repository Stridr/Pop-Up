// Copyright 2023 - YetiTech Studios, Pvt Ltd. All Rights Reserved.

#pragma once

#include "UObject/UObjectGlobals.h"
#include "OperatingSystemTypes.h"
#include "Engine/BlueprintGeneratedClass.h"

#define NOTIFICATION(TitleString, Type, Verbosity)		FOperatingSystemNotification(FText::FromString(TitleString), EOperatingSystemNotificationCategory::Type, EOperatingSystemNotificationType::Verbosity)

#define NOTIFICATION_OS(TitleString, Verbosity)			NOTIFICATION(TitleString, OperatingSystem, Verbosity)
#define NOTIFICATION_DEVICE(TitleString, Verbosity)		NOTIFICATION(TitleString, Device, Verbosity)
#define NOTIFICATION_APP(TitleString, Verbosity)		NOTIFICATION(TitleString, Application, Verbosity)

#define MAKE_ERROR(CodeString, DescString)				FGenericError(FText::FromString(CodeString), FText::FromString(DescString))

#define INVALID_PROCESS_ID								INDEX_NONE

#define INT_TO_STRING(TestInt)							(TestInt < 10 ? FString::Printf(TEXT("0%i"), TestInt) : FString::FromInt(TestInt))

#if WITH_EDITOR
#define NEW_SOFT_OBJ(Type, Owner, Class, Name)	NewObject<Type>(Owner, Class.LoadSynchronous(), MakeUniqueObjectName(Owner, Class.LoadSynchronous(), *FString::Printf(TEXT("%s_%s"), *FString(PREPROCESSOR_TO_STRING(Name)), *Owner->GetName())), RF_Transient)
#define NEW_OBJ(Type, Owner, Class, Name)		NewObject<Type>(Owner, Class, MakeUniqueObjectName(Owner, Class, *FString::Printf(TEXT("%s_%s"), *FString(PREPROCESSOR_TO_STRING(Name)), *Owner->GetName())), RF_Transient)
#else
#define NEW_SOFT_OBJ(Type, Owner, Class, Name)	NewObject<Type>(Owner, Class.LoadSynchronous(), NAME_None, RF_Transient)
#define NEW_OBJ(Type, Owner, Class, Name)		NewObject<Type>(Owner, Class, NAME_None, RF_Transient)
#endif


#define CTOR_LOAD_CLASS(Type, TargetClass, Path) static ConstructorHelpers::FClassFinder<Type> TargetClass##Finder(TEXT(Path)); TargetClass = TargetClass##Finder.Class
#define CTOR_LOAD_OBJ(Type, Target, Path) static ConstructorHelpers::FObjectFinder<Type> Target##Finder(TEXT(Path)); Target = Target##Finder.Object

#define IMPLEMENTED_IN_BP_LAMBDA() auto ImplementedInBlueprint = [](const UFunction* Func) -> bool \
{ \
	return Func && ensure(Func->GetOuter()) && Func->GetOuter()->IsA(UBlueprintGeneratedClass::StaticClass()); \
}

#define CHECK_IN_BP(Class, BaseName) \
{ \
	static const FName FuncName = GET_FUNCTION_NAME_CHECKED(Class, K2_##BaseName); \
	const UFunction* Func = FindFunction(FuncName); \
	bHasBlueprint##BaseName = ImplementedInBlueprint(Func); \
}
