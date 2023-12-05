#include <iostream>
using namespace std;
int main()
{
	double a;
	double b;
	cout << endl << "Enter a:" << endl;
	cin >> a;
	cout << endl << "Enter b:" << endl;
	cin >> b;
	if (a>b)
	{
		cout <<a << " is bigger than "<< b << endl;
	}
	else
	{
		cout << b << " is bigger than " << a << endl;
	}
	return 0;
}