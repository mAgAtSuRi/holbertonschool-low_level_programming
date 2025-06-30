#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - print the sums of the diagonal
 * @a: array to check
 * @size: size of the square array
 */
void print_diagsums(int *a, int size)
{
	int i;
	int sum1 = 0, sum2 = 0;

	for (i = 0; i < size * size; i++)
	{
		if (i % (size + 1) == 0)
			sum1 += a[i];
		if (i != 0 || i != size * size - 1)
		{
			if (i % (size - 1) == 0)
				sum2 += a[i];
		}
	}
	printf("%d\n", sum);
}
