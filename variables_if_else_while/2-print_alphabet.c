#include <stdio.h>

/**
 * main - Entry point
 *
 * Description - print the alphabet
 *
 * Return: always 0
 */
int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
