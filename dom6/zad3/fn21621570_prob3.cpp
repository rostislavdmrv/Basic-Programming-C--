#include <iostream>
using namespace std;
int main();
void enter(double a[], double b);
void print(double a[], double b);
int main()
{
	setlocale(LC_ALL, "BG");
	double array[10];
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
void enter(double a[], double b)
{
	int count = 0;
	for (int arrayindex = 0; arrayindex < b; arrayindex++)
	{
		count++;
		cout << "Елемент " << count << ":";
		cin >> a[arrayindex];
	}
}
void print(double a[], double b)
{
	
	int count = 0;
	for (int arrayindex = 0; arrayindex <b; arrayindex++)
	{
		count++;
		double mirrorindex = b - arrayindex ;
		double swap = a[arrayindex];
		a[arrayindex] =mirrorindex;
		mirrorindex = swap;


		cout << "Елемент " << count << "->" << a[arrayindex] << endl;
	}
}