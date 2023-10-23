// Copyright 2023 - YetiTech Studios, Pvt Ltd. All Rights Reserved.

#include "GlobalMessengerModule.h"

#define LOCTEXT_NAMESPACE "FGlobalMessengerModule"

TSharedPtr<FGlobalMessenger> GMessenger = nullptr;

DEFINE_LOG_CATEGORY_STATIC(LogGlobalMessengerModule, All, All)

void FGlobalMessengerModule::StartupModule()
{
    GMessenger = MakeShared<FGlobalMessenger>();
    UE_LOG(LogGlobalMessengerModule, Verbose, TEXT("Global messenger module started..."));
}

void FGlobalMessengerModule::ShutdownModule()
{
    checkf(GMessenger.IsUnique(), TEXT("GMessenger should be unique."));
    GMessenger.Reset();

    UE_LOG(LogGlobalMessengerModule, Verbose, TEXT("Global messenger module shutdown."));
}

#undef LOCTEXT_NAMESPACE
    
IMPLEMENT_MODULE(FGlobalMessengerModule, GlobalMessenger)
