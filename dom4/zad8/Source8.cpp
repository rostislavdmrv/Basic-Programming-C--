#include <iostream>
#include <cmath>

using namespace std;
bool usl(int&);
int main()
{ 
	setlocale(LC_ALL, "BG");
	
	cout << "Въведете стойност на а :" << "\n";
	int a;
	cin >> a;
	usl(a);
	
}
bool usl(int& w)
{
	if (w > 0 && w != 0) 
	{
		double formula = abs(sqrt(w) - 15);
		cout << "Позволено действие " << endl << "a= " << formula << endl;
		return true;
	}
	else 
	{
		cout << "Непозволено действие " << endl;
		return false;
	}
}
