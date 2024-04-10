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
    cout << "\t\t ����� ����� � ������ ����������  : " << endl;
    cout << endl;
  
    switch_function(array);

}

void enter_array_elements(Bookstore array[])
{

    for (int i = 0; i < N; i++)
    {
        cout << "�������� �������������  �����(�������������  �����, ��������� �� 1000)" << ": ";
        cin >> array[i].nomer;

        cout << "�������� ����� �� ������� " << i + 1 << ": ";
        cin >> array[i].ime;
        cout << "�������� ��������� ������ �� �����   " << i + 1 << ": ";
        cin >> array[i].broyka;

        cout << endl;
    }

}
void display_array_elements(Bookstore array[]) {
    for (int i = 0; i < N; i++)
    {
        cout << "����� " << i + 1 << " : " << endl;
        cout << "�������������  ����� " << array[i].nomer << endl;
        cout << " ��� �� �������: " << array[i].ime << endl;
        cout << " ������� ������ :" << array[i].broyka << endl;
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
    cout << "�������: " << array[0].ime << endl;

    cout << "���-����� ������ : " << array[0].broyka << endl << endl;
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
    cout << "�������: " << array[0].ime << endl;

    cout << "���-����� ������ : " << array[0].broyka << endl << endl;
}
void sell(Bookstore array[])
{
    
    int i = 0;
    int n;
    cout << "�������� �������������  ����� ";
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
        cout << " ���� ����� � ����� ����� ��� ��������� ���������� �� �������� ����� !";

}

int switch_function(Bookstore array[]) {
    short menu_choice;
    bool finish = false;
    while (!finish)
    {
        cout << " �������� ����������, ����� ������ �� ��������� �� ������������ � ������ : " << endl;
        cout << endl;

        cout << " (1)��������� �� ������� � ������ " << endl;
        cout << " (2)��������� �� ������ �� ������ ����� � ������� ����������" << endl;
        cout << " (3)��������� ��  ������� � ���-����� ������� ������" << endl;
        cout << " (4)��������� ��  ������� � ���-����� ������� ������" << endl;
        cout << " (5)����������� �� �������" << endl;
        cout << " (6) ����� �� ����������" << endl;

        cout << endl;

        cout << endl << "�������� ���� ����� : ";
        cin >> menu_choice;

        cout << endl;
        cout << endl;
        system("cls");
        cout << endl;
        switch (menu_choice) {
        case 1:
            cout << "��������� �� ������� � ������: " << endl;
            cout << endl;
            enter_array_elements(array);
            cout << endl;
            break;
        case 2:
            cout << "������ �� ������ ����� � ������� ����������: " << endl;
            cout << endl;
            display_array_elements(array);
            
            cout << endl;
            break;
        case 3:
            cout << "��������� ��  ������� � ���-����� ������� ������ " << endl;
            cout << endl;
            sorted_array_by_brMin(array);
            cout << "�������  � ��������  !" << endl;
            cout << endl;
            break;
        case 4:
            cout << "��������� ��  ������� � ���-����� ������� ������ " << endl;
            cout << endl;
            sorted_array_by_brMax(array);
            cout << "������� � ��������  !" << endl;
            cout << endl;
            break;
        case 5:
            cout << "����������� �� ��������� " << endl;
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