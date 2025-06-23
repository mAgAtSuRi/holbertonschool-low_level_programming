#include "main.h"

/**
 * print_line - print a line of n characters
 * @n: numbers of _ to print
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
			_putchar('_');
	}
	_putchar('\n');
}
