#include<iostream>
#include<time.h>
#include<iomanip>

using namespace std;
const int N = 10;
struct Imot
{
   
    double kvadratura;
    double cena;
};
int switch_function(Imot array[]);
void enter_array_elements(Imot array[]);
void display_array_elements(Imot array[]);
void sorted_array_by_price(Imot array[]);
void print(Imot array[]);

int main()
{
    setlocale(LC_ALL, "BG");

    Imot array[N];
    cout << "\t\t ����� ����� � ������ ������� �� �����  : " << endl;
    cout << endl;
    switch_function(array);

}

void enter_array_elements(Imot array[])
{
    srand(time(0));
    for (int i = 0; i < N; i++)
    {

        int min = 30;
        int max = 150;
        int tmp = min + (rand() % (max - min + 1));
        array[i].kvadratura = tmp;
    }
 
    for (int i = 0; i < N; i++)
    {

        int min = 30000;
        int max = 200000;
        int tmp = min + (rand() % (max - min + 1));
        array[i].cena = tmp;
    }
}
void display_array_elements(Imot array[]) {
    for (int i = 0; i < N; i++)
    {
        cout << "���� " << i + 1 << " : " << endl;
        cout << "���������� �� ����: " << array[i].kvadratura << endl;
        cout << "���� �� ����: " << array[i].cena << endl;
        cout << endl;
    }
}
void sorted_array_by_price(Imot array[])
{
    bool swapped;

    for (int i = 0; i < N - 1; i++)
    {
        swapped = false;
        for (int j = 0; j < N - i - 1; j++)
        {
            if (array[j].cena > array[j + 1].cena)
            {
                Imot temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
                swapped = true;
            }
        }
        if (swapped == false)
            break;
    }
    
}
void print(Imot array[])
{
    cout << "����� ����� � ���-����� ���� "<<endl;
    for (int i = 0; i < 5; i++)
    { 
        cout << "����������: " << array[i].kvadratura << endl;

        cout << "���� :" << array[i].cena << endl << endl;

    }
}


int switch_function(Imot array[])
{
    short menu_choice;
    bool finish = false;
    while (!finish)
    {
        cout << " �������� ����������, ����� ������ �� ��������� �� ������������ � ������ : " << endl;
        cout << endl;

        cout << " (1)��������� �� ������� � ������ " << endl;
        cout << " (2)���������  �� ������� �� �������: ���������� � ����" << endl;
        cout << " (3)��������� �� ������� ��� �������� ��� �� ������� ����� �� ��������� �����" << endl;
        cout << " (4)��������� �� ����� ����� � ���-����� ����" << endl;
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
            cout << "���������  �� ������� �� �������: ���������� � ����:" << endl;
            cout << endl;
            display_array_elements(array);
            cout << endl;
            break;
        case 3:
            cout << "��������� �� ������� ��� �������� ��� �� ������� ����� �� ��������� �����" << endl;
            cout << endl;
            sorted_array_by_price(array);
            cout << "������� �� �������� !" << endl;
            cout << endl;
            break;
        case 4:
            cout << "��������� �� ����� ����� � ���-����� ����" << endl;
            cout << endl;
            print(array);
            cout << "������� �� �������� !" << endl;
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