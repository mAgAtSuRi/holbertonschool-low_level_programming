#include "main.h"

/**
 * _atoi - convert string to int
 * @s: string to convert
 *
 * Return the string converted in integer
 */
int _atoi(char *s)
{
	int i = 0;
	int tmp = 0;
	int neg = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 48 && s[i] <= 57)
			tmp = (tmp + s[i]) * 10;
		else if (s[i] == 45)
			neg++;
	}
	if (tmp == 0)
		return (0);
	tmp = tmp / 10;
	if (neg % 2 != 0)
		tmp = -tmp;
	return (tmp);
}
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int nb;

    nb = _atoi("98");
    printf("%d\n", nb);
    nb = _atoi("-402");
    printf("%d\n", nb);
    nb = _atoi("          ------++++++-----+++++--98");
    printf("%d\n", nb);
    nb = _atoi("214748364");
    printf("%d\n", nb);
    nb = _atoi("0");
    printf("%d\n", nb);
    nb = _atoi("Suite 402");
    printf("%d\n", nb);
    nb = _atoi("         +      +    -    -98 Battery Street; San Francisco, CA 94111 - USA             ");
    printf("%d\n", nb);
    nb = _atoi("---++++ -++ Sui - te -   402 #cisfun :)");
    printf("%d\n", nb);
    return (0);
}
