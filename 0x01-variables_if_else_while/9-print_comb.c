#include <stdio.h>

/**
 * main - prints combinations of single-digit numbers
 *
 * Description: printsll all possible combinations
 * of single-digit numbers
 * Return: always 0
 */
int main(void)
{
	int i;

	i = '0';
	while (i <= '9')
	{
		putchar(i++);
		if (i <= '9')
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');
	return (0);
}
