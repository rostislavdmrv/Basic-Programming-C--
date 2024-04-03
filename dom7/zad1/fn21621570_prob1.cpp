#include <iostream>
using namespace std;
int main();
void enter(int a[], int b);
int sreshalise(int a[], int b, int n);

int main()
{
	setlocale(LC_ALL, "BG");
	int const arr = 5;
	int array[arr];
	cout << "Въведете елементите на масива :";
	enter(array, arr);
	int num;
	cout << "Въведете числото :";
	cin >> num;
    cout << sreshalise(array, arr, num);
	  
	
	
}
void enter(int a[], int b)
{
	
	for (int arrayindex = 0; arrayindex < 5; arrayindex++)
	{
		
		cin >> a[arrayindex];
	}
}
int sreshalise(int a[], int b, int n)
{
	
	int index = 0;
	for (int i = 1; i <= b; i++)
	{
		if (n == a[i])
		{
			index = i;
		}

	}
	return index;

}