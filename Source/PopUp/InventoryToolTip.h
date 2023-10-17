// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "InventoryItemSlot.h"
#include "ItemBase.h"
#include "Blueprint/UserWidget.h"
#include "Components/TextBlock.h"
#include "InventoryToolTip.generated.h"

/**
 * 
 */
UCLASS()
class POPUP_API UInventoryToolTip : public UUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(VisibleAnywhere)
	UInventoryItemSlot* InventorySlotBeingHovered;
	
	UPROPERTY(meta=(BindWidget))
	UTextBlock* ItemName;
	
	UPROPERTY(meta=(BindWidget))
	UTextBlock* ItemType;
	
	UPROPERTY(meta=(BindWidget))
	UTextBlock* DamageValue;
	
	UPROPERTY(meta=(BindWidget))
	UTextBlock* ArmorRating;

	UPROPERTY(meta=(BindWidget))
	UTextBlock* UsageText;
	
	UPROPERTY(meta=(BindWidget))
	UTextBlock* ItemDescription;
	
	UPROPERTY(meta=(BindWidget))
	UTextBlock* MaxStackSize;

	UPROPERTY(meta=(BindWidget))
	UTextBlock* MaxStackSizeText;
	
	UPROPERTY(meta=(BindWidget))
	UTextBlock* SellValue;
	
	UPROPERTY(meta=(BindWidget))
	UTextBlock* StackWeight;
protected:
	
	virtual  void NativeConstruct() override;
};
