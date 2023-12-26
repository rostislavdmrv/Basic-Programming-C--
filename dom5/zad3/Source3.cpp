#include <iostream>
using namespace std;
void loop(int n);
int main()
{ 
	setlocale(LC_ALL, "BG");
	cout << "Въведете числото :" << endl;
	int num;
	cin >> num;
	if (num < 1)
	{
		cout << "Невалидна редица " << endl;
		return 0;
	}
	loop(num);

}
void loop(int n)
{
	int sum =0;
	for (int i = 1; i <= n; i++)
	{
		sum += (i * i);
	}
	cout << "Сумата на квадратите е :" << sum << endl;
}