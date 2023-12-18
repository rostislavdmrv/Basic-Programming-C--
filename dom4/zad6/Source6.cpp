#include <iostream>
using namespace std;
void  proverka (double a,double b ,double c , double max, double min );
void  swappromqnata(double& m, double& n);
int main()
{
	setlocale(LC_ALL, "BG");
    double max = 0, min = 0;
	cout << "Въведете стойност за  а=  " << endl;
	double a;
	cin >> a;
	cout << "Въведете стойност за  b=  " << endl;
	double b;
	cin >> b;
	cout << "Въведете стойност за  c=  " << endl;
	double c;
	cin >> c;
    cout << "Преди промяната a= " << a << endl;
    cout << "Преди промяната b= " << b<< endl;
    cout << "Преди промяната c= " << c << endl;
    proverka(a, b, c, max, min);
    swappromqnata(a,max);
    swappromqnata(b,c);
    swappromqnata(c,min);
    cout << "След промяната a= " << max << endl;
    cout << "След промяната b= " << b << endl;
    cout << "След промяната c= " << min << endl;
    
}
void  proverka(double num1, double num2, double num3, double max, double min)
{
    if (num1 < num2 && num1 < num3)
    {
        min = num1;
        cout << "Най-малкото число е " << min << "\n";
        
        
    }
    else if (num2 < num3)
    { 
        min = num2;
        cout << "Най-малкото число е " << min << "\n";
        
    }
    else 
    {
        min = num3;
        cout << "Най-малкото число е " << min << "\n";
        
    }
    if (num1 > num2 && num1 > num3) 
    {
        max = num1;
        cout << "Най-голямото число е " << max << "\n";
        
    }
    else if (num2 > num3)
    { 
        max = num2;
        cout << "Най-голямото число е " << max << "\n";
        
    }
    else
    {
        max = num3;
        cout << "Най-голямото число е " << max << "\n";
      
        
    }
    
}
void  swappromqnata(double &m, double &n)
{
   double nov = m;
    m = n;
    n = nov;
   
}