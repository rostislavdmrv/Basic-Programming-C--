#include <iostream>
#include <iomanip>
#include <windows.h>
using namespace std;
void uslovie();
int otgovor(int);
int main()
{
	setlocale(LC_ALL, "BG");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	uslovie();
	cout << "�������� �������� �� : " << endl;
	char a;
	cin.get(a);
	otgovor(a);
	return 0;

}
void uslovie()
{
	cout << "����� ������ � ����� ���� : " << endl;
	cout << setfill('-');
	cout << setw(13) << "a) 1837 �." << endl;
	cout << setw(13) << "�) 1778 �." << endl;
	cout << setw(13) << "�) 1901 �." << endl;

}
int otgovor(int s)
{
	if (s=='�'|| s== '�')
	{ 
		cout << "����� ������� " << endl;
	}
	  else if (s == '�' || s == '�')
	{
		cout << "������ �������  " << endl;
	}
	  else if (s == '�' || s == '�')
	{
		cout << "������ �������  " << endl;
	}
	  else 
	{
		cout << "��������� �������  " << endl;
	}
	return 0;
}