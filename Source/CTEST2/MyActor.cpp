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


	
	// 배열 공부
	//// TArray<Type> name;
	//// TArray<Type*> name;
	//
	//TArray<int32> IntArray;
	//IntArray.Init(10, 5); // IntArray == [10, 10, 10, 10, 10]

	//TArray<FString> StrArr;
	//// Add 는 엘리먼트 유형의 인스턴스를 배열에 복사 (또는 이동) 합니다
	//StrArr.Add(TEXT("Hello"));
	//StrArr.Add(TEXT("World"));

	//FString Arr[] = { TEXT("of"), TEXT("Tomorrow") };
	//StrArr.Append(Arr, ARRAY_COUNT(Arr)); 	// StrArr == ["Hello", "World", "of", "Tomorrow"]

	//StrArr.AddUnique(TEXT("!"));			// StrArr == ["Hello", "World", "of", "Tomorrow", "!"]
	//// AddUnique 는 기존 컨테이너에 동일한 엘리먼트가 이미 존재하지 않는경우 새 엘리먼트만 추가,
	//// 존재여부는 엘리먼트 유형의 연산자 == 을 사용해서 검사.
	//
	//StrArr.Insert(TEXT("Brave"), 1);		// StrArr == ["Hello", "Brave", "World", "of", "Tomorrow", "!"]

	//// StrArr 에서 0번째 인덱스 값을 가져오시오
	//FString Temp = StrArr[0];

	//// AddOnScreenDebugMessage 으로 출력
	//// 문자열 FString (스트링변수 += 스트링변수_)

	//for (auto& Str : StrArr)
	//{
	//	Temp += Str;
	//	GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Red, FString::Printf(TEXT("%s"), *Temp), 0);
	//	// 결합된 문자열 출력
	//}
	//
	//for (int32 Index = 0; Index != StrArr.Num(); ++Index)
	//{
	//	if (StrArr[Index] != "Brave")
	//	{
	//		GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Blue, FString::Printf(TEXT("%s"), *StrArr[Index]), 0);
	//	}
	//	// Brave 제외 출력
	//}

	//for (FString Str : StrArr)
	//{
	//		GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Green, FString::Printf(TEXT("%s"), *Str), 0);
	//	// 하나씩 출력
	//}

	//// IntArray 의 배열 안에 들어있는 모든 값을 더해서 출력
	//// FString::FromInt(IntVariable)
	//// 문자열로 변환후 "[10, 10, 10, 10, 10]" 로 출력

	//TArray<FString> JoinedIntArr = { TEXT("["), TEXT("]") };
	//FString JoinedInt;
	//for (int32 temp : IntArray)
	//{
	//	JoinedIntArr.Insert(FString::FromInt(temp), 1);
	//}
	//// 배열 결합 라이브러리
	//GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Green, UKismetStringLibrary::JoinStringArray(JoinedIntArr));

	////FString temp = UKismetStringLibrary::JoinStringArray(StrArr);

	//TArray<TArray<FString>> StrArr2;
	//StrArr2.Add(StrArr);
	//GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Black, StrArr2[0][0]); // "Hello"

	//StrArr2.Add({ TEXT("0"), TEXT("1") });
	//StrArr2[1].Add(TEXT("2"));

	//// 2를 출력
	//FString test2 = StrArr2[1][2];
	//GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Black, test2);

	//// TEXT 조합 공부

	//// 기본 사용
	//UE_LOG(LogTemp, Warning, TEXT("Some Warnin Message"));

	//// TEXT 조합
	//int32 intVar = 5;
	//float floatVar = 3.6f;
	//FString stringVar = TEXT("test FString");

	//UE_LOG(LogTemp, Warning, TEXT("Some Warnin Message, %d %f %s"), intVar, floatVar, *stringVar); // 포맷형태

	//// TEXT 조합 FString 사용시
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

	//// FStringFormatArg : FString::Format 에 사용되는 구조체
	//// FString::Format
	//// 지정된 인수를 사용하여 지정된 문자열의 형식을 지정함.
	//// 문자열에 넣을 변수의 유형을 추론하는데 도움이 됨.



	// FString 공부
//	FString test = TEXT("1234 Test");
//
//	// 자르기
//	FString testRight;
//	test.Split(" ", nullptr, &test);				
//	UE_LOG(LogClass, Error, TEXT("%s"), *testRight);
//
//
//	// 문자열 비교
//	if (test.Equals(TEXT("Test")))
//	{
//		UE_LOG(LogClass, Error, TEXT("Equals true"));
//	}
//	else
//	{
//		UE_LOG(LogClass, Error, TEXT("Equals false"));
//	}
//
//	// 검색
//	if (test.Find(TEXT("Test")))
//	{
//		UE_LOG(LogClass, Error, TEXT("Find true"));
//	}
//	else
//	{
//		UE_LOG(LogClass, Error, TEXT("Find false"));
//	}
//
//	// 자르기
////	FString testRight;
////	test.Split(" ", nullptr, &testRight);
//

		// GetClass, StaticClass 공부
//	GetClass	: 
//	StaticClass	: 
//	StaticClass 는 컴파일 타임에서 UClass 타입의 정보를 얻어오는 것이며, 
//	GetClass 는 런타임에서 실제 객체의 클래스를 조회할때 사용된다.

	//FStrProperty* BP_MyActor = FindFProperty<FStrProperty>(this->GetClass(), TEXT("TEST")); 
	//
	//if (BP_MyActor)
	//{
	//	FString BP_Actor = *BP_MyActor->GetPropertyValue_InContainer(this);
	//	UE_LOG(LogClass, Error, TEXT("FStrProperty : %s"), *BP_Actor);
	//}
	//
	////   
	//if (this->GetClass() == AMyActor::StaticClass()) // 최적화 
	//{
	//	GEngine->AddOnScreenDebugMessage(-1, 3, FColor::Blue, TEXT("Same")); // C++구현 액터를 배치하면 Same 이 나옴
	//}
	//else
	//{
	//	GEngine->AddOnScreenDebugMessage(-1, 3, FColor::Blue, TEXT("No"));   // BP(C++)로 배치시 No 나옴
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

