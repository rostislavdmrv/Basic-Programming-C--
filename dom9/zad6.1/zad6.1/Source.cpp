#include <iostream>
#include <string>
#include <iomanip>
#include <windows.h>
using namespace std;
const int N = 5;
struct Sustezatel {
	long number;
	string fname;
	string lname;
	int time;

};
Sustezatel enterSustezatel();
void enterSustezateli(Sustezatel sustezatel[]);
void printSustezatel(Sustezatel sustezatel);
void printSustezateli(Sustezatel sustezatel[]);
void sortSustezateli(Sustezatel sustezteli[], Sustezatel sortedSustezateli[]);
void FindSustezatel(Sustezatel sustezatel[]);
int main()
{
	setlocale(LC_ALL, "BG");
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	Sustezatel sustezatel[N];
	Sustezatel sortedsustezatel[N];
	int option;

	cout << "1.Въвеждане данни в масива." << endl;
	cout << "2.Извеждане на списък на участниците –стартов номер и имена на участника." << endl;
	cout << "3.Класиране на участниците във възходящ ред на времето за изминаване на дистанцията." << endl;
	cout << "4.Проверка на индивидуални резултатина участник ." << endl;
	cout << "5.Край." << endl;
	do {

		do {
			cout << "Въведете избор(1-5):";
			cin >> option;
			cin.ignore();

		} while (option < 1 || option>5);

		switch (option)
		{
		case 1:enterSustezateli(sustezatel); break;
		case 2:printSustezateli(sustezatel); break;
		case 3:sortSustezateli(sustezatel, sortedsustezatel); printSustezateli(sortedsustezatel); break;
		case 4:FindSustezatel(sustezatel); break;

		}

	} while (option != 5);
}
Sustezatel enterSustezatel()
{
	Sustezatel sustezatel;
	int min = 20;
	int max = 40;
	sustezatel.number = 1001;
	cout << "Въведете име на състезателя:";
	getline(cin, sustezatel.fname);
	cout << "Въведете фамилия на състезателя:";
	getline(cin, sustezatel.lname);
	sustezatel.time = min + (rand() % (max - min + 1));
	return sustezatel;
}
void enterSustezateli(Sustezatel sustezatel[])
{
	for (int i = 0; i < N; i++)
	{
		sustezatel[i] = enterSustezatel();
	}
}
void printSustezatel(Sustezatel sustezatel)
{
	//cout << "Номер на участника: " << 1000 + 1;
	cout << "Име и фамилия: " << sustezatel.fname << " " << sustezatel.lname << endl;
	cout << "Време:" << sustezatel.time << endl;
}
void printSustezateli(Sustezatel sustezatel[])
{
	for (int i = 0; i < N; i++)
	{
		sustezatel[i].number = sustezatel[i].number + i;
		cout << "Номер на участника: " << sustezatel[i].number << endl;
		printSustezatel(sustezatel[i]);
	}

}
void sortSustezateli(Sustezatel sustezteli[], Sustezatel sortedSustezateli[])
{
	for (int i = 0; i < N; i++)
	{
		sortedSustezateli[i] = sustezteli[i];
	}
	for (int i = 0; i < N - 1; i++)
	{
		for (int j = 0; j < N - 1 - i; j++)
		{
			if (sortedSustezateli[j].time > sortedSustezateli[j + 1].time)
			{
				Sustezatel  temp = sortedSustezateli[j];
				sortedSustezateli[j] = sortedSustezateli[j + 1];
				sortedSustezateli[j + 1] = temp;


			}
		}
	}
}
void FindSustezatel(Sustezatel sustezatel[])
{
	int number;
	cout << "Въведете номер на състезател:";
	cin >> number;
	for (int i = 0; i < N; i++)
	{
		if (number == sustezatel[i].number)
		{
			printSustezatel(sustezatel[i]);
		}

	}
}