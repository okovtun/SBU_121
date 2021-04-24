//Constrol structures

#include<iostream>
using namespace std;

#define TEMPERATURE
//#define TARGET

void main()
{
	setlocale(LC_ALL, "");
	//cout << "Привет" << endl;
#ifdef TEMPERATURE
	int temperature;
	cout << "Введите температуру воздуха: ";
	cin >> temperature;
	if (temperature > 80)
	{
		cout << "Вы на другой планете" << endl;
	}
	else if (temperature > 50)
	{
		cout << "Вы на экваторе" << endl;
	}
	else if (temperature > 30)
	{
		cout << "Жарко" << endl;
	}
	else if (temperature > 15)
	{
		cout << "Тепло" << endl;
	}
	else if (temperature > 0)
	{
		cout << "Прохладно" << endl;
	}

#endif // TEMPERATURE

#ifdef TARGET
	int number;
	cout << "Введите число: "; cin >> number;
	if (number >= 0 && number <= 10)
	{
		cout << "Вы попали" << endl;
	}
	else
	{
		cout << "Вы промахнулись" << endl;
	}
#endif // TARGET

}