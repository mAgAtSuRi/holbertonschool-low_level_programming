#include "main.h"

/**
 * _puts_recursion - prints a string
 * @s: string to print
 */
void _puts_recursion(char *s)
{
	_putchar(*s);
	if (*s == '\0')
		return;
	_puts_recursion(*(s+1));
}
