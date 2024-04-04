#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

void enter(int a[], int lenght);
void check(int a[], int lenght, int& br);
void first(int a[], int lenght);
void last(int a[], int lenght);
int main()
{
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "BG");
    int arr[10], brF = 0;
    enter(arr, 10);
    cout << endl;
    check(arr, 10, brF);
    if (brF > 0)
    {
        first(arr, 10);
        last(arr, 10);
    }
}
void enter(int a[], int lenght)
{
    for (int i = 0; i < lenght; i++)
    {
        do
        {
            cout << endl << "Въведете оценка " << i + 1 << ": ";
            cin >> a[i];
        } while (a[i] < 2 || a[i]>6);
    }
}
void check(int a[], int lenght, int& br)
{
    for (int i = 0; i < lenght; i++)
    {
        if (a[i] == 2) br++;
    }
    cout << "Брой двойки: " << br << endl;
}
void first(int a[], int lenght)
{
    int index;
    for (int i = 0; i < lenght; i++)
    {
        if (a[i] == 2)
        {
            index = i;
            break;
        }
    }
    index = 2 * (index + 1);
    cout << "Първа двойка: " << index << " седмица" << endl;
}
void last(int a[], int lenght)
{
    int index;
    for (int i = lenght - 1; i >= 0; i--)
    {
        if (a[i] == 2)
        {
            index = i;
            break;
        }
    }
    index = 2 * (index + 1);
    cout << "Последна двойка: " << index << " седмица" << endl;
}