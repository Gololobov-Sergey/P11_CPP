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
	
	int a, b, S;
	cout << "Введіть значення a = ";
	cin >> a;
	cout << "Введіть значення b = ";
	cin >> b;
	S = a * b;
	cout << "Площа прямокутника зі сторонами а = " << a << ", b = " << 
		b << ", дорівнює " << S << endl;


	system("pause");
}
