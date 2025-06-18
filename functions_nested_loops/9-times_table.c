#include "main.h"

/**
 * times_table - prints the 9 times table
 */
void times_table(void)
{
	int i = 0;
	int n;
	int result;

	for (; i <= 9; i++)
	{
		for (n = 0; n <= 9; n++)
		{
			result = i * j;
			_putchar(result + '0');
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
		}
	}
}
