#include <iostream>
using namespace std;
int  Point (int ,int );

int main()
{
	setlocale(LC_ALL, "BG");
	cout << "�������� x : ";
	int x;
	cin >> x;
	cout << "�������� y:  ";
	int y;
	cin >> y;
	int point = Point(x,y);
	}
	
int Point(int xz, int yz)
{
		if (xz >=0 && yz >= 0)
		{
			cout << "������� ����� � ����� �������� " << endl;
		}
		else
		{
			cout << "������� �� ����� � ����� ��������" << endl;
		}
		return 0;
}
	
	
