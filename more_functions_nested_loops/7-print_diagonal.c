#include "main.h"

/**
 * print_diagonal - print a diagonal
 * @n: length of the diagonal
 */
void print_diagonal(int n)
{
	int i, int j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j <= i; j++)
				_putchar(' ');
			_putchar('\');
			_putchar('\n');
		}
	}
	_putchar('\n');
}
