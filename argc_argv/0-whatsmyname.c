#include <stdio.h>

/**
 * main - print name of the program
 * @argc: number of arguments
 * @argv: array of name of arguments
 *
 * Return: 0
 */
int main(int argc, char  **argv)
{
	(void)argc;

	printf("%s\n", argv[0]);
	return (0);
}
