#include <stdio.h>

/**
 * main - prints lowercase alphabet in reverse
 *
 * Description: prints lowercase alphabet in reverse
 * followed by a newline
 * Return: always 0
 */
int main(void)
{
	char ch;

	ch = 'z';
	while (ch >= 'a')
		putchar(ch--);

	putchar('\n');
	return (0);
}
