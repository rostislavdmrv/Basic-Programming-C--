#include <iostream>
using namespace std;
void forloop();
void dowhileloop();
void whileloop();
int main()
{ 
	forloop();
	cout << endl;
	whileloop();
	cout << endl;
	dowhileloop();
}
void forloop()
{ 
	for (int i = 5; i >=1; i--)
	{ 
		for (int r = i; r > 0; r--)
		{
			cout << "%";
		}
		cout << endl;
		
	}
}
void whileloop()
{
	cout.left;
	int n = 1, p;
	while (n < 6)
	{
		if (n % 2 == 0)	p = 2;
		else if (n == 1 || n == 5) p = 1;
		else p = 3;
		for (int i = 1; i <= p; i++)
		{
			cout << "%";
		}
		cout << endl;
		n++;
	}
}


void dowhileloop()
{
	int n = 5, p(1);
	do
	{
		cout << setw(p);
		for (int i = 1; i <= n * 2; i++)
		{
			cout << "%";
		}
		n--;
		p++;
		cout << endl;

	} while (n > 0);
	
}
