#include<iostream>
#include<Windows.h>
using namespace std;

int StrLen(char str[]);
void to_upper(char str[]);

void shrink(char str[]);

bool is_palindrome(char str[]);

void main()
{
	setlocale(LC_ALL, "");
	//C
	//NULL-Terminator
	//char str[] = { 'H', 'e', 'l', 'l', 'o', 0 };

	//char str[] = "Hello";
	//cout << str << endl;

	//for (/*Start*/;/*Stop*/;)		cout << "Hello ";;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

	cout << (int)'A' << endl;
	cout << (int)'a' << endl;

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	const int n = 256;
	//char str[n] = "’орошо        живет     на   свете   ¬инни-ѕух";
	char str[n] = "јргентина манит негра";
	cout << "¬ведите строку: ";
	//cin >> str;
	//cin.getline(str, n);
	cout << str << endl;
	cout << "ƒлина введенной строки: " << StrLen(str) << endl;
	//to_upper(str);
	shrink(str);
	cout << str << endl;
	cout << is_palindrome(str) << endl;
	cout << str << endl;
}

int StrLen(char str[])
{
	int i = 0;
	for (; str[i]; i++);

	return i;
	//for(int i = 0; i<n; i++)
	{
		//....
	}
}

void to_upper(char str[])
{
	for (int i = 0; str[i]; i++)
	{
		//≈—Ћ» элемент сроки str[i] - ћјЋ≈Ќ№ јя Ѕ” ¬ј.
		if (
			str[i] >= 'a' && str[i] <= 'z' ||
			str[i] >= 'а' && str[i] <= '€'
			)
			str[i] -= 32;//тогда преобразуем его в большую букву
	}
}

void shrink(char str[])
{
	for (int i = 0; str[i]; i++)
	{
		while (str[i] == ' ' && str[i + 1] == ' ')
		{
			for (int j = i; str[j]; j++)str[j] = str[j + 1];
		}
	}
}
void remove_symbol(char str[], char symbol)
{
	for (int i = 0; str[i]; i++)
	{
		while (str[i] == symbol)
		{
			for (int j = i; str[j]; j++)str[j] = str[j + 1];
		}
	}
}
bool is_palindrome(char str[])
{
	char* buffer = new char[StrLen(str) + 1]{};
	for (int i = 0; str[i]; i++)buffer[i] = str[i];
	remove_symbol(buffer, ' ');
	int n = StrLen(buffer);
	to_upper(buffer);
	for (int i = 0; i < n / 2; i++)
	{
		if (buffer[i] != buffer[n - 1 - i])
		{
			delete[] buffer;
			return false;
		}
	}
	delete[] buffer;
	return true;
}