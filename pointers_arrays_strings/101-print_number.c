#include "main.h"
#include <limits.h>

/**
 * print_number - prints an integer
 * @n: number to print
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		if (n == INT_MIN)
		{
			_putchar(2 + '0');
			print_number(147483648);
		}
		else
			n = -n;
	}
	if (n / 10 != 0)
		print_number(n / 10);
	_putchar((n % 10) + '0');
}
