#include <stdio.h>

/**
 * main - prints combinations of two digits
 *
 * Description: prints all possible combinations
 * of two two-digit numbers
 * Return: always 0
 */
int main(void)
{
	int i;
	int j;
	int k;
	int l;
	int m;

	m = '9';
	for (i = '0'; i <= m; i++)
	{
		for (j = '0'; j <= m; j++)
		{
			for (k = '0'; k <= m; k++)
			{
				for (l = '0'; l <= m; l++)
				{
					putchar(i);
					putchar(j);
					putchar(' ');
					putchar(k);
					putchar(l);
					if (i = m && j == m - 1 && k == m && l == m)
						continue;
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');
	return (0);
}
