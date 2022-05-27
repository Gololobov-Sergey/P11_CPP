#include<iostream>
#include<iomanip>
#include<Windows.h>

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

int main()
{

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	SetConsoleTitleA("P11 - C++");
	cout.setf(ios::boolalpha);
	cout.setf(ios::showpos);

	/*cout << "Black = 0, Blue = 1, Green = 2, Cyan = 3, Red = 4, Magenta = 5, Brown = 6, LightGray = 7, DarkGray = 8," << endl;
	cout << "LightBlue = 9, LightGreen = 10, LightCyan = 11, LightRed = 12, LightMagenta = 13, Yellow = 14, White = 15" << endl;
	short textColor, backColor;
	cout << "Введите какой вы хотите Цвет Текста (от 1 до 15): ";
	cin >> textColor;
	cout << "А также его фон (от 1 до 15): ";
	cin >> backColor;*/
	SetColor(15, 1);
	system("cls");


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



	cout << endl;




	//SetColor(15, 0);
	system("pause");
}
