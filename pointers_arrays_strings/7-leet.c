#include "main.h"

/**
 * *leet - encodes a string to 1337
 * @str: string to encode
 *
 * Return: the string encoded
 */
char *leet(char *str)
{
	int i, j;
	char low[] = {'a', 'e', 'o', 't', 'l', '\0'};
	char upp[] = {'A', 'E', 'O', 'T', 'L', '\0'};
	char code[] = {'4', '3', '0', '7', '1'};

	for (i = 0;  str[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (str[i] == low[j] || str[i] == upp[j])
			{
				str[i] = code[j];
				break;
			}
		}
	}
	return (str);
}
