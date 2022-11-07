#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers
 * @argc: number of arguments passed in
 * @argv: array of arguments passed in
 *
 * Return: int
 */
int main(int argc, char *argv[])
{
	int i;
	int c;

	i = 0;

	if (argc < 2)
	{
		printf("%d\n", 0);
		return (0);
	}

	for (c = 1; c < argc; c++)
	{
		if (atoi(argv[c]) == 0)
		{
			printf("%s\n", "Error");
			return (1);
		}
		i += atoi(argv[c]);
	}

	printf("%d\n", i);

	return (0);
}
