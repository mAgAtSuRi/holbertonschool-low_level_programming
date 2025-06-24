#include "main.h"

/**
 * reset_to_98 - update value of int with its pointer
 * @*n: pointer value to be changed
 */
void reset_to_98(int *n)
	int *ptr = *n;
	*ptr = 98;	
