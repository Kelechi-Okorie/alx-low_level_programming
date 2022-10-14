#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Main entry point
 *
 * Description: prints whether n
 * is positive or negative
 * Return: always 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%d%s\n", n, ": is positive");
	else if (n == 0)
		printf("%d%s\n", n, ": is zero");
	else
		printf("%d%s\n", n, ": is negative");

	return (0);
}
