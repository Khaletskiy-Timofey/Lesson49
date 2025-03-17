#include "utils.h"

void init_matrix(int** matrix, int n, int m, int start, int end)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			matrix[i][j] = rand() % (end - start + 1) + start;
		}
	}
}

string matrix_to_string(int** matrix, int n, int m)
{
	string matrix_string = "";

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			matrix_string += to_string(matrix[i][j]) + " ";
		}
		matrix_string += "\n";
	}

	return matrix_string;
}

void delete_matrix(int** matrix, int n)
{
	for (int i = 0; i < n; i++)
	{
		delete[] matrix[i];
	}

	delete[] matrix;
}