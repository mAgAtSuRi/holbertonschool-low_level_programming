#include "main.h"

/**
 * swap_int - swaps value of 2 integers
 * @a: first value to swap
 * @b: second value to swap
 */
void swap_int(int *a, int *b)
{
	int *ptr = *a;
	*a = *b;
	*b = *ptr;
}
