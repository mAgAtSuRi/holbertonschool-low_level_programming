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
	int i, j;
	int result = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			j = 0;
			while (argv[i][j])
			{
				if (argv[i][j] < '0' || argv[i][j] > '9')
				{
					printf("Error\n");
					return (0);
				}
				j++;
			}
			result += atoi(argv[i]);
		}
	}
	printf("%d\n", result);
	return (0);
}
