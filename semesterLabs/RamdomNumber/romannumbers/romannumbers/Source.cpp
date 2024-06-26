#include <iostream>

using namespace std;

string convertToRoman(int number);

int main() {
    setlocale(LC_ALL, "BG");

    int input;

    printf("Въведи цяло арабско число: ");
    cin >> input;

    printf("%d се изписва в римската числова система като %s.", input, convertToRoman(input).c_str());
}

string convertToRoman(int number)
{
    string output;

    while (number >= 1000)
    {
        number -= 1000;
        output.append("M");
    }
    while (number >= 900)
    {
        number -= 900;
        output.append("CM");
    }
    while (number >= 500)
    {
        number -= 500;
        output.append("D");
    }
    while (number >= 400)
    {
        number -= 400;
        output.append("CD");
    }
    while (number >= 100)
    {
        number -= 100;
        output.append("C");
    }
    while (number >= 90)
    {
        number -= 90;
        output.append("XC");
    }
    while (number >= 50)
    {
        number -= 50;
        output.append("L");
    }
    while (number >= 40)
    {
        number -= 40;
        output.append("XC");
    }
    while (number >= 10)
    {
        number -= 10;
        output.append("X");
    }
    while (number >= 9)
    {
        number -= 9;
        output.append("IX");
    }
    while (number >= 5)
    {
        number -= 5;
        output.append("V");
    }
    while (number >= 4)
    {
        number -= 4;
        output.append("IV");
    }
    while (number >= 1)
    {
        number -= 1;
        output.append("I");
    }

    return output;
}