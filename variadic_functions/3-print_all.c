#include "variadic_functions.h"


/**
 * print_c - print a character
 * @arg: character to print
 */
void print_c(va_list args)
{
	printf("%c", va_arg(args, int));
}

/**
 * print_i - print an integer
 * @arg: number to print
 */
void print_i(va_list args)
{
	printf("%d", va_arg(args, int));
}

/**
 * print_f - print a float
 * @arg: number to print
 */
void print_f(va_list args)
{
	printf("%f", va_arg(args, double));
}

/**
 * print_s - print a string
 * @arg: string to print
 */
void print_s(va_list args)
{
	char *s = va_arg(args, char *);
	if (s == NULL)
		printf("(nil)");
	printf("%s", s);
}

/**
 * print_all - print anything
 * @format: list of type of arguments
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0, j = 0;
	char *separator = "";

	type_t types[] = {
	{'c', print_c},
	{'i', print_i},
	{'f', print_f},
	{'s', print_s},
	{0, NULL}
	};

	va_start(args, format);


	while (format != NULL && format[i])
	{
		j = 0;
		while (types[j].letter != 0)
		{
			if (format[i] == types[j].letter)
			{
				printf("%s", separator);
				types[j].p(args);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	putchar('\n');
}
