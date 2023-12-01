#include<iostream>
using namespace std;
 int main ()
{
	cout << " Please enter the numbers: " << endl;
	float num1;
	cin >> num1;
	float num2;
	cin >> num2;
	float num3;
	cin >> num3;
	float num4;
	cin >> num4;
	float num5;
	cin >> num5;
	double av;
	av= (num1 + num2 + num3 + num4 + num5)/5.0;
	cout << " The average value of the numbers is" << av << endl;
	
	return 0;
}