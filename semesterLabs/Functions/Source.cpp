#include <iostream>
using namespace std;
void func1(int& x, int& y );
void func2(int& x, int& y);
void func3(int x, int y);

void func1(int& x, int& y)
{
	cout << "Enter" << endl;
	cin >> x,y;
		
}
void func2(int& x, int& y)
{ 
	int c = x;
	x = y;
	y = c;
}
void func3(int x, int y)
{ 
	cout << x << y << endl;
}
int main()
{
	int a, b;
	for (int i = 0; i < 3; i++)
	{
		
		func1(a, b);
		func2(a, b);
		func3(a, b);
	}
	return 0;
}