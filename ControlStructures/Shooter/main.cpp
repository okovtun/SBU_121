#include<iostream>
#include<conio.h>
using namespace std;

#define tab "\t"

#define Escape 27
#define Space  32	//������
#define Enter  13

#define up_arrow	72
#define down_arrow	80
#define left_arrow	75
#define right_arrow	77

void main()
{
	setlocale(LC_ALL, "Russian");
	char key;
	do
	{
		key = _getch();
		//cout << (int)key << tab << key << endl;
		/*if (key == 'w' || key == 'W' || key == up_arrow)
			cout << "������" << endl;

		else if (key == 's' || key == 'S' || key == down_arrow)
			cout << "�����" << endl;
		else if (key == 'a' || key == 'A' || key == left_arrow)
			cout << "�����" << endl;
		else if (key == 'd' || key == 'D' || key == right_arrow)
			cout << "������" << endl;
		else if (key == Space)
			cout << "������" << endl;
		else if (key == Enter)
			cout << "�����" << endl;
		else
			if (key != -32)cout << "Error" << endl;*/

		switch (key)
		{
		case up_arrow:
		case 'w':
		case 'W':cout << "������" << endl; break;
		case down_arrow:
		case 's':
		case 'S':cout << "�����" << endl; break;
		case left_arrow:
		case 'a':
		case 'A':cout << "�����" << endl; break;
		case right_arrow:
		case 'd':
		case 'D':cout << "������" << endl; break;
		case Space:cout << "������" << endl; break;
		case Enter:cout << "�����" << endl; break;
		case -32:break;//������� Error ��� ������� �� �������
		default:cout << "Error" << endl;
		}
	} while (key != Escape);
}
