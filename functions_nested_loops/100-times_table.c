#include "main.h"

/**
 * print_times_table - print the n times table
 * @n: number of times table to print
 */
void print_times_table(int n)
{
	int i, j, result;

	for (i = 0; i <= n; i++)
	{
		_putchar('0');

		for (j = 1; j <= n; j++)
		{
			result = i * j;
			_putchar(',');
			_putchar(' ');

			if (result < 10)
			{
				_putchar(' ');
				_putchar(' ');
			}
			else if (result < 100)
				_putchar(' ');

			_putchar(result + '0');
		}
		_putchar('\n');
	}
}
