#include <iostream>
#include <string>
using namespace std;
const int N = 10;
void enter(int a[]);
void print(int a[]);
void razlika(int a[], int r[]);
void sort(int a[], int r[]);
int main()
{
    setlocale(LC_ALL,"BG");
    int array[N], raz[N], result[N], inp;
    enter(array);
    do
    {
        cout << "1.Отпечатай масива " << endl
            << "2. Разликата между всеки елеминт и най- малкия " << endl
            << "3. Сортиран масив по формулата " << endl
            << "4. Изход" << endl;
        cin >> inp;
        switch (inp)
        {
        case 1: print(array); break;
        case 2: razlika(array, raz); print(raz); break;
        case 3: sort(array, result); print(array); break;
        }
    } while (inp != 4);
    return 0;
}
void enter(int a[])
{
    cout << "Въведете числа в интервала [2, 1000]: ";
    for (int i = 0; i < N; i++)
    {
        do
        {
            cin >> a[i];
        } while ((a[i] % 2) && (a[i] > 2 || a[i] < 1000));
    }
}
void print(int a[])
{
    for (int i = 0; i < N; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}
void razlika(int a[], int r[])
{
    int min = a[0];
    for (int i = 1; i < N; i++)
    {
        if (a[i] < min) 
            min = a[i];
    }
    for (int j = 0; j < N; j++)
    {
        r[j] = a[j] - min;
    }
}
void sort(int a[], int r[])
{
    bool cont = true;
    for (int i = 0; i < N; i++)
    {
        r[i] = a[i] * a[i] - 5 * a[i] + 1;
    }
    for (int i = 0; i < N; i++)
    {
        if (cont == false) 
            break;
        else 
            cont = false;
        for (int j = 0; j < N - i - 1; j++)
        {
            if (r[j] > r[j + 1])
            {
                int tmp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = tmp;
                cont = true;
            }
        }
    }
}