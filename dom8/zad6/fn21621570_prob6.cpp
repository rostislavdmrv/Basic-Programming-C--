#include <iostream>
using namespace std;
const int N = 5;
struct Student
{
	char nomer[8];
	int ocenki[N];
};
Student enter();
int sredno(Student a);

int main()
{
	setlocale(LC_ALL, "BG");
	Student stu = enter();
	float aver;
	aver = sredno(stu);
	cout << "Факултетен номер: " << stu.nomer << endl;
	cout << "Среден успех: " << aver;
	


}
Student enter()
{
	Student a ;
	cout << "Въведете данните за студунтa :" << endl;
	cout << "Въведете факултетен номер: ";
	cin >> a.nomer;
	for (int i = 0; i < N; i++)
	{
		do {
			cout << "Въведете 5 оценки от семестъра: ";
			cin >> a.ocenki[i];
		} while (a.ocenki[i] < 2 || a.ocenki[i]>6);
	}

	return a;
}
int sredno(Student a )
{

	int sum = 0;
	for (int i = 0; i < N; i++)
	{
		sum += a.ocenki[i];
	}
	return sum /N;
}
