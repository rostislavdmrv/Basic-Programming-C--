#include<iostream>
#include<time.h>
#include<iomanip>
#include<string>
using namespace std;
const int N = 5;
struct Sustezanie
{
    char nomer;
    string ime;
    float tockia;
    float tockib;
    float tockic;
    double obsho;
};
int switch_function(Sustezanie array[]);
void enter_array_elements(Sustezanie array[]);
void display_array_elements(Sustezanie array[]);
void obsh(Sustezanie array[]);
void sorted_array_by_one(Sustezanie array[]);
void sorted_array_by_last(Sustezanie array[]);


int main()
{
    setlocale(LC_ALL, "BG");

    Sustezanie array[N];
    cout << "\t\t  Резултатите на отбора по математика на ТУ-Варна в междууниверситетска олимпиада: " << endl;
    cout << endl;
    switch_function(array);

}

void enter_array_elements(Sustezanie array[])
{
    srand(time(0));
    for (int i = 0; i < N; i++)
    {
        cout << "Въведете факултетния номер на студунт"<< i+1 << ": ";
        cin >> array[i].nomer;
        cout << "Въведете името на студунт" << i + 1 << ": ";
        cin.ignore();
        getline(cin, array[i].ime);
        
        double min = 0;
        double max = 10;
        double random1 = (double)rand() / RAND_MAX;
        double result1 = min + random1 * (max - min);
        array[i].tockia = result1;
        
        double min1 = 0;
        double max1 = 10;
        double random2 = (double)rand() / RAND_MAX;
        double result2 = min1 + random2 * (max1 - min1);
        array[i].tockib = result2;
        
        double min2 = 0;
        double max2 = 10;
        double random3 = (double)rand() / RAND_MAX;
        double result3 = min2 + random3 * (max2 - min2);
        array[i].tockic = result3;

    }
    
}
void display_array_elements(Sustezanie array[]) {
    for (int i = 0; i < N; i++)
    {
        cout << "Студeнт" << i + 1 << " : " << endl;
        cout << "Факултетен номер " << array[i].nomer << endl;
        cout << "Оценка от първо състезание:  " << array[i].tockia << endl;
        cout << "Оценка от второ състезание : " << array[i].tockib << endl;
        cout << "Оценка от трето състезание : " << array[i].tockic << endl;
        cout << endl;
    }
}
void obsh(Sustezanie array[])
{

    for (int i = 0; i < N; i++)
    {
        array[i].obsho = array[i].tockia + array[i].tockib + array[i].tockic;
        cout << "Студент" << i + 1 << " има общо от трите състезания " << array[i].obsho << " точки " << endl;

    }
}
void sorted_array_by_one(Sustezanie array[])
{
    bool swapped;

    for (int i = 0; i < N - 1; i++)
    {
        swapped = false;
        for (int j = 0; j < N - i - 1; j++)
        {
            if (array[j].obsho < array[j + 1].obsho)
            {
                Sustezanie temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
                swapped = true;
            }
        }
        if (swapped == false)
            break;
    }
    cout << "Студентът: " << array[0].ime << endl;

}
void sorted_array_by_last(Sustezanie array[])
{
    bool swapped;

    for (int i = 0; i < N - 1; i++)
    {
        swapped = false;
        for (int j = 0; j < N - i - 1; j++)
        {
            if (array[j].obsho > array[j + 1].obsho)
            {
                Sustezanie temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
                swapped = true;
            }
        }
        if (swapped == false)
            break;
    }
    cout << "Студентът: " << array[0].ime << endl;
}

int switch_function(Sustezanie array[])
{
    short menu_choice;
    bool finish = false;
    while (!finish)
    {
        cout << " Посочете операцията, която искате да извършите от предложените в менюто : " << endl;
        cout << endl;

        cout << " (1)Въвеждане на факултетните номера,  имената на състезателите и техните оценки  " << endl;
        cout << " (2)Извеждане на данните на състезателите " << endl;
        cout << " (3)Извеждане на резултатите на отбора: сумарен брой точки" << endl;
        cout << " (4)Извеждане на състезателя, получил сумарно най-много точки" << endl;
        cout << " (5)Извеждане на състезателя, получил сумарно най-малко точки" << endl;
        cout << " (6) Изход от програмата" << endl;

        cout << endl;

        cout << endl << "Въведете своя избор : ";
        cin >> menu_choice;

        cout << endl;
        cout << endl;
        system("cls");
        cout << endl;
        switch (menu_choice) {
        case 1:
            cout << "Въвеждане на факултетните номера,  имената на състезателите и техните оценки : " << endl;
            cout << endl;
            enter_array_elements(array);
            cout << endl;
            break;
        case 2:
            cout << "Извеждане  на данните на състезателите:" << endl;
            cout << endl;
            display_array_elements(array);
            cout << endl;
            break;
        case 3:
            cout << "Извеждане на резултатите на отбора: сумарен брой точки" << endl;
            cout << endl;
            obsh(array);
            cout << "Точките са изведени!" << endl;
            cout << endl;
            break;
        case 4:
            cout << "Извеждане на състезателя, получил сумарно най-много точки" << endl;
            cout << endl;
            sorted_array_by_one(array);
            cout << "Съзтезателя е изведен !" << endl;
            cout << endl;
            break;
        case 5:
            cout << "Извеждане на състезателя, получил сумарно най-много точки" << endl;
            cout << endl;
            sorted_array_by_last(array);
            cout << "Съзтезателя е изведен !" << endl;
            cout << endl;
            break;
        case 6:
            cout << endl;
            finish = true;
            break;
        default:
            break;
        }
    }

    return (0);
}