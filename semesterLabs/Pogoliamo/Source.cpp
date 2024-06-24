#include <iostream>
using namespace std;
int Pogoliamo(int, int);
int main()
{
	setlocale(LC_ALL, "BG");
	int a, b, c, d, max1, max2;
	cout << "Âúâåäåòå äâîéêàòà ÷èñëà :" << endl;
	cin >> a >> b;
	cout << "Âúâåäåòå äâîéêàòà ÷èñëà :" << endl;
	cin >> c >> d;
	max1 = Pogoliamo(a,b);
	max2 = Pogoliamo(c, d);
	cout <<" ÍÀÉ - ÃÎËßÌÎÒÎ À È Â :"<<max1 << " ÍÀÉ - ÃÎËßÌÎÒÎ c È ä :" << max2 << endl;

}
int Pogoliamo(int e, int r)
{ 
	if (e > r)
	{
		return e;
	}
	else
	{ 
		return r;
	}
}