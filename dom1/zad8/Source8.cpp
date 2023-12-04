#include <iostream>
using namespace std;
int main()
{
	cout << "Enter a:";
	unsigned long a;
	cin >> a;
	cout << "Enter b:";
	unsigned long b;
	cin >> b;
	float c;
	c = sqrt(pow(a,2)+ pow(b, 2));
	cout << "The hypotenuse c= " << c << endl;
	return 0;
}