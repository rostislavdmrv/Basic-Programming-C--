#include <iostream>
#include <iomanip>
using namespace std;
double selary(double);
double costs(double);


int main()
{
	setlocale(LC_ALL, "BG");
	double nachalna=5000.0;
	double suma = selary(nachalna) - costs(nachalna);
	cout<<setiosflags(ios::fixed);
	cout.precision(2);
	cout<< "������� ���� �� �-� ��������� �� ���� ����� � " << suma << " lv." << endl;
	

}
 double selary(double a)
{ 
	 double zaplata = a + 3000.0;
	  return zaplata ;
}
 double costs(double razhodi)
 { 
	 razhodi = 4 * 500.0;
	 return razhodi ;
 }