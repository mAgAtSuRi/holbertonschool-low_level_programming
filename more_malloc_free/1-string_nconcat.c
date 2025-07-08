#include <stdlib.h>

/**
 * string_nconcat - concatenates 2 strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes to use from s2
 *
 * Return: a pointer to concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int len1 = 0, len2 = 0, i, j;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	while (s1[len1])
		len1++;
	while (s2[len2])
		len2++;

	if (n < len2)
		s = malloc(sizeof(char) * (len1 + n + 1));
	else
		s = malloc(sizeof(char) * (len1 + len2 + 1));
	if (s == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		s[i] = s1[i];
	if (n < len2)
	{
		for (j = 0; j < n; j++)
			s[len1 + j] = s2[j];
		s[len1 + n] = '\0';
	}
	else
	{
		for (j = 0; j < len2; j++)
			s[len1 + j] = s2[j];
		s[len1 + len2] = '\0';
	}
	return (s);
}
