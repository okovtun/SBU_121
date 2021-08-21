#include<iostream>
#include<Windows.h>
using namespace std;

int StrLen(char str[]);

void main()
{
	setlocale(LC_ALL, "");
	//C
	//NULL-Terminator
	//char str[] = { 'H', 'e', 'l', 'l', 'o', 0 };
	
	//char str[] = "Hello";
	//cout << str << endl;


	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	const int n = 20;
	char str[n];
	cout << "¬ведите строку: "; 
	//cin >> str;
	cin.getline(str, n);
	cout << str << endl;
	cout << "ƒлина введенной строки: " << StrLen(str) << endl;
}

int StrLen(char str[])
{
	int i = 0;
	for (; str[i]; i++);
	return i;
}