#include <iostream>
#include <string>
using namespace std;
void check(string s, int& br, char voc[]);
int main()
{
    string str="";
    char vocals[] = { 'a', 'o', 'u', 'e', 'i' };
    int brVocals = 0;
    getline(cin, str);
    check(str, brVocals, vocals);
    cout << "Number vocals are: " << brVocals << endl;
}
void check(string s, int& br, char voc[])
{
    for (int i = 0; i < s.length(); i++)
    {
        for (int j = 0; j < sizeof(voc)+1; j++)
        {
            if (s[i] == voc[j]) br++;
        }
    }
}
