#include <stdio.h>

/**
 * main - entry point
 *
 * Description - prints the sum of
 * even fibonacci numbers below 4 000 000
 *
 * Return: always 0
 */
int main(void)
{
	long int num1 = 1;
	long int num2 = 2;
	long int sum_even = 0;
	long int next_n;

	while (num2 < 4000000)
	{
		if (num2 % 2 == 0)
			sum_even += num2;
		next_n = num1 + num2;
		num1 = num2;
		num2 = next_n;
	}
	printf("%ld", sum_even);
	printf("\n");
	return (0);
}
