#include<iostream>
using namespace std;

#define TASK_1_VARIANT_1
//#define TASK_1_VARIANT_2

void main()
{
	setlocale(LC_ALL, "Russian");
#if defined TASK_1_VARIANT_1
	float money;
	cout << "������� �������� �����: ";
	cin >> money;
	cout << money << endl;
	int grn = money;	//������� ������������� ����� �� double � int
						//��� �������������� �� �������� � ��������, 
						//������� �������� � ������ ������ (���������� ������� �����)
	cout << grn << " ���.\t";
	int cop = (money - grn) * 100;
	cout << cop << " ���.\n";
#endif

#if defined TASK_1_VARIANT_2
	//-----������1-----
	double frac_number;
	cout << "������� ������� ����� -> ";
	cin >> frac_number;
	cout << frac_number << endl;
	//frac_number += .00001;
	frac_number += 1e-5;//������� �������� �� 10 � -5� �������

	double rub = (int)frac_number;
	double kop = (frac_number - rub) * 100;
	cout << frac_number << " ���. - ��� " << rub << " ���. " << kop << " ���.\n" << endl;
	//-----------------
#endif
}