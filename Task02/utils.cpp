#include "utils.h"

string matrix_to_string(int* matrix, int n)
{
	string matrix_string = "";

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			matrix_string += to_string(matrix[i * n + j]) + " ";
		}
		matrix_string += "\n\t";
	}

	return matrix_string;
}