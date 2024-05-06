#include<iostream>
#include<conio.h>
#include <vector>
#include <algorithm>
#define N1 3 //	начальный индекс
#define N2 7 //	конечный индекс для сортировки
using namespace std;
//	Функции сортировки массива, такие как пузырьковая сортировка и быстрая сортировка, 
// работают только с одномерными массивами. Для многомерных массивов нам нужны более 
// сложные алгоритмы сортировки, такие как: 
// * Сортировка подсчетом
// * Сортировка по основанию
// * Сортировка по разрядам
// * Сортировка слиянием

void bubbleSort(int arr[], int n);	// функция сортировки пузырьком
void quickSort(int arr[], int low, int high);	//	функция быстрой сортировки
void print(int arr[], int n, string name = "вывод массива"); //	функция вывода массива в консоль, чтобы не повторяться
int partition(int arr[], int low, int high);
void sortArr(int arr[], int n);	//	сортировка четных по возрастанию нечетных по убыванию
void sortDescending(int arr[], int n);	// сортировка по убыванию в диапазоне от N1 до N2
void sortAscending(int arr[], int n);	// сортировка по возростанию в диапазоне от N1 до N2



int main()
{
	setlocale(LC_ALL, "ru");
	int mas[] = { 2,5,-8,1,-4,6,3,-5,-9,13,0,4,9}; //	 массив интов несортированный
	// текущие индексы мин. и макс. элементов
	int imin, imax;
	// вычисление n - количества элементов
	int n = sizeof(mas) / sizeof(int);
	int i;
	// установка начальных индексов для мин и макс
	imin = i = 0;
	imax = i = 0;
	int len = sizeof(mas) / sizeof(mas[0]);

	system("CLS");

	print(mas, len);

	

	//for ( i = 0; i < n - 1; i++)	// нахождение мин и макс
	//{
	//	imin = i;
	//	for (int j = i + 1; j < n; j++)
	//	{
	//		if (mas[j] < mas[imin])
	//		{
	//			imin = j;

	//		}

	//		int t = mas[i];
	//		mas[i] = mas[imin];
	//		mas[imin] = t;

	//	}

	//}

	print(mas, len, " массив после сортировки из примера");

	// ниже закоментированные вызовы функций заданий из методички, для вызова необходимо раскоментировать нужные функции

	//bubbleSort(mas, len);	

	//quickSort(mas, 0, len - 1);	
	//print(mas, len, " массив после сортировки методом 'быстрая сортировка'");

	//sortArr(mas, len);

	sortDescending(mas, len);

	//sortAscending(mas, len);

	
	


	return 0;
}

void print(int arr[], int n, string name) {
	for (int i = 0; i < n; i++)		//	выыод на экран результата
	{
		cout << arr[i] << " ";

	}

	cout << name << endl;
}

// функция сортировки пузырьком
void bubbleSort(int arr[], int n) {
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			
			}
		}
	}

	print(arr, n, " массив после сортировки методом 'пызырек'");
}

//	функция быстрой сортировки
void quickSort(int arr[], int low, int high) {
	if (low < high) {
		int partitionIndex = partition(arr, low, high);

		quickSort(arr, low, partitionIndex - 1);
		quickSort(arr, partitionIndex + 1, high);
	}


	
}

int partition(int arr[], int low, int high) {
	int pivot = arr[high];
	int i = (low - 1);

	for (int j = low; j <= high - 1; j++) {
		if (arr[j] < pivot) {
			i++;
			int temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
		}
	}

	int temp = arr[i + 1];
	arr[i + 1] = arr[high];
	arr[high] = temp;

	return (i + 1);
}

//	Сортировка по возрастанию четных и по убыванию нечетных значений
void sortArr(int arr[], int n) {
	int a, b, c;
	a = 0;
	for (int i = 0; i < n; i++)	// сначала сортируем четные и нечетные для упроцения и красоты вывода
	{
		if (arr[i] % 2 == 0 && i != 0)
		{
			b = arr[i];
			c = arr[a];
			arr[a] = b;
			arr[i] = c;
			a++;
		}
		if (arr[i] % 2 == 0 && i == 0)
		{
			a++;
		}
	}
	for (int i = 0; i < n; i++)	//	в этом цикле сортируем согласно задания
	{
		for (int j = 0; j < n - 1; j++)
		{
			if (arr[j] % 2 == 0 && arr[j + 1] % 2 == 0)
			{
				if (arr[j] > arr[j + 1])
				{
					swap(arr[j], arr[j + 1]);

				}

			}
			if (arr[j] % 2 == 0 && arr[j + 1] % 2 != 0)
			{
				if (arr[j - 1] > arr[j])
				{
					swap(arr[j], arr[j + 1]);

				}

			}

			if (arr[j] % 2 != 0 && arr[j + 1] % 2 != 0)
			{
				if (arr[j] < arr[j + 1])
				{
					swap(arr[j], arr[j + 1]);

				}

			}

		}

	}

	print(arr, n, " массив после сортировки методом 'четные не четные'");
	
}

// сортировка по убыванию в диапазоне от N1 до N2
void sortDescending(int arr[], int n) {
	int a, b;
	if (N1 < N2) 
	{
		a = N1;
		b = N2;

	}
	else
	{
		b = N1;
		a = N2;
	}

	for (int i = a; i < b; i++)
	{
		for (int j = a; j < b; j++)
		{
			if (arr[j] < arr[j + 1])
			{
				swap(arr[j], arr[j + 1]);

			}

		}

	}

	print(arr, n, " массив после сортировки по убыванию в диапазоне от N1 до N2");
}

// сортировка по возростанию в диапазоне от N1 до N2
void sortAscending(int arr[], int n) {
	int a, b;

	if (N1 < N2)
	{
		a = N1;
		b = N2;

	}
	else
	{
		b = N1;
		a = N2;
	}

	for (int i = a; i < b; i++)
	{
		for (int j = a; j < b; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				swap(arr[j], arr[j + 1]);

			}

		}

	}

	print(arr, n, " массив после сортировки по возростанию в диапазоне от N1 до N2");

}