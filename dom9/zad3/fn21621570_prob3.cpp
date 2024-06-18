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
    cout << "\t\t ����� ����� � ������ ��������� �����  : " << endl;
    cout << endl;
    bool dostavka = false;
    
    switch_function(array, dostavka);

}

void enter_array_elements(Delivery array[])
{

    for (int i = 0; i <N ; i++)
    {
        cout << "�������� ������ �� ��������  " << i + 1 << ": ";
        cin >> array[i].nomer;
       
            cout << "�������� ���������� �� �������� " << i + 1 << ": ";
            cin >> array[i].shirochina;
            cout << "�������� ��������� �� ��������  " << i + 1 << ": ";
            cin >> array[i].duljina;
            cout << "�������� ���������� �� ��������  " << i + 1 << ": ";
            cin >> array[i].visochina;
       
        array[i].obem = array[i].shirochina * array[i].duljina * array[i].visochina;
        cout << endl;
    }

}
void display_array_elements(Delivery array[]) {
    for (int i = 0; i < N; i++)
    {
        cout << "������ �� ��������" << i + 1 << " : " << array[i].nomer << endl;
        cout << " ���������� �� �������� " << array[i].shirochina << endl;
        cout << " ��������� �� �������� " << array[i].duljina << endl;
        cout << " �������� �� �������� " << array[i].visochina << endl;
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
    cout << "����� �� ��������: " << array[0].nomer << endl;

    cout << "������ � ���-����� ����: " << array[0].obem << endl << endl;
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
    cout << "����� �� ��������: " << array[0].nomer << endl;

    cout << "������ � ���-����� ����: " << array[0].obem << endl << endl;
}

int switch_function(Delivery array[], bool& dostavka)
{
    short menu_choice;
    bool finish = false;
    while (!finish)
    {
        cout << " �������� ����������, ����� ������ �� ��������� �� ������������ � ������ : " << endl;
        cout << endl;

        cout << " (1)��������� �� ������� � ������ " << endl;
        cout << " (2)��������� �� �������: ����� �� ������ � ������� �������" << endl;
        cout << " (3)��������� �� �������� � ���-����� ����" << endl;
        cout << " (4)��������� �� �������� � ���-����� ����" << endl;
        cout << " (5) ����� �� ����������" << endl;

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
            cout << "��������� �� �������: ����� �� ������ � ������� �������: " << endl;
            cout << endl;
            display_array_elements(array);
            //dostavka = true;
            cout << endl;
            break;
        case 3:
            cout << "��������� �� �������� � ���-����� ����  " << endl;
            cout << endl;
            sorted_array_by_volumeMin(array);
            cout << "�������� � ��������  !" << endl;
            cout << endl;
            break;
        case 4:
            cout << "��������� �� �������� � ���-����� ����   " << endl;
            cout << endl;
            sorted_array_by_volumeMax(array);
            cout << "�������� � ��������  !" << endl;
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