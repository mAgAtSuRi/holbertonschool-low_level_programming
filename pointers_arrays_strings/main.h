#ifndef MAIN_H
#define MAIN_H

int _putchar(char);
void reset_to_98(int *);
void swap_int(int *a, int *b);
int _strlen(char *s);
void _puts(char *str);
void print_rev(char *);
void rev_string(char *);
void puts2(char *);
void puts_half(char *str);
void print_array(int *, int);
char *_strcpy(char *, char *);
int _atoi(char *s);

char *_strcat(char *, char *);
char *_strncat(char *, char *, int);
char *_strncpy(char *, char*, int);
int _strcmp(char *, char *);
void reverse_array(int *a, int n);
char *string_toupper(char *);
char *cap_string(char *);
char *leet(char *);
char *rot13(char *);
void print_number(int n);
char *infinite_add(char *, char*, char *, int);

char *_memset(char *, char, unsigned int);
char *_memcpy(char *, char *, unsigned int);
char *_strchr(char *, char);
int _strspn(char *, char *);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *, char *);
void print_chessboard(char (*a)[]);
void print_diagsums(int *, int);

#endif
