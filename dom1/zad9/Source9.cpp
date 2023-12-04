#include <iostream>
#include<math.h>
using namespace std;
int main()
{
	cout << "Enter x : ";
	int x;
	cin >> x;
	double y;
	y = 2 * sin(x) * pow(cos(x), 2) + 1;
	cout << "The result x = " << y  << endl;
	return 0;
}
