#include "main.h"

/**
 * print_string - print a string
 * @c: string to print
 */
void print_string(char *c)
{
	int i = 0;

	while (c[i])
	{
		_putchar(c[i]);
		i++;
	}
}

/**
 * print_name - prints a name
 * @name: pointer to the name string
 * @f: pointer to a function
 *
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
