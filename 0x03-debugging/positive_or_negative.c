#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * positive_or_negative - Tests the sign of a number
 * @i: The integer to test the sign of
 *
 * Description: prints where n is positive
 * or negative
 * Return: always 0 (success)
 */

int positive_or_negative(int i)
{

	if (i > 0)
		printf("%d%s\n", i, " is positive");
	else if (i == 0)
		printf("%d%s\n", i, " is zero");
	else
		printf("%d%s\n", i, " is negative");

	return (0);
}
