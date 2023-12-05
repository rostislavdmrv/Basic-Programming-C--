#include <iostream>
using namespace std;
int main()
{
	int a;
	cout << endl << "Enter the number :" << endl;
	cin >> a;
	if (a % 2 == 0)
	{
		cout << a << " is EVEN" << endl;
	}
	else
	{
		cout << a << " is ODD" << endl;
	}
	return 0;
}