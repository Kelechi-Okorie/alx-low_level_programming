#ifndef _CALH_H
#define _CALH_H

#include <stdlib.h>
#include <string.h>

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

int (*get_op_func(char *s))(int a, int b);

/**
 * struct op - Struc op
 *
 * @op: The operator
 * @f: The function association
 */
typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;

#endif /* _CALC_H */
