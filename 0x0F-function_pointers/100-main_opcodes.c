#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints opcodes
 * @argc: arguments count
 * @argv: arguments vector
 *
 * Description: prints it's own opcode
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int n, i;
	char *str;

	if (argc != 2)
	{
		printf("%s\n", "Error");
		exit(1);
	}

	n = atoi(argv[1]);

	if (n < 0)
	{
		printf("%s\n", "Error");
		exit(2);
	}

	str = (char *)main;

	for (i = 0; i < n; i++)
	{
		printf("%02hhx ", str[i]);
	}

	printf("\n");

	return (0);
}
