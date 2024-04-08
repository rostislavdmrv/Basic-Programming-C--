#include <iostream>
#include <ctime>
const int N= 10;
void enter(char a[]);
void sort(char a[]);
using namespace std;
int main()
{
    setlocale(LC_ALL,"BG");
    char array[N];
    enter(array);
    for (int i = 0; i < N; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
   sort(array);
   for (int i = 0; i < N; i++)
   {
       cout << array[i] << " ";
   }
    
   
    
    
}
void enter(char a[])
{
    
    srand(time(0));
    for (size_t i = 0; i < N; i++)
    {
       a[i]=char('a' + rand() % 26); 
    }
    
}
void sort(char a[])
{ 
    for (int i = 0; i < N - 1; i++)
    {
        for (int j = 0; j < N - i - 1; j++)
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
