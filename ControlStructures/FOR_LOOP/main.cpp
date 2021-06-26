#include<iostream>
using namespace std;

#define tab "\t"

void main()
{
	setlocale(LC_ALL, "Russian");
	int n;	//Число для вычисления факториала
	cout << "Введите число для вычисления Факториала: "; cin >> n;
	double f = 1;	//Факториал числа
	for (int i = 1; i <= n; i++)
	{
		cout << i << "! = ";
		f = f * i;
		//f *= i;
		cout << f << endl;
	}
	cout << endl;
}