#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "BG");
	int a;
	cout << endl << "Enter a:" << endl;
	cin >> a;
	if (a >= 0)
	{
		if (a % 2 == 0)
		{
		cout << "�������  �  �����������  �  ����� " << endl;
		}
		else 
		{
			cout << "�������  �  �����������,  �� �������" << endl;
		}

	}
	else if(a % 2 == 0)
	{
		cout << "�������  �  �����,  ��  ��  �  ����������� " << endl;
	}
	else
	{
		cout << "�������  ��  �  ���� �����������, ���� ����� " << endl;
	}
	return 0;
}