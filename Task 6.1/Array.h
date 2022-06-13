#pragma once

#include <iostream>
#include <ctime>
using namespace std;

class CustomArray
{
public:
	CustomArray();
	CustomArray(int size);
	double* GetDynamicArray(double* arr, int size);
	void FillArray(double* arr, int size);
	void AddSumAndArithmeticMean(double* arr, int size);
	void ChangeAllPositiveNumbersToMaxValue();
	void Show() const;
	void SetSize(int size);
	void SetArray(double* arr, int size);
	int GetSize() { return this->size; }
	~CustomArray();
private:
	int size = 0;
	double* arr = nullptr;
};