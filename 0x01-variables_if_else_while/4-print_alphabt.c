#include <stdio.h>

/**
 * main - prints lowercase alphabets
 *
 * Description: prints the lowercase alphabets
 * except q and e
 * Return: always 0
 */
int main(void)
{
	char ch;

	ch = 'a';
	while (ch <= 'z')
	{
		if (ch == 'q' || ch == 'e')
		{
			ch++;
			continue;
		}
		putchar(ch);
		ch++;
	}

	putchar('\n');
	return (0);
}
