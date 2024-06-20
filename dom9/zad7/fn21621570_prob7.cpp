#include<iostream>
#include<time.h>
#include<iomanip>
#include<string>
using namespace std;
const int N = 5;
struct Car
{
    string nomer;
    string marka;
    string madel;
    string colour;
};
int switch_function(Car array[]);
void enter_array_elements(Car array[]);
void display_array_elements(Car array[]);
void nomerr(Car array[]);
void sorted_array_by_m(Car array[]);
void sorted_array_by_c(Car array[]);


int main()
{
    setlocale(LC_ALL, "BG");

    Car array[N];
    cout << "\t\t  Добре дошли в нашия магазин за коли: " << endl;
    cout << endl;
    switch_function(array);

}

void enter_array_elements( Car array[])
{
    cin.ignore();
    
    for (int i = 0; i < N; i++)
    {
       
        cout << "Въведете регистрационния номер на автомобила : " << i + 1 << ": ";
        
        getline(cin, array[i].nomer);
        cout << "Въведете марката на автомобила" << i + 1 << ": ";
       
        getline(cin, array[i].marka);
        cout << "Въведете модела на автомобила" << i + 1 << ": ";
       
        getline(cin, array[i].madel);
        cout << "Въведете цвета на автомобила" << i + 1 << ": ";
        
        getline(cin, array[i].colour);
        cout << endl;

    }

}
void display_array_elements( Car array[]) {
    for (int i = 0; i < N; i++)
    {
        cout << "Автомобил" << i + 1 << " : " << endl;
        cout << "Регистрационнен номер " << array[i].nomer << endl;
        cout << "Марка:  " << array[i].marka << endl;
        cout << "Модел: " << array[i].madel << endl;
        cout << "Цвят: " << array[i].colour << endl;
        cout << endl;
    }
}
void nomerr(Car array[])
{

    cin.ignore();
    int i = 0;
    string r;
    cout << "Въведете регистрационнен номер: ";
    getline(cin, r);
    bool ex = false;
    do
    {
        if (array[i].nomer == r)
        {
            cout << "Регистрационнен номер " << array[i].nomer << endl;
            cout << "Марка:  " << array[i].marka << endl;
            cout << "Модел: " << array[i].madel << endl;
            cout << "Цвят: " << array[i].colour << endl;
            cout << endl;
            ex = true;
            break;

        }
        else
        {
            i++;


        }
    } while (N > i);

    if (ex== false)
    {
        cout << "  Грешно въведен регистрационнен номер! Въветеде отново !";
    }
    
}
void sorted_array_by_m(Car array[])
{
    cin.ignore();
    int i = 0;
    string n;
    cout << "Въведете модела: ";
    getline(cin,n);
    bool ex = false;
    do
    {
        if (array[i].madel == n)
        {
            cout << "Регистрационнен номер " << array[i].nomer << endl;
            cout << "Марка:  " << array[i].marka << endl;
            cout << "Модел: " << array[i].madel << endl;
            cout << "Цвят: " << array[i].colour << endl;
            cout << endl;
            ex = true;
            break;

        }
        else
        {
            i++;


        }
    } while (N > i);

    if (ex == false)
    {
        cout << "  Грешно въведен модел ! Въветеде отново !";
    } 
    
    

}
void sorted_array_by_c(Car array[])
{
    cin.ignore();
    int i = 0;
    string s;
    cout << "Въведете цвета: ";
    getline(cin, s);
    bool ex = false;
    do
    {
        if (array[i].colour == s)
        {
            cout << "Регистрационнен номер " << array[i].nomer << endl;
            cout << "Марка:  " << array[i].marka << endl;
            cout << "Модел: " << array[i].madel << endl;
            cout << "Цвят: " << array[i].colour << endl;
            cout << endl;
            ex = true;
            break;

        }
        else
        {
            i++;


        }
    } while (N > i);

    if (ex==false)
    {
        cout << "  Грешно въведен цвят ! Въветеде отново !";
    }
    
    
}

int switch_function(Car array[])
{
    short menu_choice;
    bool finish = false;
    while (!finish)
    {
        cout << " Посочете операцията, която искате да извършите от предложените в менюто : " << endl;
        cout << endl;

        cout << " (1)Въвеждане на данните в масива " << endl;
        cout << " (2)Извеждане  списък  на  регистрираните  автомобили:  регистрационен  номер, марка, модел, цвят " << endl;
        cout << " (3)Извеждане данните на автомобила по подаден регистрационен номер" << endl;
        cout << " (4)Извеждане данните на автомобила по подадена марка " << endl;
        cout << " (5)Извеждане данните на автомобила по подаден цвят" << endl;
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
            cout << "Въвеждане на данните в масива: " << endl;
            cout << endl;
            enter_array_elements(array);
            cout << endl;
            break;
        case 2:
            cout << "Извеждане  списък  на  регистрираните  автомобили:" << endl;
            cout << endl;
            display_array_elements(array);
            cout << endl;
            break;
        case 3:
            cout << "Извеждане данните на автомобила по подаден регистрационен номер" << endl;
            cout << endl;
            nomerr(array);
            cout << endl;
            break;
        case 4:
            cout << "Извеждане данните на автомобила по подаден модел" << endl;
            cout << endl;
            sorted_array_by_m(array);
            
            cout << endl;
            break;
        case 5:
            cout << "Извеждане данните на автомобила по подаден цвят" << endl;
            cout << endl;
            sorted_array_by_c(array);
            
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