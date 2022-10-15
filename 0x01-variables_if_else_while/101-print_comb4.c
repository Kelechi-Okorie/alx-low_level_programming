#include <stdio.h>

/**
 * main - Prints different combinations of digits
 * Description: Prints all possible different combinations of three digits
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;
	int j;
	int k;

	for (i = 48; i <= 55; i++)
	{
		j = i + 1;
		for (; j <= 56; j++)
		{
			k = j + 1;

			for (; k <= 57; k++)
			{
				putchar(i);
				putchar(j);
				putchar(k);
				if (i != 55)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');

	return (0);

