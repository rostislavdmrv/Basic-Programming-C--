#include <iostream>
#include<math.h>
using namespace std;

int main()
{
	double y;
	cout << endl << "Enter y:" << endl;
	cin >> y;
	double x1 = pow(y, 3) + (pow(y, 2) + 2*y);
	double x2 = 2*((2*y) + 5) / (14 - (y/3.0));

	if (y <= 5)
	{
		cout << " X=  " << x1 << endl;
	}
	else
	{
		cout << " X=  " << x2 << endl;
	}
	return 0;
}