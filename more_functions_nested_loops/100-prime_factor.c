#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 *
 * Description - prints largest prime number
 *
 * Return: always 0
 */
int check_prime(int);

int main(void)
{
	int n = 1231952;
	int i;

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
					printf("%d", i);
					n = n / i;
				}
			}
		}
	}
	printf(",%d\n", n);
	return (0);
}
