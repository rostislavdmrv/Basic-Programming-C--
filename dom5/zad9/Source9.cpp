#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "BG");
	int num;
	cout << "�������� ������� :" << endl;
	cin >> num;

	while (num < 100 || num > 999)
	{
		cout << "�������� ���������� ����� " << endl;
		cin >> num;

	}
	if (num >= 100 && num <= 999)
	{
		int hun = (num / 100)%10;
		cout << hun << "�������" << endl;
		int ten = (num / 10)%10;
		cout << ten << "��������" << endl;
		int one = num %10;
		cout << one << "�������" << endl;
	}

}