#include"FillRand.h"

void FillRand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
		//������� rand() ���������� ��������������� �����, � ���������� �� 0 �� 32 767.
	}
}
void FillRand(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = double(rand() % 100) / 10;
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