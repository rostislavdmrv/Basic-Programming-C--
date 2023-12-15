#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int a;
	double b;
	char c;
	int* pa = &a;
	double* pb = &b;
	char* pc = &c;
	cout.setf(ios::left);
	cout << setw(15) << "Variable" << setw(10) <<"Size " << setw(15) << "Pointer " << setw(10) << "Size" << endl;
	cout << setw(15) << "a" << setw(10) << sizeof(a) << setw(15) << "pa" << setw(10) << sizeof(pa) << endl;
	cout << setw(15) << "b" << setw(10) << sizeof(a) << setw(15) << "pa" << setw(10) << sizeof(pa) << endl;
	cout << setw(15) << "c" << setw(10) << sizeof(a) << setw(15) << "pa" << setw(10) << sizeof(pa) << endl;

}