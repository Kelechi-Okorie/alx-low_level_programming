#include "3-calc.h"

/**
 * get_op_func - selects appropriate operation function
 * @s: the string to compare
 *
 * Description: selects the appropriate op function
 * Return: a function pointer that does the operation
 */
int (*get_op_func(char *s))(int a, int b)
{
	int i;

	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	i = 0;

	while (ops[i].op)
	{
		if (strcmp(s, ops[i].op) == 0)
			return (ops[i].f);
		i++;
	}

	return (NULL);
}
