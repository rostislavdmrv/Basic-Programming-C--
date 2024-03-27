#include <iostream>
#include<cmath>
#include <iomanip>
using namespace std;
int main()
{
	setlocale(LC_ALL, "BG");
	cout << " Въведете стойстост за х :" << endl;
	double num;
	double sum=0;
	cin>> num;
	for (int n = 1; n <= 20; n++)
	{
		sum += (pow(num, n) + 1) / ((2 * n) + 1);
	     

	}
	
	cout << setiosflags(ios::fixed);
	cout.precision(5);
	cout << sum << endl;
}
