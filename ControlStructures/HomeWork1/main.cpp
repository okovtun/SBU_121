#include<iostream>
#include<string>
//using namespace std;
using std::cin;
using std::cout;
using std::endl;

#define CALC
#define PRINT(number1, op1, number2, res) cout << "Результат" << endl;\
										cout << number1 << op1 << number2 << "=" << res << endl
//#define PALINDROME

void main()
{
	setlocale(LC_ALL, "Russian");
#ifdef CALC
	double number1;
	double number2;
	char op1;
	double res = 0;
	cout << "Введите выражение через пробел" << endl;
	cin >> number1 >> op1 >> number2;

	switch (op1)
	{
	case '+': cout << number1 << " + " << number2 << " = " << number1 + number2 << endl; break;
	case '-': cout << number1 << " - " << number2 << " = " << number1 - number2 << endl; break;
	case '*': cout << number1 << " * " << number2 << " = " << number1 * number2 << endl; break;
	case '/':
	{
		if (number2 != 0)cout << number1 << " / " << number2 << " = " << number1 / number2 << endl;
		else cout << "Error: Division by zero" << endl;
	}
	break;
	default: cout << "Error: NoOperation" << endl;
	}

#ifdef CALC_BY_IF
	/*if (op1 == '+')
{
	res = number1 + number2;
	PRINT(number1, op1, number2, res);
}
else if (op1 == '-')
{
	res = number1 - number2;
	PRINT(number1, op1, number2, res);
}
else if (op1 == '*')
{
	res = number1 * number2;
	PRINT(number1, op1, number2, res);
}
else if (op1 == '/')
{
	res = number1 / number2;
	PRINT(number1, op1, number2, res);
}
else
{
	cout << "Error: NoOperation" << endl;
}*/
/*cout << "Результат" << endl;
cout << number1 << op1 << number2 << "=" << res << endl;*/
#endif // CALC_BY_IF

#endif // CALC

#ifdef PALINDROME
	int source_number;	//Число, вводимое с клавиатуры
	int reverse_number = 0;//То же число, записанное наоборот
	cout << "Введите число: "; cin >> source_number;
	int buffer = source_number;
	while (buffer > 0)
	{
		reverse_number *= 10;
		reverse_number += buffer % 10;	//Берем младший разряд buffer-а, и сохраняем (запоминаем) его в reverse_number.
		buffer /= 10;	//убираем младший разряд из buffer-а
	}
	cout << source_number << endl;
	cout << reverse_number << endl;
#endif // PALINDROME

	}