#include<iostream>
#include<time.h>
#include<iomanip>

using namespace std;
const int N = 5;
struct Bookstore
{
    int nomer;
    string ime;
    int broyka;
};
int switch_function(Bookstore array[]);
void enter_array_elements(Bookstore array[]);
void display_array_elements(Bookstore array[]);
void sorted_array_by_brMin(Bookstore array[]);
void sorted_array_by_brMax(Bookstore array[]);
void sell(Bookstore array[]);

int main()
{
    setlocale(LC_ALL, "BG");

    Bookstore array[N];
    cout << "\t\t Добре дошли в нашата книжарница  : " << endl;
    cout << endl;
  
    switch_function(array);

}

void enter_array_elements(Bookstore array[])
{

    for (int i = 0; i < N; i++)
    {
        cout << "Въведете номенклатурен  номер(четирицифрено  число, започващо от 1000)" << ": ";
        cin >> array[i].nomer;

        cout << "Въведете имено на книгата " << i + 1 << ": ";
        cin >> array[i].ime;
        cout << "Въведете наличните бройки от книга   " << i + 1 << ": ";
        cin >> array[i].broyka;

        cout << endl;
    }

}
void display_array_elements(Bookstore array[]) {
    for (int i = 0; i < N; i++)
    {
        cout << "Стока " << i + 1 << " : " << endl;
        cout << "Номенклатурен  номер " << array[i].nomer << endl;
        cout << " Име на книгата: " << array[i].ime << endl;
        cout << " Налични бройки :" << array[i].broyka << endl;
        cout << endl;
    }
}
void sorted_array_by_brMin(Bookstore array[])
{
    bool swapped;

    for (int i = 0; i < N - 1; i++)
    {
        swapped = false;
        for (int j = 0; j < N - i - 1; j++)
        {
            if (array[j].broyka > array[j + 1].broyka)
            {
                Bookstore temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
                swapped = true;
            }
        }
        if (swapped == false)
            break;
    }
    cout << "Книгата: " << array[0].ime << endl;

    cout << "Най-малко бройки : " << array[0].broyka << endl << endl;
}
void sorted_array_by_brMax(Bookstore array[])
{
    bool swapped;

    for (int i = 0; i < N - 1; i++)
    {
        swapped = false;
        for (int j = 0; j < N - i - 1; j++)
        {
            if (array[j].broyka < array[j + 1].broyka)
            {
                Bookstore temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
                swapped = true;
            }
        }
        if (swapped == false)
            break;
    }
    cout << "Книгата: " << array[0].ime << endl;

    cout << "Най-много бройки : " << array[0].broyka << endl << endl;
}
void sell(Bookstore array[])
{
    
    int i = 0;
    int n;
    cout << "Въведете номенклатурен  номер ";
    cin >> n;
   
    
        do
        {
            if (array[i].nomer == n && array[i].broyka != 0)
            {
                
                    array[i].broyka -= 1;
                    display_array_elements(array);
                 break;

               }
               else
               {
                   i++;
                
                  
               }
      

        } while ( N > i);
        cout << " Няма книга с такъв номер или изчерпано количество от дадената книга !";

}

int switch_function(Bookstore array[]) {
    short menu_choice;
    bool finish = false;
    while (!finish)
    {
        cout << " Посочете операцията, която искате да извършите от предложените в менюто : " << endl;
        cout << endl;

        cout << " (1)Въвеждане на данните в масива " << endl;
        cout << " (2)Извеждане на списък на всички книги и техните наличности" << endl;
        cout << " (3)Извеждане на  книгата с най-малко налични бройки" << endl;
        cout << " (4)Извеждане на  книгата с най-много налични бройки" << endl;
        cout << " (5)Реализиране на паръчка" << endl;
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
            cout << "Списък на всички книги и техните наличности: " << endl;
            cout << endl;
            display_array_elements(array);
            
            cout << endl;
            break;
        case 3:
            cout << "Извеждане на  книгата с най-малко налични бройки " << endl;
            cout << endl;
            sorted_array_by_brMin(array);
            cout << "Книгата  е изведена  !" << endl;
            cout << endl;
            break;
        case 4:
            cout << "Извеждане на  книгата с най-много налични бройки " << endl;
            cout << endl;
            sorted_array_by_brMax(array);
            cout << "Книгата е изведена  !" << endl;
            cout << endl;
            break;
        case 5:
            cout << "Реализиране на поръчката " << endl;
            cout << endl;
            sell(array);
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