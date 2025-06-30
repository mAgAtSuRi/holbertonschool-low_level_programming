#include "main.h"

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
	found = 1;

	while (s[i])
	{
		if (s[i] == c)
		{
			found = 0;
			return (&s[i]);
		}
		i++;
	}
	if (found = 1)
		return (NULL);
}
