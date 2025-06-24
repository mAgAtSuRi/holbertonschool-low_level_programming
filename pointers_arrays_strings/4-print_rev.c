#include "main.h"

/**
 *  print_rev - print a string in reverse
 *  @s: string to reverse
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	i--;
	for (; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *str;

    str = "12 45";
    print_rev(str);
    return (0);
}
