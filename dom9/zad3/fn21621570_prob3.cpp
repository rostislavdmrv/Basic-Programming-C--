#include<iostream>
#include<time.h>
#include<iomanip>

using namespace std;
const int N = 5;
struct Delivery
{
    int nomer;
    float shirochina;
    float visochina;
    float duljina;
    double obem;
};
int switch_function(Delivery array[], bool& dostavka);
void enter_array_elements(Delivery array[]);
void display_array_elements(Delivery array[]);
void sorted_array_by_volumeMin(Delivery array[]);
void sorted_array_by_volumeMax(Delivery array[]);

int main()
{
    setlocale(LC_ALL, "BG");
    Delivery array[N];
    cout << "\t\t Добре дошли в нашата куриенска фирма  : " << endl;
    cout << endl;
    bool dostavka = false;
    
    switch_function(array, dostavka);

}

void enter_array_elements(Delivery array[])
{

    for (int i = 0; i <N ; i++)
    {
        cout << "Въведете номера на пратката  " << i + 1 << ": ";
        cin >> array[i].nomer;
       
            cout << "Въведете широчината на пратката " << i + 1 << ": ";
            cin >> array[i].shirochina;
            cout << "Въведете дължината на пратката  " << i + 1 << ": ";
            cin >> array[i].duljina;
            cout << "Въведете висичината на пратката  " << i + 1 << ": ";
            cin >> array[i].visochina;
       
        array[i].obem = array[i].shirochina * array[i].duljina * array[i].visochina;
        cout << endl;
    }

}
void display_array_elements(Delivery array[]) {
    for (int i = 0; i < N; i++)
    {
        cout << "Номера на пратката" << i + 1 << " : " << array[i].nomer << endl;
        cout << " Широчината на пратката " << array[i].shirochina << endl;
        cout << " Дължината на пратката " << array[i].duljina << endl;
        cout << " Височина на пратката " << array[i].visochina << endl;
        cout << endl;
    }
}
void sorted_array_by_volumeMin(Delivery array[])
{
    bool swapped;

    for (int i = 0; i < N - 1; i++)
    {
        swapped = false;
        for (int j = 0; j < N - i - 1; j++)
        {
            if (array[j].obem > array[j + 1].obem)
            {
                Delivery temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
                swapped = true;
            }
        }
        if (swapped == false)
            break;
    }
    cout << "Номер на пратката: " << array[0].nomer << endl;

    cout << "Пратка с най-малък обем: " << array[0].obem << endl << endl;
}
void sorted_array_by_volumeMax(Delivery array[])
{
    bool swapped;

    for (int i = 0; i < N - 1; i++)
    {
        swapped = false;
        for (int j = 0; j < N - i - 1; j++)
        {
            if (array[j].obem < array[j + 1].obem)
            {
                Delivery temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
                swapped = true;
            }
        }
        if (swapped == false)
            break;
    }
    cout << "Номер на пратката: " << array[0].nomer << endl;

    cout << "Пратка с най-голям обем: " << array[0].obem << endl << endl;
}

int switch_function(Delivery array[], bool& dostavka)
{
    short menu_choice;
    bool finish = false;
    while (!finish)
    {
        cout << " Посочете операцията, която искате да извършите от предложените в менюто : " << endl;
        cout << endl;

        cout << " (1)Въвеждане на данните в масива " << endl;
        cout << " (2)Извеждане на данните: номер на пратка и нейните размери" << endl;
        cout << " (3)Извеждане на пратката с най-малък обем" << endl;
        cout << " (4)Извеждане на пратката с най-голям обем" << endl;
        cout << " (5) Изход от програмата" << endl;

        cout << endl;

        cout << endl << "Въведете своя избор : ";
        cin >> menu_choice;

        cout << endl;
        cout << endl;
        system("cls");
        cout << endl;
        switch (menu_choice) {
        case 1:
            cout << "Въвеждане на данните в масива: " << endl;
            cout << endl;
            enter_array_elements(array);
            cout << endl;
            break;
        case 2:
            cout << "Извеждане на данните: номер на пратка и нейните размери: " << endl;
            cout << endl;
            display_array_elements(array);
            //dostavka = true;
            cout << endl;
            break;
        case 3:
            cout << "Извеждане на пратката с най-малък обем  " << endl;
            cout << endl;
            sorted_array_by_volumeMin(array);
            cout << "Пратката е изведена  !" << endl;
            cout << endl;
            break;
        case 4:
            cout << "Извеждане на пратката с най-голям обем   " << endl;
            cout << endl;
            sorted_array_by_volumeMax(array);
            cout << "Пратката е изведена  !" << endl;
            cout << endl;
            break;
        case 5:

            cout << endl;
            finish = true;
            break;
        default:
            break;
        }
    }

    return (0);
}