#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "BG");
    int num;
    int count = 0;
    cout << "�������� �������� �� ���  ����� :" << endl;
    cin >> num;
    cout << "������ ������ ������� �����: " << endl;
    while (num !=0)
    {
        
        cin >> num;
        if (num <= 0)
        {
            continue;
        }
        else 
        {
            count++;
        }
       
        
        
    }

    cout << "������������� ����� �� : " << (count);

}