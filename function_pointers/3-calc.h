#ifndef CALC_H
#define CALC_H

/**
 * struct op - Structure of an operator and its function
 * @op: operator in string
 * @f: pointer to the function
*/
typedef struct op
{
char *op;
int (*f)(int a, int b);
} op_t;
int op_add(int, int);
int op_sub(int, int);
int op_mul(int, int);
int op_div(int, int);
int op_mod(int, int);
int (*get_op_func(char *))(int, int);

#endif
