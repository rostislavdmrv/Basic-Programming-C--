#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "BG");
    int num;
    int count = 0;
    int sum = 0;
    cout << "Въведете десет последователни числа :" << endl;
    for (int i = 0; i < 10; i++)
    {
        cin >> num;
        if (num <= 0)
        {
            continue;
        }
        else
          count++;
       
    }
    
    cout << "Положителните числа са : " << (count);

}
