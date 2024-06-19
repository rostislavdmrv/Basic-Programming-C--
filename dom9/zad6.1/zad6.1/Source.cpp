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

	cout << "1.��������� ����� � ������." << endl;
	cout << "2.��������� �� ������ �� ����������� �������� ����� � ����� �� ���������." << endl;
	cout << "3.��������� �� ����������� ��� �������� ��� �� ������� �� ���������� �� �����������." << endl;
	cout << "4.�������� �� ������������ ����������� �������� ." << endl;
	cout << "5.����." << endl;
	do {

		do {
			cout << "�������� �����(1-5):";
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
	cout << "�������� ��� �� �����������:";
	getline(cin, sustezatel.fname);
	cout << "�������� ������� �� �����������:";
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
	//cout << "����� �� ���������: " << 1000 + 1;
	cout << "��� � �������: " << sustezatel.fname << " " << sustezatel.lname << endl;
	cout << "�����:" << sustezatel.time << endl;
}
void printSustezateli(Sustezatel sustezatel[])
{
	for (int i = 0; i < N; i++)
	{
		sustezatel[i].number = sustezatel[i].number + i;
		cout << "����� �� ���������: " << sustezatel[i].number << endl;
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
	cout << "�������� ����� �� ����������:";
	cin >> number;
	for (int i = 0; i < N; i++)
	{
		if (number == sustezatel[i].number)
		{
			printSustezatel(sustezatel[i]);
		}

	}
}