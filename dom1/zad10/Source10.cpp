#include <iostream>
using namespace std;
int main()
{
	cout << "Please,enter the sum :";
	double EndSum;
	cin >> EndSum;
	double DDS;
	DDS = (EndSum * (20 * EndSum / 100.0)) / (EndSum + (20 * EndSum / 100.0));
	cout << "DDS for " << EndSum << "is " << DDS << endl;
	return 0;
}
