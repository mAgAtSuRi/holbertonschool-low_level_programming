#include <stdlib.h>

/**
 * *create_array - create an array of char
 * @size: size of the array
 * @c: character to initialize
 * 
 * Return: pointer to the char array
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	if (size == 0)
		return (NULL);
	s = malloc(size * sizeof(c));
	if (s == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		s[i] = c;
	return (s);
}