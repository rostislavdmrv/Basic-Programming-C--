#include <iostream>
using namespace std;
void isprime(int n );
int main()
{
    setlocale(LC_ALL, "BG");
    int num;
    cout << "Въведете числото :" << endl;
    cin >> num;
    if (num > 20)
    {
        cout << "Числото не е в интервала " << endl;
        return 0;
    }
    isprime(num);
    
}
void isprime(int n)
{
      bool prime = true;
      if (n == 0 || n == 1)
      {
          prime = false;
      }
      else
      {
          for (int i = 2; i <= n/2; i++)
          {
              if (n % i == 0)
              {
                  prime = false;
                  break;
              }
          }
      }
    if(prime)
        cout << "Въведеното числото  е просто   " << endl;
    else 
        cout << "Въведеното числото  е съставно  " << endl;

}
