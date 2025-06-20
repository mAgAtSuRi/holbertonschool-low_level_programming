#include <stdio.h>

/**
 * main - entry point
 *
 * Description - prints the first 50 fibonacci numbers,
 *
 * Return: always 0
 */
int main(void)
{
	int i = 1;
	long int num1 = 1;
	long int num2 = 2;
	long int sum;

	printf("%ld, %ld", num1, num2);
	while (i <= 48)
	{
		sum = num1 + num2;
		printf(", %ld", sum);
		num1 = num2;
		num2 = sum;
		i++;
	}
	return (0);
}
