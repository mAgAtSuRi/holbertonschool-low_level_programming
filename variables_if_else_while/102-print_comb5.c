#include <stdio.h>

/**
 * main - entry point
 *
 * Description - print all combinations of two 2 digit numbers
 *
 * Return: always 0
 */
int main(void)
{
	int n1;
	int n2;
	int n3;
	int n4;

	for (n1 = 0; n1 <= 9; n1++)
	{
		for (n2 = 0; n2 <= 9; n2++)
		{

			for (n3 = 0; n3 <= 9; n3++)
			{
				for (n4 = 0; n4 <= 9; n4++)
				{
					if (n3 != n1 || n4 != n2)
					{	
						putchar(n1 + '0');
						putchar(n2 + '0');
						putchar(' ');
						putchar(n3 + '0');
						putchar(n4 + '0');
						if (n1 != 9 || n2 != 8 || n3 != 9 || n4 != 9)
						{
							putchar(',');
							putchar(' ');
						}
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
