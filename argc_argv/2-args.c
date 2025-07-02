#include <stdio.h>

/**
 * main - prints all arguments
 * @argc: number of arguments
 * @argv: list of arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i = 0;
	(void)argc;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
