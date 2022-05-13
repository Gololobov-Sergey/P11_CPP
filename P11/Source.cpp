#include<iostream>
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
	
	/*cout << "Black = 0, Blue = 1, Green = 2, Cyan = 3, Red = 4, Magenta = 5, Brown = 6, LightGray = 7, DarkGray = 8," << endl;
	cout << "LightBlue = 9, LightGreen = 10, LightCyan = 11, LightRed = 12, LightMagenta = 13, Yellow = 14, White = 15" << endl;
	short textColor, backColor;
	cout << "Введите какой вы хотите Цвет Текста (от 1 до 15): ";
	cin >> textColor;
	cout << "А также его фон (от 1 до 15): ";
	cin >> backColor;*/
	SetColor(15, 1);
	system("cls");


	//int color = ConsoleColor::Red;

	/*cout << "Hello \"C++\"" << endl;
	cout << "Hello \\C++\\" << endl;
	cout << "Hello {C++}" << endl;
	cout << "Hello 'C++'" << endl;
	cout << "Мене звати Сергій" << endl;*/

	// type name;
	// 
	// bool        - 1 b
	// 
	// char        - 1 b
	// 
	// short       - 2 b
	// int         - 4 b
	// long        - 4 b
	// long long   - 8 b
	//
	// float       - 4 b (7)
	// double      - 8 b (15)
	// long double - 10 b

	/*int year;
	year = 2022;
	cout << year << endl;

	float x = -1.99;
	cout << x << endl;

	char t = 'a';
	cout << t << endl;

	bool b = true;
	bool b1 = false;
	cout << b << endl;
	cout << b1 << endl;*/

	//int a, b, c;
	////int a = b = c = 9;
	//a = b = c = 9;

	// modifer type name;
	/*unsigned int a = 3000000000;
	cout << a << endl;

	const int x = 12;*/

	/*int a, b, S;
	cout << "Введіть значення a = ";
	cin >> a;
	cout << "Введіть значення b = ";
	cin >> b;
	S = a * b;
	cout << "Площа прямокутника зі сторонами а = " << a << ", b = " <<
		b << ", дорівнює " << S << endl;*/


	//
	// +, -, ++, --
	// +, -, *, /, %, +=, -=, *=, /=, %=

	// !
	// <, >, ==, <=, >=, !=, ||, &&, ^, 
	// (), [], {}, . , , ::, ?: , #, ~, ", ',  

	/*int a = 5, b = 4;
	int c;
	c = (a && b) - 4;
	cout << c << endl;*/

	/*int a, b, c;
	float p, S;
	cout << "Введите значение первой стороны ";
	cin >> a;
	cout << "Введите значение второй стороны ";
	cin >> b;
	cout << "Введите значение третьей стороны ";
	cin >> c;
	p = (a + b + c) / 2.f;
	S = sqrt(p * (p - a) * (p - b) * (p - c));
	cout << "Площадь - " << S << endl;
	cout << "P - " << p;*/

	//123
	//231
	/*int number;

	cout << "Введите число:";
	cin >> number;

	int num1 = number / 100;
	int num2 = number / 10 % 10;
	int num3 = number % 10;

	int number2 = num2 * 100 + num3 * 10 + num1;

	cout << number2 << endl;*/


	/*int a, b, c, k, s;
	cin >> a >> b >> c;
	k = (a / c) * (b / c);
	s = a * b - c * c * k;
	cout << k << endl;
	cout << s << endl;*/


	/*bool r = (a > 0) + (b > 0) + (c > 0) == 1;
	cout << r << endl;*/


	//c = ++a * (b++ + a/--b);
	//cout << a << endl;   //5
	//cout << a++ << endl; //5
	//cout << a << endl;   //6
	//cout << ++a << endl; //7
	//cout << a << endl;   //7

	//cout << b << endl;
	//cout << c << endl;
	//a = a + b;
	//c = a / b;
	//a = a + 1;
	//a += 1;

	//a++;
	//++a;

	//a--;

	//cout << c << endl;

	/*int a, b, c;
	cin >> a >> b >> c;
	if (c < a && c < b)
	{
		cout << a + b;
	}
	else
	{
		if (b < c && b < a)
		{
			cout << a + c;
		}
		else
		{
			cout << b + c;
		}
	}*/

	// (condition)? oper1 : oper2;
	/*int a, b, c, max;
	cin >> a >> b;

	if (a > b && a>c)
	{
		max = a;
	}
	else
	{
		if (b > c)
		{
			max = b;
		}
		else
		{
			max = c;
		}
		
	}

	(a > b && a > c) ? max = a : (b > c)? max = b : max = c;

	max = (a > b && a > c) ? a : (b > c)? b : c;*/
	
	/*int a, b, res = 0;
	char op;
	cin >> a >> op >> b;*/
	/*if (op == '+')
	{
		res = a + b;
		cout << res << endl;
	}
	else
	{
		if (op == '-')
		{
			res = a - b;
			cout << res << endl;
		}
		else
		{
			if (op == '*')
			{
				res = a * b;
				cout << res << endl;
			}
			else
			{
				if (op == '/')
				{
					res = a / b;
					cout << res << endl;
				}
				else
				{
					cout << "Error operation" << endl;
				}
			}
		}
	}*/


	/*switch (op)
	{
	case '+': res = a + b; break;
	case '-': res = a - b; break;
	case '*': res = a * b; break;
	case '/': res = a / b; break;
	default: cout << "Error operation" << endl; break;
	}
	cout << res << endl;*/

	/*int a;
	cin >> a;
	switch (a)
	{
	case 12: case 1: case 2: cout << "Зима"; break;
	case 3:  case 4: case 5: cout << "Весна"; break;
	case 6:  case 7: case 8: cout << "Лето"; break;
	case 9: case 10: case 11: cout << "Осень"; break;
	default: cout << "Error" << endl;
	}*/

	//SetColor(ConsoleColor::Yellow, ConsoleColor::Black);
	//int d, m, dmax;
	//cin >> d >> m;
	//switch (m-1)
	//{
	//case 4: case 6: case 9: case 11: dmax = 30; break;
	//case 2:                          dmax = 28; break;
	//default:                         dmax = 31; break;
	//}
	//
	//d--;
	//if (d == 0)
	//{
	//	d = dmax;
	//	m--;
	//	m = (m == 0) ? 12 : m;
	//}
	////SetColor(ConsoleColor::LightRed, ConsoleColor::LightBlue);
	//cout << d << " " << m << endl;
	

	/*while (true)
	{
		int a = 9;
	}

	do
	{
		int b = 9;
	} while (true);*/

	/*int n, k = 0, a = 1;
	cin >> n;
	while (a < n)
	{
		a *= 2;
		k++;
	}
	if (a == n)
	{
		cout << "2 ^ " << k << " = " << n << endl;
	}
	else
	{
		cout << "Not 2^k != n" << endl;
	}*/


	int n, sum = 0, k = 1;
	cin >> n;
	cout << k;
	while (sum < n)
	{
		sum += k;
		k++;
		cout << " + " << k;
	}
	cout << "\b\b\b";
	cout << " <= " << n << endl;
	cout << "k = " << --k << endl;



	//SetColor(15, 0);
	system("pause");
}
