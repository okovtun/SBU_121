#include<iostream>
using namespace std;

/*
-----------------------------------------------------------
HomeWork:
�������� �������:
??? Input(???);			//��������� ������ �������� ��������� ������� � ����������;
??? PrintReverse(???);	//������� ������ �� ����� � �������� ������� - �� ���������� �������� � �������
??? Sum(???);			//���������� ����� ��������� �������
??? Avg(???);			//���������� ������� �������������� (Avarage) ��������� �������
??? minValueIn(???);	//���������� ����������� �������� �� �������
??? maxValueIn(???);	//���������� ������������ �������� �� �������

��� ��� ������� ����� ������ ����� �����, � ���� �� �������.
-----------------------------------------------------------
*/

#define tab "\t"

void FillRand(int arr[], const int n);
void Print(int arr[], const int n);
void PrintReverse(int arr[], const int n);
int  Sum(int arr[], const int n);
double Avg(int arr[], const int n);
int minValueIn(int arr[], const int n);
int maxValueIn(int arr[], const int n);

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
	cout << "����������� �������� � �������:\t" << minValueIn(arr, n) << endl;
	cout << "������������ �������� � �������:\t" << maxValueIn(arr, n) << endl;
}

void FillRand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand()%100;
		//������� rand() ���������� ��������������� �����, � ���������� �� 0 �� 32 767.
	}
}
void Print(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}
void PrintReverse(int arr[], const int n)
{
	for (int i = n - 1; i >= 0; i--)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}
int  Sum(int arr[], const int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}
double Avg(int arr[], const int n)
{
	return (double)Sum(arr, n) / n;
}
int minValueIn(int arr[], const int n)
{
	int min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)min = arr[i];
	}
	return min;
}
int maxValueIn(int arr[], const int n)
{
	int max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)max = arr[i];
	}
	return max;
}
