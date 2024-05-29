#include<iostream>
#include<iomanip>
#include<conio.h>

using namespace std;
#define N 5
void minMatrix(float matrix[][N]);// минимальное значение матрицы
void maxMatrix(float matrix[][N]);// максимальное значение матрицы
void maxDownTriangleMatrix(float matrix[][N]);// максимум нижнетреугольной части матрицы
void maxUpTriangleMatrix(float matrix[][N]);// максимум верхнетреугольной части матрицы
void minDownTriangleMatrix(float matrix[][N]);// минимум нижнетреугольной части матрицы
void minUpTriangleMatrix(float matrix[][N]);// минимум верхнетреугольной части матрицы
void maxMainDiagMatrix(float matrix[][N]);// максимум главной диагонали матрицы
void minMainDiagMatrix(float matrix[][N]);// минимум главной диагонали матрицы
void minSideDiagMatrix(float matrix[][N]);// минимум второстепенной диагонали матрицы
void maxSideDiagMatrix(float matrix[][N]);// максимум второстепенной диагонали матрицы
void findMeanValue(float matrix[][N]);// среднеарифметическое значение элементов матрицы
void findMeanLowerTriangle(float matrix[][N]);// среднеарифметическое значение элементов нижнетреугольной части матрицы
void findMeanUpperTriangle(float matrix[][N]);// среднеарифметическое значение элементов верхнетреугольной части матрицы
void sumRows(float matrix[][N]);// суммы строк матрицы
void sumColumns(float matrix[][N]);// суммы столбцов матрицы
void minRow(float matrix[][N]);// минимальное значение строк
void minColumn(float matrix[][N]);// минимальное значение столбцов
void maxRow(float matrix[][N]);// максимальное значение строк
void maxColumn(float matrix[][N]);// максимальное значение столбцов
void findAverageOfRows(float matrix[][N]);// среднеарифметическое значение строк
void findAverageOfColumns(float matrix[][N]);// среднеарифметическое значение столбцов
void findSumOfUpperAndLowerTriangle(float matrix[][N]);// суммы нижне и верхнетреугольных частей матрицы
void elementAvargeMatrix(float matrix[][N]);// элемент, наиболее близкий по значению к среднеарифметическому

int main()
{
	setlocale(LC_ALL, "ru");

	float matrix[N][N];
	cout << "Matrix" << endl;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			matrix[i][j] = rand() % 100;
			cout << setw(8) << setprecision(5) << matrix[i][j];

		}
		cout << endl;

	}
	cout <<"\n\n\n\n\n";
	//minMatrix(matrix);
	//maxMatrix(matrix);
	//elementAvargeMatrix(matrix);
	//maxDownTriangleMatrix(matrix);
	//maxUpTriangleMatrix(matrix);
	//minDownTriangleMatrix(matrix);
	//minUpTriangleMatrix(matrix);
	//maxMainDiagMatrix(matrix);
	

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
	//setlocale(LC_ALL, "RU");
	float max = matrix[0][0];
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < i + 1; j++)
		{
			cout << matrix[i][j] << " ";
			if (matrix[i][j] > max)
			{
				max = matrix[i][j];

			}
		}
		cout << endl;
	}
	cout << "maxDownTriangleMatrix = " << max << endl;
}

void maxUpTriangleMatrix(float matrix[][N])
{
	float max = matrix[0][0];
	for (int i = 0; i < N; i++)
	{
		for (int j = i + 1; j < N; j++)
		{
			cout << matrix[i][j] << " ";
			if (matrix[i][j] > max)
			{
				max = matrix[i][j];

			}
		}
		cout << endl;
	}
	cout << "maxUpTriangleMatrix = " << max << endl;
}

void minDownTriangleMatrix(float matrix[][N])
{
	float max = matrix[0][0];
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < i + 1; j++)
		{
			cout << matrix[i][j] << " ";
			if (matrix[i][j] < max)
			{
				max = matrix[i][j];

			}
		}
		cout << endl;
	}
	cout << "minDownTriangleMatrix = " << max << endl;
}

void minUpTriangleMatrix(float matrix[][N])
{
	float max = matrix[0][0];
	for (int i = 0; i < N; i++)
	{
		for (int j = i + 1; j < N; j++)
		{
			cout << matrix[i][j] << " ";
			if (matrix[i][j] < max)
			{
				max = matrix[i][j];

			}
		}
		cout << endl;
	}
	cout << "minUpTriangleMatrix = " << max << endl;
}
void maxMainDiagMatrix(float matrix[][N])
{
	float max = matrix[0][0];
	; int j = 0;
	string s = "  ";
	for (int i = 0; i < N; i++)
	{
		j = i;
		cout << matrix[i][j];
		s = s + "\t";
		if (matrix[i][j] > max) 
		{
			max = matrix[i][j];
		}

		cout << endl << s;
	}
	cout << "maxMainDiagMatrix = " << max;
}

void minMainDiagMatrix(float matrix[][N])
{
	float max = matrix[0][0];
	; int j = 0;
	string s = "  ";
	for (int i = N; i >= 0; i--)
	{
		j = i;
		cout << matrix[i][j];
		s = s + "\t";
		if (matrix[i][j] < max)
		{
			max = matrix[i][j];
		}

		cout << endl << s;
	}
	cout << "maxMainDiagMatrix = " << max;
}


void minSideDiagMatrix(float matrix[][N])
{
	float max = matrix[0][0];
	; int j = 0;
	string s = "  ";
	for (int i = N; i >= 0; i--)
	{
		j = i;
		cout << matrix[i][j];
		s = s + "\t";
		if (matrix[i][j] < max)
		{
			max = matrix[i][j];
		}

		cout << endl << s;
	}
	cout << "maxMainDiagMatrix = " << max;
}

void maxSideDiagMatrix(float matrix[][N])
{
	float max = matrix[0][0];
	; int j = 0;
	string s = "  ";
	for (int i = N; i >= 0; i--)
	{
		j = i;
		cout << matrix[i][j];
		s = s + "\t";
		if (matrix[i][j] > max)
		{
			max = matrix[i][j];
		}

		cout << endl << s;
	}
	cout << "maxSideDiagMatrix = " << max;
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

// Функция для нахождения среднеарифметического значения элементов матрицы
void findMeanValue(float matrix[][N]) {
	int sum = 0;
	int elements = 0;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			sum += matrix[i][j];
			elements++;
		}
	}
	cout << "findMeanValue = " << sum / elements;

	
}

// Функция для нахождения среднеарифметического значения элементов нижнетреугольной части матрицы
void findMeanLowerTriangle(float matrix[][N]) {
	int sum = 0;
	int elements = 0;
	int j = 0;

	for (int i = 0; i < N; i++) 
	{
		for (j = 0; j < i + 1; j++)
		{
			cout << matrix[i][j] << " ";
			sum += matrix[i][j];
			elements++;
		}
		
		
		cout << endl;
	}

	cout << "findMeanValue = " << sum / elements;
}

// Функция для нахождения среднеарифметического значения элементов верхнетреугольной части матрицы
void findMeanUpperTriangle(float matrix[][N]) {
	int sum = 0;
	int elements = 0;

	for (int i = 0; i < N; i++)
	{
		for (int j = i + 1; j < N; j++)
		{
			cout << matrix[i][j] << " ";
			sum += matrix[i][j];
			elements++;
		}


		cout << endl;
	}
	cout << "findMeanUpperTriangle = " << sum / elements;
}

void sumRows(float matrix[][N]) {
	for (int i = 0; i < N; ++i) {
		double sum = 0;
		for (int j = 0; j < N; ++j) {
			sum += matrix[i][j];
		}
		cout << "Сумма строки " << (i + 1) << " равна: " << sum << endl;
	}
}

void sumColumns(float matrix[][N]) {
	for (int j = 0; j < N; ++j) {
		double sum = 0;
		for (int i = 0; i < N; ++i) {
			sum += matrix[i][j];
		}
		cout << "Сумма столбца " << (j + 1) << " равна: " << sum << endl;
	}
}

void minRow(float matrix[][N]) {
	for (int i = 0; i < N; ++i) {
		double min = matrix[i][0];
		for (int j = 1; j < N; ++j) {
			if (matrix[i][j] < min) {
				min = matrix[i][j];
			}
		}
		cout << "Минимальное значение строки " << (i + 1) << " равно: " << min << endl;
	}
}

void minColumn(float matrix[][N]) {
	for (int j = 0; j < N; ++j) {
		double min = matrix[0][j];
		for (int i = 1; i < N; ++i) {
			if (matrix[i][j] < min) {
				min = matrix[i][j];
			}
		}
		cout << "Минимальное значение столбца " << (j + 1) << " равно: " << min << endl;
	}
}

void maxRow(float matrix[][N]) {
	for (int i = 0; i < N; ++i) {
		double max = matrix[i][0];
		for (int j = 1; j < N; ++j) {
			if (matrix[i][j] > max) {
				max = matrix[i][j];
			}
		}
		cout << "Максимальное значение строки " << (i + 1) << " равно: " << max << endl;
	}
}

void maxColumn(float matrix[][N]) {
	for (int j = 0; j < N; ++j) {
		double max = matrix[0][j];
		for (int i = 1; i < N; ++i) {
			if (matrix[i][j] > max) {
				max = matrix[i][j];
			}
		}
		cout << "Максимальное значение столбца " << (j + 1) << " равно: " << max << endl;
		
	}
}
// Функция для нахождения среднеарифметического значения строк
void findAverageOfRows(float matrix[][N]) {	
	double sum;
	double average;
	int count = 1;

	for (int i = 0; i < N; ++i) {
		sum = 0.0;
		for (int j = 0; j < N; ++j) {
			sum += matrix[i][j];
			count++;
		}
		average = sum / N;
		cout << "Srednnearifmeticheskoe znachenie stroki " << i + 1 << " = " << average << endl;
	}

	
}

//Функция для нахождения среднеарифметического значения столбцов 
void findAverageOfColumns(float matrix[][N]) {	
	double sum;
	double average;

	for (int j = 0; j < N; ++j) {
		sum = 0.0;
		for (int i = 0; i < N; ++i) {
			sum += matrix[i][j];
		}
		average = sum / N;
		cout << "Srednnearifmeticheskoe znachenie stolbca " << j + 1 << " = " << average << endl;
	}

	
}


// Функция для нахождения суммы нижнетреугольных и верхнетреугольных частей матрицы 
void findSumOfUpperAndLowerTriangle(float matrix[][N]) {
	
	int sumLower = 0;
	int sumUpper = 0;

	// Сумма нижнетреугольной части
	for (int i = 0; i < N; ++i) {
		for (int j = 0; j < i + 1; ++j) {
			sumLower += matrix[i][j];
		}
	}

	// Сумма верхнетреугольной части
	for (int i = N - 1; i >= 0; --i) {
		for (int j = N - 1; j > i; --j) {
			sumUpper += matrix[i][j];
		}
	}

	cout << "Summa nizhnestreugolnoy chasti = " << sumLower << endl;
	cout << "Summa verkhneestreugolnoy chasti = " << sumUpper << endl;

	
}

