#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies 2 numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Description: multiplies 2 numbers
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int n;

	if (argc != 3)
	{
		printf("%s\n", "Error");
		return (1);
	}

	n = atoi(argv[1]) * atoi(argv[2]);

	printf("%d\n", n);
	return (0);
}
