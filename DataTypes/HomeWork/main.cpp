#include<iostream>
using namespace std;

#define TASK_1_VARIANT_1
//#define TASK_1_VARIANT_2

void main()
{
	setlocale(LC_ALL, "Russian");
#if defined TASK_1_VARIANT_1
	float money;
	cout << "Введите денежную сумму: ";
	cin >> money;
	cout << money << endl;
	int grn = money;	//Неявное пребразование типов из double в int
						//это преобразование от бОльшего к меньшему, 
						//которое приводит к потере данных (отсекается дробная часть)
	cout << grn << " грн.\t";
	int cop = (money - grn) * 100;
	cout << cop << " коп.\n";
#endif

#if defined TASK_1_VARIANT_2
	//-----Задача1-----
	double frac_number;
	cout << "Введите дробное число -> ";
	cin >> frac_number;
	cout << frac_number << endl;
	//frac_number += .00001;
	frac_number += 1e-5;//Единица умножить на 10 в -5й степени

	double rub = (int)frac_number;
	double kop = (frac_number - rub) * 100;
	cout << frac_number << " руб. - это " << rub << " руб. " << kop << " коп.\n" << endl;
	//-----------------
#endif
}