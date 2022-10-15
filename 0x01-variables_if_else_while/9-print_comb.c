#include <stdio.h>

/**
 * main - Prints single-digit numbers
 *
 * Description: Prints all possible combinations
 * single-digit numbers
 * Return: Always 0 (success)
 */
int main(void)
{
	char number;

	number = 48;

	while (number <= 57)
	{
		putchar(number);
		if (number != 57)
		{
			putchar(',');
			putchar(' ');
		}

		number++;
	}

	putchar('\n');

	return (0);
}
