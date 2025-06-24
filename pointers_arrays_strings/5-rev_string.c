#include "main.h"

/**
 * rev_string - reverse a string
 * @s: string to be reversed
 */
void rev_string(char *s)
{
	int i = 0;
	int len;
	char revS[len];

	while (s[i] != 0)
		i++;
	len = i + 1;
	i--;
	for (; i >= 0; i--)
		revS[len - i] += s[i];
	s = revS;
}
