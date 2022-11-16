#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints its own opcodes
 * @argc: number of arguments passed
 * @argv: arguments array
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i;
	char *str;
	int bytes;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	str = (char *)main;

	for (i = 0; i < bytes; i++)
	{
		if (i == bytes - 1)
		{
			printf("%02hhx\n", str[i]);
			break;
		}
		printf("%02hhx ", str[i]);
	}

	return (0);
}
