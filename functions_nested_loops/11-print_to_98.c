#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - print all numbers to 98 starting from n
 * @n: starting number for counting
 */
void print_to_98(int n)
{
	int i;

	if (n > 98)
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d", i);
			if (i != 98)
			{
				printf(",");
				printf(" ");
			}
		}
	}
	else
	{
		for (i = n; i >= 98; i--)
		{
			printf("%d", i);
			if (i != 98)
			{
				printf(",");
				printf(" ");
			}
		}
	}
}
