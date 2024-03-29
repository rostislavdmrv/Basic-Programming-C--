#include <iostream>
#include <string>
#include <conio.h>
using namespace std;
void enter(char a[], int b);
void print(char a[], int b);
int main()
{
	setlocale(LC_ALL, "BG");
	char array[10];
	int  num;
	do
	{
		cout << "Въведете размер на масива от 1-10: ";
		cin >> num;
	} while (num < 1 || num > 10);


	cout << "Въвеждате масив от: " << num << " елемента" << endl;
	enter(array, num);
	cout << endl;
	print(array, num);

}
void enter(char a[], int b)
{

	for (int arrayindex = 0; arrayindex < b; arrayindex++)
	{

		cin >> a[arrayindex];

	}
}
void print(char a[], int b)
{


	for (int arrayindex = b - 1; arrayindex >= 0; arrayindex--)
	{

		cout << a[arrayindex];


	}
}

