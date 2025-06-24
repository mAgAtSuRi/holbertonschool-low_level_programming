#include "main.h"

/**
 * rev_string - reverse a string
 * @s: string to be reversed
 */
void rev_string(char *s)
{
	int i = 0;
	char *revS;

	while (s[i] != 0)
		i++;
	i--;
	for (; i >= 0; i--)
		revS += s[i];
	*s = *revS;
}
