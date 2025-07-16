#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>

/**
 * print_numbers - print numbers with a specific separator
 * @separator: chosen separator between numbers
 * @n: number of numbers to print
 *
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	if (separator == NULL)
		return;
	for (i = 0; i < n; i++)
	printf("%d%s", va_arg(args, int), separator);
}
