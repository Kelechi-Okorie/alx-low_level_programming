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
			putchar(i);
			putchar(j);

			if (j < '9')
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');
	return (0);
}
