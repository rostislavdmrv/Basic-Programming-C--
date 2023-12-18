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
	cout << "Въведете отговора си : " << endl;
	char a;
	cin.get(a);
	otgovor(a);
	return 0;

}
void uslovie()
{
	cout << "Васил Левски е роден през : " << endl;
	cout << setfill('-');
	cout << setw(13) << "a) 1837 г." << endl;
	cout << setw(13) << "б) 1778 г." << endl;
	cout << setw(13) << "в) 1901 г." << endl;

}
int otgovor(int s)
{
	if (s=='А'|| s== 'а')
	{ 
		cout << "Верен отговор " << endl;
	}
	  else if (s == 'Б' || s == 'б')
	{
		cout << "Грешен отговор  " << endl;
	}
	  else if (s == 'В' || s == 'в')
	{
		cout << "Грешен отговор  " << endl;
	}
	  else 
	{
		cout << "Невалиден отговор  " << endl;
	}
	return 0;
}