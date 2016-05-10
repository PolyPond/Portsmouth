// Leif Peterson and Eric Rissler 2016

#pragma once

#include "GameFramework/Actor.h"
#include "InteractInterface.h"
#include "Interactable_Base.generated.h"

UCLASS()
class PORTSMOUTH_API AInteractable_Base : public AActor, public IInteractInterface
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AInteractable_Base();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;

	// Interact Action
	virtual bool Interact_Implementation() override;
	
};
