// Copyright 2023 - YetiTech Studios, Pvt Ltd. All Rights Reserved.

#include "GlobalMessengerEditorModule.h"
#include "GameplayDebugger.h"
#include "GameplayDebuggerCategory_GlobalMessenger.h"

#define LOCTEXT_NAMESPACE "FGlobalMessengerEditorModule"

DEFINE_LOG_CATEGORY_STATIC(LogGlobalMessengerEditorModule, All, All);

void FGlobalMessengerEditorModule::StartupModule()
{
    IGameplayDebugger& GameplayDebugger = IGameplayDebugger::Get();
    GameplayDebugger.RegisterCategory("GlobalMessageCategory", IGameplayDebugger::FOnGetCategory::CreateStatic(&FGameplayDebuggerCategory_GlobalMessenger::MakeInstance), EGameplayDebuggerCategoryState::EnabledInGameAndSimulate);
    GameplayDebugger.NotifyCategoriesChanged();

    UE_LOG(LogGlobalMessengerEditorModule, Display, TEXT("Global message subsystem gameplay debugger category created."));
}

void FGlobalMessengerEditorModule::ShutdownModule()
{
    UE_LOG(LogGlobalMessengerEditorModule, Display, TEXT("Global messenger editor module shutdown."));
    if (IGameplayDebugger::IsAvailable())
    {
        IGameplayDebugger& GameplayDebugger = IGameplayDebugger::Get();
        GameplayDebugger.UnregisterCategory("GlobalMessageCategory");
        UE_LOG(LogGlobalMessengerEditorModule, Display, TEXT("Global message subsystem gameplay debugger category removed."));
    }
}

#undef LOCTEXT_NAMESPACE
    
IMPLEMENT_MODULE(FGlobalMessengerEditorModule, GlobalMessengerEditor)
