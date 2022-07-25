#include"Functions.h"

using namespace std;



int main()
{
	//SetConsoleCP(1251);
	//SetConsoleOutputCP(1251);
	SetConsoleTitleA("P11 - C++");
	cout.setf(ios::boolalpha);
	//cout.setf(ios::showpos);

	////// 22.07.2022 //////


	int n;
	cin >> n;
	int* a = new int[n];
	setArray(a, n);
	printArray(a, n);

	int count = 0;
	for (size_t i = 0; i < n; i++)
	{
		if (a[i] > 5)
			count++;
	}

	int* b = new int[count];
	count = 0;
	for (size_t i = 0; i < n; i++)
	{
		if (a[i] > 5)
		{
			b[count++] = a[i];
		}
	}

	printArray(b, count);

	delete[] a;

	if (b != nullptr)
	{
		delete[] b;
		b = nullptr;
	}

	if(!b)
		b = new int[15];

	b = new int[3];


	/*cout << p << endl;
	*p = 100;
	cout << *p << endl;*/


	/*int a = 5;
	cout << a << endl;
	cout << typeid(a).name() << endl;
	cout << &a << endl;
	cout << sizeof(a) << endl;*/

	//int* pa = nullptr;
	//pa = &a;
	//cout << pa << endl;
	//*pa = 100;
	//cout << a << endl;
	//cout << *pa << endl;

	//cout << pa << endl;
	//cout << pa+1 << endl;

	//int b = 4;
	//int* pb = &b;
	//cout << pb << endl;
	//cout << (pa != nullptr) << endl;


	/*int arr[10] = { 123,23,45,456,34,56,67,678,46,234 };
	setArray(arr, 5);
	setArray(arr + 5, 5, 1000, 9999);
	printArray(arr, 10);*/

	/*char a = 4;
	char* pa = &a;
	cout << sizeof(pa) << endl;*/



	//cout << arr << endl;
	//for (size_t i = 0; i < 4; i++)
	//{
	//	cout << *(arr + i) << endl; // arr[i] === *(arr + i)
	//}

	//for (int* i = &arr[3]; i >= arr; i--)
	//{
	//	cout << *i << endl;
	//}

	//int* pa = arr;
	//pa++;

	/*for (int* i = arr; i <= &arr[3]; i++)
	{
		cout << *i << endl;
	}*/

	/*cout << *(arr + 0) << endl;
	  cout << *(arr + 1) << endl;
	  cout << *(arr + 2) << endl;
	  cout << *(arr + 3) << endl;*/




	  ////// 18.07.2022 //////


	  //cout << factorial_r(5) << endl;
	  //num_(5);
	  //cout << sumNum(12345) << endl;
	  //cout << fibo(6) << endl;
	  //cout << pow_(2,-3) << endl;

	  /*const int row = 5, col = 5;
	  int arr2D[10][10];
	  setArray2D(arr2D, row, col, 0, 50);
	  printArray2D(arr2D, row, col);
	  cout << maxValueMainDiagonal2D(arr2D, row, col) << endl;*/


	  ///// 15.07.2022 ////////

	  //starLine();
	  //starLine(23);
	  //starLine('#', 24);
	  //starLine(24, '#');

	  /*cout << Sum(4,6) << endl;
	  cout << Sum(4,6,5) << endl;
	  cout << Sum(4,6,5,3) << endl;*/

	  /*int g;
	  cin >> g;
	  const int size = 20;
	  char arr[size];
	  setArray(arr, size, 65, 65+25);
	  printArray(arr, size);
	  selectedSort(arr, size, true);
	  printArray(arr, size);

	  int arr1[size];
	  setArray(arr1, size, 65, 65 + 25);
	  printArray(arr1, size);
	  selectedSort(arr1, size, false);
	  printArray(arr1, size);


	  cout << Sum(6, 4.5, 'C') << endl;

	  int c = 8;
	  auto a = 5.2;
	  decltype(a+c) x;
	  a = 5.2;*/


	  /*const int size = 20;
	  int arr[size];
	  setArray(arr,size, 0, 9);
	  printArray(arr, size);
	  cout << "Max: " << maxValueArray(arr, size) << endl;
	  cout << "Ind: " << findKeyArray(arr, size, 100) << endl;

	  const int row = 5, col = 5;
	  int arr2D[10][10];
	  setArray2D(arr2D, row, col, 0, 0);
	  printArray2D(arr2D, row, col);*/


	system("pause");
	return 0;
}
