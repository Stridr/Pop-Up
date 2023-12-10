// Fill out your copyright notice in the Description page of Project Settings.


#include "Inventory/InventoryToolTip.h"
#include "Inventory/InventoryItemSlot.h"
#include "Data/ItemDataStructs.h"


void UInventoryToolTip::NativeConstruct()
{
	Super::NativeConstruct();

	UItemBase* ItemBeingHovered = InventorySlotBeingHovered->GetItemReference();

	switch (ItemBeingHovered->ItemType)
	{
	case EItemType::Consumable:
		ItemType->SetText(FText::FromString("Consumable"));
		break;
	case EItemType::Quest:
		break;
	case EItemType::Mundane:
		ItemType->SetText(FText::FromString("Mundane Item"));
		UsageText->SetVisibility(ESlateVisibility::Collapsed);
		
		break;
	default: ;
	}
	ItemName->SetText(ItemBeingHovered->TextData.Name);
	UsageText->SetText(ItemBeingHovered->TextData.UsageText);
	StackWeight->SetText(FText::AsNumber(ItemBeingHovered->GetItemStackWeight()));
	ItemDescription->SetText(ItemBeingHovered->TextData.Description);

	const FString WeightInfo=
		{"Weight:"+ FString::SanitizeFloat(ItemBeingHovered->GetItemStackWeight())};
	StackWeight->SetText(FText::FromString(WeightInfo));

	if(ItemBeingHovered->ItemNumericData.bIsStackable)
	{
		const FString StackInfo=
			{"Max Stack Size :" + FString::FromInt(ItemBeingHovered->ItemNumericData.MaxStackSize)};
		MaxStackSize->SetText(FText::FromString(StackInfo));
	}
	else
	{
		MaxStackSize->SetVisibility(ESlateVisibility::Collapsed);
	}
}
