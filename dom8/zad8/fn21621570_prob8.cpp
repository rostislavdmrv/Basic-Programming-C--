#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
struct Currency
{
    string name;
    double start;
    double end;
    double razlika;
};
const int N = 10;
double randNum();
void enter(Currency c[], string curr[]);
void print(Currency c[]);
void sort(Currency c[]);
int main()
{ 
    setlocale(LC_ALL,"BG");
    string currency[N] = { "AUD", "BRL", "CAD", "CHF", "CNY", "CZK", "DKK", "GBP", "HKD", "HRK" };
    Currency c[N];
    srand(time(0));
    enter(c, currency);
    print(c);
    sort(c);
    cout << endl << "Сортирани по възходящ ред" << endl << endl;
    print(c);
}
double randNum()
{
    double min = 1;
    double max = 20;
    return min + (((double)rand() / RAND_MAX) * (max - min));
}
void enter(Currency c[], string cur[])
{
    for (int i = 0; i < N; i++)
    {
        c[i].name = cur[i];
        c[i].start = randNum();
        c[i].end = randNum();
        c[i].razlika = abs(c[i].end - c[i].start);
    }
}
void print(Currency c[])
{
    ;
    for (int i = 0; i < N; i++)
    {
        cout << "Вълута: " << c[i].name << endl
            << "Начална цена: " << fixed << setprecision(2) << c[i].start << endl
            << "Крайна цена : " << fixed << setprecision(2) << c[i].end << endl
            << "Изменението: " << fixed << setprecision(2) << c[i].razlika << endl << endl;
    }
}
void sort(Currency c[])
{
    bool cont = true;
    for (int i = 0; i < N; i++)
    {
        if (cont == false) break;
        else cont = false;
        for (int j = 0; j < N - i - 1; j++)
        {
            if (c[j].razlika > c[j + 1].razlika)
            {
                Currency tmp = c[j];
                c[j] = c[j + 1];
                c[j + 1] = tmp;
                cont = true;
            }
        }
    }
}