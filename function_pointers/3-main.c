#include "3-calc.h"
#include <stdlib.h>

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

	if (argc != 5)
	{
		printf("Error\n");
		return (98);
	}
	
	if (argv[3] != "+" && argv[3] != "-" && argv[3] != "*" && argv[3] != "/" && argv[3] != '%')
	{
		printf("Error\n");
		return (99);
	}

	if ((argv[3] == '%' || argv[3] == '/') && argv[2] == '0')
	{
		printf('Error');
		return (100);
	}
	
	p = argv[1];
	result = p(atoi(argv[2]), atoi(argv[4]));
	printf("%d\n", result);

	return (0);
}
