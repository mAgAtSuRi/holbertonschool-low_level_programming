#include "main.h"

/**
 * find_sqrt - find the square root if it exists
 * @n: number to check
 * @guess: increment +1 from 0 and will be the square root
 *
 * Return: the result
 */
int find_sqrt(int n, int guess)
{
	if (guess * guess > n)
		return (-1);
	if (guess * guess == n)
		return (guess);
	return (find_sqrt(n, guess + 1));
}

/**
 * _sqrt_recursion - returns square root of a number
 * @n: number to calculate
 *
 * Return: result
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (find_sqrt(n, 0));
}
