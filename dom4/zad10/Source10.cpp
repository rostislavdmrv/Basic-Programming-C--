#include <iostream>
#include <cmath>
using namespace std;
bool proverka (double a, double b, double c, double& x1, double& x2, double& x3);

int main()
{
	setlocale(LC_ALL, "BG");
	cout << "�������� �������� �� � :" << "\n";
	int a;
	cin >> a;
	cout << "�������� �������� �� b :" << "\n";
	int b;
	cin >> b;
	cout << "�������� �������� �� c :" << "\n";
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
		cout << "���������� �� �1= " << x1 << endl << " ���������� �� �2= " << x2 << endl;
		return true;
	}
	else if (discriminanta == 0)
	{
		x3 = (-b) / (2 * a);
		cout << "���������� �� �1 � �2= " << x3 << endl;
		return true;
	}
	else {
		return false;
	}
}



