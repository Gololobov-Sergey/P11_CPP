#include<iostream>
#include<Windows.h>

using namespace std;

int main()
{
	/*setlocale(LC_ALL, "");*/
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cout.setf(ios::boolalpha);

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


	int a, b, c;
	cin >> a >> b >> c;
	bool r = (a > 0) ^ (b > 0) ^ (c > 0);
	cout << r << endl;


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





	system("pause");
}
