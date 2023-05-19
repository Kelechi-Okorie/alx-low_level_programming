#include <stdio.h>

/**
 * main - prints single digit numbers of base 10
 *
 * Description: prints all single digit numbers
 * of base 10 starting from 0
 * Return: always 0
 */
int main(void)
{
	int i;

	i = '0';
	while (i <= '9')
		putchar(i++);

	putchar('\n');
	return (0);
}
