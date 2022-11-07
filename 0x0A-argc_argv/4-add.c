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
	int j;
	int sum;

	sum = 0;

	if (argc < 2)
	{
		printf("%d\n", 0);
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] > '9' || argv[i][j] < '0')
			{
				printf("%s\n", "Error");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);

	return (0);
}
