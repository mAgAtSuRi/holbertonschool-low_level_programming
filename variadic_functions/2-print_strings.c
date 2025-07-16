#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_strings - print a string
 * @separator: separator between the strings
 * @n: number of strings to print
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *s;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(args, char *);
		if (s == NULL)
			printf("(nil)");

		else
			printf("%s", s);

		if (separator != NULL && i != n - 1)
			printf("%s", separator);
	}
	printf("\n");
}
