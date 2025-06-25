#include "main.h"

/**
 * reverse_array - reverse content of array
 * @a: array to reverse
 * @n: number of elements to reverse
 */
void reverse_array(int *a, int n)
{
	int i, tmp;
	int len = 0;

	for (i = 0; i < n / 2; i++)
	{
		tmp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = tmp;
	}
}
