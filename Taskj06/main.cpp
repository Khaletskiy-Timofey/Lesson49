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

	int min_local_max = find_min_local_max(matrix, n, m);

	if (min_local_max == -1)
	{
		cout << "There are no local maximum." << endl;
	}
	else
	{
		cout << "Minimum local maximum: " << min_local_max << endl;
	}

	delete_matrix(matrix, n);

	return 0;
}