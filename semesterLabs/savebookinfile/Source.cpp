#include <iostream>
#include <string>
#include <fstream>
#include <Windows.h>
using namespace std;
struct Book
{
    string title;
    double price;
};
const int maxBooks = 5;
void  savebookinfile(Book array[]);
void banaryadd(Book array[]);
void open(Book array[]);
int main()
{  
    setlocale(LC_ALL,"BG");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    Book array[maxBooks];
    savebookinfile(array);
    banaryadd(array);
    open(array);
} 
void  savebookinfile(Book array[])
{ 
    string book = ""; double price = 0; fstream bookfile;
    bookfile.open("book.dat",ios::out);
    if (bookfile.is_open())
    {
        cout << "�������� ���������� �� 5 �����";
        for (int i = 0; i < maxBooks; i++)
        { 
            cout << "����� " << i + 1 << endl;
            cout << "�������� ���������� �� ������� " << i + 1 << endl;
            getline(cin,book);
            cout << "�������� ������ �� ������� " << i + 1 << endl;
           cin >> price; 
           bookfile << book << " ";
           bookfile << price << endl;

        }
        bookfile.close();
    }
} 
void banaryadd(Book array[])
{  
    fstream bookfile;
    system("cls");
    bookfile.open("book.dat", ios::in);
    if (bookfile.is_open())
    { 
        for (int i = 0; i < maxBooks; i++)
        {
            bookfile >> array[i].title >> array[i].price;
        } 
        bookfile.close();
        cout << "������� �������� !";
    } 
    else
    {
        cout << "��������� �������� !";
        exit(1);
    }
} 
void open(Book array[])
{ 
    fstream bookfile;
    string book = "";
    system("cls");
    bookfile.open("book.dat", ios::app);
    if (bookfile.is_open())
    {
        bookfile.close();
        cout << "������� �������� !";
    }
    else
    {
        cout << "��������� �������� !";
        exit(1);
    }
}