#include <stdio.h>

/**
 * main - Prints lowercase alphabet in reverse
 *
 * Description: Prints the lowercase alphabets in
 * reverse, followed by a new line
 * Return: Always 0 (success)
 */
int main(void)
{
	int alphabet;

	alphabet = 'z';

	while (alphabet >= 'a')
	{
		putchar(alphabet);

		alphabet--;
	}

	putchar('\n');

	return (0);
}
