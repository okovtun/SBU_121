#include<iostream>
using namespace std;

//#define ���_�������� ���_��������
//define - ����������
//definition - �����������
//��������� #define ������� ���������������� (������)
#define offset "\t\t\t\t\t"	//offset - ��� �������, "\t\t\t\t" - �������� �������
//#define ������� �����������

int main()
{
	setlocale(LC_ALL, "Russian");
	cout << offset << "� ���� �������� ������, \n";
	cout << offset << "� ���� ��� �����, \n";
	cout << offset << "����� � ����� ��������, \n";
	cout << offset << "������� ����. \n";
	//cout << "\n";
	cout << endl;

	cout << offset << "������ �� ���� �������, \n";
	cout << offset << "\"���,������ ��� ���!\"\n";
	cout << offset << "����� ������� ��������: \n";
	cout << offset << "\"������, �� ��������!\"\n";
	cout << endl;

	cout << offset << "�������� ����� ��������� \n";
	cout << offset << "��� ������� ������. \n";
	cout << offset << "����� ����, �������� ���� \n";
	cout << offset << "������ ��������.\n";
	cout << endl;

	cout << offset << "��!���� �� ���� ������� \n";
	cout << offset << "��� ������� �������, \n";
	cout << offset << "������� ���������� \n";
	cout << offset << "���������, �����. \n";
	cout << endl;

	cout << offset << "����� ������� ��������, \n";
	cout << offset << "� � ������� ��������, \n";
	cout << offset << "������ �� ���� ������ \n";
	cout << offset << "��� ����� �������. \n";
	cout << endl;

	cout << offset << "������ ���, ��������, \n";
	cout << offset << "H� �������� � ��� ������ \n";
	cout << offset << "� �����, ����� ������� \n";
	cout << offset << "�������� ��������! \n";
}