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
	unsigned int len;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		len++;
	s = malloc(len + 1);
	if (s == NULL)
		return (NULL);
	for (i = 0; i < len + 1; i++)
		s[i] = str[i];
	return (s);
}
