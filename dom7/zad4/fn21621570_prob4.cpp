#include <iostream>
#include <string>
#include <windows.h>
using namespace std;
void proverka(string str, int& brA, int& brO);
int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    setlocale(LC_ALL, "BG");
    string input = "";
    int br_a(0), br_o(0);
    getline(cin, input);
    proverka(input, br_a, br_o);


}
void proverka(string str, int& brA, int& brO)
{

    for (int i = 0; i < str.length(); i++)
    {
        str[i] = tolower(str[i]);
        if (str[i] == '�') brA++;
        if (str[i] == '�')brO++;
    }
    if (brA == brO) cout << "���������" << endl;
    else if (brA > brO) cout << "� �� ����� ������ �� �" << endl;
    else cout << "� �� ����� ������ �� �" << endl;
}
