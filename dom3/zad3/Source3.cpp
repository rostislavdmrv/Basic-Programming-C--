#include <iostream>
using namespace std;
char First(char);
int Aver(int, int, int ,int );
int main()
{
	setlocale(LC_ALL, "BG");
	char ch;
	cin >> ch;
	double stoynost = First(ch);
	int a;
	int b;
	int c;
	int d;
	cin >> a; 
	cin >> b;
	cin >> c;
	cin >> d;
	int result = Aver(a, b, c, d);
	
}  
char First(char s )
{ 
	cout << (double)s << endl;
	return (double)s;
}
int Aver(int x, int v , int n, int m )
{
	double formula;
	formula = (x + v + n + m) / 4.0;
	cout << "Средноаритметичното на четири цели числа е :" << formula << endl;
	return 0;

}

