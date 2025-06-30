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
	int error = 0;

	while (accept[len2])
		len2++;
	while (s[i])
	{
		for (j = 0; j < len2; j++)
		{
			if (error == len2)
				break;
			if (s[i] == accept[j])
			{
				n++;
				for (j = 0; j < len2; j++)
				{
					if (s[i + 1] != accept[j])
						error++;
				}
			}
		}
		i++;
	}
	return (n);
}
