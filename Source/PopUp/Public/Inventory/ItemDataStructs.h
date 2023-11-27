#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ItemDataStructs.generated.h"


USTRUCT()
struct FItemTextData
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere)
	FText Name = FText::FromString("Default Name");

	UPROPERTY(EditAnywhere)
	FText Description = FText::FromString("Default Description");

	UPROPERTY(EditAnywhere)
	FText InteractionText = FText::FromString("Default Interaction Text");

	UPROPERTY(EditAnywhere)
	FText UsageText = FText::FromString("Default Usage Text");
};

USTRUCT()
struct FItemNumericData
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere)
	int32 MaxStackSize = 1;

	UPROPERTY(EditAnywhere)
	bool bIsStackable = false;
};

USTRUCT()
struct FItemAssetData
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere)
	UTexture2D* Icon;

	UPROPERTY(EditAnywhere)
	UStaticMesh* Mesh;
};

USTRUCT()
struct FItemData : public FTableRowBase
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, Category="ItemData")
	FName ID = "ItemId";

	UPROPERTY(EditAnywhere, Category="ItemData")
	FItemTextData TextData;

	UPROPERTY(EditAnywhere, Category="ItemData")
	FItemNumericData ItemNumericData;

	UPROPERTY(EditAnywhere, Category="ItemData")
	FItemAssetData AssetData;
};
