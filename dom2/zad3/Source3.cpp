#include<iostream>
using namespace std;
int main()
{
	int age;
	cout << endl <<" Enter your age:"<< endl;
	cin >> age;
	if (age >= 18 && age<=110 )
	{
		cout << "You can vote!" << endl;
	}
	else if (age<=0)
	    {
		cout << "Incorrect age!" << endl;

	    }
	else 
	{
		cout << "You can not vote! " << endl;
	}
	return 0;
}