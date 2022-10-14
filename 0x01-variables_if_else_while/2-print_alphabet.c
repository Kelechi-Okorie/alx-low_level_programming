#include <stdio.h>

/**
 * main - The entry point
 *
 * Description: Prints all the alphabet followd by a new line
 * Return: Always 0 (success)
 */
int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		putchar(alphabet);

		alphabet++;
	}

	putchar('\n');

	return (0);
}
