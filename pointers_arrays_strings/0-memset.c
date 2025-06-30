#include "main.h"

/**
 * *_memset - fills n bytes with b to data pointed by s
 * @s: area to fill
 * @b: constant byte to fill
 * @n: number of bytes to fill
 *
 * Return: the new string
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
