#include <stdlib.h>

/**
 * _calloc - allocates memory for an array and initialise it
 * @nmemb: number of elements in the array
 * @size: size in bytes of each elements
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	arr = malloc(size * nmemb);
	if (arr == NULL)
		return (NULL);
	
	for (i = 0; i < nmemb * size; i++)
		arr[i] = 0;
	return (arr);
}
