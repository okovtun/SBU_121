#include<iostream>
using namespace std;

int add(int a, int b);	//Прототип функции (Объявление функции - Function declaration)
int sub(double a, int b);
int mul(int a, int b);
double division(double a, double b);

void main()
{
	setlocale(LC_ALL, "");
	int a, b;
	cout << "Введите два числа:"; cin >> a >> b;
	int c = add(a, b);	//Вызов функции - Function call
	cout << "Результат сложения: " << c << endl;
	cout << "Результат вычитания:" << sub(a, b) << endl;
	cout << "Результат умножения:" << mul(a, b) << endl;
	cout << "Результат деления:  " << division(a, b) << endl;
}

int add(int a, int b)	//Реализация функции (Определение функции - Function definition)
{
	int c = a + b;
	return c;
}
int sub(int a, int b)
{
	return a - b;
}
int mul(int a, int b)
{
	return a * b;
}
double division(double a, double b)
{
	return a / b;
}

//Linker
//Unresolved external