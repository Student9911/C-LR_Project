#include<iostream>
using namespace std;
// ЛАБОРАТОРНАЯ РАБОТА №1 ЗАДАНИЕ 1
// Ознакомиться со структурой программы на языке C++. Для этого выполнить программу возведения числа 2 в степень.
// Модифицировать программу так, чтобы вычислялась степень с любым основанием.

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
	cout << "Введите число для возведения в степень" << endl;
	int a;
	cin >> a;
	cout << "Ведите степень в которую будем возводить число" << endl;
	int b;
	cin >> b;
	cout << "Результат равен: " << exponentiation(b, a);


	return 0;
}