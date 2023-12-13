#include <iostream>
using namespace std;
int Number(int);
#define S 987;
int main()
{
	setlocale(LC_ALL, "BG");
	int num;
	cout << "Моля, въведете годините си  : " << endl;
	cin >> num;
	int years = Number(num);
}
int Number(int s)
{
	switch (s)
	{
	case 0: case 1: cout << " Baby" << endl;  break;
	case 2: case 3: cout << " Toddle " << endl;  break;
	case 4: case 5: cout << " Preschool " << endl;  break;
	case 6: case 7: case 8: case 9: case 10:case 11: case 12: cout << " Gradeschooler " << endl;  break;
	case 13: case 14: case 15: case 16: case 17:case 18:  cout << " Tean " << endl;  break;
	case 19: case 20:  case 21: cout << " Young Adult  " << endl;  break;
	default: cout << " Adult " << endl;  break;
	}
	return 0;
}
