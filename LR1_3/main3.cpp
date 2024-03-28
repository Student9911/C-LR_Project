// �������� ���������, ������� ������ ������� �������� ���� ����������.
// � �������� ��������� ������������ int, int* � int&.
#include <iostream>
using namespace std;
//�������� 3 �������� ������� ������. � �������� ���������� ��� ������� � ������ ��� ��������
//��� ��������� int, ������ ��� - ���� int*, ������ ��� - ���� int&.
//��������� ������ ���������� ���������� � ������ �� ���� ���������.

void obmen1(int, int);
void obmen2(int*, int*);
void obmen3(int&, int&);
int a = 2;
int b = 5;



int main()
{
	setlocale(LC_ALL, "ru");	
	cout << "�� ������: � = " << a << "; b = " << b << endl;
	obmen1(a, b);
	cout << "����� ������ ������� 'obmen1': � = " << a << "; b = " << b << endl;
	obmen2(&a, &b);
	cout << "����� ������ ������� 'obmen2': � = " << a << "; b = " << b << endl;
	obmen3(a, b);
	cout << "����� ������ ������� 'obmen3': � = " << a << "; b = " << b << endl;
	return 0;
}

void obmen1(int z, int x)
{
	int temp = z;
	z = x;
	x = temp;
	a = z;
	b = x;

}

void obmen2(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;

}

void obmen3(int& a, int& b)
{

	int temp = a;
	a = b;
	b = temp;

}