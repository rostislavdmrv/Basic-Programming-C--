#include <iostream>
using namespace std;
void main()
{ 
	setlocale(LC_ALL,"BG");
	int d, m, g, days;
	cout << endl << "Въведи д м г";
	cin >> d >> m >> g;
	switch (m)
	{ 
	case 1:case 3:case 5:case 7:case 8:case 10:case 12: days = 31; break;
    case 4:case 6:case 9:case 11: days = 30; break;
	case 2: if (g % 4 == 0) days = 29; else days = 28; break;//days=(g%4==0)?29:28;
	}
	if (d == days)
	{
		d = 1;
		if (m == 12)
		{
			m = 1;
			g = g + 1;
		}
		else
		{ 
			m = m + 1;
		}
	}
	else
	{
		d = d + 1;
	}
	cout << "D/M/G:" << d << m << g << endl;
}