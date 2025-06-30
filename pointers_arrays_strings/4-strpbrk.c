#include "main.h"
#include <stdlib.h>
/**
 * *_strpbrk - search a string for any set of bytes
 * @s: string to search
 * @accept: set to search
 *
 * Return: pointer to the byte that matches
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0, len2 = 0;
	int j;

	while (accept[len2])
		len2++;
	while (s[i])
	{
		for (j = 0; j < len2; j++)
		{
			if (s[i] == accept[j])
				return (&s[i]);
		}
		i++;
	}
	return (NULL);
}
