#include<iostream>
using namespace std;

void FillRand(int arr[], const int n);
void Print(int arr[], const int n);

void main()
{
	setlocale(LC_ALL, "Russian");
	int n;	cout << "Введите размер массива: "; cin >> n;
	int* arr = new int[n];
	FillRand(arr, n);
	Print(arr, n);
	arr[n] = 123;
	n++;
	Print(arr, n);
	delete[] arr;
}

void FillRand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		//[] - Оператор индексирования (Subscript operator)
		arr[i] = rand() % 100;
	}
	cout << endl;
}
void Print(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		//[] - Оператор индексирования (Subscript operator)
		cout << arr[i] << "\t";
	}
	cout << endl;
}
