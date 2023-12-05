#include <iostream>
using namespace std;
int main()
{
	const int MAXstars = 5;
	for (int i = MAXstars; i >= 1; i--)
	{
		for (int r = i; r > 0; r--)
		{
			cout << "*";
		}
		cout << endl;
	}

	cout << endl;

	for (int i = 1; i <= MAXstars / 2 + 1; i++)
	{
		for (int r = 1; r <= i; r++) 
		{
			cout << "*";
		}
		cout << endl;
	}

	for (int i = MAXstars / 2; i >= 1; i--)
	{
		for (int r = i; r > 0; r--)
		{
			cout << "*";
		}
		cout << endl;
	}

	cout << endl;

	for (int i = 1; i <= MAXstars; i++)
	{
		for (int r = 1; r <= i; r++)
		{
			cout << "*";
		}
		cout << endl;
	}

	cout << endl;

	for (int i = 0; i < MAXstars; i++)
	{
		for (int n = 0; n < i; n++)
		{
			cout << " ";
		}
		for (int r = MAXstars * 2; r > i * 2; r--) 
		{
			cout << "*";
		}
		for (int s = 0; s < i; s++)
		{
			cout << " ";
		}
		cout << endl;
	}
}
