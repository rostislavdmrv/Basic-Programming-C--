#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "BG");
    int num;
    int count = 0;
    cout << "Въведете желаните от Вас  числа :" << endl;
    cin >> num;
    cout << "Въведе отново първото число: " << endl;
    while (num !=0)
    {
        
        cin >> num;
        if (num <= 0)
        {
            continue;
        }
        else 
        {
            count++;
        }
       
        
        
    }

    cout << "Положителните числа са : " << (count);

}