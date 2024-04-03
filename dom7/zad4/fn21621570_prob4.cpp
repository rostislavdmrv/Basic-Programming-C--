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
        if (str[i] == 'а') brA++;
        if (str[i] == 'о')brO++;
    }
    if (brA == brO) cout << "Равенство" << endl;
    else if (brA > brO) cout << "А се среща повече от О" << endl;
    else cout << "О се среща повече от А" << endl;
}
