#include "main.h"

/**
 * times_table - prints the 9 times table
 */
void times_table(void)
{
	int i = 0;
	int j;
	int result;

	for (; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			result = i * j;
			_putchar(result + '0');
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
		}
	}
}
