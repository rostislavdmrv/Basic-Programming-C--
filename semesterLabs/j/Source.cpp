#include<iostream>
using namespace std;
int main()
{
    int br = 0;
    int number;
    cout << "Enter a number: ";
    cin >> number;

    while (number != 0)
    {
        if (number % 7 == 0 || number % 5 == 0)
        {
            br++;
        }
       

        cout << "Number: ";
        cin >> number;
    }

    cout << "Numbers : " << br << endl;
}