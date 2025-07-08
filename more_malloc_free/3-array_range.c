#include <stdlib.h>

/**
 * array_range - create an array with values from min to max
 * @min: starting number
 * @max: final number
 *
 * Return: the array with all the values
 */
int *array_range(int min, int max)
{
	int *arr, i, len;

	if (min > max)
		return (NULL);
	len = max - min + 1;
	arr = malloc(sizeof(int) * (len));
	if (arr == NULL)
		return (NULL);

	arr[0] = min;
	for (i = 1; i < len; i++)
		arr[i] = arr[i - 1];
	return (arr);
}
