#include <iostream>
#include <cmath>
using namespace std;
bool proverka(double a ,double b ,double c ,double &obik ,double &lice);

int main()
{
	setlocale(LC_ALL, "BG");
	cout << "Въведете стойност на а :" << "\n";
	double a;
	cin >> a;
	cout << "Въведете стойност на b :" << "\n";
	double b;
	cin >> b;
	cout << "Въведете стойност на c :" << "\n";
	double c;
	cin >> c;
	double obikolka;
	double lice;
	bool result = proverka(a,b,c,obikolka,lice);
	cout << "Обиколката е " << obikolka << endl;
	cout << " Лицето  е " << lice << endl;
	
	
	
}
bool proverka(double a, double b, double c, double& obik, double& lice)
{ 
	if (a>0 && b> 0&& c>0 && a+b >c && a+c>b && b+c>a)
	{
		obik = a + b + c;
		double p = (a + b + c) / 2.0;
		lice = sqrt(p*(p-a)*(p-b)*(p-c));
		return true;
	}
	else
	{
		return false;
	}
}


