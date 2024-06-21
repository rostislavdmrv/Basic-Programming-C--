#include <iostream>
#include <time.h>
#include <iomanip>
#include <string>
using namespace std;
const int N = 5;
struct Company
{
    
    int day;
    double price;
};
void enter ( Company array[], string s);
void sort_array_by(Company array[], string& s);
void search(Company array[], string& s);
int main()
{
    setlocale(LC_ALL, "BG");
    unsigned short option = 0;
    Company array[N];
    string cod;
    char choice = 'n';
    do {
        cout << "\nИзберете действие" << endl;
        cout << "1. Да бъдат въведени кодът на компанията и цените" << endl;
        cout << "2. Компаниите да се сортират възходящо по признак цена на акциите през първия ден от седмицата и да се изведат, както следва: код на компанията, цени по отделните дни" << endl;
        cout << "3. По въведен от клавиатурата код на компанията да се изведе нейният код и цената на акциите ? през петия ден от седмицата." << endl;
        cout << "4. Изход" << endl;
        cin >> option;
        switch (option)
        {
        case 1:
        {
            ( array, cod);
            break;
        }
        case 2:
        {
            ( array, cod);
            break;
        }
        case 3:
        {
           (array, cod);
            break;
        }

        case 4:
        {
            cout << "Наистина ли искате да напуснете програмата? \n"
                "Изберете y за потвърждение или друга буква за отказ." << endl;
            cin >> choice;
            if (choice == 'y')
            {
                option = 0;
                cout << "Довиждане!" << endl;
            }
            break;
        }
        default:
        {
            cout << "Невалиден избор" << endl;
            break;
        }
        }

    } while (choice != 'y');

    return 0;
}
void enter(Company array[] ,string s)
{
    srand(time(0));
    cin.ignore();
    cout << "Въведете кода :";
    getline(cin, s);
    for (int i = 0; i < N; i++)
    {
        cout << "Ден :" << i+1 ;
        cout << "Въвезете цената :";
        cin >> array[i].price;
        int min = 100;
            int max = 400;
            int temp = min + (rand() % (max - min + 1));
            array[i].price = temp;
    }
}
void sort_array_by(Company array [], string s)
{
    bool swapped;
    for (int i = 0; i < N - 1; i++)
    {
        swapped = false;
        for (int j = 0; j < N - i - 1; j++)
        {
            if (array[j].price > array[j + 1].price)
            {
                Company temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
                swapped = true;
            }
            if (swapped == false)
                break;

        }

    }
    cout << "Kод: " << s << endl;
    for (int i = 0; i < N; i++)
    {
        cout << "Ден :" << i + 1;
        cout << "Цената :" << array[i].price;
    }
}
void search(Company array[], string s)
{ 
    cin.ignore();
    int i = 0;
    string t;
    cout << "Въведете кода :";
    getline(cin,t);
    bool ex = false;
    do
    {
        if (s == t)
        {
            cout << "Kод: " << s << endl;
            cout << "Акция от ден 5 : " << array[4].price << endl;
            ex = true;
            break;
        }
        else
        {
            i++;
        }
    } while (N>1);
    
}
























