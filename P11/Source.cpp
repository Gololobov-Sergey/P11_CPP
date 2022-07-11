#include"Functions.h"

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	SetConsoleTitleA("P11 - C++");
	cout.setf(ios::boolalpha);
	//cout.setf(ios::showpos);

	const int size = 20;
	int arr[size];
	setArray(arr,size, 0, 9);
	printArray(arr, size);
	cout << "Max: " << maxValueArray(arr, size) << endl;
	cout << "Ind: " << findKeyArray(arr, size, 100) << endl;

	const int row = 5, col = 5;
	int arr2D[10][10];
	setArray2D(arr2D, row, col, 0, 0);
	printArray2D(arr2D, row, col);

	
	system("pause");
	return 0;
}
