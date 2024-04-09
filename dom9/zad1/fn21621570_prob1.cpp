#include<iostream>
#include<time.h>
#include<iomanip>

using namespace std;
const int iArraySize = 5;
struct Smartphone
{
    string model;
    float price;
};
int switch_function(Smartphone array[]);
void enter_array_elements(Smartphone array[]);
void display_array_elements(Smartphone array[]);
void sorted_array_by_price(Smartphone array[]);


int main()
{
    setlocale(LC_ALL, "BG");
    bool b = false;
    Smartphone array[iArraySize];


    cout << "\t\t Добре дошли в нашия онлайн магазин : " << endl;
    cout << endl;
    switch_function(array);

}

void enter_array_elements(Smartphone array[])
{

    for (int i = 0; i < iArraySize; i++)
    {
        cout << "Въведете модела на телефон " << i + 1 << ": ";
        cin >> array[i].model;
        cout << "Въведете цената на телефон " << i + 1 << ": ";
         cin >> array[i].price;
        

        cout << endl;
    }

}

void display_array_elements(Smartphone array[]) {
    for (int i = 0; i < iArraySize; i++) {
        cout << "Телефон " << i + 1 << " : " << endl;
        cout << " Модел: " << array[i].model << endl;
        cout << " Цена : " << array[i].price << endl;

        cout << endl;
    }
}
void sorted_array_by_price(Smartphone array[])
{
    bool swapped;

    for (int i = 0; i < iArraySize - 1; i++)
    {
        swapped = false;
        for (int j = 0; j < iArraySize - i - 1; j++)
        {
            if (array[j].price > array[j + 1].price)
            {
                Smartphone temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
                swapped = true;
            }
        }
        if (swapped == false)
            break;
    }
}

int switch_function(Smartphone array[]) {
    short menu_choice;
    
    bool finish = false;
    while (!finish)
    {
        cout << " Посочете операцията, която искате да извършите от предложените в менюто : " << endl;
        cout << endl;

        cout << " (1)Въвеждане на данните за всеки телефон" << endl;
        cout << " (2)Извеждане на списък на всички предлагани телефони с техните цени" << endl;
        cout << " (3)Сортиране на предлаганите телефони във възходящ ред, съобразно тяхната цена" << endl;
        cout << " (4) Изход от програмата" << endl;

        cout << endl;

        cout << endl << "Въведете своя избор : "; cin >> menu_choice;

        cout << endl;
        cout << endl;
        system("cls");
        cout << endl;
        switch (menu_choice) {
        case 1:
            cout << "Въвеждане на данните за всеки телефон : " << endl;
            cout << endl;
            enter_array_elements(array);
           
            cout << endl;
            break;
        case 2:
            cout << "Извеждане на списък на всички предлагани телефони с техните цени: " << endl;
            cout << endl;
            
            display_array_elements(array);
            
           
            cout << endl;
            break;
        case 3:
            cout << "Сортиране на предлаганите телефони във възходящ ред, съобразно тяхната цена " << endl;
            cout << endl;
            sorted_array_by_price(array);
            cout << "Продуктите бяха сортирани !" << endl;
            
            //switch_function(array, are_smartphones_present);
            cout << endl;
            break;

        case 4:

            cout << endl;
            finish = true;
            break;
        default:
            break;
        }
    }
   
    return (0);
}
