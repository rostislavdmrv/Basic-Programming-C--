#include <iostream>
using namespace std;
void resultat(double a ,double ha , double* obikolka, double* lice);
int main()
{ 
	setlocale(LC_ALL, "BG");
	cout << "�������� �������� :" << endl;
	int a;
	cin >> a;
	cout << "�������� ����������:" << endl;
	int ha;
	cin >> ha;
	double obikolka;
	double lice;
	resultat(a, ha, &obikolka, &lice);
	cout << "���������� �� ����� � : " << obikolka << "cm "  << endl;
	cout << "������ �� ����� � : " << lice << "cm "  << endl;

}
void resultat(double b, double hb, double* obik, double* lic)
{ 
	*obik = 4 * b;
	*lic = b * hb;
}

