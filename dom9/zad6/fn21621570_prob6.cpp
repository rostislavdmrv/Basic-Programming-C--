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
    cout << "\t\t  Лекоатлетическо състезание! " << endl;
    cout << endl;
    switch_function(array);

}

void enter_array_elements(Sustezanie array[])
{
    cin.ignore();
    srand(time(0));
    for (int i = 0; i < N; i++)
    {
        cout << "Въведете първото име на състезател " << i + 1 << ": " << endl;
        getline(cin, array[i].fname);
        cout << "Въведете фамилното име на състезател " << i + 1 << ": "<< endl;
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
        cout << "Състезател " << i + 1 << " : " << endl;
        cout << " Номер " << array[i].nomer << endl;
        cout << "Първото име:  " << array[i].fname << endl;
        cout << "Фамилно име : " << array[i].lname << endl;
        //cout << "Време: " << array[i].time << endl;
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
        cout << "Състелятел  с резултат  "<<array[i].time<<"е на масто "<< i+1 << endl;
    }

}
void sorted_array_by_search(Sustezanie array[])
{
    ;
    int i = 0;
    int s;
    cout << "Въведете номера: ";
    cin >> s;
    bool ex = false;
    do
    {
        if (array[i].nomer == s)
        {
            cout << " Номер " << array[i].nomer << endl;
            cout << "Първото име:  " << array[i].fname << endl;
            cout << "Фамилно име : " << array[i].lname << endl;
            cout << "Време: " << array[i].time << endl;
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
        cout << "  Грешно въведен номер ! Въветеде отново !";
    }

}

int switch_function(Sustezanie array[])
{
    short menu_choice;
    bool finish = false;
    while (!finish)
    {
        cout << " Посочете операцията, която искате да извършите от предложените в менюто : " << endl;
        cout << endl;

        cout << " (1)Въвеждане на данни в масива " << endl;
        cout << " (2)Извеждане на списък на участниците –стартов номер и имена на участника " << endl;
        cout << " (3)Класиране на участниците във възходящ ред на времето за изминаване на дистанцията" << endl;
        cout << " (4)Проверка на индивидуални резултати на участник –при въведен от клавиатурата стартов номер на участник,дасеизвеждатвсички негови данни: номер, имена и резултат." << endl;
        cout << " (5) Изход от програмата" << endl;

        cout << endl;

        cout << endl << "Въведете своя избор : ";
        cin >> menu_choice;

        cout << endl;
        cout << endl;
        system("cls");
        cout << endl;
        switch (menu_choice) {
        case 1:
            cout << "Въвеждане на данни в масива: " << endl;
            cout << endl;
            enter_array_elements(array);
            cout << endl;
            break;
        case 2:
            cout << "Извеждане на списък на участниците –стартов номер и имена на участника :" << endl;
            cout << endl;
            display_array_elements(array);
            cout << endl;
            break;
        case 3:
            cout << "Класиране на участниците във възходящ ред на времето за изминаване на дистанцията" << endl;
            cout << endl;
            sorted_array_by_ass(array);
           
            cout << endl;
            break;
        case 4:
            cout << "Проверка на индивидуални резултати на участник" << endl;
            cout << endl;
            sorted_array_by_search(array);
            cout << "Съзтезателя е изведен !" << endl;
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