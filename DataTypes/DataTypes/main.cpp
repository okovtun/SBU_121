//			DataTypes
//Переменная (Variable) - это именованная область памяти, 
//содержимое которой может изменяться в процессе выполнения программы.
//Объявить
//					Синтаксис объявления переменной:
//							type name;
/*
----------------------------------------------------
DataTypes:
1. Логические: bool (Boolean) занимает 1 Байт памяти, и может хранить одно из двух значений: true либо false;
2. Символьные: char (Character - символ) занимает 1 Байт памяти и содержит один единственный символ в кодировке ASCII.
				Всего ASCII-символов 256 (2 в 8-й степени);
3. Числовые;
----------------------------------------------------
*/

#include<iostream>
using namespace std;

//#define DATA_TYPES
//#define VARIABLES
//#define CONSTANTS

void main()
{
	setlocale(LC_ALL, "Russian");
#ifdef DATA_TYPES
	//cout << (bool)0.0001 << "\n";
/*cout << sizeof(long long ) << endl;
cout << INT_MIN << "\t" << INT_MAX << endl;
cout << LLONG_MIN << "\t" << LLONG_MAX << endl;
cout << ULLONG_MAX << endl;*/

///////////////////////////////////////
//float  - вещественное число одинарной точности
//double - вещественное число двойной точности
	cout << "float:\n";
	cout << sizeof(float) << endl;
	cout << FLT_MIN << "\t" << FLT_MAX << endl;
	cout << "double:\n";
	cout << sizeof(double) << endl;
	cout << DBL_MIN << "\t" << DBL_MAX << endl;
#endif // DATA_TYPES

#ifdef VARIABLES
	/////////////////////////////////////////////
//ИДЕНТИФИКАТОР - ЭТО ИМЯ!!!
//IDENTIFIER - ЭТО ИМЯ!!!
	int Place1;	//Объявление переменной. В ней хранится мусор.
	Place1 = 1;	//Инициализация переменной
	cout << Place1 << endl;
	double price_of_coffee;
	int number_of_cups;
	cout << "Введите стоимость одной чашки: ";
	cin >> price_of_coffee;
	cout << "Введите количество чашек: ";
	cin >> number_of_cups;	//cin - Console In - поток ввода с клавиатуры;
	double total_price = price_of_coffee * number_of_cups;
	cout << "Общая стоимость: " << total_price << endl;
#endif // VARIABLES

#if defined CONSTANTS
	int speed = 0;
	const int MAX_SPEED = 250;

	cout << 547 << endl;//Здесь 547 - числовая константа типа int
	cout << sizeof(547ll) << endl;
	cout << typeid(547.f).name() << endl;

	cout << sizeof('+') << endl;
	cout << sizeof("+") << endl;
	//http://cplusplus.com/doc/tutorial/constants/
#endif

	5;;;;;;;;;;;;;;;;;;;;;;;;;
}