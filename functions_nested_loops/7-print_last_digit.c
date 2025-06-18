#include "main.h"

/**
 * print_last_digit - print last digit of a number
 * @n: number to check
 *
 * Return: last digit of a number
 */
int print_last_digit(int n)
{
	int abs = n % 10;

	if (abs < 0)
		abs = -abs;
	_putchar(abs + '0');
	return (abs);
}
