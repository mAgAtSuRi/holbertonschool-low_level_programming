#include "main.h"

/**
 * print_number - prints an integer
 * @n: number to print
 */
void print_number(int n)
{
	int neg = 0;

	if (n < 0)
	{
		neg = 1;
		n = -n;
	}
	if (n / 10 != 0)
		print_number(n / 10);
	if (neg == 1)
		_putchar('-');
	_putchar(n % 10 + '0');
}
