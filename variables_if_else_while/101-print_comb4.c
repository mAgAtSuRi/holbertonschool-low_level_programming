#include <stdio.h>

/**
 * main - entry point
 *
 * Description - print all combinations of 3 digits
 *
 * Return: always 0
 */
int main(void)
{
	int x;
	int y;
	int z;

	for (x = 0 ; x <= 9 ; x++)
	{
		for (y = x + 1; y <= 9 ; y++)
		{
			for (z = y + 1; z <= 9; z++)
			{
				putchar(x + '0');
				putchar(y + '0');
				putchar(z + '0');
				if (x != 7 || y != 8 || z != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
