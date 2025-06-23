#include "main.h"

/**
 * print_triangle - print a triangle
 * @size: size of triangle
 */
void print_triangle(int size)
{
	int i, j, k;

	if (size > 0)
	{
		// Ma technique
		for (i = 1; i <= size; i++)
		{
			for (j = size - i; j > 0; j--)
				_putchar(' ');
			for (k = 1; k <= i; k++)
				_putchar('#');
			_putchar('\n');
		}
		/* Autre technique
		for (j = 1; j <= size; j++)
		{
			if (j <= size - i)
				_putchar(' ');
			else
				_putchar('#');
		*/
	}
	else
		_putchar('\n');
}
