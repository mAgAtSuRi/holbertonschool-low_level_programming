#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: memory to allocate
 */
void *malloc_checked(unsigned int b)
{
	int *arr;

	arr = malloc(b);
	if (arr = NULL)
		exit(98);
}
