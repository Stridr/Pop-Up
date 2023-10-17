// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MainMenu.h"
#include "GameFramework/HUD.h"
#include "InventoryHUD.generated.h"

struct FInteractableData;
class UInteractionWidget;
class UMainMenu;

UCLASS()
class POPUP_API AInventoryHUD : public AHUD
{
	GENERATED_BODY()
public:
	/////////////////////////////////////
	///Properties & variables
	////////////////////////////////////
	
	UPROPERTY(EditDefaultsOnly,Category= "Widget")
	TSubclassOf<UMainMenu> MainMenuClass;
	
	UPROPERTY(EditDefaultsOnly,Category= "Widget")
	TSubclassOf<UInteractionWidget> InteractionWidgetClass;

	bool bIsMenuVisible;

	/////////////////////////////////////
	///Functions
	///////////////////////////////////
	AInventoryHUD();
	virtual void BeginPlay() override;

	void DisplayMenu();
	void HideMenu();
	void ToogleMenu();

	void ShowInteractionWidget() const;
	void HideInteractionWidget() const;
	void UpdateInteractionWidget(const FInteractableData* InteractableData) const;

	
protected:
	/////////////////////////////////////
	///Properties & variables
	////////////////////////////////////

	UPROPERTY()
	UMainMenu* MainMenuWidget;

	UPROPERTY()
	UInteractionWidget* InteractionWidget;
	
	/////////////////////////////////////
	///Functions
	////////////////////////////////////
};
