#include <stdio.h>

/**
 * main - prints different combinations of
 * two digits
 *
 * Description: prints all possible different
 * combinations of two digits
 * Return: always 0
 */
int main(void)
{
	int i;
	int j;

	for (i = '0'; i <= '8'; i++)
	{
		for (j = '1'; j <= '9'; j++)
		{
			if (i == j || i > j)
				continue;

			putchar(i);
			putchar(j);

			if (i == '8' && j == '9')
				continue;

			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');
	return (0);
}
