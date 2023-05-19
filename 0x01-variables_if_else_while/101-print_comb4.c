#include <stdio.h>

/**
 * main - prints different combinations of 3 digits
 *
 * Description: prints all possible different
 * combinations of three digits
 * Retun: always 0
 */
int main(void)
{
	int i;
	int j;
	int k;

	for (i = '0'; i <= '7'; i++)
	{
		for (j = '1'; j <= '8'; j++)
		{
			for (k = '2'; k <= '9'; k++)
			{
				if (i >= j || j >= k)
					continue;
				putchar(i);
				putchar(j);
				putchar(k);

				if (i == '7' && j == '8' && k == '9')
					continue;

				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');
	return (0);
}
