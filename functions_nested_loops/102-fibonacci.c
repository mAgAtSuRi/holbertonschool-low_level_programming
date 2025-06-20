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
	int i;
	long int num1 = 1;
	long int num2 = 2;
	long int sum;

	for (i = 1; i <= 50; i++)
	{
		if (i == 1)
			printf("%d", i);
		else if (i == 2)
			printf(", %d", i);
		else
		{
			sum = num1 + num2;
			printf(", %ld", sum);
			num1 = num2;
			num2 = sum;
		}
	}
	printf("\n");
	return (0);
}
