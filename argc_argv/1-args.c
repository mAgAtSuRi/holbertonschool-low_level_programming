#include <stdio.h>

/**
 * main - print number of arguments of the program
 * @argc: number of arguments
 * @argv: array cointaining the name of the arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void)*argv[];

	printf("%d\n", argc);
	return (0);
}
