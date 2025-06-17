#include <stdio.h>

/**
 * main - entry point
 *
 * Description - prints alphabet in reverse
 *
 * Return: always 0
 */
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
		putchar(c);
	putchar('\n');
	return (0);
}
