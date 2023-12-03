#include <iostream>
using namespace std;
int main()
{
	cout << "Enter velue of y: ";
	int y;
	cin >> y;
	float x;
	x = (2*y + 5)/(14 - (y/3));
	cout << " The result of x = " << x << endl;
	return 0;
}