#include <time.h>
#include "logic.h"
#include "utils.h"

int main()
{
	srand(time(0));

	int n, m;

	cout << "Enter size of matrix (n m): ";
	cin >> n >> m;

	int** matrix = new int* [n];
	for (int i = 0; i < n; i++)
	{
		matrix[i] = new int[m];
	}

	init_matrix(matrix, n, m, -9, 9);

	cout << matrix_to_string(matrix, n, m) << endl;

	cout << "Strings with more positive elements: "
		<< count_strings(matrix, n, m) << endl;

	delete_matrix(matrix, n);

	return 0;
}