#include "main.h"

/**
 * print_number - print a number
 * @n: number to print
 */
void print_number(int n)
{
	int i = 0;
	int j;
	float k;

	if (n < 0)
	{
		n = -n;
		_putchar('-');
	}
	while (n >= 10)
	{	
		k = n / 10;
		n = k;
		i++;
	}
	_putchar(n + '0');
	for (j = 0; j < i; j++)
	{
		k = k * 10;
		n = k;
		_putchar(n % 10 + '0');
	}
}
