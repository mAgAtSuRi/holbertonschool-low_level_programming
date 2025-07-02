#include <stdio.h>
#include <stdlib.h>

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

	if (argc != 3)
		printf("Error");
	else
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
