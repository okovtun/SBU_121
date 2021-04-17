#include<iostream>
using namespace std;

//#define ЧТО_ЗАМЕНИТЬ ЧЕМ_ЗАМЕНИТЬ
//define - определить
//definition - определение
//Директива #define создает макроопределение (макрос)
#define offset "\t\t\t\t\t"	//offset - имя макроса, "\t\t\t\t" - значение макроса
//#define ПОНЯТИЕ ОПРЕДЕЛЕНИЕ

int main()
{
	setlocale(LC_ALL, "Russian");
	cout << offset << "В лесу родилась елочка, \n";
	cout << offset << "В лесу она росла, \n";
	cout << offset << "Зимой и летом стройная, \n";
	cout << offset << "Зеленая была. \n";
	//cout << "\n";
	cout << endl;

	cout << offset << "Метель ей пела песенку, \n";
	cout << offset << "\"Спи,елочка бай бай!\"\n";
	cout << offset << "Мороз снежком укутывал: \n";
	cout << offset << "\"Смотри, не замерзай!\"\n";
	cout << endl;

	cout << offset << "Трусишка зайка серенький \n";
	cout << offset << "Под елочкой скакал. \n";
	cout << offset << "Порою волк, сердитый волк \n";
	cout << offset << "Рысцою пробегал.\n";
	cout << endl;

	cout << offset << "Чу!Снег по лесу частому \n";
	cout << offset << "Под полозом скрипит, \n";
	cout << offset << "Лошадка мохноногая \n";
	cout << offset << "Торопится, бежит. \n";
	cout << endl;

	cout << offset << "Везет лошадка дровенки, \n";
	cout << offset << "А в дровнях старичок, \n";
	cout << offset << "Срубил он нашу елочку \n";
	cout << offset << "Под самый корешок. \n";
	cout << endl;

	cout << offset << "Теперь она, нарядная, \n";
	cout << offset << "Hа праздник к нам пришла \n";
	cout << offset << "И много, много радости \n";
	cout << offset << "Детишкам принесла! \n";
}