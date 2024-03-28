#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "BG");
	int num;
	cout << "Въведете числото :" << endl;
	cin >> num;

	while (num < 100 || num > 999)
	{
		cout << "Въведете трицифрено число " << endl;
		cin >> num;

	}
	if (num >= 100 && num <= 999)
	{
		int hun = (num / 100)%10;
		cout << hun << "стотици" << endl;
		int ten = (num / 10)%10;
		cout << ten << "десетици" << endl;
		int one = num %10;
		cout << one << "единици" << endl;
	}

}