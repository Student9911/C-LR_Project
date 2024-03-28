#include<iostream>
#include<iomanip>
#include<conio.h>
using namespace std;
#define N 5
void minMatrix(float matrix[][N]);// минимальное значение матрицы
void maxMatrix(float matrix[][N]);// максимальное значение матрицы
void maxDownTriangleMatrix(float matrix[][N]);// максимум нижнетреугольной части матрицы
void maxUpTriangleMatrix(float matrix[][N]);// максимум верхнетреугольной части матрицы
void minTriangleMatrix(float matrix[][N]);// минимум нижнетреугольной части матрицы
void minTriangleMatrix(float matrix[][N]);// минимум верхнетреугольной части матрицы
void maxMainDiagMatrix(float matrix[][N]);// максимум главной диагонали матрицы
void minMainDiagMatrix(float matrix[][N]);// минимум главной диагонали матрицы
void maxMatrix(float matrix[][N]);// минимум второстепенной диагонали матрицы
void maxMatrix(float matrix[][N]);// максимум второстепенной диагонали матрицы
void maxMatrix(float matrix[][N]);// среднеарифметическое значение элементов матрицы
void maxMatrix(float matrix[][N]);// среднеарифметическое значение элементов нижнетреугольной части матрицы
void maxMatrix(float matrix[][N]);// среднеарифметическое значение элементов верхнетреугольной части матрицы
void maxMatrix(float matrix[][N]);// суммы строк матрицы
void maxMatrix(float matrix[][N]);// суммы столбцов матрицы
void maxMatrix(float matrix[][N]);// минимальное значение строк
void maxMatrix(float matrix[][N]);// минимальное значение столбцов
void maxMatrix(float matrix[][N]);// максимальное значение строк
void maxMatrix(float matrix[][N]);// максимальное значение столбцов
void maxMatrix(float matrix[][N]);// среднеарифметическое значение строк
void maxMatrix(float matrix[][N]);// среднеарифметическое значение столбцов
void maxMatrix(float matrix[][N]);// суммы нижне и верхнетреугольных частей матрицы
void elementAvargeMatrix(float matrix[][N]);// элемент, наиболее близкий по значению к среднеарифметическому

int main()
{

	float matrix[N][N];
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			matrix[i][j] = rand() % 100;
			cout << setw(8) << setprecision(5) << matrix[i][j];

		}
		cout << endl;

	}
	minMatrix(matrix);
	maxMatrix(matrix);
	elementAvargeMatrix(matrix);
	//getch();

	return 0;
}

void minMatrix(float matrix[][N])
{
	setlocale(LC_ALL, "ru");
	float min = matrix[0][0];
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (matrix[i][j] < min)
			{
				min = matrix[i][j];

			}
		}
	}
	cout << "Ìèíèìàëüíîå çíà÷åíèå â ìàòðèöå = " << min << endl;

}

void maxMatrix(float matrix[][N])
{
	setlocale(LC_ALL, "ru");
	float max = matrix[0][0];
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (matrix[i][j] > max)
			{
				max = matrix[i][j];

			}
		}
	}
	cout << "Ìàêñèìàëüíîå çíà÷åíèå â ìàòðèöå = " << max << endl;

}

void maxDownTriangleMatrix(float matrix[][N])
{

}

void maxUpTriangleMatrix(float matrix[][N])
{

}

void minTriangleMatrix(float matrix[][N])
{

}

void maxMainDiagMatrix(float matrix[][N])
{

}

void minMainDiagMatrix(float matrix[][N])
{

}

void elementAvargeMatrix(float matrix[][N])
{

	float result;
	float avergeMatrix = 0;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			avergeMatrix += matrix[i][j];
		}

	}
	result = avergeMatrix / (N * N);
	cout << "Ñðåäíåàðèôìåòè÷åñêîå çíà÷åíèå ìàòðèöû ðàâíî " << result << endl;
	double minDifference = matrix[0][0];
	float closestElement;

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (abs(matrix[i][j] - result) < minDifference)
			{
				minDifference = abs(matrix[i][j] - result);
				closestElement = matrix[i][j];
			}
			
		}

	}
	cout << "ñàìîå áëèçêîå ê ñðåäíåàðèôìåòè÷åñêîìó ÷èñëó   " << result <<" ÷èñëî " << closestElement;

}
