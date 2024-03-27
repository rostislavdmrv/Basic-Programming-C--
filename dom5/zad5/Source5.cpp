#include <iostream>
using namespace std;
void loop(int n);
int main()
{
	setlocale(LC_ALL, "BG");
	int sec = 1636260720;
	loop(sec);

	
	return 0;

}
void loop(int n)
{
	int h, m;
	int count = 0;
	for (int i = 0; i < 7; i++)
	{
		h = (n / 3600) % 24;
	    m = (n / 60) % 60;
		count++;
		n -= 300;
		cout << "Ден " << count<< " изгрева е бил в  " << h << "ч." << m << "м." << endl;
	}
	
	
}