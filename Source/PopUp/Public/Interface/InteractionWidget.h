// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Player/PopUpPlayerController.h"
#include "InteractionWidget.generated.h"

class APlayerCharacter;
struct FInteractableData;

class UProgressBar;
class UTextBlock;

UCLASS()
class POPUP_API UInteractionWidget : public UUserWidget
{
	GENERATED_BODY()

public:

	UPROPERTY(VisibleAnywhere,Category= "InteractionWidget | PlayerReference")
	APlayerCharacter* PlayerReference;

	void UpdateWidget(const FInteractableData* InteractableData) const;

protected:

	UPROPERTY(VisibleAnywhere,meta=(BindWidget),Category="InteractionWidget | Interactable Data")
	UTextBlock* NameText;

	UPROPERTY(VisibleAnywhere,meta=(BindWidget),Category="InteractionWidget | Interactable Data")
	UTextBlock* ActionText;
	
	UPROPERTY(VisibleAnywhere,meta=(BindWidget),Category="InteractionWidget | Interactable Data")
	UTextBlock* QuantityText;

	UPROPERTY(VisibleAnywhere,meta=(BindWidget),Category="InteractionWidget | Interactable Data")
	UTextBlock* KeyPressText;
	
	UPROPERTY(VisibleAnywhere,meta=(BindWidget),Category="InteractionWidget | Interactable Data")
	UProgressBar* InteractionProgress;
	
	UPROPERTY(VisibleAnywhere,meta=(BindWidget),Category="InteractionWidget | Interactable Data")
	float CurrentInteractionDuration;

	UFUNCTION(Category= "InteractionWidget | Interactable Data")
	static float UpdateInteractionProgress();

	
	virtual void NativeOnInitialized() override;
	virtual void NativeConstruct() override;
};




