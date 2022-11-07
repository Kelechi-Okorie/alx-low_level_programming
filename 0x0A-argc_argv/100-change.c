#include <stdio.h>
#include <stdlib.h>

/**
 * main - primts the minimum coins to make change
 * for an amount of money
 * @argc: number of arguments passed in
 * @argv: array of arguments passed in
 *
 * Return: int
 */
int main(int argc, char *argv[])
{
	int i;
	int cents;
	int coins[5] = {25, 10, 5, 2, 1};
	int num;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);
	num = 0;

	if (cents < 0)
	{
		printf("0\n");
		return (1);
	}

	for (i = 0; i < 5 && cents > 0; i++)
	{
		while (cents >= coins[i])
		{
			num++;
			cents -= coins[i];
		}
	}

	printf("%d\n", num);
	return (0);
}

