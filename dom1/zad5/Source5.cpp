#include <iostream>
using namespace std;
int main()
{
	cout << "Enter const1 :" << endl;
	int A ;
	cin >> A;
	cout << "Enter const2 :" << endl;
	int B ;
	cin >> B;
	/*��������� ���������� ������� ��� ������� */
	double C = A/B;
	cout <<"Result of C= " << C << endl;
	/*��������� ���������� ������� ��� ������� , �� ����� ���� �������� ���� �� ������������ ,���� ���������� ���������� ��� ��� ��� � ������� �������,����� �������  */
	float a = A;
	double D = a / B;
	cout<< "Result of D= " << D << endl;
	return 0;
}