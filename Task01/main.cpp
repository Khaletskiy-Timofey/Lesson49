#include <time.h>
#include "logic.h"
#include "utils.h"

int main()
{
	srand(time(0));

	int n, m;

	cout << "Enter size of matrix (n m): ";
	cin >> n >> m;

	int** matrix = new int*[n];
	for (int i = 0; i < n; i++)
	{
		matrix[i] = new int[m];
	}

	init_matrix(matrix, n, m, 0, 9);

	cout << matrix_to_string(matrix, n, m) << endl;

	cout << "Arithmetic mean of nonzero elements: " 
		<< calculate_arithmetic_mean_of_nonzero_elements(matrix, n, m) << endl;

	delete_matrix(matrix, n);

	return 0;
}