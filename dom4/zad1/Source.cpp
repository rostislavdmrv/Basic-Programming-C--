#include <iostream>
using namespace std;
int Zeroeven(int);
int Zeroodd(int);
int Mzeroeven(int);
int Mzeroodd (int);
int Zero(int);
int main()
{
	setlocale(LC_ALL, "BG");
	cout << "Въведете числото : " << endl;
	int num;
	cin >> num;
	 Zeroeven(num);
	 Zeroodd(num);
	 Mzeroeven(num);
	 Mzeroodd(num);
	 Zero(num);

}
int Zeroeven(int a )
{
	int formula = a / 2.0;
	if (a > 0 && a % 2 == 0)
	{
		cout<< formula;
	}
	return 0;
}
int Zeroodd(int a)
{
	int formula = a * 2;
	if (a > 0 && a % 2 != 0)
	{
		cout<< formula;
	}
	return 0;
}
int Mzeroeven(int a)
{
	int formula = a + 3;
	if (a < 0 && a % 2 == 0)
	{
		cout << formula;
	}
	return 0;
}
int Mzeroodd(int a)
{
	double formula = a - 3.5;
	if (a < 0 && a % 2 != 0)
	{
		cout << formula;
	}
	return 0;
}
int Zero(int a)
{
	int formula = 1000;
	if (a == 0)
	{
	   cout <<  formula;
	}
	return 0;
}

