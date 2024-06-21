#include <iostream>
#include <string>
using namespace std;
struct Room
{
    int no;
    int capacity;
    double price;
    bool airCond;
};
const int N = 7;
void input(Room r[]);
void output(Room r[]);
void outputCapacity(Room r[], int cap);
void outputRoom(Room r);
void outputairCond(Room r);
void changePrice(Room& r);
void sortPrice(Room r[]);
int searchForRoom(Room r[], int no);
int main()
{
    setlocale(LC_ALL,"BG");
    Room allRooms[N];
    int in, cap, room, index;
    do
    {
        cout << "1.Да се въведат данните на стаите" << endl
            << "2. Да се изведе списък с наличните стаи –номер, капацитет, цена" << endl
            << "3. Да се изведат всички стаи, които отговарят на въведен от клавиатурата капацитет" << endl
            << "4. При въведен номер на стая да се извежда дали в нея има климатик " << endl
            << "5. При  въведен  номер  на  стаяда  се  предостави  възможност цената  й  да  бъде коригирана след потвърждение от потребителя " << endl
            << "6. Наличните стаи да се сортират възходящо по признак цена" << endl
            << "7. Изход " << endl;
        cin >> in;
        switch (in)
        {
        case 1: input(allRooms); break;
        case 2: output(allRooms); break;
        case 3:
            cout << endl << "Въведете размера : ";  cin >> cap;
            outputCapacity(allRooms, cap); break;
        case 4:
            cout << endl << "Въведете № на стаята : ";  cin >> room;
            index = searchForRoom(allRooms, room);
            outputairCond(allRooms[index]); break;
        case 5:
            cout << endl << "Въведете № на стаята : ";  cin >> room;
            index = searchForRoom(allRooms, room);
            changePrice(allRooms[index]); break;
        case 6: sortPrice(allRooms); output(allRooms); break;
        }
    } while (in != 7);
    return 0;
}
void input(Room r[])
{

    for (int i = 0; i < N; i++)
    {
        cout << "№ на стаята: ";
        cin >> r[i].no;
        cout << endl << "Капацитет : ";
        cin >> r[i].capacity;
        cout << endl << "Цена: ";
        cin >> r[i].price;
        cout << endl << "Климатик: [0 -> не/ 1 -> да]";
        cin >> r[i].airCond;
    }
}
void output(Room r[])
{
    for (int i = 0; i < N; i++)
    {
        outputRoom(r[i]);
    }
}
void outputCapacity(Room r[], int cap)
{
    for (int i = 0; i < N; i++)
    {
        if (r[i].capacity == cap)
        {
            outputRoom(r[i]);
        }
    }
}
void outputairCond(Room r)
{
    if (r.airCond == true)  cout << "Да!" << endl;
    else cout << "Не!" << endl;
}
void outputRoom(Room r)
{
    cout << r.no << " " << r.capacity << " " << r.price << " " << boolalpha << r.airCond << endl;
}
void changePrice(Room& r)
{
    char in; double pr;
    cout << endl << "Искате ли да промените цената ? [y -> Да/ n -> Не]" << endl;
    cin >> in;
    if (in == 'n')
    {
        cout << "ДОБРЕ" << endl;
        return;
    }
    else
    {
        cout << "Въведете новата цена : ";
        cin >> pr;
        cout << endl << "Старата цена " << r.price << " беше променана на  " << pr << " успешно!" << endl;
        r.price = pr;
    }
}
void sortPrice(Room r[])
{
    bool sorted = true;
    for (int i = 0; i < N; i++)
    {
        if (sorted == false) return;
        else sorted = false;
        for (int j = 0; j < N - i - 1; j++)
        {
            if (r[j].price > r[j + 1].price)
            {
                Room tmp = r[j];
                r[j] = r[j + 1];
                r[j + 1] = tmp;
                sorted = true;
            }
        }
    }
}
int searchForRoom(Room r[], int no)
{
    for (int i = 0; i < N; i++)
    {
        if (r[i].no == no)
        {
            return i;
        }
    }
}