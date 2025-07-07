#include <stdlib.h>

/**
 * *create_array - create an array of char
 * @size: size of the array
 * @c: first character to initialize
 * 
 * Return: pointer to the char array
 */
char *create_array(unsigned int size, char c)
{
	char *s;

	if (size == 0)
		return (NULL);
	s = malloc(size * sizeof(c));
	s[0] = c;
	if (s == NULL)
		return (NULL);
	return (s);
}