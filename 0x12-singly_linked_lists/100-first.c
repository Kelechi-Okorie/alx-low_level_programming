#include <stdio.h>

/**
 * print_first - prints first before the main function
 *
 * Return: Always void
 */
void print_first(void) __attribute__((constructor));

void print_first(void)
{
	printf("you're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

