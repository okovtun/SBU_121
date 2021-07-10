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

int g_a;//���������� ����������, �� ����� ��� �������, � �� ����� �������� ����� �������.
		//������� ������������� ���������� ���������� ������������ �� ����������� (DEPRECATED),
		//��������� ���������� ��� � ��� ��������.
		//g_ - Global (Hungarian notation - ���������� �������)https://ru.wikipedia.org/wiki/%D0%92%D0%B5%D0%BD%D0%B3%D0%B5%D1%80%D1%81%D0%BA%D0%B0%D1%8F_%D0%BD%D0%BE%D1%82%D0%B0%D1%86%D0%B8%D1%8F
//��, ���������� ��������� ������������ ����� ������. ��������� �������� ����� �� �����, �� ��� (�������) �� �����, � ����� ���������.

const int ROWS = 5;
const int COLS = 8;

void FillRand(int arr[], const int n);
void FillRand(double arr[], const int n);
void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS);	//Function declaration - ���������� ������� (�������� �������)

void Print(int arr[], const int n);
void Print(double arr[], const int n);
void Print(int arr[ROWS][COLS], const int ROWS, const int COLS);

void PrintReverse(int arr[], const int n);
void PrintReverse(double arr[], const int n);

int  Sum(int arr[], const int n);
double  Sum(double arr[], const int n);

double Avg(int arr[], const int n);
double Avg(double arr[], const int n);

int minValueIn(int arr[], const int n);
int maxValueIn(int arr[], const int n);

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

void FillRand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand()%100;
		//������� rand() ���������� ��������������� �����, � ���������� �� 0 �� 32 767.
	}
}
void FillRand(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = double(rand()%100)/10;
	}
}
void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS)	//Function definition - ����������� ������� (���������� �������)
{
	//����������, ��� ������ �������.
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % 100;
		}
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
void Print(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}
void Print(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << tab;
		}
		cout << endl;
	}
}

void PrintReverse(int arr[], const int n)
{
	for (int i = n - 1; i >= 0; i--)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}
void PrintReverse(double arr[], const int n)
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
double  Sum(double arr[], const int n)
{
	double sum = 0;
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
double Avg(double arr[], const int n)
{
	return Sum(arr, n) / n;
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
