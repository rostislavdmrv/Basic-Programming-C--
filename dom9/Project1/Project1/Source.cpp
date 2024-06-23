#include <iostream>
#include <time.h>
using namespace std;
const int N = 10;
void  enter( int array[]);
void sorted(int array[]);
int main()
{
    int array[N];
    enter(array);
    sorted(array);
  
}  
void  enter(int array[])
{  
    srand(time(0));
    for (int i = 0; i < N; i++)
    {
        int min = 0;
        int max = 999;
        int tmp = min + (rand() % (max - min + 1));
        array[i] = tmp;
    }
}



void sorted(  int array[])
{
    bool sorted = true;
    for (int i = 0; i < N; i++)
    {
        if (sorted == false)
            break;
        else sorted = false;
        for (int j = 0; j < N - i - 1; j++)
        {
            if (array[i] < array[j + 1])
            {
                int tmp = shiparray[j];
                shiparray[j] = shiparray[j + 1];
                shiparray[j + 1] = tmp;
                sorted = true;
            }
        }
    }
}