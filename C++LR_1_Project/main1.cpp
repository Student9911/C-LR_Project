#include<iostream>
using namespace std;
// ������������ ������ �1 ������� 1
// ������������ �� ���������� ��������� �� ����� C++. ��� ����� ��������� ��������� ���������� ����� 2 � �������.
// �������������� ��������� ���, ����� ����������� ������� � ����� ����������.

int exponentiation(int degree, int num)
{
	int result = 1;
	for (int i = 0; i < degree; i++)
	{
		result *= num;
	}

	return result;
}



int main()
{
	setlocale(LC_ALL, "ru");
	cout << "������� ����� ��� ���������� � �������" << endl;
	int a;
	cin >> a;
	cout << "������ ������� � ������� ����� ��������� �����" << endl;
	int b;
	cin >> b;
	cout << "��������� �����: " << exponentiation(b, a);


	return 0;
}