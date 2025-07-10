#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all arguments of the program
 * @ac: number of args to concatenate
 * @av: pointer of an array containing the arguments
 *
 * Return: a pointer to thez concanated string
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int i, j = 0, len_str = 0, len_word, len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		len_word = 0;
		while (av[i][len_word])
			len_word++;
		len_str += len_word + 1;
	}
	str = malloc(sizeof(char) * (len_str + 1));
	if (str == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		len_word = 0;
		while (av[i][len_word])
			len_word++;
		for (j = 0; j < len_word; j++)
			str[j + len] = av[i][j];	
		str[len_word + len] = '\n';
		len += len_word + 1;
	}
	str[len] = '\0';
	return (str);
}
