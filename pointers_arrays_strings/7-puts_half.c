#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: string to print
 */
void puts_half(char *str)
{
	int i = 0;
	int j;

	while (str[i] != '\0')
		i++;
	if (i % 2 != 0)
	{
		for (j = (i + 1) / 2; j < i; j++)
			_putchar(str[j]);
	}
	else
		for (j = i / 2; j < i; j++)
			_putchar(str[j]);
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

    str = "12345";
    puts_half(str);
    return (0);
}
