#include "Array.h"

CustomArray::CustomArray()
{
	this->size = 0;
	this->arr = new double[size];
}

CustomArray::CustomArray(int size)
{
	this->size = size;
	this->arr = new double[size];
}

double* CustomArray::GetDynamicArray(double* arr, int size)
{
	this->size = size;
	this->arr = new double[size];

	for (size_t i = 0; i < size; i++)
		this->arr[i] = arr[i];

	return this->arr;
}

void CustomArray::FillArray(double* arr, int size)
{
	srand(time(NULL));
	for (size_t i = 0; i < size; i++)
		arr[i] = rand() % 50 - 50;
}

void CustomArray::AddSumAndArithmeticMean(double* arr, int size)
{
	double sum = 0;
	for (size_t i = 0; i < size; i++)
		sum += arr[i];

	double aithmeticMean = double(sum / size);

	this->size = size + 2;
	delete[] this->arr;
	this->arr = new double[size + 2];

	for (size_t i = 0; i < size; i++)
		this->arr[i] = arr[i];

	this->arr[this->size - 1] = aithmeticMean;
	this->arr[this->size - 2] = sum;
}

void CustomArray::ChangeAllPositiveNumbersToMaxValue()
{
	if (this->arr == nullptr)
		return;

	int max = this->arr[0];
	for (size_t i = 0; i < this->size; i++) {
		if (this->arr[i] > max)
			max = this->arr[i];
	}

	for (size_t i = 0; i < this->size; i++) {
		if (this->arr[i] > 0)
			this->arr[i] = max;
	}
}

void CustomArray::Show() const
{
	for (size_t i = 0; i < this->size; i++)
		cout << this->arr[i] << " ";

	cout << endl;
}

void CustomArray::SetSize(int size)
{
	if (size > 0)
		this->size = size;
}

void CustomArray::SetArray(double* arr, int size)
{
	SetSize(size);
	this->arr = new double[size];
	for (size_t i = 0; i < size; i++)
		this->arr[i] = arr[i];
}

CustomArray::~CustomArray()
{
	delete[] this->arr;
	this->arr = nullptr;
}
