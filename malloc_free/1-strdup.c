#include <stdlib.h>

/**
 * *_strdup - create a pointer to the string str
 * @str: string to copy
 *
 * Return: a pointer to the string in a new space
 */
char *_strdup(char *str)
{
	char *s;
	unsigned int i;

	if (str == NULL)
		return (NULL);
	s = malloc(sizeof(str));
	if (s == NULL)
		return (NULL);
	for (i = 0; i < sizeof(str); i++)
		s[i] = str[i];
	return (s);
}
