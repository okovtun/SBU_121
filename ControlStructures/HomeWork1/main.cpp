#include <iostream>

using namespace std;

void main()
{
	setlocale(0, "rus");

	int size;
	cout << "Введите размер доски: ";
	cin >> size;

	for (int line = 0; line < size; line++) {
		for (int column = 0; column < size; column++) {
			if ((line / 5 + column / 5) & 1)
				cout << "* ";
			else
				cout << "  ";
		}
		cout << endl;
	}
}