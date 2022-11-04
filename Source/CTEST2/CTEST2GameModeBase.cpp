// Copyright Epic Games, Inc. All Rights Reserved.


#include "CTEST2GameModeBase.h"

#include "EngineUtils.h"

void ACTEST2GameModeBase::BeginPlay()
{
	Super::BeginPlay();

	for (TActorIterator<AActor> actor(GWorld); actor; ++actor)
	{
		IMyObject* test = Cast<IMyObject>(*actor);
		if (test)
		{
			test->Execute_Call_InerFace(*actor);
		}
	}
}
