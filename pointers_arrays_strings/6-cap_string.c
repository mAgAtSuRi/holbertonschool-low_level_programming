#include "main.h"

/**
 * *cap_string - capitalize all words
 * @str: string to capitalize
 *
 * Return: string capitalized
 */
char *cap_string(char *str)
{
	int i, j;
	char separator[] = ",;.!?\"(){}\t\n ";

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i == 0 && str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
		else if (str[i] >= 'a' && str[i] <= 'z')
		{
			for (j = 0; j <= 12; j++)
			{
				if (str[i - 1] == separator[j])
				{
					str[i] = str[i] - 32;
					break;
				}
			}
		}
	}
	return (str);
}
