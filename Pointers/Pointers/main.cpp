#include<iostream>
using namespace std;
//Pointer - 
//(ОЗУ/RAM)
//Hexadecimal - Шестнадцетиричная система счисления.
//(Hex)

//#define POINTERS_BASICS	//Основы указателей
#define POINTERS_AND_ARRAYS	//Указатели и массивы

void main()
{
	setlocale(LC_ALL, "Russian");
#ifdef POINTERS_BASICS
	cout << "Hello Pointers" << endl;
	int a = 2;
	int* pa = &a;	//& - Оператор взятия адреса (Address-of operator)
	cout << a << endl;	//Вывод переменной 'a' на экран
	cout << &a << endl;	//Взятие адреса переменной 'a' прямо при выводе
	cout << pa << endl;	//Вывод адреса переменной 'a', хранящегося в указателе 'pa'
	cout << *pa << endl;//* - Оператор разыменования (Derefence operator)
	//'pa'  - работаем с адресом
	//'*pa' - работаем со значением по адресу

	double* pb;
	double b = 3;
	pb = &b;	//Инициализируем указатель после его объявления.
	cout << b << endl;
	cout << &b << endl;
	cout << pb << endl;
	cout << *pb << endl;
	//int  - 'int'
	//int* - Указатель на 'int'
	//double  - 'double'
	//double* - Указатель на 'double'
	//char  - 'char'
	//char* - Указатель на 'char'  
#endif // POINTERS_BASICS

#ifdef POINTERS_AND_ARRAYS
	const int n = 5;
	short arr[n] = { 3, 5, 8, 13, 21 };
	cout << arr << endl;	//Имя массива является указателем на массив,
	//поскольку содержит адрес нулевого элемента массива, а следовательно
	//и адрес всего массива.
	cout << *arr << endl;	//Разыменовав адрес массива, мы получаем нулевой элемент этого массива
	for (int i = 0; i < n; i++)
	{
		cout << *(arr + i) << "\t";
	}
	cout << endl;

	/*
	------------------------
	+, -, ++, --
	------------------------
	*/
#endif // POINTERS_AND_ARRAYS

}