#include<iostream>
#include<iomanip>
#include<conio.h>
using namespace std;
#define N 5
void minMatrix(float matrix[][N]);// ����������� �������� �������
void maxMatrix(float matrix[][N]);// ������������ �������� �������
void maxDownTriangleMatrix(float matrix[][N]);// �������� ���������������� ����� �������
void maxUpTriangleMatrix(float matrix[][N]);// �������� ����������������� ����� �������
void minTriangleMatrix(float matrix[][N]);// ������� ���������������� ����� �������
void minTriangleMatrix(float matrix[][N]);// ������� ����������������� ����� �������
void maxMainDiagMatrix(float matrix[][N]);// �������� ������� ��������� �������
void minMainDiagMatrix(float matrix[][N]);// ������� ������� ��������� �������
void maxMatrix(float matrix[][N]);// ������� �������������� ��������� �������
void maxMatrix(float matrix[][N]);// �������� �������������� ��������� �������
void maxMatrix(float matrix[][N]);// �������������������� �������� ��������� �������
void maxMatrix(float matrix[][N]);// �������������������� �������� ��������� ���������������� ����� �������
void maxMatrix(float matrix[][N]);// �������������������� �������� ��������� ����������������� ����� �������
void maxMatrix(float matrix[][N]);// ����� ����� �������
void maxMatrix(float matrix[][N]);// ����� �������� �������
void maxMatrix(float matrix[][N]);// ����������� �������� �����
void maxMatrix(float matrix[][N]);// ����������� �������� ��������
void maxMatrix(float matrix[][N]);// ������������ �������� �����
void maxMatrix(float matrix[][N]);// ������������ �������� ��������
void maxMatrix(float matrix[][N]);// �������������������� �������� �����
void maxMatrix(float matrix[][N]);// �������������������� �������� ��������
void maxMatrix(float matrix[][N]);// ����� ����� � ����������������� ������ �������
void elementAvargeMatrix(float matrix[][N]);// �������, �������� ������� �� �������� � ��������������������� 

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
	cout << "����������� �������� � ������� = " << min << endl;

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
	cout << "������������ �������� � ������� = " << max << endl;

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
	cout << "�������������������� �������� ������� ����� " << result << endl;
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
	cout << "����� ������� � ��������������������� �����   " << result <<" ����� " << closestElement;

}