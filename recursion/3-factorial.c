#include "main.h"

/**
 * factorial - return the factorial of a number
 * @n: number to calculate
 *
 * Return: the factorial of n
 */
int factorial(int n)
{
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
