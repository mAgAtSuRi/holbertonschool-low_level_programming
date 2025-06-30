#include "main.h"

/**
 * _strspn - print number of times char from accept is in s
 * @accept: letters to check
 * @s: string to check
 *
 * Return: number of times the letters appear
 */
int _strspn(char *s, char *accept)
{
	int n = 0, i = 0, len2 = 0;
	int j;
	int found;

	while (accept[len2])
		len2++;
	while (s[i])
	{
		found = 0;
		for (j = 0; j < len2; j++)
		{
			if (s[i] == accept[j])
				found = 1;
		}
		if (found == 1)
			n++;
		else
			break;
		i++;
	}
	return (n);
}
