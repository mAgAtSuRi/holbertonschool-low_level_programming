#include "main.h"

/**
 * reverse _ reverse a string
 * @s: string to reverse
 * 
 * Return : the reversed string
 */
char* reverse(char *s)
{
	if (*s != '\0')
		return (*s + reverse(s + 1));
}

/**
is_palindrome - check if palindrome
@s: string to check

Return: 1 if palindrome otherwise 0
*/
int is_palindrome(char *s)
{
	if (reverse(s) == s)
		return (1);
	return (0);
}
