#include <iostream>
using namespace std;
void main()
{
	setlocale(LC_ALL, "BG");
	int d;
	cout << endl << "���� ,  �������� ���� : ";
	cin >> d;
	switch (d)
	{
	case 10:case 20:case 30:cout << "���  ��  ������ ����������� " << endl; break;
	case 1:cout << "�������� ������ ������ ��� �� " << endl; break;
	case 3:case 18:cout << "������������ " << endl; break;
	default : cout << "�������  ��  ��������� " << endl; break;
	}
}