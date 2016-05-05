#pragma once

#include "Engine.h"
#include "AddThreeNumBPLibrary.generated.h"


UCLASS()
class UAddThreeNumBPLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_UCLASS_BODY()

	//Declare a BlueprintCallable function that can add 3 numbers
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "AddThreeNum", Keywords = "Add Three Num"), Category = "Addition")
	static void addNum(float a, float b, float c);
};
