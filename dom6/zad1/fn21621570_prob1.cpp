#include <iostream>
using namespace std;
void proverka( double a[], int count);
void proverka1(float a[], int count);
void proverka2(float a[], int count);
int main()
{
	setlocale(LC_ALL, "BG");
	int firstcount = 8;
	int secondcount = 10;
	int thirdcount = 5;
	double first[8] = { 1, 2, 3, 4, 5, 6, 7, 8 }; 
	float second[10] = { 1.5, 2.6, 3.8, 4.9, 5.7, 6.8, 7.7, 8.8, 9.9, 10.10 };
	float third[5] = { 1.15, 1.26, 1.38, 1.49, 1.57 };
	cout << "first: ";
	proverka(first,firstcount);
	cout << endl << "second: ";
	proverka1(second, secondcount);
	cout << endl << "third: ";
	proverka2(third, thirdcount);

}
void proverka(double a[],int count)
{
	for (int arrayindex = 0; arrayindex < count; arrayindex++)
	{
		cout <<  a[arrayindex] << " ";

	}

}
void proverka1(float a[], int count)
{
	for (int arrayindex = 0; arrayindex < count; arrayindex++)
	{
		cout << a[arrayindex] << " ";

	}

}
void proverka2(float a[], int count)
{
	for (int arrayindex = 0; arrayindex < count; arrayindex++)
	{
		cout <<  a[arrayindex] << " ";

	}

}