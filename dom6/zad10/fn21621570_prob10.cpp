#include <iostream>
using namespace std;
int main();

void print(int s[], int b, int t );
int main()
{
	setlocale(LC_ALL, "BG");
	int array[10]= {1,2,3,4,5,6,7,8};
	int  num;
	int kratno;
	do
	{ 
		cout << "�������� ������ �� ������ �� 1-10: " ;
		cin >> num;
	} while (num < 1 || num > 10);
	
	
	cout << "��������� ����� ��: "<< num <<" ��������" << endl;	
	cout << "������ �� ";
	cin >> kratno;
		print(array, num, kratno);
	

}

void print(int s[], int b, int t )
{

	int count = 0;
	int ccount = 0;
	for (int arrayindex = 0; arrayindex < b; arrayindex++)
	{

		if (!(s[arrayindex] % t))
		{
			count++;
		}
		else
		{
			ccount++;
		}

	}
	cout << "������ �� " << t <<": " << count << endl;
	cout << "�� �� ������ �� " << t <<": " << ccount << endl;

}