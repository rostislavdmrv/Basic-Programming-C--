#include <iostream>
using namespace std;
int promqna(int &x,int &y,int &z);


int main()
{
	setlocale(LC_ALL, "BG");
	cout << "Въведете числото за х  :" << endl;
	int x;
	cin >> x;
	cout << "Въведете числото за y :" << endl;
	int y;
	cin >> y;
	cout << "Въведете числото за z :" << endl;
	int z;
	cin >> z;
	promqna(x, y, z);
	cout << "Новата стойност на х- " << x << endl;
	cout << " Новата стойност на y- " << y << endl;
	cout<< " Новата стойност на z- " << z << endl;

}
int promqna(int &q, int &w, int &e)
{
	
	if (q % 3 == 0)
	{ 
		w *= 2;
		
	}
	else
	{
		e = pow(e, 3) + pow(e, 2) + 1;
		
	}
	return 0;
	
}
