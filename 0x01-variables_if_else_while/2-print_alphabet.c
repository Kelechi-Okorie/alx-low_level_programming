#include <stdio.h>

/**
 * main - prints lowercase alphabet
 *
 * Description: prints the alphabet in lowercase
 * followed by a new line
 * Return: always 0
 */
int main(void)
{
	int i;

	i = 97;
	while (i <= 122)
	{
		putchar(i);
		++i;
	}

	putchar('\n');

	return (0);
}
