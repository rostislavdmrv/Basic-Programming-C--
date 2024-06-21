#include <iostream>
#include <string>
using namespace std;
struct Partida
{
    int nomer;
    double sladki[10];
};
const int N = 5;
void input(Partida p[]);
void outputAvg(Partida p[]);
void outputAvgOtklonenie(Partida p[]);
void outputPartida(Partida p);
void outputSmallestSladka(Partida p[]);
double randWeight();
int main()
{
    setlocale(LC_ALL,"BG");
    srand(time(0));
    Partida p[N];
    int in;
    do
    {
        cout << endl << "1. Въведете партидата :" << endl
            << "2. Извеждане на данните по отделни партиди: номер на партида и средно тегло на измерените от нея сладки " << endl
            << "3. Извеждане  на  партидата,  в  която  има  най-голямо абсолютноотклонение  на средното тегло на сладките спрямо очакваното " << endl
            << "4. Извеждане на партидата, в която е отчетена сладката с най-ниско тегло " << endl
            << "5. Изход" << endl;
        cin >> in;
        switch (in)
        {
        case 1: input(p); break;
        case 2: outputAvg(p); break;
        case 3: outputAvgOtklonenie(p); break;
        case 4: outputSmallestSladka(p); break;
        }
    } while (in != 5);
    return 0;
}
void input(Partida p[])
{
    for (int i = 0; i < N; i++)
    {
        cout << "Въведете номера на партита : ";
        cin >> p[i].nomer;
        for (int j = 0; j < 10; j++)
        {
            p[i].sladki[j] = randWeight();
        }
        cout << endl;
    }
}
void outputAvg(Partida p[])
{
    double avgWeight = 0;
    for (int i = 0; i < N; i++)
    {
        cout << p[i].nomer << " ";
        for (int j = 0; j < 10; j++)
        {
            cout << p[i].sladki[j] << " ";
            avgWeight += p[i].sladki[j];
        }
        cout << avgWeight / 10 << endl;
        avgWeight = 0;
        //cout << endl;
    }
}
void outputAvgOtklonenie(Partida p[])
{
    double avgWeight = 0, avgW[N];
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            avgWeight += p[i].sladki[j];
        }
        avgW[i] = abs((avgWeight / 10) - 50);
        avgWeight = 0;
    }
    bool sorted = true;
    for (int i = 0; i < N; i++)
    {
        if (sorted == false) break;
        else sorted = false;
        for (int j = 0; j < N - i - 1; j++)
        {
            if (avgW[j] > avgW[j + 1])
            {
                Partida tmp = p[j];
                p[j] = p[j + 1];
                p[j + 1] = tmp;
                sorted = true;
            }
        }
    }
    outputPartida(p[N - 1]);
}
void outputPartida(Partida p)
{
    cout << p.nomer << " ";
    for (int j = 0; j < 10; j++)
    {
        cout << p.sladki[j] << " ";
    }
}
void outputSmallestSladka(Partida p[])
{
    int noPartida;
    double smallest = p[0].sladki[0];
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (p[i].sladki[j] < smallest)
            {
                smallest = p[i].sladki[j];
                noPartida = i;
            }
        }
    }
    outputPartida(p[noPartida]);
}
double randWeight()
{
    double min = 0.9 * 50;
    double max = 1.1 * 50;
    return min + (((double)rand() / RAND_MAX) * (max - min));
}