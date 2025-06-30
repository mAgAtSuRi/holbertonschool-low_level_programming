#include "main.h"
#include <stdlib.h>

/**
 * *_strchr - print a string starting from c
 * @c: character to check
 * @s: string to check
 *
 * Return: the string starting from c
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] == c)
			return (&s[i]);
		i++;
	}
	if (c == '\0')
		return (&s[i]);
	return (NULL);
}
