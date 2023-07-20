#ifndef CALC_H
#define CALC_H

/**
 * struct op - A struct op.
 * @op: The operator.
 * @f: The associated function.
 */
typedef struct op
{
	char *op;               /* The operator. */
	int (*f)(int a, int b); /* The associated function. */
} op_t;

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
int (*get_op_func(char *s))(int, int);

#endif
