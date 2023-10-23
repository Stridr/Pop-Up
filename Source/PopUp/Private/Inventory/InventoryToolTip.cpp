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
	case EItemType::Armor:
		break;
	case EItemType::Weapon:
		break;
	case EItemType::Shield:
		break;
	case EItemType::Spell:
		break;
	case EItemType::Consumable:
		ItemType->SetText(FText::FromString("Consumable"));
		DamageValue->SetVisibility(ESlateVisibility::Collapsed);
		ArmorRating->SetVisibility(ESlateVisibility::Collapsed);
		SellValue->SetVisibility(ESlateVisibility::Collapsed);
		break;
	case EItemType::Quest:
		break;
	case EItemType::Mundane:
		ItemType->SetText(FText::FromString("Mundane Item"));
		DamageValue->SetVisibility(ESlateVisibility::Collapsed);
		ArmorRating->SetVisibility(ESlateVisibility::Collapsed);
		UsageText->SetVisibility(ESlateVisibility::Collapsed);
		SellValue->SetVisibility(ESlateVisibility::Collapsed);
		break;
	default: ;
	}
	ItemName->SetText(ItemBeingHovered->TextData.Name);
	DamageValue->SetText(FText::AsNumber(ItemBeingHovered->ItemStatistics.DamageValue));
	ArmorRating->SetText(FText::AsNumber(ItemBeingHovered->ItemStatistics.ArmorRating));
	UsageText->SetText(ItemBeingHovered->TextData.UsageText);
	StackWeight->SetText(FText::AsNumber(ItemBeingHovered->GetItemStackWeight()));
	SellValue->SetText(FText::AsNumber(ItemBeingHovered->ItemStatistics.SellValue));
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
