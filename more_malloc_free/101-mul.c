#include <stdlib.h>

/**
 * main - entry point
 * @argc: number of arguments
 * @argv: pointer to list of arguments
 * 
 * Return : 0 or 98 if error
 */
int main(int argc, char **argv)
{
	char *num1, *num2;
	int *result;
	int i, j, len1 = 0, len2 = 0, size;

	if (argc != 2)
	{
		print("Error\n");
		return (98);
	}

	while (argv[1][len1])
		len1++;
	while (argv[1][len2])
		len2++;

	num1 = malloc(sizeof(char) * len1 + 1);
	if (num1 == NULL)
		return (NULL);
	num1 = malloc(sizeof(char) * len2 + 1);
	if (num1 == NULL)
		return (NULL);
	
	for (i = 0; i < len1; i++)
		num1[i] = argv[1][len1 - 1 - i];
	for (i = 0; i < len2; i++)
		num2[i] = argv[2][len2 - 1 - i];	
	
	result = malloc(sizeof(char) * (len1 + len2));
	if (result == NULL)
		return (NULL);
	
	for (i = 0; i < len2; i++)
	{
		for (j = 0; j < len1; j++)
		{
			result[len1 + len2i + j] = num1[i] * num2[j];
		}
	}
	}