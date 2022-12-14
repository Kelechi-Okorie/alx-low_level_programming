#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - The entry point
 *
 * Description: Prints the last digit
 * of n with result
 * of comparing this last digit
 * with 5, 0, and 6
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;
	int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	last_digit = n % 10;

	printf("%s%d%s%d", "Last digit of ", n, " is ", last_digit);

	if (last_digit > 5)
		printf(" and is greater than 5\n");
	else if (last_digit == 0)
		printf(" and is 0\n");
	else if ((last_digit < 6) && (last_digit != 0))
		printf(" and is less than 6 and not 0\n");

	return (0);
}
