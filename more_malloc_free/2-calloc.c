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

	arr = malloc(size * nmemb);

	if (nmemb == 0 || size == 0)
		return (NULL);
	if (arr == NULL)
		return (NULL);
	
	for (i = 0; i < nmemb * size; i++)
		arr[i] = 0;
	return (arr);
}
