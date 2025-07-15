#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - executes a function on each element of array
 * @array: array of int
 * @size: size of the array
 * @action: pointer to function to use
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	long unsigned int i;

	for (i = 0; i < size; i++)
		action(array[i]);
}