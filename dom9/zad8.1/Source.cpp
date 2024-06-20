#include <iostream>
#include <iomanip>
#include <cmath>
#include <stdio.h>
#include <conio.h> 
int const N(30);

using namespace std;
struct newchild
{ string name; 
int month; 
};

void menu(newchild child[], int& br);
void add(newchild child[], int& br);
void addchildren(newchild child[], int& br);
void output_month(newchild child[], int& br);
void output_Oldest(newchild child[], int& br);
void output_Youngest(newchild child[], int& br);

int main()
{
	setlocale(LC_ALL, "BG");
	newchild child[N];
	int br(0);
	menu(child, br);
	return 0;
}
void menu(newchild child[], int& br)
{
	setlocale(LC_ALL, "BG");
	char option = 0;
	char choice = 'n';
	do {
		cout << endl;
		cout << "\nИзберете действие" << endl;
		cout << "1. Добавете ново дете" << endl;
		cout << "2. Добавете група от деца" << endl;
		cout << "3. Извеждане на всички деца,родени през въведен от клавиатурата месец [1-12];" << endl;
		cout << "4. Извеждане на имената на най-малките деца в групата (родени в най-късен месец спрямо всички останали)." << endl;
		cout << "5. Извеждане на имената на най-големите деца в групата (родени в най-ранен месец спрямо всички останали)." << endl;
		option = _getch();
		switch (option)
		{
		case '1': add(child, br); break;
		case '2': addchildren(child, br); break;
		case '3': output_month(child, br); break;
		case '4':output_Oldest(child, br); break;
		case '5':output_Oldest(child, br); break;
		{
			cout << "Наистина ли искате да напуснете програмата? \n"
				"Изберете y за потвърждение или друга буква за отказ." << endl;
			cin >> choice;
			if (choice == 'y')
			{
				option = 0;
				cout << "Довиждане!" << endl;
			}
			break;
		}
		default:
		{
			cout << "Невалиден избор" << endl;
			break;
		}
		}
	} while (choice != 'y');
}
void add(newchild child[], int& br)
{
	if (br == 30)
	{
		cout << "Лимита на групата е 30 деца"; return;
	}
	cout << endl << "Въведете данните за едно дете" << endl;
	cout << endl << "Име на дете " << br + 1 << " : ";
	cin >> child[br].name;
	cout << endl << "Месец на раждане на дете " << br + 1 << " : ";
	//!// 
	do { cin >> child[br].month; } while (child[br].month < 1 || child[br].month>12);
	br++;

}
void addchildren(newchild child[], int& br)
{

	int input_option, count;
	cout << endl << "Въведете данните за група от деца" << endl;
	cout << endl << "На колко деца желаете да добавите данните :";
	cin >> input_option;

	if (br + input_option > 30) { cout << "Лимита на групата е 30 деца"; return; }

	count = br;
	for (int i = count; i < input_option + count; i++)
	{
		cout << endl << "Име на дете " << i + 1 << " : ";
		cin >> child[i].name;
		cout << endl << "Месец на раждане на дете " << i + 1 << " : ";
		do { cin >> child[i].month; } while (child[i].month < 1 || child[i].month>12);
		br++;
	}
}
void output_month(newchild child[], int& br)
{
	int month;
	cout << endl << "Извеждане на всички деца,родени през въведен от клавиатурата месец [1-12]";
	cout << endl << "Въведете месец :";
	cin >> month;

	for (int i = 0; i < br; i++)
	{
		if (child[i].month == month)
		{
			cout << endl << " Името на дете " << i + 1 << " е " << child[i].name;
			cout << endl << " Родено е през " << child[i].month << " месец" << endl;
		}
	}
}
void output_Oldest(newchild child[], int& br)
{

	cout << endl << "Извеждане на имената на най-малките деца в групата (родени в най-късен месец спрямо всички останали).";

	for (int i = 0; i < br; i++)
	{
		if (child[i].month == 1)
		{
			cout << endl << " Името на дете " << i + 1 << " е " << child[i].name;
			cout << endl << " Родено е през " << child[i].month << " месец" << endl;
		}
	}
}
void output_Youngest(newchild child[], int& br)
{
	cout << endl << "Извеждане на имената на най - големите деца в групата(родени в най - ранен месец спрямо всички останали).";

	for (int i = 0; i < br; i++)
	{
		if (child[i].month == 12)
		{
			cout << endl << " Името на дете " << i + 1 << " е " << child[i].name;
			cout << endl << " Родено е през " << child[i].month << " месец" << endl;
		}
	}
}