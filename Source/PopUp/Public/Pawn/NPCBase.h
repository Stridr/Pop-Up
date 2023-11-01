// Copyright PopUp

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Interaction/InteractionInterface.h"
#include "NPCBase.generated.h"

class UQuestGiverComponent;
class USkeletalMeshComponent;

UCLASS()
class POPUP_API ANPCBase : public APawn, public IInteractionInterface
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ANPCBase();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	// virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	UFUNCTION()
	virtual void LookAt() override;

	UFUNCTION()
	virtual FString InteractWith() override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Quest")
	UQuestGiverComponent* QuestGiverComponent;

private:
	UPROPERTY(meta=(AllowPrivateAccess = "true"), VisibleAnywhere, BlueprintReadOnly, Category= "Components")
	class UCapsuleComponent* CapsuleComponent;

	UPROPERTY(meta=(AllowPrivateAccess = "true"), EditAnywhere, BlueprintReadWrite, Category= "Components")
	USkeletalMeshComponent* Mesh;
};
