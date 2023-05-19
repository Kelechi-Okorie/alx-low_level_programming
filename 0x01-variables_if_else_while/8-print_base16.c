#include <stdio.h>

/**
 * main - prints numbers in base 16 in lowercase
 *
 * Description: prints all the numbers of base 16
 * in lowercase followed by a newline
 * Return: always 0
 */
int main(void)
{
	char ch;

	ch = '0';
	while (ch <= '9')
		putchar(ch++);

	ch = 'a';
	while (ch <= 'f')
		putchar(ch++);

	putchar('\n');
	return (0);
}
