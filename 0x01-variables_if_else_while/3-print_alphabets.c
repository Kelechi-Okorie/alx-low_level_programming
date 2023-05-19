#include <stdio.h>

/**
 * main - prints alphabet
 *
 * Description: prints the lowercase
 * and uppercase alphabets
 * Return: always 0
 */
int main(void)
{
	char ch;

	ch = 'a';
	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}

	ch = 'A';
	while (ch <= 'Z')
	{
		putchar(ch);
		ch++;
	}

	putchar('\n');
	return (0);
}

