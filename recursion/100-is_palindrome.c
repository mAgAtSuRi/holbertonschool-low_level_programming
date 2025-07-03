#include "main.h"

/**
 * strlen_recursion - return length of string
 * @s: string to check
 *
 * Return: the length
 */
int strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + strlen_recursion(s + 1));
}
/**
 * check_palindrome _ check if palindrome
 * @s: string to check
 * @start: starting index
 * @end: ending index
 *
 * Return : 1 if palindrome otherwise 0
 */
int check_palindrome(char *s, int start, int end)
{
	if (start >= end)
		return (1);
	if (s[start] != s[end])
		return (0);
	return (check_palindrome(s, start + 1, end - 1));
}

/**
 *is_palindrome - check if palindrome
 *@s: string to check
 *
 *Return: 1 if check_palindrome = 1 otherwise 0
 */
int is_palindrome(char *s)
{
	return (check_palindrome(s, 0, strlen_recursion(s) - 1));
}
