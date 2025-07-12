#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: number of arguments
 * @argv: list of pointers arguments
 *
 * Return: 0 or 1 if error
 */
int main(int argc, char **argv)
{
	int i, rest, num_coin = 0;
	int list_coin[5] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (atoi(argv[1]) <= 0)
	{
		printf("0\n");
		return (0);
	}
	
	rest = atoi(argv[1]);
	for (i = 0; i < 5; i++)
	{
		while (rest >= list_coin[i])
		{
			rest -= list_coin[i];
			num_coin++;
		}
	}
	printf("%d\n", num_coin);
	return (0);
}
