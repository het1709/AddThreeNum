#include "AddThreeNumPrivatePCH.h"
#include "AddThreeNumBPLibrary.h"

//Constructor for the class
UAddThreeNumBPLibrary::UAddThreeNumBPLibrary(const FObjectInitializer& ObjectInitializer)
: Super(ObjectInitializer)
{

}

//Blueprint callable function that adds three numbers and displays in output log
void UAddThreeNumBPLibrary::addNum(float a, float b, float c)
{
	UE_LOG(LogTemp, Warning, TEXT("Answer is: %f"), (a+b+c));
}
