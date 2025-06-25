#include "main.h"

/**
 * _*strncat - concatenate 2 strings using n bytes from src
 * @dest: first string
 * @src: second string
 * @n: number of bytes from src
 *
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int len1 = 0, len2 = 0, j = 0;
	int i;

	while (dest[len1])
		len1++;
	while (src[len2])
		len2++;
	if (n >= len2)
		for (i = len1; i < len1 + len2; i++)
		{
			dest[i] = src[j];
			j++;
		}
	else
		for (i = len1; i < len1 + n; i++)
		{
			dest[i] = src[j];
			j++;
		}
	return (dest);
}
