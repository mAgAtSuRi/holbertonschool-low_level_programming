#include <stio.h>

/**
 * main - entry point
 *
 * Description - print numbers from 0 to 100 but
 * print Fizz for multiples of 3
 * print Buzz for multiples of 5
 * print FizzBuzz for multiples of both 3 and 5
 *
 * Return: always 0
 */
int main(void)
{
	int i;
	
	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%d", i);
	}
}
