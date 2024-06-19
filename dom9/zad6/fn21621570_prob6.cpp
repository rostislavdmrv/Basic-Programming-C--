#include<iostream>
#include<time.h>
#include<iomanip>
#include<string>
using namespace std;
const int N = 5;
struct Sustezanie
{
    long nomer=1000;
    string fname;
    string lname;
    int time;
};
int switch_function(Sustezanie array[]);
void enter_array_elements(Sustezanie array[]);
void display_array_elements(Sustezanie array[]);
void sorted_array_by_ass(Sustezanie array[]);
void sorted_array_by_search(Sustezanie array[]);


int main()
{
    setlocale(LC_ALL, "BG");

    Sustezanie array[N];
    cout << "\t\t  ��������������� ����������! " << endl;
    cout << endl;
    switch_function(array);

}

void enter_array_elements(Sustezanie array[])
{
    cin.ignore();
    srand(time(0));
    for (int i = 0; i < N; i++)
    {
        cout << "�������� ������� ��� �� ���������� " << i + 1 << ": " << endl;
        getline(cin, array[i].fname);
        cout << "�������� ��������� ��� �� ���������� " << i + 1 << ": "<< endl;
        getline(cin, array[i].lname);
        int min = 20;
        int max = 40;
        int result = min + (rand() % (max - min + 1));
        array[i].time = result;
        array[i].nomer += i+ 1 ;
        
    }
}
void display_array_elements(Sustezanie array[]) {
    for (int i = 0; i < N; i++)
    {
        cout << "���������� " << i + 1 << " : " << endl;
        cout << " ����� " << array[i].nomer << endl;
        cout << "������� ���:  " << array[i].fname << endl;
        cout << "������� ��� : " << array[i].lname << endl;
        //cout << "�����: " << array[i].time << endl;
        cout << endl;
    }
}

void sorted_array_by_ass(Sustezanie array[])
{
    bool swapped;

    for (int i = 0; i < N - 1; i++)
    {
        swapped = false;
        for (int j = 0; j < N - i - 1; j++)
        {
            if (array[j].time > array[j + 1].time)
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
    for (int i = 0; i < N; i++)
    {
        cout << "����������  � ��������  "<<array[i].time<<"� �� ����� "<< i+1 << endl;
    }

}
void sorted_array_by_search(Sustezanie array[])
{
    ;
    int i = 0;
    int s;
    cout << "�������� ������: ";
    cin >> s;
    bool ex = false;
    do
    {
        if (array[i].nomer == s)
        {
            cout << " ����� " << array[i].nomer << endl;
            cout << "������� ���:  " << array[i].fname << endl;
            cout << "������� ��� : " << array[i].lname << endl;
            cout << "�����: " << array[i].time << endl;
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
        cout << "  ������ ������� ����� ! �������� ������ !";
    }

}

int switch_function(Sustezanie array[])
{
    short menu_choice;
    bool finish = false;
    while (!finish)
    {
        cout << " �������� ����������, ����� ������ �� ��������� �� ������������ � ������ : " << endl;
        cout << endl;

        cout << " (1)��������� �� ����� � ������ " << endl;
        cout << " (2)��������� �� ������ �� ����������� �������� ����� � ����� �� ��������� " << endl;
        cout << " (3)��������� �� ����������� ��� �������� ��� �� ������� �� ���������� �� �����������" << endl;
        cout << " (4)�������� �� ������������ ��������� �� �������� ���� ������� �� ������������ ������� ����� �� ��������,������������������ ������ �����: �����, ����� � ��������." << endl;
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
            cout << "��������� �� ����� � ������: " << endl;
            cout << endl;
            enter_array_elements(array);
            cout << endl;
            break;
        case 2:
            cout << "��������� �� ������ �� ����������� �������� ����� � ����� �� ��������� :" << endl;
            cout << endl;
            display_array_elements(array);
            cout << endl;
            break;
        case 3:
            cout << "��������� �� ����������� ��� �������� ��� �� ������� �� ���������� �� �����������" << endl;
            cout << endl;
            sorted_array_by_ass(array);
           
            cout << endl;
            break;
        case 4:
            cout << "�������� �� ������������ ��������� �� ��������" << endl;
            cout << endl;
            sorted_array_by_search(array);
            cout << "����������� � ������� !" << endl;
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