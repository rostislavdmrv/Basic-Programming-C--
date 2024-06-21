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
        cout << "\n�������� ��������" << endl;
        cout << "1. �� ����� �������� ����� �� ���������� � ������" << endl;
        cout << "2. ���������� �� �� �������� ��������� �� ������� ���� �� ������� ���� ������ ��� �� ��������� � �� �� �������, ����� ������: ��� �� ����������, ���� �� ��������� ���" << endl;
        cout << "3. �� ������� �� ������������ ��� �� ���������� �� �� ������ ������� ��� � ������ �� ������� ? ���� ����� ��� �� ���������." << endl;
        cout << "4. �����" << endl;
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
            cout << "�������� �� ������ �� ��������� ����������? \n"
                "�������� y �� ������������ ��� ����� ����� �� �����." << endl;
            cin >> choice;
            if (choice == 'y')
            {
                option = 0;
                cout << "���������!" << endl;
            }
            break;
        }
        default:
        {
            cout << "��������� �����" << endl;
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
    cout << "�������� ���� :";
    getline(cin, s);
    for (int i = 0; i < N; i++)
    {
        cout << "��� :" << i+1 ;
        cout << "�������� ������ :";
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
    cout << "K��: " << s << endl;
    for (int i = 0; i < N; i++)
    {
        cout << "��� :" << i + 1;
        cout << "������ :" << array[i].price;
    }
}
void search(Company array[], string s)
{ 
    cin.ignore();
    int i = 0;
    string t;
    cout << "�������� ���� :";
    getline(cin,t);
    bool ex = false;
    do
    {
        if (s == t)
        {
            cout << "K��: " << s << endl;
            cout << "����� �� ��� 5 : " << array[4].price << endl;
            ex = true;
            break;
        }
        else
        {
            i++;
        }
    } while (N>1);
    
}
























