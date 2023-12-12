#include <iostream>
#include <math.h>
using namespace std;
char First(char);
double Result(double, double );
int main()
{
	setlocale(LC_ALL, "BG");
	char ch;
	cin >> ch;
	double stoynost = First(ch);
	double a;
	double b;
	cin >> a;
	cin >> b;
	int result = Result(a, b);

}
char First(char s)
{
	cout << (double)s << endl;
	return (double)s;
}
double Result(double c, double d)
{
	double formula;
	formula = 2 * (c + d) / (d - c);
	cout << " X = " << formula << endl;
	return 0;
}