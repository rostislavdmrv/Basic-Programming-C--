#include <iostream>
#include <string>
using namespace std;
struct Book
{
    int nomenklatura;
    string title;
    int quantity;
};
const int maxBooks = 5;
void inputBooks(Book b[]);
void output(Book b[]);
void sortBooks(Book b[]);
void outputSmallest(Book b[]);
void outputBiggest(Book b[]);
void sale(Book b[]);
int randomNom();
int main()
{
    Book allBooks[maxBooks];
    int in;
    do
    {
        cout << "1. Enter books" << endl
            << "2. Show all books" << endl
            << "3. Show smallest quantity" << endl
            << "4. Show biggest quantity" << endl
            << "5. Sale" << endl
            << "6. Exit" << endl;
        cin >> in;
        switch (in)
        {
        case 1: inputBooks(allBooks); break;
        case 2: output(allBooks); break;
        case 3: sortBooks(allBooks); outputSmallest(allBooks); break;
        case 4: sortBooks(allBooks); outputBiggest(allBooks); break;
        case 5: sale(allBooks); break;
        }
    } while (in != 6);
    return 0;
}
void inputBooks(Book b[])
{
    for (int i = 0; i < maxBooks; i++)
    {
        b[i].nomenklatura = randomNom();
        cout << "Enter title ";
        cin.ignore();
        getline(cin, b[i].title);
        cout << "Enter quantity ";
        cin >> b[i].quantity;
        cout << endl;
    }
}
void output(Book b[])
{
    cout << endl;
    for (int i = 0; i < maxBooks; i++)
    {
        cout << b[i].nomenklatura << " " << b[i].title << " " << b[i].quantity << endl;
    }
}
int randomNom()
{
    int min = 1000;
    int max = 9999;
    return min + (rand() % (max - min + 1));
}
void sortBooks(Book b[])
{
    bool sorted = true;
    for (int i = 0; i < maxBooks; i++)
    {
        if (sorted == false) break;
        else sorted = false;
        for (int j = 0; j < maxBooks - i - 1; j++)
        {
            if (b[j].quantity > b[j + 1].quantity)
            {
                Book tmp = b[j];
                b[j] = b[j + 1];
                b[j + 1] = tmp;
                sorted = true;
            }
        }
    }
}
void outputSmallest(Book b[])
{
    cout << b[0].nomenklatura << " " << b[0].title << " " << b[0].quantity << endl;
}
void outputBiggest(Book b[])
{
    cout << b[maxBooks - 1].nomenklatura << " " << b[maxBooks - 1].title << " " << b[maxBooks - 1].quantity << endl;
}
void sale(Book b[])
{
    int nom;
    cout << "Enter nomenklatura: ";
    cin >> nom;
    for (int i = 0; i < maxBooks; i++)
    {
        if (b[i].nomenklatura == nom)
        {
            if (b[i].quantity > 0)
            {
                b[i].quantity--;
            }
        }
    }
}