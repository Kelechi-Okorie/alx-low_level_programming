#include <stdio.h>

/**
 * main - Prints base 16 numbers
 *
 * Description: Prints all the numbers of base 16
 * in lowercase, followed by a new line
 * Return: Always 0 (success)
 */
int main(void)
{
	int number;
	int letter;

	number = 48; /* 48 is the acii for 0 */
	letter = 'a';

	while (number <= 57) /* 57 is the ascii for 9 */
	{
		putchar(number);
		number++;
	}

	while (letter <= 'f')
	{
		putchar(letter);
		letter++;
	}

	putchar('\n');

	return (0);
}
