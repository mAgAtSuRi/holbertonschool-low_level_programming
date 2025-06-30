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
	int sum = 0;

	for (i = 0; i < size * size; i++)
	{
		if (i % 4 == 0)
			sum += a[i];
	}
	printf("%d\n", sum);
}
