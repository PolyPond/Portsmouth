// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.
#pragma once 
#include "GameFramework/HUD.h"
#include "PortsmouthHUD.generated.h"

UCLASS()
class APortsmouthHUD : public AHUD
{
	GENERATED_BODY()

public:
	APortsmouthHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

