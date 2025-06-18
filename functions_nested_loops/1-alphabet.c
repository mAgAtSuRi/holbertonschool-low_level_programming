#include "main.h"

/**
 * main - entry point
 *
 * Description
 *
 * Return: always 0
 */
void print_alphabet(void)
{
	char c;
	char alphabet;

	for (c = 'a'; c <= 'z'; c++)
		alphabet += _putchar(c);
	alphabet += _putchar('\n');
}

int main(void)
{
	print_alphabet();
	return (0);
}
