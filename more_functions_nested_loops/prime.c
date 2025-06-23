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
	
	if (n < 2)
		return (0);
	for (i = 2; i <= n / 2; i++)
	{
		if (n % i == 0)
			return (0);
	}
	return (1);
}
