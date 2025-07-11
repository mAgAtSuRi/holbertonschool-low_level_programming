#include "main.h"
#include <stdlib.h>


int number_word(char *str, int len)
{
	int i; int num = 0;

	for (i = 0; i < len; i++)
	{
		if (str[i] != ' ' && str[i + 1] == ' ')
			num++;
	}
	if (str[len - 1] != ' ')
		num++;
	return (num);
}

/**
 * strtow - split a string into words
 * @str: string to split
 *
 * Return: the string split
 */
char **strtow(char *str)
{
	int len = 0, i, j, num, num_letter = 0, pos = 0;
	char **ptr;
	int *p;

	while (str[len])
		len++;
	num = number_word(str, len);
	p = malloc(sizeof(int) * num);
	if (p == NULL)
		return (NULL);
	*ptr = malloc(sizeof(char *) * num);
	if (ptr == NULL)
		return (NULL);

	for (i = 1; i < len; i++)
	{
		if (str[0] != ' ')
		{
			p[0] = 0;
			pos++;
		}
		if (str[i - 1] == ' ' && str[i] != ' ')
		{
			p[pos] = i;
			pos++;
		} 
	}

	for (i = 0; i < num; i++)
	{
		j = p[i];
		num_letter = 0;
		while (str[j] != ' ' && str[j] != '\0')
		{
			num_letter++;
			j++;
		}
		ptr[i] = malloc(sizeof(char) * num_letter + 1);
		if (ptr[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(ptr[j]);
			free(ptr);
		}
		j = p[i];
		for (i = 0; i < num_letter; i++)
			ptr[i][j] = str[j + i];		
	}
	return (ptr);
}