#include <stdio.h>

/**
 * first - prints first before the main function
 *
 * Return: Always void
 */
void  __attribute__((constructor)) first();

void first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

