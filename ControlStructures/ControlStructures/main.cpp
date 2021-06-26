//Constrol structures

#include<iostream>
#include<conio.h>
using namespace std;
using std::cin;
using std::cout;
using std::endl;

#define tab "\t"

//#define TEMPERATURE
//#define TARGET
//#define WHILE
#define DO_WHILE

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

#ifdef WHILE
	int n;		//Количество итераций
	int i = 0;	//Счетчик цикла
	cout << "Введите количество итераций: "; cin >> n;

	while (n)
	{
		cout << n-- << tab;
	}
	cout << endl;

	/*while (i < n)
	{
		cout << ++i << " Hello World" << endl;
		//i++;
	}*/
#endif // WHILE

	char key;
	do
	{
		key = _getch();	//Функция _getch() ожидает нажатие клавиши, 
						//и возвращает ASCII-код нажатой клавиши.
		cout << (int)key << tab << key << endl;
	} while (true);
	__asm
	{
		
	}
}