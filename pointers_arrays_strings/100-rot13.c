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
	char alph[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char alph_rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (str[i] == alph[j])
			{
				str[i] = alph_rot13[j];
				break;
			}
		}
	}
	return (str);
}
