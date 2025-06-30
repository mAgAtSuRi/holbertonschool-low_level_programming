#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - print the sums of the diagonal
 * @a: array to check
 * @size: size of the square array
 */
void print_diagsums(int *a, int size)
{
	int i, j;
	int sum = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
				sum += a[i][j];
		}
	}
	printf("%d\n", sum);
}
