//#include<iostream>
//using namespace std;
//void enter(int arr[], int& k);
//double sredno(int arr[], int& k,int nechet[],int& brnech);
//void sortirane(int arr[], int& k,int sortarr);
//void print(int arr[], int& k);
//const int N = 25;
//int main()
//{
//	int c[N], cn[N], cs[N];
//	int k, brnech;
//	double sredna_stojnost;
//	enter(c, k);
//	print(c, k);
//	sredna_stojnost = sredno(c, k, cn, brnech);
//	cout << endl << "Sredna stoinost na nechetnite chisla = " << sredna_stojnost;
//	print(cn, brnech);
//	sortirane(c,k, cs);
//	print(cs, k);
//
//}
//void enter(int arr[], int& k)
//{ 
//	do
//	{ 
//		cout << " Enter number :";
//		cin >> k;
//
//	} while (k<=0|| k>N);
//	for (int i = 0; i < k; i++)
//	{
//		cout<< i + 1 << " element";
//		cin >> arr[i];
//	}
//}
//double sredno(int arr[], int& k, int nechet[], int& brnech)
//{ 
//	brnech = 0;
//	double sum = 0;
//	for (int i = 0; i < k; i++)
//	{
//		if (arr[i] % 2 != 0)
//		{
//			nechet[brnech] = arr[i];
//			brnech++;
//			sum += arr[i];
//		}
//	}
//	if (brnech == 0)
//		return  0;
//	return sum / brnech;
//
//}
//
//void sortirane(int arr[], int& k, int sortarr)
//{ 
//	int temp, j = 0;
//	for (int i = 0; i < k; i++)
//	{
//		cout << "Enter element [" << i + 1 << "] ";
//		cin >> arr[i];
//	}
//	cout << "Unsorted Array elements:" << endl;
//	for (int i = 0; i < k; i++)
//		cout << arr[i] << "\t";
//	cout << endl;
//
//	//низходящ ред 
//	for (int i = 0; i < k; i++)
//	{
//		for (j = i + 1; j < k; j++)
//		{
//			if (arr[i] < arr[j])
//			{
//				temp = arr[i];
//				arr[i] = arr[j];
//				arr[j] = temp;
//			}
//		}
//	}
//
//	cout << "Sorted Array elements:" << endl;
//	for (int i = 0; i < k; i++)
//		cout << arr[i] << "\t";
//	cout << endl;
//	
//
//}
//void print(int arr[], int& k)
//{ 
//	for (int i = 0; i < k; i++)
//	{
//		cout <<"elment" << i + 1 << " : " << arr[i];
//	}
//}
 #include <iostream>
# include <time.h>
using namespace std;
void enter(int a[], int lenght);
void sort_Asc(int a[], int lenght);
void sort_Des(int a[], int lenght);
void print(int a[], int lenght);
int const N = 20;
int main()
{
    double arr[20];
    int choice;
    enter(arr, 20);

    do {
        cout << "1. Sort ascendin" << endl;
        cout << "2. Sort descending" << endl;
        cout << "3. Print" << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:sort_Asc(arr, 20); break;
        case 2:sort_Des(arr, 20); break;
        case 3:    print(arr, 20); break;
        }
    } while (true);

}
void enter(int a[], int lenght)
{
    srand(time(0));
    for (int i = 0; i < lenght; i++)
    {
        int min = 100;
        int max = 200;
        int tmp = min + (rand() % (max - min + 1));
        a[i] = tmp;
    }
}
void sort_Asc(int a[], int lenght)
{
    for (int i = 0; i < lenght - 1; i++)
    {
        for (int j = 0; j < lenght - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                int tm = a[j];
                a[j] = a[j + 1];
                a[j + 1] = tm;
            }
        }
    }
}
void sort_Des(int a[], int lenght)
{
    for (int i = 0; i < lenght - 1; i++)
    {
        for (int j = 0; j < lenght - i - 1; j++)
        {
            if (a[j] < a[j + 1])
            {
                int tm = a[j];
                a[j] = a[j + 1];
                a[j + 1] = tm;
            }
        }
    }
}
void print(int a[], int lenght)
{
    for (int i = 0; i < lenght; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}
