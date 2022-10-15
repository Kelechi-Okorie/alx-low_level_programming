#include <stdio.h>

/**
 * main - Prints single digits from 0 to 9
 *
 * Description: Prints all single digit numbers of base 10
 * starting from 0, followed by new line
 * Return: Always 0 (success)
 */
int main(void)
{
	int min_digit;
	int max_digit;

	min_digit = 48; /* 48 is acii for digit 0 */
	max_digit = 57; /* 57 is acii for digit 9 */

	while (min_digit <= max_digit)
	{
		putchar(min_digit);

		min_digit++;
	}

	putchar('\n');

	return (0);
}
