// Leif Peterson and Eric Rissler 2016

#pragma once

#include "InteractInterface.generated.h"
/**
 * 
 */
UINTERFACE(Blueprintable)
class UInteractInterface : public UInterface
{
	GENERATED_UINTERFACE_BODY()
};

class IInteractInterface
{	GENERATED_IINTERFACE_BODY()

public:
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Interact")
	bool Interact();
};
