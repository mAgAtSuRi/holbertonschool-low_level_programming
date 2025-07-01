#include "main.h"

/**
 * _strlen_recursion(char *s)
 * @s: string to check
 * 
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	int n = 0;
	
	if (*s != '\0')
		n++;
	else
		return (n);
	_strlen_recursion(s + 1);
}
