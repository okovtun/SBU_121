#include<iostream>
using namespace std;

int add(int a, int b);	//�������� ������� (���������� ������� - Function declaration)
int sub(double a, int b);
int mul(int a, int b);
double division(double a, double b);

void main()
{
	setlocale(LC_ALL, "");
	int a, b;
	cout << "������� ��� �����:"; cin >> a >> b;
	int c = add(a, b);	//����� ������� - Function call
	cout << "��������� ��������: " << c << endl;
	cout << "��������� ���������:" << sub(a, b) << endl;
	cout << "��������� ���������:" << mul(a, b) << endl;
	cout << "��������� �������:  " << division(a, b) << endl;
}

int add(int a, int b)	//���������� ������� (����������� ������� - Function definition)
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