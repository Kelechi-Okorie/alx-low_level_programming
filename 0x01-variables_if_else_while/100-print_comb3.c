#include <stdio.h>

/**
 * main - Prints combinations of two digits
 *
 * Description: Prints all possible different combinations
 * of two digits
 * Return: Always 0 (sucess)
 */
int main(void)
{
	int i;
	int j;

	for (i = 48; i <= 56; i++)
	{
		j = i + 1;

		for (; j <= 57; j++)
		{
			if (i == j)
				continue;

			putchar(i);
			putchar(j);
			if (i != 56)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
