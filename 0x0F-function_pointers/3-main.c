#include "3-calc.h"

/**
 * main - program that performs simple arithmetic operations
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int a;
	int b;
	int (*func)(int, int);
	char o;
	int result;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	func = get_op_func(argv[2]);

	if (!func)
	{
		printf("Error\n");
		exit(99);
	}

	o = *argv[2];

	if ((o == '/' || o == '%') && b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	result = func(a, b);

	printf("%d\n", result);

	return (0);
}
