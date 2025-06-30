#include "main.h"

/**
 * *_memcpy - copy n bytes from src to dest
 * @src: string to copy
 * @dest: destination to copy
 * @n: number of bytes to copy
 *
 * Return: the string modified
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
