// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MyObject.generated.h"

/*
 �������̽�
 �������̽��� ���� �ٸ� ��ü�� ���� ����� ���� �� �� ������ �ʿ��� ���
 ��ü�� �ش� ����� �ٸ��� ó�� �� �� �ִ�.
 */
UINTERFACE()
class CTEST2_API UMyObject : public UInterface
{
	GENERATED_BODY()
	
};

class CTEST2_API IMyObject
{
	GENERATED_BODY()

public:
	
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "MyObject")
		void Call_InerFace();
};