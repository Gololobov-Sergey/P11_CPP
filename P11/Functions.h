#pragma once
#include<iostream>
#include<iomanip>
#include<Windows.h>
#define PRINT_TIME cout << "Time = " << (float)(clock() - t) / CLOCKS_PER_SEC << " sec" << endl;

using namespace std;

enum ConsoleColor
{
	Black = 0, Blue = 1, Green = 2, Cyan = 3, Red = 4, Magenta = 5, Brown = 6, LightGray = 7, DarkGray = 8,
	LightBlue = 9, LightGreen = 10, LightCyan = 11, LightRed = 12, LightMagenta = 13, Yellow = 14, White = 15
};

void SetColor(int text, int background)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), (WORD)((background << 4) | text));
}

void gotoxy(int x, int y)
{
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void starLine(char symbol, int count)
{
	for (size_t i = 0; i < count; i++)
	{
		cout << symbol;
	}
	cout << endl;
}

void starLine(int count = 10, char symbol = '*')
{
	for (size_t i = 0; i < count; i++)
	{
		cout << symbol;
	}
	cout << endl;
}

template<class T1, class T2, class T3>
auto Sum(T1 a, T2 b, T3 c) -> decltype(b+c)
{
	return a + b + c;
}


bool isEven(int a)
{
	return a % 2 == 0;
}


float avg3(int a, int b, int c)
{
	float d = (a + b + c) / 3.f;
	return d;
}


/////// 11.07.2022  //////////////

template<class T>
void setArray(T* arr, int size, int min = 0, int max = 9)
{
	for (size_t i = 0; i < size; i++)
	{
		arr[i] = rand() % (max - min + 1) + min;
	}
}

template<class T>
void printArray(T* arr, int size)
{
	for (size_t i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

template<class T>
T maxValueArray(T* arr, int size)
{
	T max = arr[0];
	for (size_t i = 1; i < size; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	return max;
}

template<class T>
int findKeyArray(T* arr, int size, T key)
{
	for (size_t i = 0; i < size; i++)
	{
		if (arr[i] == key)
		{
			return i;
		}
	}
	return -1;
}


void setArray2D(int arr[][10], int row, int col, int min, int max)
{
	for (size_t i = 0; i < row; i++)
	{
		for (size_t j = 0; j < col; j++)
		{
			arr[i][j] = rand() % (max - min + 1) + min;
		}
	}
}

int maxValueArray2D(int arr[][10], int row, int col)
{
	int max = arr[0][0];
	for (size_t i = 0; i < row; i++)
	{
		for (size_t j = 0; j < col; j++)
		{
			if (arr[i][j] > max)
			{
				max = arr[i][j];
			}
		}
	}
	return max;
}

int minValueArray2D(int arr[][10], int row, int col)
{
	int min = arr[0][0];
	for (size_t i = 0; i < row; i++)
	{
		for (size_t j = 0; j < col; j++)
		{
			if (arr[i][j] < min)
			{
				min = arr[i][j];
			}
		}
	}
	return min;
}

int getCountNumber(int number)
{
	int count = 0;
	if (number <= 0)
	{
		count++;
		number = -number;
	}
	while (number)
	{
		count++;
		number /= 10;
	}
	return count;
}

void printArray2D(int arr[][10], int row, int col)
{
	int max = maxValueArray2D(arr, row, col);
	int min = minValueArray2D(arr, row, col);
	int count1 = getCountNumber(max);
	int count2 = getCountNumber(min);
	int count = (count1 > count2) ? count1 : count2;
	for (size_t i = 0; i < row; i++)
	{
		for (size_t j = 0; j < col; j++)
		{
			cout << setw(count + 1) << arr[i][j];
		}
		cout << endl;
	}
}


template <class T>
void selectedSort(T* arr, const int SIZE, bool Choice) {

	for (int i = 0; i < SIZE - 1; ++i)
	{
		int MinIndex = i;
		for (int j = i + 1; j < SIZE; ++j)
		{
			if (Choice)
			{
				if (arr[j] < arr[MinIndex])
					MinIndex = j;
			}
			else
			{
				if (arr[j] > arr[MinIndex])
					MinIndex = j;
			}
		}
		swap(arr[i], arr[MinIndex]);
	}
}

template<class T>
T maxValueMainDiagonal2D(T arr[10][10], int row, int col)
{
	T max = arr[0][0];
	for (size_t i = 1; i < row; i++)
	{
		if (arr[i][i] > max)
		{
			max = arr[i][i];
		}
	}
	return max;
}

int factorial(int n)
{
	int f = 1;
	for (size_t i = 2; i <= n; i++)
	{
		f *= i;
	}
	return f;
}


int factorial_r(int n)
{
	if (n == 1)
		return 1;
	return n * factorial_r(n - 1);
}


void num(int n)
{
	cout << n << " ";
	if (n > 1)
		num(n - 1);
}

void num_(int n)
{
	if (n > 1)
		num_(n - 1);
	cout << n << " ";
	
}

int countNum(int n)
{
	if (n < 10)
		return 1;
	return 1 + countNum(n / 10);
}

int sumNum(int n)
{
	if (n < 10)
		return n;
	return n%10 + sumNum(n / 10);
}


int sumAB(int a, int b)
{
	if (a == b)
	{
		return a;
	}
	return a + sumAB(a + 1, b);
}

int fibo(int n)
{
	static int c = 0;
	cout << ++c << endl;
	if (n < 3) return 1;
	return fibo(n - 1) + fibo(n - 2);
}


double pow_(int a, int n)
{
	static int c = 0;
	cout << ++c << endl;
	if (n == 0)
		return 1;
	if (n < 0)
		return 1. / pow_(a, -n);
	if (n == 1) 
		return a;
	return a * pow_(a, n - 1);
}

int maxValueRecur(int a[], int n)
{
	return 0;
}