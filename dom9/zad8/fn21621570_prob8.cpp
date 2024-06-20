#include <iostream>
#include <string>
using namespace std;
struct Child
{
    string name;
    int month;
};
const int N = 30;
void addChild(Child& c);
void addChildren(Child c[]);
void outputMonth(Child c[], int m, int r);
void outputChild(Child c);
void outputChildren(Child c[], int si, int ei);
void sortChildren(Child c[], int r);
bool checkNum(int k, int fi);
int firstFreeIndex(Child c[]);
int main()
{
    setlocale(LC_ALL,"BG");
    Child kids[N];
    for (int i = 0; i < N; i++)
    {
        kids[i].name = "";
        kids[i].month = 0;
    }
    int in, index, m;
    do
    {
        cout << "1. Добавяне на едно новозаписано дете " << endl
            << "2. Добавяне на група от новоприети деца" << endl
            << "3. Извеждане на всички деца,родени през въведен от клавиатурата месец [1-12]" << endl
            << "4. Извеждане на имената на най-малките деца в групата" << endl
            << "5. Извеждане на имената на най-големите деца в групата" << endl
            << "6. Изход" << endl;
        cin >> in;
        switch (in)
        {
        case 1: index = firstFreeIndex(kids); addChild(kids[index]); break;
        case 2: addChildren(kids); break;
        case 3: index = firstFreeIndex(kids); cout << endl << "Въведете желания месец: "; cin >> m; outputMonth(kids, m, index); break;
        case 4: index = firstFreeIndex(kids); sortChildren(kids, index); outputChildren(kids, index - 5, index); break;
        case 5: index = firstFreeIndex(kids); sortChildren(kids, index); outputChildren(kids, 0, 5); break;
        }
    } while (in != 6);
    return 0;
}
void addChild(Child& c)
{
    cin.ignore();
    cout << "Въведете името: ";
    getline(cin, c.name);
    cout << "\nВъведете месеца на раждане: ";
    cin >> c.month;
}
void addChildren(Child c[])
{
    int k;
    cout << "Колко деца искате да въведете?" << endl;
    cin >> k;
    int index = firstFreeIndex(c);
    if (index == -1)
    {
        cout << "Не е възможно!" << endl;
        return;
    }
    else
    {
        bool possible = checkNum(k, index + 1);
        if (possible == false)
        {
            cout << "Не е възможно777!" << endl;
            return;
        }
        else
        {
            for (int i = index; i < index + k; i++)
            {
                addChild(c[i]);
            }
        }
    }

}
bool checkNum(int k, int fi)
{
    if ((k + fi) <= N) return true;
    else return false;
}
int firstFreeIndex(Child c[])
{
    for (int i = 0; i < N; i++)
    {
        if (c[i].name == "")
            return i;
    }
    return -1;
}
void outputMonth(Child c[], int m, int r)
{
    for (int i = 0; i < r; i++)
    {
        if (c[i].month == m)
        {
            outputChild(c[i]);
        }
    }
}
void outputChild(Child c)
{
    cout << c.name << " " << c.month << endl;
}
void outputChildren(Child c[], int si, int ei)
{
    for (int i = si; i < ei; i++)
    {
        outputChild(c[i]);
    }
}
void sortChildren(Child c[], int r)
{
    bool sorted = true;
    for (int i = 0; i < r; i++)
    {
        if (sorted == false) break;
        else sorted = false;
        for (int j = 0; j < r - i - 1; j++)
        {
            if (c[j].month > c[j + 1].month)
            {
                Child tmp = c[j];
                c[j] = c[j + 1];
                c[j + 1] = tmp;
                sorted = true;
            }
        }
    }
}