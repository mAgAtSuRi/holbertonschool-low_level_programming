#include <stdio.h>

/**
 * main - multiply 2 numbers
 * @argc: number of arguments
 * @argv: list of arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void)argc;

	printf("%d\n", argv[1] * argv[2]);
	return (0);
}
