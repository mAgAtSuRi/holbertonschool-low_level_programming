#include "main.h"

/**
 * check_prime - help function to check if number is prime
 * @n: number to check
 * @guess: helper
 *
 * Return: 1 if prime else 0
 */
int check_prime(int n, int guess)
{
	if (guess > n / 2)
		return (1);
	if (n % guess == 0)
		return (0);
	return (check_prime(n, guess + 1));
}

/**
 * is_prime_number - check if prime number
 * @n: number to check
 *
 * Return: 1 if prime number else 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (check_prime(n, 2));
}
