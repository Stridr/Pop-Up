// Fill out your copyright notice in the Description page of Project Settings.


#include "Inventory/InventoryToolTip.h"
#include "Inventory/InventoryItemSlot.h"
#include "Inventory/ItemDataStructs.h"


void UInventoryToolTip::NativeConstruct()
{
	Super::NativeConstruct();

	UItemBase* ItemBeingHovered = InventorySlotBeingHovered->GetItemReference();

	ItemName->SetText(ItemBeingHovered->TextData.Name);
	UsageText->SetText(ItemBeingHovered->TextData.UsageText);
	ItemDescription->SetText(ItemBeingHovered->TextData.Description);

	if (ItemBeingHovered->ItemNumericData.bIsStackable)
	{
		const FString StackInfo =
			{"Max Stack Size :" + FString::FromInt(ItemBeingHovered->ItemNumericData.MaxStackSize)};
		MaxStackSize->SetText(FText::FromString(StackInfo));
	}
	else
	{
		MaxStackSize->SetVisibility(ESlateVisibility::Collapsed);
	}
}
