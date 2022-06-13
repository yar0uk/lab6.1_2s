#include "Array.h"

int main()
{
	const int SIZE = 3;
	double arr[SIZE];
	CustomArray dynamicArray;

	dynamicArray.FillArray(arr, SIZE);
	dynamicArray.SetArray(dynamicArray.GetDynamicArray(arr, SIZE), SIZE);
	dynamicArray.Show();
	dynamicArray.AddSumAndArithmeticMean(arr, SIZE);
	dynamicArray.Show();
	dynamicArray.ChangeAllPositiveNumbersToMaxValue();
	dynamicArray.Show();
	dynamicArray.~CustomArray();
	return 0;
}