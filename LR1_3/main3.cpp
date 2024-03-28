// Написать программу, которая меняет местами значения двух переменных.
// В качестве параметра использовать int, int* и int&.
#include <iostream>
using namespace std;
//Написать 3 варианта функции обмена. В качестве параметров эта функция в первый раз получает
//два параметра int, второй раз - типа int*, третий раз - типа int&.
//Придумать способ достижения результата в каждом из трех вариантов.

void obmen1(int, int);
void obmen2(int*, int*);
void obmen3(int&, int&);
int a = 2;
int b = 5;



int main()
{
	setlocale(LC_ALL, "ru");	
	cout << "До обмена: а = " << a << "; b = " << b << endl;
	obmen1(a, b);
	cout << "после вызова функции 'obmen1': а = " << a << "; b = " << b << endl;
	obmen2(&a, &b);
	cout << "после вызова функции 'obmen2': а = " << a << "; b = " << b << endl;
	obmen3(a, b);
	cout << "после вызова функции 'obmen3': а = " << a << "; b = " << b << endl;
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