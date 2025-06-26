#include "main.h"

/**
 * print_number - prints an integer
 * @n: number to print
 */
void print_number(int n)
{
	int i;

	if (n >= 0 && n < 10)
		_putchar(n + '0');
	else
		while (n > 10)
		{
			n = n / 10;
			i++;
		}p
		_putchar(n + '0'):
