#include "main.h"

/**
 * c*_strcpy - copies str from a pointer to another pointer
 * @dest: where the string is copied
 * @src: the string to copy
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int len, j;

	while (src[i] != '\0')
		i++;
	for (j = 0; j <= i; j++)
		dest[j] = src[j];
	return (dest);
}
