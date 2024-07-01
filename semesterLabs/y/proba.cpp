#include <iostream> 
using namespace std;
void enter(int array [], int const N);
int Max(int array[]);
void Checkarray(int array[], bool boolarray[]);
int const N = 10;
int main()
{
    setlocale(LC_ALL, "BG");
    int array[N];
    bool boolarray[N];
    enter(array, N);
    Checkarray(array, boolarray);

}
void enter(int array[], int const N)
{
    for (int i = 0; i < N; ++i)
    {
        cout << "Въведете число : ";
        cin >> array[i];
    }
}

int Max(int array[])
{
    for (int i = 1; i < 10; ++i)
    {
        if (array[0] < array[i])
        {
            array[0] = array[i];
        }
    }
    return  array[0];
}

void Checkarray(int array[], bool boolarray[])
{
    int num = Max(array);
    for (int i = 0; i < 10; i++)
    {
        if (array[i] == num - 2)
        {
            boolarray[i] = true;
        }
        else
        {
            boolarray[i] = false;
        }
    }
    for (int j = 0; j < 10; j++)
    {
        cout << boolarray[j];
    }
       
} 
