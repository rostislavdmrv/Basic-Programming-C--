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


    cout << "\t\t ����� ����� � ����� ������ ������� : " << endl;
    cout << endl;
    switch_function(array);

}

void enter_array_elements(Smartphone array[])
{

    for (int i = 0; i < iArraySize; i++)
    {
        cout << "�������� ������ �� ������� " << i + 1 << ": ";
        cin >> array[i].model;
        cout << "�������� ������ �� ������� " << i + 1 << ": ";
         cin >> array[i].price;
        

        cout << endl;
    }

}

void display_array_elements(Smartphone array[]) {
    for (int i = 0; i < iArraySize; i++) {
        cout << "������� " << i + 1 << " : " << endl;
        cout << " �����: " << array[i].model << endl;
        cout << " ���� : " << array[i].price << endl;

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
        cout << " �������� ����������, ����� ������ �� ��������� �� ������������ � ������ : " << endl;
        cout << endl;

        cout << " (1)��������� �� ������� �� ����� �������" << endl;
        cout << " (2)��������� �� ������ �� ������ ���������� �������� � ������� ����" << endl;
        cout << " (3)��������� �� ������������ �������� ��� �������� ���, ��������� ������� ����" << endl;
        cout << " (4) ����� �� ����������" << endl;

        cout << endl;

        cout << endl << "�������� ���� ����� : "; cin >> menu_choice;

        cout << endl;
        cout << endl;
        system("cls");
        cout << endl;
        switch (menu_choice) {
        case 1:
            cout << "��������� �� ������� �� ����� ������� : " << endl;
            cout << endl;
            enter_array_elements(array);
           
            cout << endl;
            break;
        case 2:
            cout << "��������� �� ������ �� ������ ���������� �������� � ������� ����: " << endl;
            cout << endl;
            
            display_array_elements(array);
            
           
            cout << endl;
            break;
        case 3:
            cout << "��������� �� ������������ �������� ��� �������� ���, ��������� ������� ���� " << endl;
            cout << endl;
            sorted_array_by_price(array);
            cout << "���������� ���� ��������� !" << endl;
            
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
