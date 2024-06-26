//#include <iostream>
//#include<time.h>
//using namespace std;
//int main()
//{ 
//    int b[4][5];
//    bool bnew[4];
//    int proiz = 1;
//    for (int i = 0; i < 4; i++)
//    {
//        for (int j = 0; j < 5; j++)
//        {
//            b[i][j] = rand() % 100 - rand() % 100;
//        }
//    }
//    for (int i = 0; i < 4; i++)
//    {
//        for (int j = 0; j < 5; j++)
//        {
//            cout << b[i][j] << " ";
//        }
//    } 
//    for (int i = 0; i < 4; i++)
//    {
//        for (int j = 0; j < 5; j++)
//        {
//            if (b[i][j] <0)
//            {
//                bnew[i] = true;
//            }
//        }
//    }
//    for (int i = 0; i < 4; i++)
//    {
//        cout << bnew[i] << " ";
//    }
//    for (int i = 0; i < 5; i++)
//    {
//        for (int j = 0; j < 4; j++)
//        {
//            if (b[i][j] < 0)
//            {
//                bnew[i] = true;
//            }
//        }
//    } 
//    int araay[b];
//    bool flag = false;
//    for (int j = 0; j < 5; j++)
//    {
//        for (int i = 0; i < 4; i++)
//        {
//            if (b[i][j] > 0)
//            {
//                bnew[j] *= b[i][j];
//            }
//        }
//    }
//
//    cout << proiz;
//} 
#include <iostream>
#define SIZE 6
using namespace std;

int main()
{
    setlocale(LC_ALL, "BG");
    int matrix[SIZE][SIZE];
    int sum_left = 0, sum_right = 0;
    cout << "Въведете елементите на матрицата \n";

    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            cin >> matrix[i][j];
            if (i == j)
                sum_left += matrix[i][j];
            if ((i + j) == SIZE - 1)
                sum_right += matrix[i][j];
        }
    }
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            if (i == j)
            {
                sum_left += matrix[i][j];
            }
            if ((i + j) == 5)
            {
                sum_right += matrix[i][j];
            }
            else
            {
                continue;
            }
        }
    }

    cout << "Главен диагонал: " << sum_left << endl;
    cout << "Второстепен диагонал: " << sum_right << endl;

    return 0;
} 
//#include <iostream>
//#include <iomanip>
//using namespace std;
//int main()
//{
//    srand(time(0));
//    int B[6][6];
//    int secondDigNumbers[6], mainDigNumbers[6];
//    int mainDig = 0, secondDig = 0, brsec = 0, brmain = 0, maxSec, maxMain;
//    for (int i = 0; i < 6; i++)
//    {
//        for (int j = 0; j < 6; j++)
//        {
//            int min = -100;
//            int max = 100;
//            B[i][j] = min + rand() % (max - min + 1);
//
//        }
//    }
//    for (int i = 0; i < 6; i++)
//    {
//        for (int j = 0; j < 6; j++)
//        {
//            cout << setw(4) << B[i][j] << " ";
//        }
//        cout << endl;
//    }
//    for (int i = 0; i < 6; i++)
//    {
//        for (int j = 0; j < 6; j++)
//        {
//            if (i == j) mainDig += B[i][j];
//            if ((i + j) == 5) secondDig += B[i][j];
//            else if ((i + j) >= 6 && j > i) secondDigNumbers[brsec++] = B[i][j];
//            else if ((i + j) < 6 && i > j) mainDigNumbers[brmain++] = B[i][j];
//        }
//    }
//    cout << endl; cout << endl;
//    maxMain = mainDigNumbers[0];
//    maxSec = secondDigNumbers[0];
//    for (int i = 1; i < brsec; i++)
//    {
//        if (secondDigNumbers[i] > maxSec) maxSec = secondDigNumbers[i];
//    }
//    for (int i = 1; i < brmain; i++)
//    {
//        if (mainDigNumbers[i] > maxMain) maxMain = mainDigNumbers[i];
//    }
//    cout << "Max of elements between secondary and main diagonal: " << maxSec << endl;
//    cout << "Max of elements between main and secondary diagonal: " << maxMain << endl;
//    if (mainDig > secondDig) cout << "Sum of main diagonal is bigger: " << mainDig << endl;
//    else cout << "Sum of secondary diagonal is bigger: " << secondDig << endl;
//
//}