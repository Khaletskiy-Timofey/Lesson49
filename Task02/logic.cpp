#include "logic.h"

int sum_of_elements(int* matrix, int n)
{
	int sum = 0;

	for (int i = 0; i < n; i++)
	{
		sum += matrix[i * (n + 1)];
	}

	for (int i = 0; i < n; i++)
	{
		sum += matrix[i * (n - 1) + n - 1];
	}

	return sum;
}