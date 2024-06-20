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
		cout << "\n�������� ��������" << endl;
		cout << "1. �������� ���� ����" << endl;
		cout << "2. �������� ����� �� ����" << endl;
		cout << "3. ��������� �� ������ ����,������ ���� ������� �� ������������ ����� [1-12];" << endl;
		cout << "4. ��������� �� ������� �� ���-������� ���� � ������� (������ � ���-����� ����� ������ ������ ��������)." << endl;
		cout << "5. ��������� �� ������� �� ���-�������� ���� � ������� (������ � ���-����� ����� ������ ������ ��������)." << endl;
		option = _getch();
		switch (option)
		{
		case '1': add(child, br); break;
		case '2': addchildren(child, br); break;
		case '3': output_month(child, br); break;
		case '4':output_Oldest(child, br); break;
		case '5':output_Oldest(child, br); break;
		{
			cout << "�������� �� ������ �� ��������� ����������? \n"
				"�������� y �� ������������ ��� ����� ����� �� �����." << endl;
			cin >> choice;
			if (choice == 'y')
			{
				option = 0;
				cout << "���������!" << endl;
			}
			break;
		}
		default:
		{
			cout << "��������� �����" << endl;
			break;
		}
		}
	} while (choice != 'y');
}
void add(newchild child[], int& br)
{
	if (br == 30)
	{
		cout << "������ �� ������� � 30 ����"; return;
	}
	cout << endl << "�������� ������� �� ���� ����" << endl;
	cout << endl << "��� �� ���� " << br + 1 << " : ";
	cin >> child[br].name;
	cout << endl << "����� �� ������� �� ���� " << br + 1 << " : ";
	//!// 
	do { cin >> child[br].month; } while (child[br].month < 1 || child[br].month>12);
	br++;

}
void addchildren(newchild child[], int& br)
{

	int input_option, count;
	cout << endl << "�������� ������� �� ����� �� ����" << endl;
	cout << endl << "�� ����� ���� ������� �� �������� ������� :";
	cin >> input_option;

	if (br + input_option > 30) { cout << "������ �� ������� � 30 ����"; return; }

	count = br;
	for (int i = count; i < input_option + count; i++)
	{
		cout << endl << "��� �� ���� " << i + 1 << " : ";
		cin >> child[i].name;
		cout << endl << "����� �� ������� �� ���� " << i + 1 << " : ";
		do { cin >> child[i].month; } while (child[i].month < 1 || child[i].month>12);
		br++;
	}
}
void output_month(newchild child[], int& br)
{
	int month;
	cout << endl << "��������� �� ������ ����,������ ���� ������� �� ������������ ����� [1-12]";
	cout << endl << "�������� ����� :";
	cin >> month;

	for (int i = 0; i < br; i++)
	{
		if (child[i].month == month)
		{
			cout << endl << " ����� �� ���� " << i + 1 << " � " << child[i].name;
			cout << endl << " ������ � ���� " << child[i].month << " �����" << endl;
		}
	}
}
void output_Oldest(newchild child[], int& br)
{

	cout << endl << "��������� �� ������� �� ���-������� ���� � ������� (������ � ���-����� ����� ������ ������ ��������).";

	for (int i = 0; i < br; i++)
	{
		if (child[i].month == 1)
		{
			cout << endl << " ����� �� ���� " << i + 1 << " � " << child[i].name;
			cout << endl << " ������ � ���� " << child[i].month << " �����" << endl;
		}
	}
}
void output_Youngest(newchild child[], int& br)
{
	cout << endl << "��������� �� ������� �� ��� - �������� ���� � �������(������ � ��� - ����� ����� ������ ������ ��������).";

	for (int i = 0; i < br; i++)
	{
		if (child[i].month == 12)
		{
			cout << endl << " ����� �� ���� " << i + 1 << " � " << child[i].name;
			cout << endl << " ������ � ���� " << child[i].month << " �����" << endl;
		}
	}
}