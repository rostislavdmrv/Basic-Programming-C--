#include <iostream>
using namespace std;
int main()
{
	double a;
	double b;
	double c;
	cout << endl << "Enter a:" << endl;
	cin >> a;
	cout << endl << "Enter b:" << endl;
	cin >> b;
	cout << endl << "Enter c:" << endl;
	cin >> c;
	if (a > b&& b<c)
	{
		cout <<" MIN is " << b << endl;
	}
	else if(a<c && b> a)
	{
		cout << " MIN is " << a << endl;
	}
	else
	{
		cout << " MIN is " << c << endl;
	}
	return 0;
}