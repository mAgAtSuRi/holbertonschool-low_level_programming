#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H
#include <stddef.h>

int _putchar(char);
void print_name(char *name, void (*f)(char *));
void array_iterator(int *, size_t size, void (*action)(int));
int int_index(int *, int, int (*cmp)(int));


#endif
