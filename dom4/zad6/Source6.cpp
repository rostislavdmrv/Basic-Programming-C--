#include <iostream>
using namespace std;
void  proverka (double a,double b ,double c , double max, double min );
void  swappromqnata(double& m, double& n);
int main()
{
	setlocale(LC_ALL, "BG");
    double max = 0, min = 0;
	cout << "�������� �������� ��  �=  " << endl;
	double a;
	cin >> a;
	cout << "�������� �������� ��  b=  " << endl;
	double b;
	cin >> b;
	cout << "�������� �������� ��  c=  " << endl;
	double c;
	cin >> c;
    cout << "����� ��������� a= " << a << endl;
    cout << "����� ��������� b= " << b<< endl;
    cout << "����� ��������� c= " << c << endl;
    proverka(a, b, c, max, min);
    swappromqnata(a,max);
    swappromqnata(b,c);
    swappromqnata(c,min);
    cout << "���� ��������� a= " << max << endl;
    cout << "���� ��������� b= " << b << endl;
    cout << "���� ��������� c= " << min << endl;
    
}
void  proverka(double num1, double num2, double num3, double max, double min)
{
    if (num1 < num2 && num1 < num3)
    {
        min = num1;
        cout << "���-������� ����� � " << min << "\n";
        
        
    }
    else if (num2 < num3)
    { 
        min = num2;
        cout << "���-������� ����� � " << min << "\n";
        
    }
    else 
    {
        min = num3;
        cout << "���-������� ����� � " << min << "\n";
        
    }
    if (num1 > num2 && num1 > num3) 
    {
        max = num1;
        cout << "���-�������� ����� � " << max << "\n";
        
    }
    else if (num2 > num3)
    { 
        max = num2;
        cout << "���-�������� ����� � " << max << "\n";
        
    }
    else
    {
        max = num3;
        cout << "���-�������� ����� � " << max << "\n";
      
        
    }
    
}
void  swappromqnata(double &m, double &n)
{
   double nov = m;
    m = n;
    n = nov;
   
}