#include <iostream>
#include <string>
#include <windows.h>
using namespace std;
const int lenght = 5;
void enter(int a[]);
void print(int a[]);
void malko(int a[]);
int main()
{
    SetConsoleOutputCP(1251);
    int array[lenght];
    enter(array);
    cout << endl;
    int choi;
    cout << "1. Принтирай масива" << endl;
    cout << "2. Индексът на най-малкия четен елемент" << endl;
    cin >> choi;
    switch (choi)
    {
    case 1:
    {
        print(array);
        break;
    }
    case 2:
    {
        malko(array);
        break;
    }
    }
}
void enter(int a[])
{
    for (int i = 0; i < lenght; i++)
    {
        do
        {
            cout << "Въведете числа межде 5 и 50 :" << endl;
            cin >> a[i];
        } while (a[i] < 5 || a[i]>50);
    }
}
void print(int a[])
{
    for (int i = 0; i < lenght; i++)
    {
        cout << a[i] << " ";
    }
}
void malko(int a[])
{
    int r[lenght], j = 0;
    int index = 0;
    for (int i = 0; i < lenght; i++)
    {
        if (!(a[i] % 2))
        {
            index = i;
            break;
        }
    }
    for (int i = 1; i < lenght; i++)
    {
        if (!(a[i] % 2))
        {
            if (a[i] < a[index]) index = i;
        }
    }

    cout << "Числото с най-малка четна стойност е на " << index + 1 << " позиция" << endl;
}