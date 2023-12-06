#include <iostream>
using namespace std;

int main()
{
    int a, b, temp;
    cout << "Enter the number a = " ;
    cin >> a;
    cout << "Enter the number b = " ;
    cin >> b;
    if (a<b)
    {
        temp = a;
        a = b;
        b = temp;
        cout << "The swap numbers a = " << a << ", b = " << b << endl;
    }
    else
    {
        cout << "Normal numbers a = " << a << ", b = " << b << endl;
    }
    return 0;
}