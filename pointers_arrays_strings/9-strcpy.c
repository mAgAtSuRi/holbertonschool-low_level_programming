#include "main.h"

/**
 * c*_strcpy - copies str from a pointer to another pointer
 * @dest: where the string is copied
 * @src: the string to copy
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int len, j;

	while (src[i] != '\0')
		i++;
	for (j = 0; j <= i; j++)
		dest[j] = src[j];
	return (dest);
}

#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char s1[98];
    char *ptr;

    ptr = _strcpy(s1, "First, solve the problem. Then, write the code\n");
    printf("%s", s1);
    printf("%s", ptr);
    return (0);
}
