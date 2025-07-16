#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - calculate the sum of all parameters
 * @n: number of parameters
 * 
 * Return: sum of parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	int sum = 0;

	if (n == 0)
		return (0);
	
	va_start(args, n);

	for (i = 0; i < n; i++)
		sum += va_arg(args, int);

	return (sum);
}
