#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main -entry point
 * @argc: number of arguments
 * @argv: pointer to list of arguments
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	int (*p)(int, int);
	int result;

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}
	
	if (
    strcmp(argv[2], "+") != 0 &&
    strcmp(argv[2], "-") != 0 &&
    strcmp(argv[2], "*") != 0 &&
    strcmp(argv[2], "/") != 0 &&
    strcmp(argv[2], "%") != 0)
	{
		printf("Error\n");
		return (99);
	}

	if (
	(strcmp(argv[2], "%") == 0
	 || strcmp(argv[2], "/") == 0)
	 && strcmp(argv[1], "0") == 0)
	{
		printf("Error");
		return (100);
	}

	p = get_op_func(argv[2]);
	result = p(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", result);

	return (0);
}
