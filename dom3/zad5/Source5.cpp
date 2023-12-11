#include <iostream>
using namespace std;
int  Point (int ,int );

int main()
{
	setlocale(LC_ALL, "BG");
	cout << "Въведете x : ";
	int x;
	cin >> x;
	cout << "Въведете y:  ";
	int y;
	cin >> y;
	int point = Point(x,y);
	}
	
int Point(int xz, int yz)
{
		if (xz >=0 && yz >= 0)
		{
			cout << "Точките лежат в първи квадрант " << endl;
		}
		else
		{
			cout << "Точките не лежат в първи квадрант" << endl;
		}
		return 0;
}
	
	
