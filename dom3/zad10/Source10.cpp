#include <iostream>
#include <math.h>
using namespace std;
int Disreminanta(int, int, int);
int main()
{
	setlocale(LC_ALL, "BG");
	cout << "�������� �������� �� � = " << endl;
	int a;
	cin >> a;
	cout << "�������� �������� �� b = " << endl;
	int b;
	cin >> b;
	cout << "�������� �������� �� c = " << endl;
	int c;
	cin >> c;
	int stoymost = Disreminanta(a, b, c);
	
}
int Disreminanta(int z, int x, int y)
{
	int formula;
	formula = pow(x, 2) - 4 * z * y;
	if (formula > 0)
	{
		int x1 = -(x)+sqrt(formula) / 2 * z;
		int x2 = -(x)-sqrt(formula) / 2 * z;
		cout<<"���������� �� �1= "<< x1 <<" ���������� �� �2= " << x2 << endl;

	}
	else if (formula == 0)
	{
		int x3 = -(x) / 2 * z;
		cout << "���������� �� �1 � �2= " << x3 << endl;

	}
	else
	{ 
		cout << "��������������� � ����������� � ������������ ���� ������� ! " << endl;
	}
	return 0;
}
