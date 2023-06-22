#include "3-calc.h"

#include <stdio.h>

/**
 * main - test the code
 * @argc: argument count
 * @argv: argument vector
 *
 * Description: program to test the code
 * Return: exit status
 */
int main(int argc, char *argv[])
{
	int a, b, c;
	char op;
	int (*f)(int a, int b);

	if (argc != 4)
	{
		printf("%s\n", "Error");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	f = get_op_func(argv[2]);

	if (!f)
	{
		printf("%s\n", "Error");
		exit(98);
	}

	op = *argv[2];

	if ((op == '/' || op == '%') && b == 0)
	{
		printf("%s\n", "Error");
		exit(100);
	}

	c = (*f)(a, b);

	printf("%d\n", c);

	return (0);
}
