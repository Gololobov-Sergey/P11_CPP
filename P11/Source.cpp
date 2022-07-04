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

int main()
{

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	SetConsoleTitleA("P11 - C++");
	cout.setf(ios::boolalpha);
	//cout.setf(ios::showpos);

	/*cout << "Black = 0, Blue = 1, Green = 2, Cyan = 3, Red = 4, Magenta = 5, Brown = 6, LightGray = 7, DarkGray = 8," << endl;
	cout << "LightBlue = 9, LightGreen = 10, LightCyan = 11, LightRed = 12, LightMagenta = 13, Yellow = 14, White = 15" << endl;
	short textColor, backColor;
	cout << "Введите какой вы хотите Цвет Текста (от 1 до 15): ";
	cin >> textColor;
	cout << "А также его фон (от 1 до 15): ";
	cin >> backColor;*/
	SetColor(15, 0);
	system("cls");

	srand(time(0));

	const int row = 6, col = 6;
	int arr[row][col]; // = { {1,2,3},{4,5,6},{7,8,9} };

	/*int M[row];
	for (size_t i = 0; i < row; i++)
	{
		M[i] = rand() % 9;
	}

	int D = rand() % 9;
	cout << "D=" << D << endl;*/

	for (size_t i = 0; i < row; i++)
	{
		for (size_t j = 0; j < col; j++)
		{
			arr[i][j] = rand() % 50;
		}
	}

	for (size_t i = 0; i < row; i++)
	{
		for (size_t j = 0; j < col; j++)
		{
			cout << setw(4) << arr[i][j];
		}
		cout << endl;
	}
	cout << endl;

	int min = arr[0][0], max = arr[0][0], imin = 0, imax = 0;
	for (size_t i = 0; i < row; i++)
	{
		for (size_t j = 0; j < col; j++)
		{
			if (arr[i][j] > max)
			{
				imax = i;
				max = arr[i][j];
			}
			if (arr[i][j] < min)
			{
				imin = i;
				min = arr[i][j];
			}
		}
	}

	for (size_t i = 0; i < col; i++)
	{
		swap(arr[imin][i], arr[imax][i]);
	}

	for (size_t i = 0; i < row; i++)
	{
		for (size_t j = 0; j < col; j++)
		{
			cout << setw(4) << arr[i][j];
		}
		cout << endl;
	}


	/*int count = 0;
	for (size_t i = 0; i < row; i++)
	{
		bool isUniq = true;
		for (size_t j = 0; j < col; j++)
		{
			for (size_t k = j+1; k < col; k++)
			{
				if (arr[i][j] == arr[i][k])
				{
					isUniq = false;
					break;
				}
			}
			if (!isUniq)
				break;
		}
		if (isUniq)
			count++;

		for (size_t j = 0; j < col; j++)
		{
			SetColor((isUniq) ? 12 : 15, 0);
			cout << setw(4) << arr[i][j];
		}
		SetColor(White, Black);
		cout << endl;

	}
	cout << endl;
	cout << "Count = " << count << endl;*/



	/*int sum, max = INT_MIN, imax = 0;
	for (size_t i = 0; i < row; i++)
	{
		sum = 0;
		for (size_t j = 0; j < col; j++)
		{
			sum += arr[i][j];
		}
		if (sum > max)
		{
			max = sum;
			imax = i;
		}
	}
	cout << "S=" << max << ", i=" << imax << endl;*/


	

	/*for (size_t i = 0; i < row; i++)
	{
		for (size_t j = 0; j < col; j++)
		{
			cout << setw(4) << (i%2 == 0)?arr[i][j]:arr[i][col-1-j];
		}
		cout << endl;
	}*/


	/*int a, b;
	cin >> a >> b;

	for (int i = a; i <= b; i++)
	{
		cout << i << " ";
	}*/

	/*int a;
	cin >> a;
	for (int i = 1; i <= 10; i++)
	{
		cout << a << " x " << i << " = " << a * i << endl;
	}
	cout << endl;*/


	/*double cost;
	cout << "Введите цену за 1к конфет: ";
	cin >> cost;
	for (int i = 1; i <= 5; i++)
	{
		cout << cost * (1 + 0.2*i) << endl;
	}*/


	/*double a;
	cin >> a;
	for (double i = 1.2; i <= 3; i += 0.2)
	{
		cout << " Цена " << i << " кг конфет равна  " << i * a << endl;
	}
	cout << endl;*/

	/*int n;
	cin >> n;
	float sum = 0;
	for (int i = 1; i <= n; i++)
	{
		int k = 0, m = i;
		while (m > 0)
		{
			m /= 10;
			k++;
		}
		float d = pow(-1, i-1) * (1 + i / pow(10, k));
		cout << d;
		sum += d;
	}
	cout << " = " << sum << endl;*/


	/*int a, n;
	float m = 1;
	cin >> a >> n;
	for (int i = 1; i <= abs(n); i++)
	{
		m *= a;
	}

	m = (n < 0) ? 1 / m : m;

	cout << m << endl;*/


	/*for (int a = 0; a < 5; a++)
	{

	}

	int b = 1;
	while (b <=5)
	{
		b++;
	}

	cout << endl;*/




	/*int n = 15;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << ((i == 0 || i == n - 1 || j == 0 || j == n - 1) ? "*" : " ");
		}
		cout << endl;
	}*/

	/*while (true)
	{
		Sleep(500);
		system("cls");
		int n = 5;
		for (int k = 0; k < 3; k++)
		{
			for (int i = 0; i < n - 2 + k; i++)
			{
				for (int j = 0; j < n - i - k + 1 + 10; j++)
				{
					cout << " ";
				}
				for (int j = 0; j < 2 * (i + k) + 1; j++)
				{
					if (i == n - 2 + k - 1 && (j == 0 || j == 2 * (i + k)) || (k == 0 && i == 0 && j == 0))
					{
						SetColor(rand() % 15, 1);
						cout << "#";
						SetColor(15, 1);
					}
					else
					{
						cout << "*";
					}
				}
				cout << endl;
			}
		}
	}*/

	//int i = 0;
	//while (true)
	//{
	//	for (; i < 20; i++) {
	//		Sleep(100);
	//		system("cls");
	//		for (int j = 0; j < i; j++) {
	//			cout << " ";
	//		}
	//		cout << "******";
	//	};
	//	for (; i > 0; i--) {
	//		Sleep(100);
	//		system("cls");
	//		for (int j = 0; j < i; j++) {
	//			cout << " ";
	//		}
	//		cout << "******";
	//	};
	//};

	/*gotoxy(10, 10);
	cout << "Hello";*/
	/*int a;
	cin >> a;
	int x = 10, y = 0;
	for (int i = 0; i < 20; i++)
	{
		gotoxy(x, i);
		for (int j = 0; j < 5; j++)
		{
			if (j == 4)
			{
				SetColor(rand() % 13+2, 1);
				cout << "#";
				SetColor(15, 1);
			}
			else
				cout << "*";
			gotoxy(x, i + j);
		}
		Sleep(200);
		gotoxy(x, i);
		cout << " ";
	}*/



	//type name[size];	

	//srand(time(0));

	/*srand(time(0));
	const int n = 10;
	int m = 0;
	int arr[n];
	int arrB[n];
	int minDiapazon = 0;
	int maxDiapazon = 9;
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (maxDiapazon - minDiapazon + 1) + minDiapazon;
		cout << arr[i];
	}
	cout << endl;
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		count = 0;
		for (int j = 0; j < n; i++)
		{
			if (arr[i] == arr[j])
			{
				count++;
			}
		}
		if (count != 2)
		{
			arrB[m] = arr[i];
			m++;
		}
	}
	cout << endl;
	for (int i = 0; i < m; i++)
	{
		cout << arrB[i];
	}*/





	/*const int row = 5, col = 6;
	int arr[row][col];
	int minDiapazon = 5;
	int maxDiapazon = 9;
	for (size_t i = 0; i < row; i++)
	{
		for (size_t j = 0; j < col; j++)
		{
			arr[i][j] = 10* (rand() % (maxDiapazon - minDiapazon + 1) + minDiapazon);
		}
	}

	for (size_t i = 0; i < row; i++)
	{
		int sumRow = 0;
		for (size_t j = 0; j < col; j++)
		{
			cout << setw(4) << arr[i][j];
			sumRow += arr[i][j];
		}
		cout << setw(4) << "|" << setw(4) << sumRow;
		cout << endl;
	}

	for (size_t i = 0; i < col+2; i++)
	{
		cout << setw(4) << "----";
	}
	cout << endl;

	int sumAll = 0;
	for (size_t j = 0; j < col; j++)
	{
		int sumCol = 0;
		for (size_t i = 0; i < row; i++)
		{
			sumCol += arr[i][j];
		}
		sumAll += sumCol;
		cout << setw(4) << sumCol;
	}
	cout << setw(4) << "|" << setw(4) << sumAll;
	cout << endl;*/


	////розмір масиву
	//const int n = 10;

	////масив
	////int arr[n] = { 2,3,4,5,5,5,8,9,10,11 };
	//int arr[n];
	//
	//int minDiapazon = 0;
	//int maxDiapazon = 5;
	//for (size_t i = 0; i < n; i++)
	//{
	//	arr[i] = rand() % (maxDiapazon - minDiapazon + 1) + minDiapazon;
	//}

	//for (size_t i = 0; i < n; i++)
	//{
	//	cout << arr[i] << " ";
	//}
	//cout << endl;


	//////// 24.06.2022  ////////////

	//clock_t t = clock();

	//bubble sort
	/*int count = 0;
	int round = 0;
	bool isSorted = true;
	while(isSorted)
	{
		round++;
		isSorted = false;
		for (size_t j = 0; j < n - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				swap(arr[j], arr[j + 1]);
				count++;
				isSorted = true;
			}
		}
	}
	cout << "Count = " << count << endl;
	cout << "Round = " << round << endl;*/


	// selected sort 
	/*for (size_t i = 0; i < n-1; ++i)
	{
		int imin = i;
		for (size_t j = i+1; j < n; j++)
		{
			if (arr[j] < arr[imin])
			{
				imin = j;
			}
		}
		swap(arr[i], arr[imin]);
	}*/


	/*for (int i = n - 1; i > 0; i--)
	{
		arr[i] = arr[i - 1];
	}
	arr[0] = 0;



	for (size_t i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;*/

	/*int arrB[n];
	int m = 0;*/

	/*for (size_t i = 0; i < n; i++)
	{
		bool flag = true;
		for (size_t j = 0; j < m; j++)
		{
			if (arr[i] == arrB[j])
			{
				flag = false;
				break;
			}
		}
		if (flag)
		{
			arrB[m++] = arr[i];
		}
	}*/


	/*for (size_t i = 0; i < n; i++)
	{
		if (arr[i] % 2 == 1)
		{
			arrB[m++] = arr[i];
		}
	}*/

	/*int arrB[n*2];
	int m = 0;
	for (size_t i = 0; i < n; i++)
	{
		arrB[m++] = arr[i];
		if (arr[i] < 0)
			arrB[m++] = 0;
	}*/

	/*int even = 0;
	bool isEven = false;
	for (size_t i = 0; i < n; i++)
	{
		if (arr[i] % 2 == 0 && !isEven)
		{
			even = arr[i];
			isEven = true;
		}
		if (arr[i] % 2 == 0)
			arr[i] += even;
	}*/


	/*int arrB[n+n/2];
	int m = 0;
	for (size_t i = 1; i < n; i+=2)
	{
		arrB[m++] = arr[i - 1];
		arrB[m++] = arr[i];
		arrB[m++] = arr[i];
	}*/

	/*int arrB[n + 1];
	int m = 0;
	int pos;
	cin >> pos;
	for (size_t i = 0; i <= pos; i++)
	{
		arrB[m++] = arr[i];
	}
	arrB[m++] = 0;
	for (size_t i = pos+1; i < n; i++)
	{
		arrB[m++] = arr[i];
	}*/



	/*int arrB[n];
	int m = 0;

	arrB[m++] = arr[0];
	for (size_t i = 1; i < n; i++)
	{
		if (arr[i] != arr[i - 1])
		{
			arrB[m++] = arr[i];
		}
	}*/


	/*for (size_t i = 0; i < n; i++)
	{
		int count = 0;
		for (size_t j = 0; j < n; j++)
		{
			if (arr[i] == arr[j])
			{
				count++;
			}
		}
		if (count != 2)
		{
			arrB[m++] = arr[i];
		}
	}*/


	/*for (size_t i = 0; i < n; i++)
	{
		int count = 0;
		for (size_t j = 0; j < n; j++)
		{
			if (arr[i] == arr[j])
			{
				count++;
			}
		}
		if (count < 3)
		{
			arrB[m++] = arr[i];
		}
	}*/


	/*for (size_t i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	PRINT_TIME*/

	/*int k = 0;
	for (int i = 0; i < n - 1; ++i)
	{
		if (arr[i] > arr[i + 1])
		{
			cout << i << " ";
			k++;
		}
	}
	cout << endl;
	cout << "kol-vo - " << k << endl;*/

	//PRINT_TIME

		/*for (size_t i = 0; i < n; i++)
		{
			if (i < n / 2)
			{
				cout << arr[2 * i + 1] << " ";
			}
			else
			{
				cout << arr[2 * (i - n / 2)] << " ";
			}
		}
		cout << endl;*/

		/*int number, n1;
		cout << "Number: " && cin >> number;
		n1 = number;
		int syst = 36;
		long long roz = pow(syst, n - 1), i = 0;
		while (roz > 0)
		{
			if (n1 >= roz)
			{
				int m = n1 / roz;
				arr[i++] = (m < 10) ? m + 48 : m + 55;
				n1 -= roz*(n1 / roz);
			}
			else
			{
				arr[i++] = '0';
			}
			roz /= syst;
		}
		cout << number << "[" << syst << "] = ";

		for (size_t i = 0; i < n; i++)
		{
			cout << arr[i] << " ";
		}
		cout << endl;*/




		/*int number = 0;
		for (size_t i = 0; i < n; i++)
		{
			number += arr[i] * pow(2, n - 1 - i);
		}
		cout << number << endl;*/


		/*int a0, d;
		cin >> a0 >> d;

		for (size_t i = 0; i < n; i++)
		{
			arr[i] = a0 + i * d;
		}*/

		/*for (size_t i = 0; i < n; i++)
		{
			cout << "arr[" << i << "] = ";
			cin >> arr[i];
		}*/

		/*int k = 0;
		for (size_t i = 0; i < n; i++)
		{
			if (arr[i] % 2 == 0)
				k++;
		}
		cout << k << endl;*/



		/*bool isProgress = true;
		int new_d = arr[1] - arr[0];
		for (int i = 0; i < n; i++)
		{
			if (arr[i] != arr[0] + i * new_d)
			{
				isProgress = false;
				break;
			}
		}
		cout << isProgress << endl;*/

		/*int k0 = 0;
		for (size_t i = 0; i < n; i++)
		{
			if (arr[i] == 0)
				k0++;
		}
		cout << "\"0\" зустрічається " << k0 << " разів" << endl;

		int k01 = 0;
		for (int i = 0; arr[i] != 1; i++)
		{
			k01++;
		}
		cout << "Кількість \"0\" до першої \"1\" - " << k01 << endl;*/

		/*bool isEvenNotEven = true;
		for (size_t i = 0; i < n - 1; i++)
		{
			if (arr[i] % 2 == arr[i + 1] % 2)
			{
				isEvenNotEven = false;
				break;
			}
		}
		cout << isEvenNotEven << endl;*/


		/*int imax = 0;
		for (size_t i = 0; i < n; i++)
		{
			if (arr[i] > arr[imax])
			{
				imax = i;
			}
		}
		cout << "Max = " << arr[imax] << endl;
		cout << "IndMax = " << imax << endl;*/

		//SetColor(15, 0);
	system("pause");
}
