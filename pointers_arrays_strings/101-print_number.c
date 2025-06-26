#include "main.h"

/**
 * print_number - prints an integer
 * @n: number to print
 */
void print_number(int n)
{
	int i;

	if (n / 10 != 0)
		print_number(n / 10);
	_putchar(n % 10);
}
