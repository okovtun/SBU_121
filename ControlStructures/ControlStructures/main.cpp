//Constrol structures

#include<iostream>
using namespace std;

#define TEMPERATURE
//#define TARGET

void main()
{
	setlocale(LC_ALL, "");
	//cout << "������" << endl;
#ifdef TEMPERATURE
	int temperature;
	cout << "������� ����������� �������: ";
	cin >> temperature;
	if (temperature > 80)
	{
		cout << "�� �� ������ �������" << endl;
	}
	else if (temperature > 50)
	{
		cout << "�� �� ��������" << endl;
	}
	else if (temperature > 30)
	{
		cout << "�����" << endl;
	}
	else if (temperature > 15)
	{
		cout << "�����" << endl;
	}
	else if (temperature > 0)
	{
		cout << "���������" << endl;
	}

#endif // TEMPERATURE

#ifdef TARGET
	int number;
	cout << "������� �����: "; cin >> number;
	if (number >= 0 && number <= 10)
	{
		cout << "�� ������" << endl;
	}
	else
	{
		cout << "�� ������������" << endl;
	}
#endif // TARGET

}