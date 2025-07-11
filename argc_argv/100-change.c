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
	int rest = 0, num_coin = 1, coin_max = 25, total_coin = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("0\n");
		return (0);
	}
	while (atoi(argv[1]) >= coin_max)
	{
		num_coin += 1;
		coin_max += 25;
	}
	total_coin += num_coin;
	rest = atoi(argv[1]) - coin_max;
	while (rest >= 10)
	{
		num_coin++;
		rest -= 10;
	}
	while (rest >= 5)
	{
		num_coin++;
		rest -= 5;
	}
	while (rest >= 2)
	{
		num_coin++;
		rest -= 2;
	}
	while (rest >= 1)
	{
		num_coin++;
		rest -= 1;
	}
	printf("%d", num_coin);
	return (0);
}
