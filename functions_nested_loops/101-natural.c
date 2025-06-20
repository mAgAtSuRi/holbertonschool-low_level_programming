#include "main.h"
#include <stdio.h>

/**
 * main - entry point
 *
 * Description - prints the sum of all the multiples of 3 and 5 below 1024
 *
 * Return: always 0
 */
int main(void)
{
	int i;
	int sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0)
			sum += i;
		else if (i % 5 == 0)
			sum += i;
	}
	return (0);
}
