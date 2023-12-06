#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "BG");
	int a;
	cout << endl << "Enter a:" << endl;
	cin >> a;
	if (a >= 0)
	{
		if (a % 2 == 0)
		{
		cout << "Числото  е  положително  и  четно " << endl;
		}
		else 
		{
			cout << "Числото  е  положително,  но нечетно" << endl;
		}

	}
	else if(a % 2 == 0)
	{
		cout << "Числото  е  четно,  но  не  е  положително " << endl;
	}
	else
	{
		cout << "Числото  не  е  нито положително, нито четно " << endl;
	}
	return 0;
}