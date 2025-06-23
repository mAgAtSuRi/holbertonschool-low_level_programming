#include "main.h"

/**
 * print_number - print a number
 * @n: number to print
 */
void print_number(int n)
{
	int i = 0;
	int j;
	
	if (n < 0)
	{
		n = -n;
		_putchar('-');
	}
	while (n >= 10)
	{
		n = n / 10;
		i++;
	}
	_putchar(n + '0');
	for (j = 0; j < i; j++)
	{
		n = n * 10;
		_putchar(n % 10 + '0');
	}
}
