#include "main.h"

/**
 * infinite_add - adds two numbers
 * @n1: first number
 * @n2: second number
 * @r: buffer
 * @size_r: buffer size
 *
 * Return: the result in char *
 */
char* infinite_add(char* n1, char* n2, char* r, int size_r)
{
	int i1 = 0, i2 = 0;
	int i;
	int rest = 0;

	while (n1[i1])
		i1++;
	while (n2[i2])
		i2++;
	if (size_r <= i1 + 1 || size_r <= i2 + 1)
		return ('0');
	for (i = i1; i >= 0; i--)
	{
		if ((n1[i] + '0') + (n2[i] + '0') >= 10)
			rest++;
		n1[i] = ((n1[i] + '0') + (n2[i] + '0')) % 10;
		n1[i - 1] = n1[i - 1] + '0' + 1;
	}
	return (n1);
}
