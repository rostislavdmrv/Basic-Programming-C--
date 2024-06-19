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
    cout << "\t\t  ����������� �� ������ �� ���������� �� ��-����� � ������������������� ���������: " << endl;
    cout << endl;
    switch_function(array);

}

void enter_array_elements(Sustezanie array[])
{
    srand(time(0));
    for (int i = 0; i < N; i++)
    {
        cout << "�������� ����������� ����� �� �������"<< i+1 << ": ";
        cin >> array[i].nomer;
        cout << "�������� ����� �� �������" << i + 1 << ": ";
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
        cout << "����e��" << i + 1 << " : " << endl;
        cout << "���������� ����� " << array[i].nomer << endl;
        cout << "������ �� ����� ����������:  " << array[i].tockia << endl;
        cout << "������ �� ����� ���������� : " << array[i].tockib << endl;
        cout << "������ �� ����� ���������� : " << array[i].tockic << endl;
        cout << endl;
    }
}
void obsh(Sustezanie array[])
{

    for (int i = 0; i < N; i++)
    {
        array[i].obsho = array[i].tockia + array[i].tockib + array[i].tockic;
        cout << "�������" << i + 1 << " ��� ���� �� ����� ���������� " << array[i].obsho << " ����� " << endl;

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
    cout << "���������: " << array[0].ime << endl;

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
    cout << "���������: " << array[0].ime << endl;
}

int switch_function(Sustezanie array[])
{
    short menu_choice;
    bool finish = false;
    while (!finish)
    {
        cout << " �������� ����������, ����� ������ �� ��������� �� ������������ � ������ : " << endl;
        cout << endl;

        cout << " (1)��������� �� ������������ ������,  ������� �� ������������� � ������� ������  " << endl;
        cout << " (2)��������� �� ������� �� ������������� " << endl;
        cout << " (3)��������� �� ����������� �� ������: ������� ���� �����" << endl;
        cout << " (4)��������� �� �����������, ������� ������� ���-����� �����" << endl;
        cout << " (5)��������� �� �����������, ������� ������� ���-����� �����" << endl;
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
            cout << "��������� �� ������������ ������,  ������� �� ������������� � ������� ������ : " << endl;
            cout << endl;
            enter_array_elements(array);
            cout << endl;
            break;
        case 2:
            cout << "���������  �� ������� �� �������������:" << endl;
            cout << endl;
            display_array_elements(array);
            cout << endl;
            break;
        case 3:
            cout << "��������� �� ����������� �� ������: ������� ���� �����" << endl;
            cout << endl;
            obsh(array);
            cout << "������� �� ��������!" << endl;
            cout << endl;
            break;
        case 4:
            cout << "��������� �� �����������, ������� ������� ���-����� �����" << endl;
            cout << endl;
            sorted_array_by_one(array);
            cout << "����������� � ������� !" << endl;
            cout << endl;
            break;
        case 5:
            cout << "��������� �� �����������, ������� ������� ���-����� �����" << endl;
            cout << endl;
            sorted_array_by_last(array);
            cout << "����������� � ������� !" << endl;
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