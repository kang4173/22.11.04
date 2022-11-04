// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "MyObject.h"
#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "CTEST2GameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class CTEST2_API ACTEST2GameModeBase : public AGameModeBase, public IMyObject
{
	GENERATED_BODY()
protected:
		virtual void BeginPlay() override;
};
