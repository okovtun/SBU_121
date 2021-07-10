#include"stdafx.h"
#include"FillRand.h"
#include"Print.h"
#include"Statistics.h"

#define ARRAYS_1
#define ARRAYS_2

void main()
{
	setlocale(LC_ALL, "Russian");
	const int n = 5;
	int arr[n] = { 3, 5, 8 };
	FillRand(arr, n);
	Print(arr, n);
	PrintReverse(arr, n);
	cout << "����� ��������� �������: " << Sum(arr, n) << endl;
	cout << "������� �������������� ��������� �������: " << Avg(arr, n) << endl;
	cout << "����������� �������� � �������: " << minValueIn(arr, n) << endl;
	cout << "������������ �������� � �������:" << maxValueIn(arr, n) << endl;

	double d_arr[n];	//double array
	FillRand(d_arr, n);
	Print(d_arr, n);
	PrintReverse(d_arr, n);
	cout << "����� ��������� �������: " << Sum(d_arr, n) << endl;
	cout << "������� �������������� ��������� �������: " << Avg(d_arr, n) << endl;
	//Function overloading
	cout << "\n======================= 2D arrays =============================\n";
	
	int i_arr_2[ROWS][COLS];
	FillRand(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
}