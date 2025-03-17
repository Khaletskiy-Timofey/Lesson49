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

	init_matrix(matrix, n, m, 0, 9);

	cout << matrix_to_string(matrix, n, m) << endl;

	int x, y;

	find_last_local_minimum(matrix, n, m, x, y);

	if (x == -1)
	{
		cout << "There are no local minimum." << endl;
	}
	else
	{
		cout << "Last local minimum is in coordinates: [" << y + 1 << "][" << x + 1 << "], its value: " << matrix[y][x] << endl;
	}

	delete_matrix(matrix, n);

	return 0;
}