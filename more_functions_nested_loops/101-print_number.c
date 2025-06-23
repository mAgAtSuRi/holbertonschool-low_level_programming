#include "main.h"

/**
 * print_number - print a number
 * @n: number to print
 */
void print_number(int n)
{
	float k = n;

	if (n < 0)
	{
		n = -n;
		_putchar('-');
	}
	if (k  >= 10)
		print_number(k / 10);
	
	n = k;
	_putchar(n % 10 + '0');
}
