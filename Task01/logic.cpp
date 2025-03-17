#include "logic.h"

double calculate_arithmetic_mean_of_nonzero_elements(int** matrix, int n, int m)
{
	if (n <= 0 || m <= 0)
	{
		return 0.0;
	}

	int count = 0;
	double sum = 0.0;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (matrix[i][j] != 0)
			{
				count++;
				sum += matrix[i][j];
			}
		}
	}

	return count > 0 ? sum / count : 0.0;
}