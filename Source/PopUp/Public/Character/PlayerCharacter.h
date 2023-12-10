// Copyright PopUp

#pragma once

#include "CoreMinimal.h"
#include "Character/CharacterBase.h"
#include "PopUp/TP_ThirdPerson/TP_ThirdPersonCharacter.h"
#include "PlayerCharacter.generated.h"

class UInventoryComponent;
class USpringArmComponent;
class UCameraComponent;



UCLASS()
class POPUP_API APlayerCharacter : public ACharacterBase
{
	GENERATED_BODY()

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera", meta = (AllowPrivateAccess = "true"))
	UCameraComponent* PlayerCamera;

public:
	
	APlayerCharacter();
;

protected:
	
	virtual void BeginPlay() override;
};
