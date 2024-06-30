#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "BG");
    char letter ;

    while (true)
    {
        cout << "Въведете малката буква :";
        cin >> letter;

        if (!(letter >= 97 && letter <= 122))
        {
            continue;
        }
        cout << "Главната буква - " << (char)(letter - 32) << endl;
    }
}
