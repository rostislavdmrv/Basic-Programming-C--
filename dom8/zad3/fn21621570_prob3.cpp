#include <iostream>
# include <time.h>
using namespace std;
const int N = 10;
void enter(int a[],int lenght);
void asc(int a[], int lenght);
void desc(int a[], int lenght);
void print(int a[], int lenght);
int main()
{
	setlocale(LC_ALL, "BG");
	int array[N];
	enter(array,10);
    int choice;
    do {
        cout << "1. Сортиране - възходящо " << endl;
        cout << "2. Сортиране - низходящо" << endl;
        cout << "3. Отпечатване " << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:asc(array, 10); break;
        case 2:desc(array, 10); break;
        case 3:print(array, 10); break;
        }
    } while (true);
	
}
void enter(int a[], int lenght)
{
    srand(time(0));
    for (int i = 0; i < lenght; i++)
    {
        int min = 0;
        int max = 999;
        int tmp = min + (rand() % (max - min + 1));
        a[i] = tmp;
    }
} 
void asc(int a[], int lenght)
{
    for (int i = 0; i < lenght - 1; i++)
    {
        for (int j = 0; j < lenght - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                int tm = a[j];
                a[j] = a[j + 1];
                a[j + 1] = tm;
            }
        }
    }
}
void desc(int a[], int lenght)
{
    for (int i = 0; i < lenght - 1; i++)
    {
        for (int j = 0; j < lenght - i - 1; j++)
        {
            if (a[j] < a[j + 1])
            {
                int tm = a[j];
                a[j] = a[j + 1];
                a[j + 1] = tm;
            }
        }
    }
}
void print(int a[], int lenght)
{ 
    for (int i = 0; i < lenght; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}