#include "main.h"
#include <stdlib.h>

/**
 * realloc - reallocates a memory block
 * @ptr: pointer to the previous memory
 * @old_size: old memory size in bytes
 * @new_size: new memory size
 *
 * Return: a pointer to the new memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr;
	char *old_ptr = (char*) ptr;
	int i, size = old_size;

	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);
	if (ptr == NULL)
	{
		free(new_ptr);
		return (new_ptr);
	}
	if (new_size == 0)
	{
		free(ptr);
		free(new_ptr);
		return (NULL);
	}

	if (old_size == new_size)
	{
		free(new_ptr);
		return (ptr);
	}

	if  (new_size < old_size)
		size = new_size;
	for (i = 0; i < size; i++)
		new_ptr[i] = old_ptr[i];

	free(ptr);
	return (new_ptr);
}
