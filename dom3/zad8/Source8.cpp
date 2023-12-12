#include <iostream>
#include <math.h>
using namespace std;
int Speed(int );
int Time (int);
#define S 987;
int main()
{
	setlocale(LC_ALL, "BG");
	int t;
	cout << "Моля, въведете времето  в часове : " << endl;
	cin >> t;
	int skorost = Speed(t);
	int v;
	cout << "Моля, въведете желаната скорост : " << endl;
	cin >> v;
	int vreme = Time(v);

}
int Speed(int s)
{
	int formulas;
	formulas =  987/ s ;
	cout << "Необходимата скорост,с която рябва да се движи влака  е  " << formulas << " km/h" << endl;
	return formulas;
}
int Time(int y)
{
	int formulat;
	formulat = 987 /y;
	cout << "Необходимото време за пътуване  е  " << formulat << " ч." << endl;
	return formulat;
	
}