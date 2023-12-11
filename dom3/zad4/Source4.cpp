#include <iostream>
#include <math.h>
using namespace std;
 double Volume(double,double);
double Sqsurface(double,double  );
#define PI 3.14;
int main()
{
	setlocale(LC_ALL, "BG");
	cout << "Въведете радиуса : " ;
	double r;
	cin >> r;
	cout << "Въведете височината :  ";
	double h;
	cin >> h;
	double v = Volume(r,h);
	double s = Sqsurface(r, h);
}
double Volume(double rr, double hh)
{
	double V;
	V =(pow(rr, 2) * hh) * PI;
	cout << "Обема е : " << V << endl;
	return V;
}
double Sqsurface(double d, double g)
{
	double S;
	S =2 * d*(d * g) * PI ;
	cout << " Околната павърхнина е : " << S <<endl;
	return S;
}
