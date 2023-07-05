#include <stdio.h>

void first(void) __attribute__((constructor));

/**
 * first - function that runs before the main function
 *
 * Description: function taht runs before the main function
 * Return: void
 */
void first(void)
{
	printf("%s\n", "You're beat! and yet, you must allow,");
	printf("%s\n", "I bore my house upon my back!");
}
