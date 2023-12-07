#include <iostream>
using namespace std;
void main()
{
	setlocale(LC_ALL, "BG");
	int d;
	cout << endl << "Моля ,  въведете деня : ";
	cin >> d;
	switch (d)
	{
	case 10:case 20:case 30:cout << "Ден  за  детска консултация " << endl; break;
	case 1:cout << "Затворен заради работа със ЗК " << endl; break;
	case 3:case 18:cout << "Профилактика " << endl; break;
	default : cout << "Отворен  за  посещения " << endl; break;
	}
}