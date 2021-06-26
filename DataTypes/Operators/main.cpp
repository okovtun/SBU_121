#include<iostream>
using namespace std;

//#define ARITHMETICAL_OPERATORS
//#define ASSIGNMENT_OPERATOR	//Оператор присваивания =
//#define INCREMENT_DECREMENT	//(++/--)
//#define COMPAUND_ASSIGNMENTS	//Составные присваивания
#define CONDITIONAL_OPERATORS	//Операторы сравнения

void main()
{
	setlocale(LC_ALL, "Russian");
#if defined ARITHMETICAL_OPERATORS
	//Unary: +, -;
	//Binary: +, -, *, /, %

	int a = 17;
	int b = 5;
	cout << "Результат:	" << b / a << endl;
	cout << "Остаток:	" << b % a << endl;
#endif

#ifdef ASSIGNMENT_OPERATOR
	//int a = 2 + 3 * 4.5;
	//Переменной слева 'a' присваивает значение выражения справа '2'
	//l-value - переменная слева
	//r-value - выражение справа.
	int a, b, c;
	a = b = c = 0;
	//1. Очень низкий приоритет;
	//2. Ассоциативность "справа налево";
	cout << a << "\t" << b << "\t" << c << endl;
#endif // ASSIGNMENT_OPERATOR

#ifdef INCREMENT_DECREMENT
	//++ increment
	//-- decrement
	int i = 0;
	++i;	//Prefix increment
	i++;	//Postfix (Suffix) increment
	--i;	//Prefix decrement
	i--;	//Postfix decrement
	//::
	int j = ++i;
	cout << i << endl;
	cout << j << endl;
#endif

#ifdef COMPAUND_ASSIGNMENTS

	int a = 2;
	int b = 3;

	//a = a + b;
	a += b;	//Оператор прибавить
	a -= b;	//Отнять
	a *= b;	//a = a * b;
	a /= b;	//a = a / b;
	a %= b;	//a = a % b;

	cout << a << endl;

#endif // COMPAUND_ASSIGNMENTS

#ifdef CONDITIONAL_OPERATORS
	//Условие (Condition) - это сравнение!
	cout << (!true == false) << endl;
	/*if...else...
		switch...
			while...
				do...while
					for...*/
#endif
}