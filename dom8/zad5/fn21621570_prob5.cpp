#include <iostream>
const int N = 5;
using namespace std;
struct Student
{
	char nomer[12];
	float uspeh;
};

int main()
{
	setlocale(LC_ALL, "BG");
	Student uchenik[N];
	cout << "�������� ������� �� ���������� :" << endl;
	for (int i = 0; i < N; i++)
	{
		cout << "�������� ���������� �����: ";
		cin >> uchenik[i].nomer;
		cout << "�������� �����: ";
		cin >> uchenik[i].uspeh;

	}

	for (int i = 0; i < N - 1; i++)
		for (int j = i + 1; j < N; j++)
			if (uchenik[i].uspeh < uchenik[j].uspeh)
			{

				for (int i = 0; i < N - 1; i++)
				{
					for (int j = 0; j < N - i - 1; j++)
					{
						if (uchenik[j].uspeh < uchenik[j + 1].uspeh)
						{
							int tm = uchenik[j].uspeh;
							uchenik[j].uspeh = uchenik[j + 1].uspeh;
							uchenik[j + 1].uspeh = tm;
						}
					}
				}
			}
	for (int i = 0; i < N; i++)
	{
		cout << "���������� �����: " << uchenik[i].nomer << "," << "������ �����: " << uchenik[i].uspeh << endl;

	}

}