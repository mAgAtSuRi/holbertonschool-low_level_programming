#include <stdio.h>

/**
 * main - entry point
 *
 * Description - print all numbers in base 10
 *
 * Return: always 0
 */
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
		printf("%d", i);
	putchar('\n');
	return (0);
}
