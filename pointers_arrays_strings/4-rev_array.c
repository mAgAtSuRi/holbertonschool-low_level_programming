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

	while (a[len])
		len++;
	for (i = 0; i < n / 2; i++)
	{
		tmp = a[i];
		a[i] = a[len - 1];
		a[len - 1] = tmp;
	}
}
