#include <stdio.h>

/**
 * main - prints combinations of two two-digit numbers
 *
 * Return: Always 0 (success);
 */
int main(void)
{
	int i;
	int j;
	int k;
	int l;

	i = 48; /* 48 is the ascii for 0 */

	for (; i <= 57; i++) /* 57 is acii for 9 */
	{
		j = i;
		for (; j <= 56; j++)
		{
			k = j;
			for (; k <= 57; k++)
			{
				l = k + 1;
				for (; l <= 57; l++)
				{
					putchar(i);
					putchar(j);
					putchar(' ');
					putchar(k);
					putchar(l);
					putchar(',');
					putchar(' ');

				}
			}
		}
	}

	putchar('\n');

	return (0);
}
