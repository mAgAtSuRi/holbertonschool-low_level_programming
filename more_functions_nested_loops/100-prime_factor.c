#include <stdio.h>
#include "main.h"

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

/**
 * main - entry point
 *
 * Description - prints largest prime number
 *
 * Return: always 0
 */
int main(void)
{
	long int n = 612852475143;
	long int i;

	while (check_prime(n) == 0)
	{
		if (n % 2 == 0)
		{
			printf("2,");
			n = n / 2;
		}
		else 
		{
			for (i = 3; i <= n / 3; i += 2)
			{
				if (n % i == 0)
				{
					printf("%ld", i);
					n = n / i;
				}
			}
		}
	}
	printf(",%ld\n", n);
	return (0);
}
