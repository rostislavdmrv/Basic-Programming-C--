#include <iostream>
#include <windows.h>
using namespace std;
void enter(int a[], int length);
void check(int a[], int length);

int main()
{
	SetConsoleOutputCP(1251);
	int array[5];
	enter(array, 1);
	check(array, 1);
}
void enter(int a[], int length)
{
	for (int i = 0; i < length; i++)
	{
		cin >> a[i];
	}
}
void check(int a[], int length)
{
	int count = 0;
	for (int i = 0; i < length; i++)
	{
		if (a[i] == a[length - 1 - i]) 
			count++;
	}
	if (count == length)
	{
		cout << "Да" << endl;
	}
	else
	{
		cout << "Не" << endl;
	}
}
