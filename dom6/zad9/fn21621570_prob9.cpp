#include <iostream>
using namespace std;
int main();
void enter(int a[], int b);
void print(int s[], int b);
int main()
{
	setlocale(LC_ALL, "BG");
	int array[10];
	int  num;
	do
	{
		cout << "�������� ������ �� ������ �� 1-10: ";
		cin >> num;
	} while (num < 1 || num > 10);


	cout << "��������� ����� ��: " << num << " ��������" << endl;
	enter(array, num);
	cout << endl;
	print(array, num);

}
void enter(int a[], int b)
{

	for (int arrayindex = 0; arrayindex < b; arrayindex++)
	{

		cin >> a[arrayindex];

	}
}
void print(int s[], int b)
{
	
	int count = 0;
	int ccount = 0;
	for (int arrayindex = 0; arrayindex < b; arrayindex++)
	{

		if (!(s[arrayindex] % 2))
		{
			count++;
		}
		else
		{
			ccount++;
		}
		
	}
	cout << "������� ����� �� :" << count << endl;
	cout << "��������� ����� ��: " << ccount << endl;

}