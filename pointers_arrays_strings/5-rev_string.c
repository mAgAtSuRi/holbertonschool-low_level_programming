#include "main.h"

/**
 * rev_string - reverse a string
 * @s: string to be reversed
 */
void rev_string(char *s)
{
	int i = 0;
	int len;
	char revS[500];

	while (s[i] != '\0')
		i++;
	len = i;
	for (; i > 0; i--)
		revS[len - i] = s[i - 1];
	revS[len] = '\0';
	for (i = 0; i <= len; i++)
		s[i] = revS[i];
}
