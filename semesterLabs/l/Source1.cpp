#include<iostream>
using namespace std;
int main()
{
    int proiz=1, sum=0, number;

    cout << "Enter a number: ";
    cin >> number;

    while (number >= 0)
    {
        if (number % 2 == 0)
        {
            sum += number;
        }
        else
        {
            proiz *= number;
        }

        cout << "Enter a number: ";
        cin >> number;
    }

    cout << "The sum of the even numbers is: " << sum << endl << "The multiplication of the odd numbers is: " << proiz;
}
