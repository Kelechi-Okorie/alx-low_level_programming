#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints to 98
 * @n: starting number
 *
 * Description: prints from n to 98
 * Return: always void
 */
void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
			printf("%d%s", i, (i == 98) ? "" : ", ");
	}
	else
	{
		for (i = n; i >= 98; i--)
			printf("%d%s", i, (i == 98) ? "" : ", ");
	}
	printf("\n");
}
