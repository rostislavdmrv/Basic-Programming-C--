#include <iostream>
using namespace std;

const int N = 10;

void vhod(int x[])
{
    for (int i = 0; i < N; i++)
    {
        cout << "Enter value for the " << i + 1 << " element: ";
        cin >> x[i];
    }
}

void izhod(int x[])
{
    for (int i = 0; i < N; i++)
    {
        cout << x[i] << " ";
    }
    cout << endl;
}

void izhod(int x[], int br)
{
    for (int i = 0; i < br; i++)
    {
        cout << x[i] << " ";
    }
    cout << endl;
}

int broj(int x[], int l1, int l2)
{
    int elemetsInTheLimit = 0;
    if (l1 > l2)
    {
        int temp = l2;
        l2 = l1;
        l1 = temp;
    }
    for (int i = 0; i < N; i++)
    {
        if (l1 <= x[i] && l2 >= x[i])
        {
            elemetsInTheLimit++;
        }
    }
    return elemetsInTheLimit;
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

int main()
{
    int mas[N], pol[N], otric[N];
    int br, limit1, limit2, br1 = 0, br2 = 0;
    vhod(mas);

    izhod(mas);
    cout << "Enter value for the first limit: ";
    cin >> limit1;
    cout << "Enter value for the second limit: ";
    cin >> limit2;
    br = broj(mas, limit1, limit2);
    cout << br << endl;

    funct2(mas, pol, otric, br1, br2);
    cout << funct2;
    izhod(pol, br1);
    izhod(otric, br2);
}