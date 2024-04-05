#include <iostream>
using namespace std;
const int N= 7;
int count(char a[]);
char enter(char a[]);

int main()
{
	setlocale(LC_ALL,"BG");
	char array[N];
	cout << "Въведете думата :";
	enter(array);
	count(array);
	cout << "В думата има " << count(array) << "гласни" << endl;
	return 0;
}

char enter(char a[])
{ 
	for (int i = 0; i < N; i++)
		{
	      cin >> a[i];
		}
	return 0;
}

int count(char a[])
{
	int count = 0;
	for (int i = 0; i < N; i++)
	{
		if ('a' == a[i] || 'A' == a[i] || 'o' == a[i] || 'O' == a[i] || 'i' == a[i] || 'I' == a[i] || 'e' == a[i] || 'E' == a[i] || 'u' == a[i] || 'U' == a[i])	
		{
			count++;
		}
		 else 
		{ 
			continue;
			
		}
	}
	return count;
}