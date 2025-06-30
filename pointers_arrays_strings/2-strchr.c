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
	char *new;
	int find = 1;

	while (s[i])
	{
		if (find == 0)
			new += s[i];
		if (s[i] == c)
		{
			new += s[i];
			find = 0;
		}
		i++;
	}
	return (new);
}
