#include <stdio.h>

/**
 * main - The entry point
 *
 * Description: Prints lowercase alphabets except q and e
 * Return: Alwasy 0 (success);
 */
int main(void)
{
	int alphabet;

	alphabet = 'a';

	/* while (alphabet <= 'z') */
	for (; alphabet <= 'z'; alphabet++)
	{
		if (alphabet == 'e' || alphabet == 'q')
			continue;

		putchar(alphabet);
		/* alphabet++; */
	}

	putchar('\n');

	return (0);
}
