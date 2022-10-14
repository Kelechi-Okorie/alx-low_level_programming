#include <stdio.h>

/**
 * main - The entry point
 *
 * Description: Prints lower and uppercase alphabets
 * Return: Always 0 (succwss)
 */
int main(void)
{
	char alphabet = 'a';

	while  (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++;
	}

	alphabet = 'A';

	while (alphabet <= 'Z')
	{
		putchar(alphabet);
		alphabet++;
	}

	putchar('\n');

	return (0);

}
