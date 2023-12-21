#include <iostream>
#include <cmath>
using namespace std;
bool proverka (double a, double b, double c, double& x1, double& x2, double& x3);

int main()
{
	setlocale(LC_ALL, "BG");
	cout << "Въведете стойност на а :" << "\n";
	int a;
	cin >> a;
	cout << "Въведете стойност на b :" << "\n";
	int b;
	cin >> b;
	cout << "Въведете стойност на c :" << "\n";
	int c;
	cin >> c;
	double x1, x2, x3;
     proverka(a, b, c,x1,x2,x3);
	


}
bool proverka(double a, double b, double c, double& x1, double& x2, double& x3)
{
	double discriminanta;
	discriminanta = pow(b, 2) - 4 * a * c;

	if (discriminanta > 0)
	{
		x1 = (-b + sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);
		x2 = (-b - sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);
		cout << "Стойността на х1= " << x1 << endl << " Стойността на х2= " << x2 << endl;
		return true;
	}
	else if (discriminanta == 0)
	{
		x3 = (-b) / (2 * a);
		cout << "Стойността на х1 и х2= " << x3 << endl;
		return true;
	}
	else {
		return false;
	}
}



