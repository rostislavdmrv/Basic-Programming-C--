#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "BG");
	int num;
	int sum = 0;
	cout << "Въведете четирицифрено  число :" << endl;
	cin >> num;


	while (num != 0)
	{
		if (num >= -1234 && num <= 1234)
		{
			int tho = (num / 1000);
			int hun = (num / 100) % 10;
			int ten = (num / 10) % 10;
			int one = num % 10;
			sum = (tho + hun + ten + one) ;
			cout << sum;
			break;
		}
		else
		{
			cout << "Въведете четирицифрено  число :" << endl;
			cin >> num;
		}

	}
}
