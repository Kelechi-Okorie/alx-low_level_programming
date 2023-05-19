#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 *
 * Description - gets the last digit of a number
 * Return: always 0
 */
int main(void)
{
	int n;
	int l;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	l = n % 10;
	printf("Last digit of %d is %d ", n, l);
	if (l > 5)
		printf("%s\n", "and is greater than 5");
	else if (l == 0)
		printf("%s\n", "and is 0");
	else if (l < 6 && l != 0)
		printf("%s\n", "and is less than 6 and not 0");

	return (0);
}
