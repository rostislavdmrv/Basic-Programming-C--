#include <iostream>
using namespace std;
int Pogoliamo(int, int);
int main()
{
	setlocale(LC_ALL, "BG");
	int a, b, c, d, max1, max2;
	cout << "�������� �������� ����� :" << endl;
	cin >> a >> b;
	cout << "�������� �������� ����� :" << endl;
	cin >> c >> d;
	max1 = Pogoliamo(a,b);
	max2 = Pogoliamo(c, d);
	cout <<" ��� - �������� � � � :"<<max1 << " ��� - �������� c � � :" << max2 << endl;

}
int Pogoliamo(int e, int r)
{ 
	if (e > r)
	{
		return e;
	}
	else
	{ 
		return r;
	}
}