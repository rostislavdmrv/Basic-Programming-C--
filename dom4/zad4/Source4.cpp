#include <iostream>
using namespace std;
int promqna(int &x,int &y,int &z);


int main()
{
	setlocale(LC_ALL, "BG");
	cout << "�������� ������� �� �  :" << endl;
	int x;
	cin >> x;
	cout << "�������� ������� �� y :" << endl;
	int y;
	cin >> y;
	cout << "�������� ������� �� z :" << endl;
	int z;
	cin >> z;
	promqna(x, y, z);
	cout << "������ �������� �� �- " << x << endl;
	cout << " ������ �������� �� y- " << y << endl;
	cout<< " ������ �������� �� z- " << z << endl;

}
int promqna(int &q, int &w, int &e)
{
	
	if (q % 3 == 0)
	{ 
		w *= 2;
		
	}
	else
	{
		e = pow(e, 3) + pow(e, 2) + 1;
		
	}
	return 0;
	
}
