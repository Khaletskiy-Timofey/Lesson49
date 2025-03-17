#include "logic.h"
#include "utils.h"

void print(string name, int* matrix, int n, int actual, bool result)
{
	cout << name << ":\n\t" << matrix_to_string(matrix, n) << "Sum of elements: " 
		<< actual << "\n\t" << (result ? "PASS" : "FAIL") << endl;
}

void test01()
{
	const int n = 3;
	int matrix[n * n]{ 2, 3, 4, 3, 4, 5, 4, 5, 6 };

	int expected = 24;
	int actual = sum_of_elements(matrix, n);

	print("Test01", matrix, n, actual, actual == expected);
}

void test02()
{
	const int n = 2;
	int matrix[n * n]{ -1, 2, -2, 3 };

	int expected = 2;
	int actual = sum_of_elements(matrix, n);

	print("Test02", matrix, n, actual, actual == expected);
}

void test03()
{
	const int n = 3;
	int matrix[n * n]{ 1, 2, 3, 4, 5, 6, 7, 8, 9 };

	int expected = 30;
	int actual = sum_of_elements(matrix, n);

	print("Test03", matrix, n, actual, actual == expected);
}

void test04()
{
	const int n = 2;
	int matrix[n * n]{ -2, -4, -6, -8 };

	int expected = -20;
	int actual = sum_of_elements(matrix, n);

	print("Test04", matrix, n, actual, actual == expected);
}