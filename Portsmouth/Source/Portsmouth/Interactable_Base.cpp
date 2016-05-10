// Leif Peterson and Eric Rissler 2016

#include "Portsmouth.h"
#include "Interactable_Base.h"


// Sets default values
AInteractable_Base::AInteractable_Base()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AInteractable_Base::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AInteractable_Base::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}

bool AInteractable_Base::Interact_Implementation()
{
	return true;// Implement in Extensions
}

