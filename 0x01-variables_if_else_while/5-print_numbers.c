#include <stdio.h>

/**
 * main - Prints numbers
 *
 * Description: Prints all single digit numbers of base 10
 * starting from 0, followed by a new ilne
 * Return: Always 0 (success)
 */
int main(void)
{
	int digit;

	digit = 0;

	while (digit < 10)
	{
		printf("%i", digit);
		digit++;
	}

	printf("\n");

	return (0);
}
