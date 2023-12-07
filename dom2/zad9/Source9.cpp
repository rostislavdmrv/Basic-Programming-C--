#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	double y;
	cout << endl << "Enter y:" << endl;
	cin >> y;
	double r = pow(y, 3) + (pow(y, 4) + 2 * y);
	double s = 2 * ((2 * y) + 5) / (14 - (y / 3.0));
	

	if (y <= 1)
	{
		cout << " X=  " << r << endl;
	}
	else
	{
		cout << " X=  " << s << endl;
	}
	return 0;
}