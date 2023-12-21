#include <iostream>
using namespace std;
void programa(int n);
int main()
{
    setlocale(LC_ALL, "BG");
    cout << "Въведете числото :" << endl;
    int num;
    cin >> num;
    if (num < 8)
        cout << "Няма числа в интервала, кратни на 8" << endl;
    programa(num);
}
void programa(int n)
{
  
    for (int i = 1; i <= n; i++)
    {
        if (i % 8 == 0)
        {
            cout << i << endl;
        }
       
    }
 
}