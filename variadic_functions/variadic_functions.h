#ifndef VARIADIC_H
#define VARIADIC_H

int sum_them_all(const unsigned int, ...);
void print_numbers(const char *, const unsigned int, ...);
void print_strings(const char *, const unsigned int, ...);
void print_all(const char * const, ...);
typedef struct type
{
	char letter;
	void (*p)(va_list);
} type_t;
void print_c(va_list);
void print_i(va_list);
void print_f(va_list);
void print_s(va_list);

#endif
