#include<iostream>
using namespace std;

#define tab "\t"

//#define POWER
//#define ASCII
//#define PYTHAGORAS

//#define SQUARE
//#define TRIANGLE_1
//#define TRIANGLE_2
//#define TRIANGLE_3
//#define TRIANGLE_4
//#define ROMBUS
//#define SIMPLE_CHESS
#define CHESS_1

#define VERT_LINE			(char)179
#define HORIZ_LINE			(char)196
#define UPPER_LEFT_ANGLE	(char)218
#define UPPER_RIGHT_ANGLE	(char)191
#define LOWER_LEFT_ANGLE	(char)192
#define LOWER_RIGHT_ANGLE	(char)217
#define WHITE_BOX			(char)219

void main()
{
	setlocale(LC_ALL, "");
#ifdef POWER
	double a;	//Основание степени
	int n;	//Показатель степени
	double N = 1;	//Степень (результат возведения в степень)
	cout << "Введите основание степени: "; cin >> a;
	cout << "Введите показатель степени: "; cin >> n;
	if (n < 0)
	{
		a = 1 / a;
		n = -n;
	}
	for (int i = 0; i < n; i++)
	{
		N *= a;
	}
	cout << a << "^" << n << " = " << N << endl;
#endif // POWER

#ifdef ASCII
	cout << "ASCII-таблица:\n";
	setlocale(LC_ALL, "C");
	for (int i = 0; i < 256; i++)
	{
		/*if (i % 16 == 0)cout << endl;
		cout << (char)i << " ";*/
		cout << i << tab << (char)i << endl;
	}
	cout << endl;
	setlocale(LC_ALL, "Russian");
	cout << "Таблица выведена" << endl;
#endif // ASCII

#ifdef PYTHAGORAS
	for (int i = 1; i <= 10; i++)
	{
		for (int j = 1; j <= 10; j++)
		{
			if (i*j < 100)cout << " ";
			if (i*j < 10)cout << " ";
			cout << i * j << tab;
		}
		cout << endl;
	}
#endif // PYTHAGORAS

	int n;	//Размер фигуры
	cout << "Введите размер фигуры: "; cin >> n;
#ifdef SQUARE
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
#endif // SQUARE

#ifdef TRIANGLE_1
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
#endif // TRIANGLE_1

#ifdef TRIANGLE_2
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
#endif // TRIANGLE_2

#ifdef TRIANGLE_3
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i; j++)cout << "  ";
		for (int j = i; j < n; j++)cout << "* ";
		cout << endl;
	}
#endif // TRIANGLE_3

#ifdef TRIANGLE_4
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n - 1; j++)cout << "  ";
		for (int j = 0; j <= i; j++)cout << "* ";
		cout << endl;
	}
#endif // TRIANGLE_4

#ifdef ROMBUS
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)cout << " ";
		cout << "/";
		for (int j = 0; j < i; j++)cout << "  ";
		cout << "\\";
		cout << endl;
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)cout << " ";
		cout << "\\";
		for (int j = i; j < n - 1; j++)cout << "  ";
		cout << "/";
		cout << endl;
	}
#endif // ROMBUS

#ifdef SIMPLE_CHESS
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			//cout << "* ";
			/*if ((i + j) % 2 == 0)
			{
				cout << "+ ";
			}
			else
			{
				cout << "- ";
			}*/
			//(i + j) % 2 == 0 ? cout << "+ " : cout << "- ";
			cout << ((i + j) % 2 == 0 ? "+ " : "- ");
		}
		cout << endl;
	}
	true;
#endif // SIMPLE_CHESS

	setlocale(LC_ALL, "C");
	n++;
	for (int i = 0; i <= n; i++)
	{
		for (int j = 0; j <= n; j++)
		{
			//cout << "* ";
			if (i == 0 && j == 0)cout << UPPER_LEFT_ANGLE;
			else if (i == 0 && j == n)cout << UPPER_RIGHT_ANGLE;
			else if (i == n && j == 0)cout << LOWER_LEFT_ANGLE;
			else if (i == n && j == n)cout << LOWER_RIGHT_ANGLE;
			else if (i == 0 || i == n)cout << HORIZ_LINE << HORIZ_LINE;
			else if (j == 0 || j == n)cout << VERT_LINE;
			else cout << "  ";
			/*{
				if ((i + j) % 2 == 0)cout << WHITE_BOX << WHITE_BOX;
				else cout << "  ";
			}*/
		}
		cout << endl;
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			//cout << "* ";
			/*if (i == 0 && j == 0)cout << UPPER_LEFT_ANGLE;
			else if (i == 0 && j == n)cout << UPPER_RIGHT_ANGLE;
			else if (i == n && j == 0)cout << LOWER_LEFT_ANGLE;
			else if (i == n && j == n)cout << LOWER_RIGHT_ANGLE;
			else if (i == 0 || i == n)cout << HORIZ_LINE << HORIZ_LINE;
			else if (j == 0 || j == n)cout << VERT_LINE;
			else*/
			{
				if ((i + j) % 2 == 0)cout << WHITE_BOX << WHITE_BOX;
				else cout << "  ";
			}
		}
		cout << endl;
	}
}