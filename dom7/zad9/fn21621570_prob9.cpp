#include <iostream>
using namespace std;
void enter(int a[], int count);
int IndexOfMax(int a[], int count);
int IndexOfMin(int a[], int count);
int main()
{
    setlocale(LC_ALL, "BG");
    const int count = 7;
    int array[count];
    cout << "�������� 7 ���� �� ���������� ����������: ";
    enter(array, count);
    int index = IndexOfMin(array, count);
    cout << "��������� " << index + 1 << " �������� ���-����� ���� " << array[index] << "��," << array[index] * 10000 << "��." << endl;
    int index2 = IndexOfMax(array, count);
    cout << "��������� " << index2 + 1 << " �������� ���-������ ���� " << array[index2] << "��," << array[index2] * 10000 << "��." << endl;


}
void enter(int a[], int count)
{
    for (int i = 0; i < count; i++)
    {
        cin >> a[i];
    }
}
int IndexOfMax(int a[], int count)
{

    int index = 0;
    for (int i = 1; i < count; i++)
    {
        if (a[index] < a[i])
        {
            index = i;
        }
    }
    return index;
}
int IndexOfMin(int a[], int count)
{
    int index = 0;
    for (int i = 1; i < count; i++)
    {
        if (a[index] > a[i])
        {
            index = i;
        }
    }
    return index;

}