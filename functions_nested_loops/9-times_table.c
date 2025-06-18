#include "main.h"

/**
 * times_table - prints the 9 times table
 */
void times_table(void)
{
	int i = 0;
	int j;
	int result;
	int result2;

	for (; i <= 9; i++)
	{
		if (i >= 1)
			_putchar('\n');
		for (j = 0; j <= 9; j++)
		{
			result = i * j;
			if (j == 9)
			{
				result2 = result % 10;
				result = result / 10;
				_putchar(result + '0');
				_putchar(result2 + '0');
			}
			else if (result >= 10)
			{
				result2 = result % 10;
				result = result / 10;
				_putchar(result + '0');
				_putchar(result2 + '0');
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar(result + '0');
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
		}
	}
}
