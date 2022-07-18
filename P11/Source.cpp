#include"Functions.h"

using namespace std;



int main()
{
	//SetConsoleCP(1251);
	//SetConsoleOutputCP(1251);
	SetConsoleTitleA("P11 - C++");
	cout.setf(ios::boolalpha);
	//cout.setf(ios::showpos);


	////// 18.07.2022 //////


	//cout << factorial_r(5) << endl;
	//num_(5);
	//cout << sumNum(12345) << endl;
	//cout << fibo(6) << endl;
	cout << pow_(2,-3) << endl;

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
