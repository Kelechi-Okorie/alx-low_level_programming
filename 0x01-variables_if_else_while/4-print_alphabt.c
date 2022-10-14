#include <stdio.h>

/**
 * main - The entry point
 *
 * Description: Prints lowercase alphabets except q and e
 * Return: Alwasy 0 (success);
 */
int main(void)
{
	int alphabet = 'a';

	while (alphabet <= 'z')
	{
		if (alphabet == 'q' || alphabet == 'e')
			continue;

		putchar(alphabet);
		alphabet++;
	}

	putchar('\n');

	return (0);
}
