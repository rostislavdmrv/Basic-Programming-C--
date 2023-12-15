#include <iostream>
using namespace std;
void resultat(double a ,double ha , double* obikolka, double* lice);
int main()
{ 
	setlocale(LC_ALL, "BG");
	cout << "Въведете страната :" << endl;
	int a;
	cin >> a;
	cout << "Въведете височината:" << endl;
	int ha;
	cin >> ha;
	double obikolka;
	double lice;
	resultat(a, ha, &obikolka, &lice);
	cout << "Обиколката на ромба е : " << obikolka << "cm "  << endl;
	cout << "Лицето на ромба е : " << lice << "cm "  << endl;

}
void resultat(double b, double hb, double* obik, double* lic)
{ 
	*obik = 4 * b;
	*lic = b * hb;
}

