#include "main.h"

/**
 * *rot13 - encodes a string in rot13
 * @str: string to encode
 *
 * Return: string encoded
 */
char *rot13(char *str)
{
	int i, j;
	char low[] = "abcdefghijklmnopqrstuvwxyz";
	char low_rot13[] = "nopqrstuvwxyzabcdefghijklm";
	char upp[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char upp_rot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 26; j++)
		{
			if (str[i] == low[j] || str[i] == upp[j])
			{
				str[i] = low_rot13[j];
				break;
			}
		}
	}
	return (str);
}
