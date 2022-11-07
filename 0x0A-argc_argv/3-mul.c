#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: number of parameters passed in
 * @argv: array of parameters passed in
 *
 * Return: result of multiplying parameters passed in
 */
int main(__attribute__ ((unused)) int argc, char *argv[])
{
	int i;

	if (argv[1] == NULL || argv[2] == NULL)
	{
		printf("%s\n", "Error");
		return (1);
	}

	i = atoi(argv[1]) * atoi(argv[2]);

	printf("%d\n", i);

	return (0);
}
