#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
struct Paralelepiped
{
    int a;
    int b;
    int c;
};
const int N = 10;
double randNum();
void enter(Paralelepiped p[]);
void print(Paralelepiped p[]);
void sortVol(Paralelepiped p[], int v[]);
void sortS(Paralelepiped p[], int s[]);
int main()
{
    srand(time(0));
    Paralelepiped prparale[N];
    int obem[N], plosht[N];
    enter(prparale);
    print(prparale);
    sortVol(prparale, obem);
    print(prparale);
    sortS(prparale, plosht);
    print(prparale);

}
double randNum()
{
    int min = 10;
    int max = 100;
    return min + (rand() % (max - min + 1));
}
void enter (Paralelepiped p[])
{
    for (int i = 0; i < N; i++)
    {
        p[i].a = randNum();
        p[i].b = randNum();
        p[i].c = randNum();
    }
}
void print(Paralelepiped p[])
{
    for (int i = 0; i < N; i++)
    {
        cout << i + 1 << ". " << p[i].a << " " << p[i].b << " " << p[i].c << endl;
    }
    cout << endl;
}
void sortVol(Paralelepiped p[], int v[])
{
    for (int i = 0; i < N; i++)
    {
        v[i] = p[i].a * p[i].b * p[i].c;
    }

    bool cont = true;
    for (int i = 0; i < N; i++)
    {
        if (cont == false) break;
        else cont = false;
        for (int j = 0; j < N - i - 1; j++)
        {
            if (v[j] > v[j + 1])
            {
                Paralelepiped tmp = p[j];
                p[j] = p[j + 1];
                p[j + 1] = tmp;
                cont = true;
            }
        }
    }
}
void sortS(Paralelepiped p[], int s[])
{
    for (int i = 0; i < N; i++)
    {
        s[i] = 2 * (p[i].a + p[i].b) * p[i].c;
    }

    bool cont = true;
    for (int i = 0; i < N; i++)
    {
        if (cont == false) break;
        else cont = false;
        for (int j = 0; j < N - i - 1; j++)
        {
            if (s[j] > s[j + 1])
            {
                Paralelepiped tmp = p[j];
                p[j] = p[j + 1];
                p[j + 1] = tmp;
                cont = true;
            }
        }
    }
}