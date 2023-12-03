#include <iostream>
using namespace std;
int main()
{
	cout << "Enter const1 :" << endl;
	int A ;
	cin >> A;
	cout << "Enter const2 :" << endl;
	int B ;
	cin >> B;
	/*Извършвам обикновено деление без остатък */
	double C = A/B;
	cout <<"Result of C= " << C << endl;
	/*Извършвам обикновено деление без остатък , но преди това променян типа на променливата ,като присвоявам целочислен тип към тип с плаваща запетая,връща остатък  */
	float a = A;
	double D = a / B;
	cout<< "Result of D= " << D << endl;
	return 0;
}