#include <stdio.h>
#include <stdlib.h>

/**
 * main - add 2 numbers
 * @argc: number of arguments
 * @argv: list of strings
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, j = 0;
	int result = 0;

	if (argc == 1)
		printf("0\n");
	else
	{
		for (i = 1; i < argc; i++)
		{
			while (argv[i][j])
			{
				if (argv[i][j] < 48 || argv[i][j] > 57)
				{
					printf("Error\n");
					return (0);
				}
			}
			result += atoi(argv[i]);
		}
	}
	printf("%d\n", result);
	return (0);
}
