#include <iostream>
#include<string>
#include <windows.h>
using namespace std;
bool check(string str);

int main()
{
	setlocale(LC_ALL, "BG");
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	string str;
	cout << "Въведете:";
	cin >> str;
	if (check(str))
		cout << "YES";
	else
		cout << "NO";
}
bool check(string r)
{
	int i = 0;
	int j = r.length() - 1;
	while (i < j)
	{
		if (r[i] == r[j])
		{
			i++;
			j--;
		}
		else break;
	}
	if (i == j || i > j)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}