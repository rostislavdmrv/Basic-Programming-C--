#include<iostream>
using namespace std;
int main()
{
	
	cout << "char from " << CHAR_MIN << " to " << CHAR_MAX << " with size : " << sizeof(char) << endl;
	cout << "int  from " << INT_MIN << " to " << INT_MAX << " with size : " << sizeof(int) << endl;
	cout << "long long  from " << LLONG_MIN << " to " << LLONG_MAX << " with size : " << sizeof(long long) << endl;
	
	return 0;
}