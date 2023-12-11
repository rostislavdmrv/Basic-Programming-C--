#include <iostream>
using namespace std;
void printSmart();
void printFinal();

int main()
{
	char s;
	printSmart();
	cin.get(s);
    printFinal();
	return 0;
}
void printSmart()
{
	cout << "Start" << endl;
}
void printFinal()
{
	cout << "Final " << endl;
}