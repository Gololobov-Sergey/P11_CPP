

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


	/*int n, sum = 0, k = 1;
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
	cout << "k = " << --k << endl;*/


	/*long long n;
	cin >> n;
	int k, count = 0;
	cin >> k;
	while (n > 0)
	{
		int r = n % 10;
		if (r == k)
		{
			count++;
		}
		n = n / 10;
	}
	cout << k << " - " << count << " разів" << endl;*/

	/*int i = 1, n = 1;
	while (i < 6)
	{
		int j = 0;
		while (j < i)
		{
			int k = 0;
			while (k < i)
			{
				cout << setw(4) << n++;
				k++;
			}
			j++;
			cout << endl;
		}
		i++;
		cout << endl;
	}

	int room;
	cin >> room;
	int s = 1, kv = 1, s1 = 0;
	while (room >= s)
	{
		s1 = s;
		s += kv * kv;
		kv++;
	}
	cout << --kv << endl;

	int f1 = 1;
	i = 1;
	while (i < kv)
	{
		f1 += i;
		i++;
	}

	room -= s1;
	int floor = room / kv + f1;
	int left = room % kv + 1;
	cout << "Floor - " << floor << endl;
	cout << "Left - " << left << endl;*/



	/*int n, s = 0;
	do
	{
		cin >> n;
		s += n;
	} while (n != 0);
	cout << s << endl;*/


	/*int a, b, c, k = 0;
	cin >> a >> b >> c;
	while (b >= c)
	{
		b -= c;
		int d = a;
		while (d >= c)
		{
			k++;
			d -= c;
		}
	}
	cout << k << endl;*/

	/*long long f1 = 1, f2 = 2, fn;
	int n, k = 2;
	cin >> n;
	while (k < n)
	{
		fn = f1 + f2;
		f1 = f2;
		f2 = fn;
		k++;
	}
	cout << fn << endl;*/





	/*cout << "Black = 0, Blue = 1, Green = 2, Cyan = 3, Red = 4, Magenta = 5, Brown = 6, LightGray = 7, DarkGray = 8," << endl;
		cout << "LightBlue = 9, LightGreen = 10, LightCyan = 11, LightRed = 12, LightMagenta = 13, Yellow = 14, White = 15" << endl;
		short textColor, backColor;
		cout << "Введите какой вы хотите Цвет Текста (от 1 до 15): ";
		cin >> textColor;
		cout << "А также его фон (от 1 до 15): ";
		cin >> backColor;*/
//SetColor(15, 0);
//system("cls");
//
//srand(time(0));

//starLine();

//int a = 3, b = 5;
////int c = Sum(a, b);
//cout << Sum(a, b) << endl;
//cout << Sum(5, 77) << endl;
//cout << avg3(3,4,6) << endl;

//int xx[5] = { 1,5,4,9,6 };
//int count = 0;
//for (size_t i = 0; i < 5; i++)
//{
//	if (isEven(xx[i]))
//		count++;
//}
//cout << count << endl;

//const int row = 5, col = 5;
//int arr[row][col]; // = { {1,2,3},{4,5,6},{7,8,9} };



/*int M[row];
for (size_t i = 0; i < row; i++)
{
	M[i] = rand() % 9;
}

int D = rand() % 9;
cout << "D=" << D << endl;*/

/*for (size_t i = 0; i < row; i++)
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
cout << endl;*/

/*int min = arr[0][0], max = arr[0][0], imin = 0, imax = 0;
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
}*/

/*for (size_t i = 0; i < col; i++)
{
	swap(arr[imin][i], arr[imax][i]);
}*/


/*for (size_t i = 0; i < row/2; i++)
{
	for (size_t j = 0; j < col; j++)
	{
		swap(arr[i][j], arr[row-1-i][j]);
	}
}*/

/*for (size_t i = 0; i < row; i++)
{
	for (size_t j = 0; j < col / 2; j++)
	{
		swap(arr[i][j], arr[i][col - 1 - j]);
	}
}*/

/*for (size_t i = 1; i < row; i++)
{
	for (size_t j = 0; j < i; j++)
	{
		swap(arr[i][j], arr[j][i]);
	}
}*/

/*for (size_t i = 0; i < row - 1; i++)
{
	for (size_t j = 0; j < col - 1 - i; j++)
	{
		swap(arr[i][j], arr[col - 1 - j][col - 1 - i]);
	}
}

for (size_t i = 0; i < row; i++)
{
	for (size_t j = 0; j < col; j++)
	{
		cout << setw(4) << arr[i][j];
	}
	cout << endl;
}*/


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