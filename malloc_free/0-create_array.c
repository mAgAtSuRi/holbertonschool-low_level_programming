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
	int i = 0;

	if (size == 0)
		return (NULL);
	s = malloc(size * sizeof(c));
	while (s[i])
	{
		s[i] = c;
		i++;
	}
	if (s == NULL)
		return (NULL);
	return (s);
}