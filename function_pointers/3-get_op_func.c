#include "3-calc.h"
#include "stddef.h"
#include <stdlib.h>

/**
 * get_op_func - select the correct operator
 * @s: operator to select
 *
 * Return: a pointer to the correct function
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};
int i = 0;

	while (ops[i].op[0] != s[0])
		i++;
	return (ops[i].f);
}
