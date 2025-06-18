#include "main.h"

/**
 * print_last_digit - print last digit of a number
 * @n: number to check
 *
 * Return: last digit of a number
 */
int print_last_digit(int n)
{
	if (n < 0)
		return (-n % 10);
	else
		return (n % 10);
}
