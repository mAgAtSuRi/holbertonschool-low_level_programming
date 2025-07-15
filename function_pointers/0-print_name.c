#include "function_pointers.h"

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

