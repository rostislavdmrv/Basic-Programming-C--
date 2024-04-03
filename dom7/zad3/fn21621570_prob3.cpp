#include <iostream>
#include <string>
#include <windows.h>
using namespace std;
void coding(char in[], char out[]);
void decoding(char in[], char out[]);
int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    setlocale(LC_ALL, "BG");
    char in[60] = "", out[60] = "";
    cin.getline(in, 60);

    int choice;
    cout << "1. ��������" << endl;
    cout << "2. ����������" << endl;
    cin >> choice;
    switch (choice)
    {
    case 1:
    {
        coding(in, out);
        break;
    }
    case 2:
    {
        decoding(in, out);
        break;
    }
    }
    cout << in << "  ->  " << out;


}
void coding(char a[], char z[])
{
    for (int i = 0; i < strlen(a); i++)
    {
        if (a[i] == ' ') z[i] = ' ';
        else
        {
            if (a[i] == '�')
            {
                z[i] = '$';
            }
            else if (a[i] == '�')
            {
                z[i] = '*';
            }
            else
            {
                z[i] = a[i];
            }
        }
    }
}
void decoding(char a[], char z[])
{
    for (int i = 0; i < strlen(a); i++)
    {
        if (a[i] == ' ') z[i] = ' ';
        else
        {
            if (a[i] == '$')
            {
                z[i] = '�';
            }
            else if (a[i] == '*')
            {
                z[i] = '�';
            }
            else
            {
                z[i] = z[i];
            }
        }
        if (i == 0) z[0] = toupper(z[0]);
    }
}