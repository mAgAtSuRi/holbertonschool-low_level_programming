#include "main.h"

/**
is_palindrome - check if palindrome
@s: string to check

Return: 1 if palindrome otherwise 0
*/
int is_palindrome(char *s)
{
	int len = 0, i;

	while(s[len])
		len++;
	for (i = 0; i <= len / 2; i++)
	{
		if (s[i] != s[len - i])
			return (0);
	}
	return (1);
}
