#include <iostream>
using namespace std;
void enter(int a[], int count);
int IndexOfMax(int a[], int count);
int IndexOfMin(int a[], int count);
int main()
{
    setlocale(LC_ALL, "BG");
    const int count = 7;
    int array[count];
    cout << "Въведете 7 цени на различните доставчици: ";
    enter(array, count);
    int index = IndexOfMin(array, count);
    cout << "Доставчик " << index + 1 << " предлага най-ниска цена " << array[index] << "лв," << array[index] * 10000 << "лв." << endl;
    int index2 = IndexOfMax(array, count);
    cout << "Доставчик " << index2 + 1 << " предлага най-висока цена " << array[index2] << "лв," << array[index2] * 10000 << "лв." << endl;


}
void enter(int a[], int count)
{
    for (int i = 0; i < count; i++)
    {
        cin >> a[i];
    }
}
int IndexOfMax(int a[], int count)
{

    int index = 0;
    for (int i = 1; i < count; i++)
    {
        if (a[index] < a[i])
        {
            index = i;
        }
    }
    return index;
}
int IndexOfMin(int a[], int count)
{
    int index = 0;
    for (int i = 1; i < count; i++)
    {
        if (a[index] > a[i])
        {
            index = i;
        }
    }
    return index;

}