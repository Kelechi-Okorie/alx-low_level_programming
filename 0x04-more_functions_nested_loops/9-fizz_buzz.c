#include <stdio.h>

/**
 * main - prints fizz buzz
 *
 * Description: prints fizz buzz
 * Return: always 0.
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
			printf("%s ", "FizzBuzz");
		else if (i % 3 == 0)
			printf("%s ", "Fizz");
		else if (i % 5 == 0)
			printf("%s%s", "Buzz", i == 100 ? "" : " ");
		else
			printf("%d ", i);
	}
	printf("\n");

	return (0);
}
