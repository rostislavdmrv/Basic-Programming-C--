#include <iostream>
#include <string>
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


	for (int arrayindex = 0; arrayindex < b; arrayindex++)
	{

		cout << a[arrayindex]<<"-> "<< (int)a[arrayindex] <<endl;


	}
}