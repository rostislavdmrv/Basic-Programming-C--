#include <iostream>
using namespace std;
const int N = 5;
void enter(int a[]);
void sortirane(int a[]);
void print(int a[]);
int main()
{
	setlocale(LC_ALL, "BG");
	int array[N];
	enter(array);
	sortirane(array);
	print(array);
}
void enter(int a[])
{
	for (int arrayindex = 0; arrayindex < N; arrayindex++)
	{
		cout << "Въведете елемент :";
		cin >> a[arrayindex];
	}
}
void sortirane(int a[])
{
	
	for (int i = 0; i < N-1; i++)
	{ 
		for (int j = 0; j < N-i-1; j++)
		{ 
			if (a[j] < a[j + 1])
			{
				int temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}

		}

	}
	
}
void print(int a[])
{
	cout << " Сортираният масив в низходящ ред -->";
	for (int i = 0; i < N; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
			
}