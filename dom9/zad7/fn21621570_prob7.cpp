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
    cout << "\t\t  ����� ����� � ����� ������� �� ����: " << endl;
    cout << endl;
    switch_function(array);

}

void enter_array_elements( Car array[])
{
    cin.ignore();
    
    for (int i = 0; i < N; i++)
    {
       
        cout << "�������� ��������������� ����� �� ���������� : " << i + 1 << ": ";
        
        getline(cin, array[i].nomer);
        cout << "�������� ������� �� ����������" << i + 1 << ": ";
       
        getline(cin, array[i].marka);
        cout << "�������� ������ �� ����������" << i + 1 << ": ";
       
        getline(cin, array[i].madel);
        cout << "�������� ����� �� ����������" << i + 1 << ": ";
        
        getline(cin, array[i].colour);
        cout << endl;

    }

}
void display_array_elements( Car array[]) {
    for (int i = 0; i < N; i++)
    {
        cout << "���������" << i + 1 << " : " << endl;
        cout << "��������������� ����� " << array[i].nomer << endl;
        cout << "�����:  " << array[i].marka << endl;
        cout << "�����: " << array[i].madel << endl;
        cout << "����: " << array[i].colour << endl;
        cout << endl;
    }
}
void nomerr(Car array[])
{

    cin.ignore();
    int i = 0;
    string r;
    cout << "�������� ��������������� �����: ";
    getline(cin, r);
    bool ex = false;
    do
    {
        if (array[i].nomer == r)
        {
            cout << "��������������� ����� " << array[i].nomer << endl;
            cout << "�����:  " << array[i].marka << endl;
            cout << "�����: " << array[i].madel << endl;
            cout << "����: " << array[i].colour << endl;
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
        cout << "  ������ ������� ��������������� �����! �������� ������ !";
    }
    
}
void sorted_array_by_m(Car array[])
{
    cin.ignore();
    int i = 0;
    string n;
    cout << "�������� ������: ";
    getline(cin,n);
    bool ex = false;
    do
    {
        if (array[i].madel == n)
        {
            cout << "��������������� ����� " << array[i].nomer << endl;
            cout << "�����:  " << array[i].marka << endl;
            cout << "�����: " << array[i].madel << endl;
            cout << "����: " << array[i].colour << endl;
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
        cout << "  ������ ������� ����� ! �������� ������ !";
    } 
    
    

}
void sorted_array_by_c(Car array[])
{
    cin.ignore();
    int i = 0;
    string s;
    cout << "�������� �����: ";
    getline(cin, s);
    bool ex = false;
    do
    {
        if (array[i].colour == s)
        {
            cout << "��������������� ����� " << array[i].nomer << endl;
            cout << "�����:  " << array[i].marka << endl;
            cout << "�����: " << array[i].madel << endl;
            cout << "����: " << array[i].colour << endl;
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
        cout << "  ������ ������� ���� ! �������� ������ !";
    }
    
    
}

int switch_function(Car array[])
{
    short menu_choice;
    bool finish = false;
    while (!finish)
    {
        cout << " �������� ����������, ����� ������ �� ��������� �� ������������ � ������ : " << endl;
        cout << endl;

        cout << " (1)��������� �� ������� � ������ " << endl;
        cout << " (2)���������  ������  ��  ��������������  ����������:  ��������������  �����, �����, �����, ���� " << endl;
        cout << " (3)��������� ������� �� ���������� �� ������� �������������� �����" << endl;
        cout << " (4)��������� ������� �� ���������� �� �������� ����� " << endl;
        cout << " (5)��������� ������� �� ���������� �� ������� ����" << endl;
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
            cout << "���������  ������  ��  ��������������  ����������:" << endl;
            cout << endl;
            display_array_elements(array);
            cout << endl;
            break;
        case 3:
            cout << "��������� ������� �� ���������� �� ������� �������������� �����" << endl;
            cout << endl;
            nomerr(array);
            cout << endl;
            break;
        case 4:
            cout << "��������� ������� �� ���������� �� ������� �����" << endl;
            cout << endl;
            sorted_array_by_m(array);
            
            cout << endl;
            break;
        case 5:
            cout << "��������� ������� �� ���������� �� ������� ����" << endl;
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