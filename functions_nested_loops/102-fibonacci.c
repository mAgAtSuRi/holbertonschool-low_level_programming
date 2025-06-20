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
	unsigned int num1 = 1;
	unsigned int num2 = 2;
	unsigned int sum;

	printf("%d, %d", num1, num2);
	while (i <= 50)
	{
		putchar(',');
		putchar(' ');
		sum = num1 + num2;
		printf("%d", sum);
		num1 = num2;
		num2 = sum;
		i++;
	}
	return (0);
}
