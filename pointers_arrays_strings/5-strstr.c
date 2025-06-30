#include "main.h"
#include <stdlib.h>
/**
 * *_strstr - finds the first occurence of a string
 * @needle: string occurence to check
 * @haystack: string to check
 *
 * Return: pointer to the beginning of the string
 */
char *_strstr(char *haystack, char *needle)
{
	int j, l, test;
	int len2 = 0, i = 0;
	int count = 0;
	int pos;

	while (haystack[i])
		i++;
	while (needle[len2])
		len2++;
	if (needle[0] == ' ')
		return (&haystack[0]);
	for (j = 0; j < i; j++)
	{
		test = j;
		if (haystack[j] == needle[0])
		{
			pos = j;
			for (l = 0; l < len2; l++)
			{
				if (haystack[test] == needle[l])
				{
					test++;
					count++;
				}
			}
		}
		if (count == len2)
			return (&haystack[pos]);
		count = 0;
	}
	return (NULL);
}
