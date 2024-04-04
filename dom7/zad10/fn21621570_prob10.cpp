#include <iostream>
using namespace std;
struct Pravougulnik
{
    int a, b;
};
Pravougulnik input();
int Lice(Pravougulnik z);
int main()
{
    Pravougulnik prav;
    prav = input();
    cout << Lice(prav) << endl;
}
Pravougulnik input()
{
    Pravougulnik z;
    cin >> z.a;
    cin >> z.b;
    return z;
}
int Lice(Pravougulnik z)
{
    return z.a * z.b;
}