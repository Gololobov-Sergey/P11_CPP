#include<iostream>
#include<iomanip>
#include<conio.h>

using namespace std;

#define size 4

void setMatrix(int a[size][size])
{
	for (size_t i = 1; i <= size * size; i++)
	{
		int row = rand() % size;
		int col = rand() % size;
		if (a[row][col] == 0)
		{
			a[row][col] = i;
		}
		else
		{
			i--;
		}
	}
}

void printMatrix(int a[size][size])
{
	cout << "-";
	for (size_t i = 0; i < size; i++)
	{
		cout << "----";
	}
	cout << endl;
	for (size_t i = 0; i < size; i++)
	{
		cout << "|";
		for (size_t j = 0; j < size; j++)
		{
			if (a[i][j] == size * size)
			{
				cout << setw(3) << " " << "|";
			}
			else
			{
				cout << setw(3) << a[i][j] << "|";
			}
		}
		cout << endl;
		cout << "-";
		for (size_t i = 0; i < size; i++)
		{
			cout << "----";
		}
		cout << endl;
	}
}

bool isWinner(int a[size][size])
{
	for (size_t i = 0; i < size * size; i++)
	{
		if (a[i / size][i % size] != i + 1)
		{
			return false;
		}
	}
	return true;
}

enum DIRECTION
{
	UP = 72, DOWN = 80, LEFT = 75, RIGHT = 77, ESC = 27
};

int main()
{
	srand(time(0));

	int a[size][size] = { 0 };
	setMatrix(a);
	char c;
	printMatrix(a);
	int count = 0;
	bool isESC = false;
	while (!isWinner(a))
	{
		// move
		if (_kbhit())
		{
			c = _getch();
			int row, col;
			for (size_t i = 0; i < size; i++)
			{
				for (size_t j = 0; j < size; j++)
				{
					if (a[i][j] == size * size)
					{
						row = i;
						col = j;
						break;
					}
				}
			}

			switch (c)
			{
			case UP:
				if (row != size - 1)
				{
					swap(a[row][col], a[row + 1][col]);
					count++;
				}
				break;
			case DOWN:
				if (row != 0)
				{
					swap(a[row][col], a[row - 1][col]);
					count++;
				}
				break;
			case LEFT:
				if (col != size - 1)
				{
					swap(a[row][col], a[row][col + 1]);
					count++;
				}
				break;
			case RIGHT:
				if (col != 0)
				{
					swap(a[row][col], a[row][col - 1]);
					count++;
				}
				break;
			case ESC:
				isESC = true;
				break;
			default:
				break;
			}
			if (isESC)
				break;
			system("cls");
			printMatrix(a);
		}
	}
	cout << "Count - " << count << endl;
}