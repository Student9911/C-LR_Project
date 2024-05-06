#include<iostream>
#include<conio.h>
#include <vector>
#include <algorithm>
#define N1 3 //	��������� ������
#define N2 7 //	�������� ������ ��� ����������
using namespace std;
//	������� ���������� �������, ����� ��� ����������� ���������� � ������� ����������, 
// �������� ������ � ����������� ���������. ��� ����������� �������� ��� ����� ����� 
// ������� ��������� ����������, ����� ���: 
// * ���������� ���������
// * ���������� �� ���������
// * ���������� �� ��������
// * ���������� ��������

void bubbleSort(int arr[], int n);	// ������� ���������� ���������
void quickSort(int arr[], int low, int high);	//	������� ������� ����������
void print(int arr[], int n, string name = "����� �������"); //	������� ������ ������� � �������, ����� �� �����������
int partition(int arr[], int low, int high);
void sortArr(int arr[], int n);	//	���������� ������ �� ����������� �������� �� ��������
void sortDescending(int arr[], int n);	// ���������� �� �������� � ��������� �� N1 �� N2
void sortAscending(int arr[], int n);	// ���������� �� ����������� � ��������� �� N1 �� N2



int main()
{
	setlocale(LC_ALL, "ru");
	int mas[] = { 2,5,-8,1,-4,6,3,-5,-9,13,0,4,9}; //	 ������ ����� ���������������
	// ������� ������� ���. � ����. ���������
	int imin, imax;
	// ���������� n - ���������� ���������
	int n = sizeof(mas) / sizeof(int);
	int i;
	// ��������� ��������� �������� ��� ��� � ����
	imin = i = 0;
	imax = i = 0;
	int len = sizeof(mas) / sizeof(mas[0]);

	system("CLS");

	print(mas, len);

	

	//for ( i = 0; i < n - 1; i++)	// ���������� ��� � ����
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

	print(mas, len, " ������ ����� ���������� �� �������");

	// ���� ����������������� ������ ������� ������� �� ���������, ��� ������ ���������� ���������������� ������ �������

	//bubbleSort(mas, len);	

	//quickSort(mas, 0, len - 1);	
	//print(mas, len, " ������ ����� ���������� ������� '������� ����������'");

	//sortArr(mas, len);

	sortDescending(mas, len);

	//sortAscending(mas, len);

	
	


	return 0;
}

void print(int arr[], int n, string name) {
	for (int i = 0; i < n; i++)		//	����� �� ����� ����������
	{
		cout << arr[i] << " ";

	}

	cout << name << endl;
}

// ������� ���������� ���������
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

	print(arr, n, " ������ ����� ���������� ������� '�������'");
}

//	������� ������� ����������
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

//	���������� �� ����������� ������ � �� �������� �������� ��������
void sortArr(int arr[], int n) {
	int a, b, c;
	a = 0;
	for (int i = 0; i < n; i++)	// ������� ��������� ������ � �������� ��� ��������� � ������� ������
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
	for (int i = 0; i < n; i++)	//	� ���� ����� ��������� �������� �������
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

	print(arr, n, " ������ ����� ���������� ������� '������ �� ������'");
	
}

// ���������� �� �������� � ��������� �� N1 �� N2
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

	print(arr, n, " ������ ����� ���������� �� �������� � ��������� �� N1 �� N2");
}

// ���������� �� ����������� � ��������� �� N1 �� N2
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

	print(arr, n, " ������ ����� ���������� �� ����������� � ��������� �� N1 �� N2");

}