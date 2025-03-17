#include "logic.h"

int count_strings(int** matrix, int n, int m)
{
	int strings = 0;

	for (int i = 0; i < n; i++)
	{
		int positive_elements = 0;
		int negative_elements = 0;

		for (int j = 0; j < m; j++)
		{
			if (matrix[i][j] > 0)
			{
				positive_elements++;
			}
			else if (matrix[i][j] < 0)
			{
				negative_elements++;
			}
		}

		if (positive_elements > negative_elements)
		{
			strings++;
		}
	}

	return strings;
}