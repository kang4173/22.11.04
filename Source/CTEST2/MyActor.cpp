// Fill out your copyright notice in the Description page of Project Settings.


#include "MyActor.h"

#include "Kismet/KismetStringLibrary.h"

// Sets default values
AMyActor::AMyActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMyActor::BeginPlay()
{
	Super::BeginPlay();


	
	// �迭 ����
	//// TArray<Type> name;
	//// TArray<Type*> name;
	//
	//TArray<int32> IntArray;
	//IntArray.Init(10, 5); // IntArray == [10, 10, 10, 10, 10]

	//TArray<FString> StrArr;
	//// Add �� ������Ʈ ������ �ν��Ͻ��� �迭�� ���� (�Ǵ� �̵�) �մϴ�
	//StrArr.Add(TEXT("Hello"));
	//StrArr.Add(TEXT("World"));

	//FString Arr[] = { TEXT("of"), TEXT("Tomorrow") };
	//StrArr.Append(Arr, ARRAY_COUNT(Arr)); 	// StrArr == ["Hello", "World", "of", "Tomorrow"]

	//StrArr.AddUnique(TEXT("!"));			// StrArr == ["Hello", "World", "of", "Tomorrow", "!"]
	//// AddUnique �� ���� �����̳ʿ� ������ ������Ʈ�� �̹� �������� �ʴ°�� �� ������Ʈ�� �߰�,
	//// ���翩�δ� ������Ʈ ������ ������ == �� ����ؼ� �˻�.
	//
	//StrArr.Insert(TEXT("Brave"), 1);		// StrArr == ["Hello", "Brave", "World", "of", "Tomorrow", "!"]

	//// StrArr ���� 0��° �ε��� ���� �������ÿ�
	//FString Temp = StrArr[0];

	//// AddOnScreenDebugMessage ���� ���
	//// ���ڿ� FString (��Ʈ������ += ��Ʈ������_)

	//for (auto& Str : StrArr)
	//{
	//	Temp += Str;
	//	GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Red, FString::Printf(TEXT("%s"), *Temp), 0);
	//	// ���յ� ���ڿ� ���
	//}
	//
	//for (int32 Index = 0; Index != StrArr.Num(); ++Index)
	//{
	//	if (StrArr[Index] != "Brave")
	//	{
	//		GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Blue, FString::Printf(TEXT("%s"), *StrArr[Index]), 0);
	//	}
	//	// Brave ���� ���
	//}

	//for (FString Str : StrArr)
	//{
	//		GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Green, FString::Printf(TEXT("%s"), *Str), 0);
	//	// �ϳ��� ���
	//}

	//// IntArray �� �迭 �ȿ� ����ִ� ��� ���� ���ؼ� ���
	//// FString::FromInt(IntVariable)
	//// ���ڿ��� ��ȯ�� "[10, 10, 10, 10, 10]" �� ���

	//TArray<FString> JoinedIntArr = { TEXT("["), TEXT("]") };
	//FString JoinedInt;
	//for (int32 temp : IntArray)
	//{
	//	JoinedIntArr.Insert(FString::FromInt(temp), 1);
	//}
	//// �迭 ���� ���̺귯��
	//GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Green, UKismetStringLibrary::JoinStringArray(JoinedIntArr));

	////FString temp = UKismetStringLibrary::JoinStringArray(StrArr);

	//TArray<TArray<FString>> StrArr2;
	//StrArr2.Add(StrArr);
	//GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Black, StrArr2[0][0]); // "Hello"

	//StrArr2.Add({ TEXT("0"), TEXT("1") });
	//StrArr2[1].Add(TEXT("2"));

	//// 2�� ���
	//FString test2 = StrArr2[1][2];
	//GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Black, test2);

	//// TEXT ���� ����

	//// �⺻ ���
	//UE_LOG(LogTemp, Warning, TEXT("Some Warnin Message"));

	//// TEXT ����
	//int32 intVar = 5;
	//float floatVar = 3.6f;
	//FString stringVar = TEXT("test FString");

	//UE_LOG(LogTemp, Warning, TEXT("Some Warnin Message, %d %f %s"), intVar, floatVar, *stringVar); // ��������

	//// TEXT ���� FString ����
	//FString name = "Tim";
	//int32 mana = 450;
	////printf
	//FString string = FString::Printf(TEXT("Name = %s Mana = %d"), *name, mana);
	//UE_LOG(LogTemp, Warning, TEXT("Your String1 : %s"), *string);

	//// format
	//TArray<FStringFormatArg> args;
	//args.Add(FStringFormatArg(name));
	//args.Add(FStringFormatArg(mana));
	//FString string2 = FString::Format(TEXT("Naem = {0} mana = {1}"), args);
	//UE_LOG(LogTemp, Warning, TEXT("Your String2 : %s"), *string2);

	//// FStringFormatArg : FString::Format �� ���Ǵ� ����ü
	//// FString::Format
	//// ������ �μ��� ����Ͽ� ������ ���ڿ��� ������ ������.
	//// ���ڿ��� ���� ������ ������ �߷��ϴµ� ������ ��.



	// FString ����
//	FString test = TEXT("1234 Test");
//
//	// �ڸ���
//	FString testRight;
//	test.Split(" ", nullptr, &test);				
//	UE_LOG(LogClass, Error, TEXT("%s"), *testRight);
//
//
//	// ���ڿ� ��
//	if (test.Equals(TEXT("Test")))
//	{
//		UE_LOG(LogClass, Error, TEXT("Equals true"));
//	}
//	else
//	{
//		UE_LOG(LogClass, Error, TEXT("Equals false"));
//	}
//
//	// �˻�
//	if (test.Find(TEXT("Test")))
//	{
//		UE_LOG(LogClass, Error, TEXT("Find true"));
//	}
//	else
//	{
//		UE_LOG(LogClass, Error, TEXT("Find false"));
//	}
//
//	// �ڸ���
////	FString testRight;
////	test.Split(" ", nullptr, &testRight);
//

		// GetClass, StaticClass ����
//	GetClass	: 
//	StaticClass	: 
//	StaticClass �� ������ Ÿ�ӿ��� UClass Ÿ���� ������ ������ ���̸�, 
//	GetClass �� ��Ÿ�ӿ��� ���� ��ü�� Ŭ������ ��ȸ�Ҷ� ���ȴ�.

	//FStrProperty* BP_MyActor = FindFProperty<FStrProperty>(this->GetClass(), TEXT("TEST")); 
	//
	//if (BP_MyActor)
	//{
	//	FString BP_Actor = *BP_MyActor->GetPropertyValue_InContainer(this);
	//	UE_LOG(LogClass, Error, TEXT("FStrProperty : %s"), *BP_Actor);
	//}
	//
	////   
	//if (this->GetClass() == AMyActor::StaticClass()) // ����ȭ 
	//{
	//	GEngine->AddOnScreenDebugMessage(-1, 3, FColor::Blue, TEXT("Same")); // C++���� ���͸� ��ġ�ϸ� Same �� ����
	//}
	//else
	//{
	//	GEngine->AddOnScreenDebugMessage(-1, 3, FColor::Blue, TEXT("No"));   // BP(C++)�� ��ġ�� No ����
	//}


}

// Called every frame
void AMyActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AMyActor::Call_InerFace_Implementation()
{
	GEngine->AddOnScreenDebugMessage(-1, 3, FColor::Red, TEXT("MyActor"));
}

