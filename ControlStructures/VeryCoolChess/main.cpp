#include<iostream>
using namespace std;

//#define Task1
#define Task2

void main()
{
	setlocale(LC_ALL, "");

	int n;
	cout << "¬ведите размер доски: "; cin >> n;
#if defined Task1
	setlocale(LC_ALL, "C");
	for (int i = 0; i <= n; i++)
	{
		cout << '\t';
		for (int j = 0; j <= n; j++)
		{
			((i == 0) & (j == 0) ? cout << char(218) :
				((i == 0) & (j == n)) ? cout << (char)183 :
				((i == n) & (j == 0)) ? cout << (char)192 :
				((i == n) & (j == n)) ? cout << (char)189 :
				((i == 0) || (i == n)) ? cout << (char)196 << (char)196 :
				((j == 0) || (j == n)) ? cout << (char)186 :
				((i + j) % 2) == 0 ? cout << (char)219 << (char)219 : cout << ' ' << ' ');

		}
		cout << endl;
	}
#endif

#if defined Task2
	for (int i = 0; i < n * 5; i++)
	{
		for (int j = 0; j < n * 5; j++)
		{
			(i % 10 < 5 ? ((j % 10 < 5) ? cout << "* " : cout << "  ") :
				((j % 10 < 5) ? cout << "  " : cout << "* "));
		}
		cout << endl;
	}
#endif
}