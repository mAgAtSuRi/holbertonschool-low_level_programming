#include "main.h"

/**
 * puts2 - prints odd character of a string
 * @str: string to check
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i == 0)
			_putchar(str[i]);
		else if (i % 2 != 0)
			_putchar(str[i]);
		i++;
	}
}
