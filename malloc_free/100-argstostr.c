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
	char *str = "";
	int i, j = 0, len = 0, len_word;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		len_word = 0;
		while(av[i][len_word])
			len_word++;
		for (j = 0; j < len_word; j++)
			str[j + len] = av[i][j];
		str[len_word + len] = '\n';
		len_word += len;
	}
	return (str);
}
