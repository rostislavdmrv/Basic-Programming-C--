#include <iostream>
using namespace std;
void vhod(int a[]);
void izhod(int a[]);
int broj(int a[], int l1, int l2);
void funct2( int x[], int p[], int otr[], int& brp, int& brotr);
void izhod1(int x[], int br);
const int N = 10;
int main()
{
    setlocale(LC_ALL, "BG");
    int br = 0;
    int limit1, limit2;
    int mas[N];
    int pol[N];
    int otric[N];
    int  br1 = 0, br2 = 0;
    vhod(mas);
    izhod(mas);
    cout << endl << "Въведете стойността на първата граница : ";
    cin >> limit1;
    cout << "Въведете стойността на втората граница : ";
    cin >> limit2;
    br = broj(mas, limit1, limit2);
    cout << br;
    funct2(mas, pol, otric, br1, br2);
    izhod1(pol, br1);
    izhod1(otric, br2);
   
    
}

void vhod(int a[])
{
    for (int i = 0; i < N; i++)
    {
        cout << "Въведете стойността на " << i + 1 << " елемент: ";
        cin >> a[i];
    }
}

void izhod(int a[])
{
    for (int i = 0; i < N; i++)
    {
        cout << a[i] << " ";
    }
}
int broj(int a[], int num1, int num2)
{
    int el = 0;
    if (num1 > num2)
    {
        int temp = num2;
        num2 = num1;
        num1 = temp;
    }
    for (int i = 0; i < N; i++)
    {
        if (num1 < a[i] && num2 > a[i])
        {
            el++;
        }
    }
    return el;
}
void funct2(int x[], int p[], int otr[], int& brp, int& brotr)
{
     for (int i = 0; i < N; i++)
        {
            if (x[i] < 0)
            {
                p[brp++] = x[i];
            }
            else
            {
                otr[brotr++] = x[i];
            }
        }
    

}
void izhod1(int x[], int br)
{
    for (int i = 0; i < br; i++)
    {
        cout << x[i] << " ";
    }
    cout << endl;
}


