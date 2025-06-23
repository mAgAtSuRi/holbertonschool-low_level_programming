#include <stdio.h>

/**
 * check_prime - check if a number is prime
 * @n: number to check
 *
 * Return: 1 if it's prime otherwise 0
 */
int check_prime(int n)
{
	int i;

	for (i = 1; i < n; i++)
		if (n % i == 0)
			return (0)
	return (1)
}
