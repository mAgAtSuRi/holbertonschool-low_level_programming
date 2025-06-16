#include <stdio.h>

/**
 * main - entry point
 *
 * description - prints the size of different types
 *
 * return: always returns 0
 */
int main(void)
{
	char c;
	int i;
	long int li;
	long long int lli;
	float f;

	printf("Size of a char: %ld byte(s)", (unsigned long)sizeof(c));
	printf("Size of a char: %ld byte(s)", (unsigned long)sizeof(i));
	printf("Size of a char: %ld byte(s)", (unsigned long)sizeof(li));
	printf("Size of a char: %ld byte(s)", (unsigned long)sizeof(lli));
	printf("Size of a char: %ld byte(s)", (unsigned long)sizeof(f));

	return(0);
}
