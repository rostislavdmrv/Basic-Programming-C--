#include <iostream>
#include <string>
using namespace std;

int main()
{
    setlocale(LC_ALL, "BG");
    string str;
    int count = 0;
    cout << "Въведете изречение: " << endl;
    getline(cin, str);
    for (int i = 0; i < str.length(); i++)
    {

        if (str[i] == ' ')
        {
            count++;
        }

    }
    cout << "Думите са: " << count + 1;
}