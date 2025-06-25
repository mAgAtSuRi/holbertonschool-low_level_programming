#include "main.h"

/**
 * *_strncpy - copy a string
 * @dest: where the string is copied
 * @src: string to copy
 * @n: number of chara ter to copy
 *
 * Return: the copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int len2 = 0;
	int i;

	while (src[len2])
		len2++;
	for (i = 0; i < n; i++)
	{
		if (i < len2)
			dest[i] = src[i];
		else
			dest[i] = '\0';
	}
	return (dest);
}
